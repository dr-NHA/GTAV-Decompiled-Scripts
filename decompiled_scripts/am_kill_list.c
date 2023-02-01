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
	struct<617> Local_93 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_95[4] = { 0, 0, 0, 0 };
	struct<18> Local_96[32];
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	float fLocal_103 = 0f;
	var uLocal_104[4] = { 0, 0, 0, 0 };
	struct<8> Local_105[24];
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109[4] = { 0, 0, 0, 0 };
	int iLocal_110[4] = { 0, 0, 0, 0 };
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	struct<42> Local_114[32];
	struct<104> Local_115 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = -1;
	var uLocal_122 = -1;
	var uLocal_123 = -1;
	var uLocal_124 = -1;
	var uLocal_125 = -1;
	var uLocal_126 = -1;
	var uLocal_127 = 0;
	var uLocal_128 = 32;
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
	var uLocal_153 = 0;
	var uLocal_154 = 0;
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
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
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
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
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
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	var uLocal_555[4] = { 0, 0, 0, 0 };
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560 = 0;
	struct<2> Local_561[10];
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
	struct<2> Local_572[5];
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	int iLocal_577 = 0;
	struct<3> Local_578 = { 0, 0, 0 } ;
	int iLocal_579 = 0;
	var uLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_585 = 0;
	int iLocal_586[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_587 = 0;
	var uLocal_588[4] = { 0, 0, 0, 0 };
	var uLocal_589[4] = { 0, 0, 0, 0 };
	struct<21> Local_590 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_103 = -100f;
	iLocal_553 = -1;
	iLocal_554 = -1;
	iLocal_581 = -1;
	if (unk_0x76CD105BCAC6EB9F() && func_873(unk_0x259BE71D8A81D4FA(), 0, 1))
	{
		func_861(ScriptParam_590);
	}
	else
	{
		func_815();
	}
	while (true)
	{
		func_814();
		if (func_810())
		{
			func_815();
		}
		else if (func_807(19))
		{
			func_815();
		}
		if (func_806())
		{
			func_815();
		}
		func_781();
		switch (func_780(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if ((func_779() == 1 && Local_93.f_1 != -1) && Local_93.f_2 != -1)
				{
					func_777();
					func_773(129, Local_93.f_1, Local_93.f_2, 0);
					if (Global_2793046.f_5149 == -1)
					{
						if (!func_772())
						{
							Global_2793046.f_5149 = 0;
						}
						else
						{
							Global_2793046.f_5149 = 1;
						}
					}
					func_771(Local_93.f_30[0 /*3*/]);
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/] = 1;
				}
				else if (func_779() == 4)
				{
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_779() == 1)
				{
					func_766();
					func_765();
					func_747();
					func_432();
					func_165();
					func_164();
					func_163();
				}
				else if (func_779() == 4)
				{
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_162(&(Local_93.f_320));
				if (func_161(&(Local_93.f_320)))
				{
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/] = 4;
			
			case 4:
				func_815();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_779())
			{
				case 0:
					if (func_146())
					{
						if (func_141())
						{
							func_137(func_139(129, Local_93.f_1, Local_93.f_2, 0));
							Local_93.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_93.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	if ((BitTest(Local_93.f_3, 0) && BitTest(Local_93.f_3, 1)) && BitTest(Local_93.f_3, 2))
	{
		if (!BitTest(Local_93.f_3, 11))
		{
			return 0;
		}
	}
	else if (BitTest(Local_93.f_3, 6))
	{
		if (!BitTest(Local_93.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_93.f_241 > 0)
	{
		if (Local_93.f_0 != 4)
		{
			if (func_23())
			{
				if (Local_93.f_241 == 3)
				{
					if (func_21())
					{
						if (BitTest(Local_93.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_93.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_93.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_93.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0x95C7A22DBE7AEF4C())
				{
					if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
					{
						if (!func_16(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1)), 0))
						{
							if (Local_96[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((BitTest(Local_93.f_3, 0) && BitTest(Local_93.f_3, 1)) && BitTest(Local_93.f_3, 2)) && !BitTest(Local_93.f_3, 6)) && !BitTest(Local_93.f_3, 14))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 15);
				}
				func_7();
			}
			else if (Local_93.f_241 < 3)
			{
				if (func_3())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 16);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar0]))
		{
			if (!func_4(unk_0xE38610F405049F71(Local_93.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, iParam7);
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
						if (((!unk_0x4FAFF4BCB7633475(iVar2) && iVar3 != func_5()) && func_873(iVar3, 1, 1)) || iParam8)
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

int func_5()
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_7()
{
	if (Local_93.f_241 != 3)
	{
		func_9();
		func_8(&(Local_93.f_324), 0, 0);
		Local_93.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574757.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)
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

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		unk_0x7C59282918D59E1B(&(Global_1574757.f_12));
		func_13();
		unk_0xD4C961FBE468D19D();
	}
}

void func_13()
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

int func_14()
{
	if (!func_15())
	{
		return 0;
	}
	unk_0x32A590914F10401C(&(Global_1574757.f_12));
	func_13();
	return unk_0x96DEE7666C9409E5();
}

int func_15()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_17(-1, 0) == 8;
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

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1574918;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_93.f_328)))
	{
		func_20(&(Local_93.f_328), 0, 0);
	}
	else if (func_19(&(Local_93.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iVar0]))
		{
			if (Local_93.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar0]))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar1]))
		{
			if (!func_31(Local_93.f_48[bVar1]))
			{
				switch (Local_93.f_85[bVar1])
				{
					case 0:
						if (!unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar1]), 0))
						{
							Local_93.f_85[bVar1] = 1;
						}
						else if (unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar1]), 0) && func_30(bVar1))
						{
							Local_93.f_85[bVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_93.f_241 == 1)
						{
							if (!func_23())
							{
								if (unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar1]), 0))
								{
									iVar4 = unk_0x6EF03BE64E058E2F(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_93.f_85[bVar1] = 2;
									}
									else if (unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(iVar4)))
									{
										if ((bVar1 % 4) == 0)
										{
											iVar0 = (bVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_93.f_110[iVar0] == -1 || !func_28(bVar1))
												{
													bVar2 = func_27();
													if (bVar2 != func_5())
													{
														iVar3 = unk_0x56E414973C2A8C0E(bVar2);
														if (!unk_0x4FAFF4BCB7633475(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_93.f_110[iVar0] = bVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_93.f_85[bVar1] = 2;
								}
							}
							else
							{
								Local_93.f_85[bVar1] = 3;
							}
						}
						else
						{
							Local_93.f_85[bVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_93.f_241 == 1)
						{
							if (func_23())
							{
								Local_93.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_93.f_3, 6))
							{
								Local_93.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_93.f_464, bVar1))
							{
								Local_93.f_85[bVar1] = 1;
								unk_0x8744D2E3FC95740E(&(Local_93.f_464), bVar1);
							}
						}
						else
						{
							Local_93.f_85[bVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0xCA038E64C65D1F9D(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar1])))
						{
							func_25(&(Local_93.f_48[bVar1]));
							Local_93.f_85[bVar1] = 4;
						}
						break;
					}
				}
		}
		bVar1++;
	}
}

void func_25(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

float func_26(int iParam0, int iParam1, int iParam2)
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

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (iVar0 == func_5())
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
			{
				if (Local_96[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_96[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_93.f_110[iVar0] != -1)
			{
				iVar3 = Local_93.f_110[iVar0];
				bVar1 = unk_0xB23E0F9B63D009A8(iVar3);
				if (unk_0x762604C40829DB72(bVar1))
				{
					if (func_873(bVar1, 1, 1))
					{
						if (unk_0xCCD470854FB0E643(bVar1))
						{
							iVar2 = unk_0x857CA6FCE5E9C84F(bVar1);
							iVar3 = iVar2;
							if (Local_96[iVar3 /*18*/].f_17 != 1)
							{
								return 0;
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
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(var uParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (Local_96[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_96[iVar0 /*18*/].f_17 == 1)
				{
					bVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
					iVar2 = unk_0x56E414973C2A8C0E(bVar1);
					if (!unk_0x4FAFF4BCB7633475(iVar2))
					{
						if (func_26(uParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0xC35A3A4C05A4831B(Local_93.f_48[iParam0]), 0);
	if (!unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_93.f_463 > 0)
	{
		if (Local_93.f_28 != Local_93.f_463)
		{
			Local_93.f_28 = Local_93.f_463;
		}
	}
	switch (Local_93.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_93.f_28)
			{
				if (Local_93.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (BitTest(Local_93.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (BitTest(Local_93.f_3, 4))
			{
				Local_93.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_93.f_241 = 1;
			}
			else if (BitTest(Local_93.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_93.f_241 = 1;
			}
			if (!func_772())
			{
				if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[0]))
				{
					if (!func_109(Local_93.f_7[0]))
					{
						Var2.f_2 = 1105683428;
						func_107(Var2, func_108(unk_0xE38610F405049F71(Local_93.f_7[0]), 1, 0));
						Local_93.f_241 = 2;
					}
				}
			}
			if (Local_93.f_241 == 0)
			{
				if (!func_22(&(Local_93.f_330)))
				{
					if (!func_22(&(Local_93.f_326)))
					{
						func_20(&(Local_93.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_93.f_326)))
				{
					func_106(&(Local_93.f_330));
				}
				else if (func_19(&(Local_93.f_330), func_105(), 0))
				{
					Var2.f_2 = 1105683428;
					func_107(Var2, func_104(1));
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 12);
					func_7();
				}
				if (BitTest(Local_93.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_111();
			if (BitTest(Local_93.f_3, 6))
			{
				Local_93.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!BitTest(Local_93.f_3, 19))
	{
		return;
	}
	if (!BitTest(Local_93.f_3, 6))
	{
		if (!func_22(&(Local_93.f_332)))
		{
			func_20(&(Local_93.f_332), 0, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 7);
		}
		else if (func_19(&(Local_93.f_332), func_34(), 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_772())
	{
		return Global_262145.f_11584;
	}
	return Global_262145.f_11561;
}

void func_35()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_93.f_278 > 0)
	{
		if (Local_93.f_279 >= Local_93.f_278)
		{
			if (Local_93.f_254 >= Local_93.f_255)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), false);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), true);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_93.f_278 > 0)
		{
			if (Local_93.f_279 >= Local_93.f_278)
			{
				if (Local_93.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_93.f_256[0]);
				}
				if (Local_93.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_93.f_256[1]);
				}
				if (Local_93.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_93.f_256[2]);
				}
				if (Local_93.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_93.f_256[3]);
				}
				if (iVar5 >= Local_93.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iVar4]))
						{
							if (!func_31(Local_93.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), false);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), true);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iVar4]))
					{
						if (!func_31(Local_93.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_93.f_347)))
					{
						func_20(&(Local_93.f_347), 0, 0);
					}
					else if (func_19(&(Local_93.f_347), 3000, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), false);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), true);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!BitTest(Local_93.f_3, 0) || !BitTest(Local_93.f_3, 1))
	{
		if (Local_93.f_249 >= func_103())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), false);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), true);
		}
		bVar0 = false;
		while (bVar0 < Local_93.f_242)
		{
			if (unk_0x2FC2FDC413532977(Local_93.f_73[bVar0]))
			{
				if (func_102(bVar0))
				{
					if (!BitTest(Local_93.f_245, bVar0))
					{
						if ((Local_93.f_27 != joaat("hydra") && !func_4(unk_0xE38610F405049F71(Local_93.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_93.f_27 == joaat("hydra"))
						{
							unk_0x8744D2E3FC95740E(&(Local_93.f_3), false);
							if (func_22(&(Local_572[bVar0 /*2*/])))
							{
								func_106(&(Local_572[bVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0xE38610F405049F71(Local_93.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bVar0])) == joaat("savage"))
						{
							if (BitTest(Local_93.f_3, 0))
							{
								unk_0x8744D2E3FC95740E(&(Local_93.f_3), false);
							}
							if (!BitTest(Local_93.f_3, 18))
							{
								func_101(func_104(1), bVar0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 18);
							}
						}
						else if (func_100(bVar0) || !func_772())
						{
							if (BitTest(Local_93.f_3, 0))
							{
								unk_0x8744D2E3FC95740E(&(Local_93.f_3), false);
							}
							if (!BitTest(Local_93.f_303, bVar0))
							{
								func_99(func_104(1), bVar0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_303), bVar0);
							}
						}
						else
						{
							func_25(&(Local_93.f_73[bVar0]));
							if (!BitTest(Local_93.f_253, bVar0))
							{
								Local_93.f_251 = (Local_93.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_93.f_252 > 0)
									{
										Local_93.f_302++;
										func_97(bVar0, func_104(1));
									}
								}
								unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_253), bVar0);
							}
							func_106(&(Local_572[bVar0 /*2*/]));
						}
					}
				}
				else if (func_96(bVar0))
				{
					if (!BitTest(Local_93.f_253, bVar0))
					{
						Local_93.f_251 = (Local_93.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_93.f_252 > 0)
							{
								Local_93.f_302++;
								func_97(bVar0, func_104(1));
							}
						}
						if (Local_93.f_27 == joaat("hydra"))
						{
							Local_93.f_254++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_253), bVar0);
					}
					if (func_22(&(Local_93.f_336[bVar0 /*2*/])))
					{
						func_106(&(Local_93.f_336[bVar0 /*2*/]));
					}
					func_25(&(Local_93.f_73[bVar0]));
				}
				else
				{
					if (BitTest(Local_93.f_3, 0))
					{
						unk_0x8744D2E3FC95740E(&(Local_93.f_3), false);
					}
					if (!BitTest(Local_93.f_271, bVar0))
					{
						if (!func_22(&(Local_93.f_336[bVar0 /*2*/])))
						{
							func_20(&(Local_93.f_336[bVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_93.f_336[bVar0 /*2*/]), 5000, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_271), bVar0);
						}
						else if (func_19(&(Local_93.f_336[bVar0 /*2*/]), 3000, 0))
						{
							if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bVar0])) == joaat("savage"))
							{
								if (!BitTest(Local_93.f_3, 18))
								{
									func_101(func_104(1), bVar0);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 18);
								}
							}
							else if (func_100(bVar0) || !func_772())
							{
								if (!BitTest(Local_93.f_303, bVar0))
								{
									func_99(func_104(1), bVar0);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_303), bVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_93.f_116)
			{
				if (unk_0x2FC2FDC413532977(Local_93.f_48[(bVar0 * 4 + iVar1)]))
				{
					bVar6 = (bVar0 * 4 + iVar1);
					if (!func_31(Local_93.f_48[(bVar0 * 4 + iVar1)]))
					{
						if (unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bVar0 * 4 + iVar1)]), 0))
						{
							if (!func_94((bVar0 * 4 + iVar1)))
							{
								unk_0x8744D2E3FC95740E(&(Local_93.f_3), false);
							}
							else if (func_93(bVar6))
							{
								if (!func_19(&(Local_93.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0xA23AABF378361F85(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_105[(bVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_93.f_48[(bVar0 * 4 + iVar1)]));
								if (BitTest(Local_93.f_272[func_91(bVar6)], func_90(bVar6)))
								{
									if (Local_93.f_85[(bVar0 * 4 + iVar1)] > 0)
									{
										func_89((bVar0 * 4 + iVar1), func_104(1));
										Local_93.f_254++;
									}
								}
								Local_93.f_85[(bVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_93.f_364[bVar6 /*2*/])))
								{
									func_106(&(Local_93.f_364[bVar6 /*2*/]));
								}
								if (BitTest(Local_93.f_275[func_91(bVar6)], func_90(bVar6)))
								{
									unk_0x8744D2E3FC95740E(&(Local_93.f_275[func_91(bVar6)]), func_90(bVar6));
								}
							}
							else
							{
								if (!BitTest(Local_93.f_272[func_91(bVar6)], func_90(bVar6)))
								{
									if (!func_22(&(Local_93.f_364[bVar6 /*2*/])))
									{
										func_20(&(Local_93.f_364[bVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_93.f_364[bVar6 /*2*/]), 7000, 0))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_272[func_91(bVar6)]), func_90(bVar6));
										func_106(&(Local_93.f_364[bVar6 /*2*/]));
									}
								}
								if (!BitTest(Local_93.f_275[func_91(bVar6)], func_90(bVar6)))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_275[func_91(bVar6)]), func_90(bVar6));
								}
							}
						}
					}
					else if (BitTest(Local_93.f_272[func_91(bVar6)], func_90(bVar6)) || Local_93.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_93.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_93.f_48[(bVar0 * 4 + iVar1)]));
						if (BitTest(Local_93.f_272[func_91(bVar6)], func_90(bVar6)))
						{
							if (Local_93.f_85[(bVar0 * 4 + iVar1)] > 0)
							{
								Local_93.f_254++;
								func_89((bVar0 * 4 + iVar1), func_104(1));
							}
						}
						Local_93.f_85[(bVar0 * 4 + iVar1)] = 0;
						if (BitTest(Local_93.f_275[func_91(bVar6)], func_90(bVar6)))
						{
							unk_0x8744D2E3FC95740E(&(Local_93.f_275[func_91(bVar6)]), func_90(bVar6));
						}
					}
					else
					{
						if (!BitTest(Local_93.f_272[func_91(bVar6)], func_90(bVar6)))
						{
							if (!func_22(&(Local_93.f_364[bVar6 /*2*/])))
							{
								func_20(&(Local_93.f_364[bVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_93.f_364[bVar6 /*2*/]), 7000, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_272[func_91(bVar6)]), func_90(bVar6));
								func_106(&(Local_93.f_364[bVar6 /*2*/]));
							}
						}
						if (!BitTest(Local_93.f_275[func_91(bVar6)], func_90(bVar6)))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_275[func_91(bVar6)]), func_90(bVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_93.f_249 < func_103())
			{
				if (func_73(bVar0))
				{
				}
				unk_0x8744D2E3FC95740E(&(Local_93.f_3), false);
			}
			bVar0++;
		}
	}
	if (!BitTest(Local_93.f_3, 2))
	{
		if (Local_93.f_247 >= Global_262145.f_10674)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_93.f_243)
		{
			if (unk_0x2FC2FDC413532977(Local_93.f_48[(20 + iVar1)]))
			{
				bVar7 = (20 + iVar1);
				if (!unk_0x1C2F771CDC87A3A5(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iVar1)]), 0))
				{
					unk_0x8744D2E3FC95740E(&(Local_93.f_3), 2);
				}
				else if (BitTest(Local_93.f_272[func_91(bVar7)], func_90(bVar7)))
				{
					if (!func_19(&(Local_93.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_93.f_364[bVar7 /*2*/])))
					{
						func_106(&(Local_93.f_364[bVar7 /*2*/]));
					}
					func_25(&(Local_93.f_48[(20 + iVar1)]));
					if (Local_93.f_85[(20 + iVar1)] > 0)
					{
						Local_93.f_254++;
						if (func_98() > 1)
						{
							if (Local_93.f_317 > 0)
							{
								Local_93.f_316++;
							}
						}
						func_89((20 + iVar1), func_104(1));
					}
					Local_93.f_85[(20 + iVar1)] = 0;
					if (BitTest(Local_93.f_275[func_91(bVar7)], func_90(bVar7)))
					{
						unk_0x8744D2E3FC95740E(&(Local_93.f_275[func_91(bVar7)]), func_90(bVar7));
					}
				}
				else
				{
					if (!BitTest(Local_93.f_272[func_91(bVar7)], func_90(bVar7)))
					{
						if (!func_22(&(Local_93.f_364[bVar7 /*2*/])))
						{
							func_20(&(Local_93.f_364[bVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_93.f_364[bVar7 /*2*/]), 7000, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_272[func_91(bVar7)]), func_90(bVar7));
							func_106(&(Local_93.f_364[bVar7 /*2*/]));
						}
					}
					if (!BitTest(Local_93.f_275[func_91(bVar7)], func_90(bVar7)))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_275[func_91(bVar7)]), func_90(bVar7));
					}
				}
			}
			if (Local_93.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				unk_0x8744D2E3FC95740E(&(Local_93.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_93.f_252 > 0)
		{
			if (Local_93.f_302 > 0)
			{
				if (Local_93.f_302 >= (Local_93.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_93.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_93.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_93.f_279++;
									func_40();
								}
								else if (Local_93.f_318 >= func_39())
								{
									func_47();
									Local_93.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_93.f_317 > 0)
		{
			if (Local_93.f_316 > 0)
			{
				if (Local_93.f_316 >= Local_93.f_317)
				{
					if (Local_93.f_317 >= func_38())
					{
						func_47();
						Local_93.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_93.f_316 > 0)
		{
			if (Local_93.f_302 > 0)
			{
				if (Local_93.f_317 > 0)
				{
					if (Local_93.f_316 >= (Local_93.f_317 - 2))
					{
						if (Local_93.f_252 > 0)
						{
							if (Local_93.f_302 >= (Local_93.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_93.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_93.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_93.f_279++;
												func_40();
											}
											else if (Local_93.f_318 >= func_39())
											{
												func_47();
												Local_93.f_279++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 5)
	{
		if (Local_93.f_252 > 0)
		{
			if (Local_93.f_302 > 0)
			{
				if (Local_93.f_302 >= (Local_93.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_93.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_93.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_93.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_93.f_305[Local_93.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_93.f_278)
	{
		iVar0 = (iVar0 + Local_93.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_93.f_29 == -1)
	{
		iVar0 = func_46(Local_93.f_27);
		Local_93.f_29 = unk_0xC5935DFB3F39785A(0, iVar0);
		if (func_772())
		{
			if (Local_93.f_27 == joaat("hydra"))
			{
				if (Local_93.f_29 == 2)
				{
					Local_93.f_29 = 4;
				}
			}
			else if (Local_93.f_27 == joaat("savage"))
			{
				if (Local_93.f_29 == 0)
				{
					Local_93.f_29 = 1;
				}
				else if (Local_93.f_29 == 1)
				{
					Local_93.f_29 = 2;
				}
				else if (Local_93.f_29 == 2)
				{
					Local_93.f_29 = 3;
				}
			}
			else if (Local_93.f_27 == joaat("valkyrie"))
			{
				if (Local_93.f_29 == 2)
				{
					Local_93.f_29 = 3;
				}
				else if (Local_93.f_29 == 3)
				{
					Local_93.f_29 = 4;
				}
			}
			else if (Local_93.f_27 == joaat("buzzard"))
			{
				if (Local_93.f_29 == 0)
				{
					Local_93.f_29 = 1;
				}
				else if (Local_93.f_29 == 1)
				{
					Local_93.f_29 = 2;
				}
				else if (Local_93.f_29 == 2)
				{
					Local_93.f_29 = 3;
				}
				else if (Local_93.f_29 == 3)
				{
					Local_93.f_29 = 4;
				}
			}
		}
		else if (Local_93.f_27 == joaat("savage"))
		{
			if (Local_93.f_29 == 0)
			{
				Local_93.f_29 = 1;
			}
			else if (Local_93.f_29 == 1)
			{
				Local_93.f_29 = 2;
			}
			else if (Local_93.f_29 == 2)
			{
				Local_93.f_29 = 3;
			}
		}
	}
	switch (Local_93.f_27)
	{
		case joaat("rhino"):
			Local_93.f_280[0] = 4;
			Local_93.f_291[0] = func_45(4);
			Local_93.f_305[0] = func_44(4);
			Local_93.f_280[1] = 4;
			Local_93.f_291[1] = func_45(4);
			Local_93.f_305[1] = func_44(4);
			Local_93.f_280[2] = 4;
			Local_93.f_291[2] = func_45(4);
			Local_93.f_305[2] = func_44(4);
			if (Local_93.f_12 <= 2 || !func_772())
			{
				Local_93.f_278 = 3;
			}
			else if (Local_93.f_12 == 3)
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_278 = 4;
			}
			else
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_280[4] = 4;
				Local_93.f_291[4] = func_45(4);
				Local_93.f_305[4] = func_44(4);
				Local_93.f_278 = 5;
			}
			Local_93.f_255 = func_41();
			if (!func_772())
			{
				Local_93.f_1 = 0;
			}
			else
			{
				Local_93.f_1 = 5;
			}
			Local_93.f_2 = Local_93.f_29;
			switch (Local_93.f_29)
			{
				case 0:
					Local_93.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_93.f_43[0] = 269.414f;
					Local_93.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_93.f_43[1] = 3.5491f;
					Local_93.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_93.f_43[2] = 54.4509f;
					Local_93.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_93.f_43[3] = 178.1948f;
					Local_93.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_93.f_175[0] = 270.8322f;
					Local_93.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_93.f_175[1] = 177.3506f;
					Local_93.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_93.f_175[2] = 318.1089f;
					Local_93.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_93.f_175[3] = 272.0801f;
					Local_93.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_93.f_175[4] = 104.0591f;
					Local_93.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_93.f_148[0] = 296.4225f;
					Local_93.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_93.f_148[1] = 164.9695f;
					Local_93.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_93.f_148[2] = 136.0596f;
					Local_93.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_93.f_148[3] = 116.379f;
					Local_93.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_93.f_148[4] = 86.6586f;
					Local_93.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_93.f_148[5] = 74.6822f;
					Local_93.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_93.f_148[6] = 206.8863f;
					Local_93.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_93.f_148[7] = 267.8581f;
					Local_93.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_93.f_148[8] = 267.5856f;
					Local_93.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_93.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_93.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_93.f_43[0] = 194.8062f;
					Local_93.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_93.f_43[1] = 238.9372f;
					Local_93.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_93.f_43[2] = 16.3071f;
					Local_93.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_93.f_43[3] = 209.9883f;
					Local_93.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_93.f_148[0] = 221.3913f;
					Local_93.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_93.f_148[1] = 246.3415f;
					Local_93.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_93.f_148[2] = 213.4087f;
					Local_93.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_93.f_148[3] = 100.5405f;
					Local_93.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_93.f_148[4] = 289.6017f;
					Local_93.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_93.f_148[5] = 285.6456f;
					Local_93.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_93.f_148[6] = 310.9245f;
					Local_93.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_93.f_148[7] = 46.7117f;
					Local_93.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_93.f_148[8] = 35.9192f;
					Local_93.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_93.f_148[9] = 207.53f;
					Local_93.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_93.f_175[0] = 286.6127f;
					Local_93.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_93.f_175[1] = 124.1428f;
					Local_93.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_93.f_175[2] = 275.0147f;
					Local_93.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_93.f_175[3] = 287.91f;
					Local_93.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_93.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_93.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_93.f_43[0] = 172.439f;
					Local_93.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_93.f_43[1] = 53.9805f;
					Local_93.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_93.f_43[2] = 303.2142f;
					Local_93.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_93.f_43[3] = 218.5974f;
					Local_93.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_93.f_148[0] = 264.5842f;
					Local_93.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_93.f_148[1] = 133.7932f;
					Local_93.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_93.f_148[2] = 205.1215f;
					Local_93.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_93.f_148[3] = 66.1065f;
					Local_93.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_93.f_148[4] = 7.8064f;
					Local_93.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_93.f_148[5] = 358.7563f;
					Local_93.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_93.f_148[6] = 142.1748f;
					Local_93.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_93.f_148[7] = 247.816f;
					Local_93.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_93.f_148[8] = 124.4666f;
					Local_93.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_93.f_148[9] = 348.6588f;
					Local_93.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_93.f_175[0] = 89.8563f;
					Local_93.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_93.f_175[1] = 163.8004f;
					Local_93.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_93.f_175[2] = 270.0754f;
					Local_93.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_93.f_175[3] = 184.9752f;
					Local_93.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_93.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_93.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_93.f_43[0] = 0.5044f;
					Local_93.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_93.f_43[1] = 179.2507f;
					Local_93.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_93.f_43[2] = 0.3066f;
					Local_93.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_93.f_43[3] = 180.2973f;
					Local_93.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_93.f_148[0] = 336.7541f;
					Local_93.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_93.f_148[1] = 6.0929f;
					Local_93.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_93.f_148[2] = 4.2803f;
					Local_93.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_93.f_148[3] = 274.985f;
					Local_93.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_93.f_148[4] = 267.2555f;
					Local_93.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_93.f_148[5] = 6.5529f;
					Local_93.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_93.f_148[6] = 89.1724f;
					Local_93.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_93.f_148[7] = 348.279f;
					Local_93.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_93.f_148[8] = 267.8075f;
					Local_93.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_93.f_148[9] = 0.5237f;
					Local_93.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_93.f_175[0] = 357.9713f;
					Local_93.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_93.f_175[1] = 269.3234f;
					Local_93.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_93.f_175[2] = 269.3055f;
					Local_93.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_93.f_175[3] = 359.1497f;
					Local_93.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_93.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_93.f_240 = joaat("insurgent");
			Local_93.f_280[0] = 2;
			Local_93.f_291[0] = func_45(2);
			Local_93.f_280[1] = 4;
			Local_93.f_291[1] = func_45(4);
			Local_93.f_305[1] = func_44(4);
			Local_93.f_280[2] = 2;
			Local_93.f_291[2] = func_45(2);
			if (Local_93.f_12 <= 2 || !func_772())
			{
				Local_93.f_280[3] = 5;
				Local_93.f_291[3] = func_45(5);
				Local_93.f_278 = 4;
			}
			else if (Local_93.f_12 == 3)
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_280[5] = 5;
				Local_93.f_291[5] = func_45(5);
				Local_93.f_278 = 6;
			}
			else
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_280[5] = 4;
				Local_93.f_291[5] = func_45(4);
				Local_93.f_305[5] = func_44(4);
				Local_93.f_280[6] = 5;
				Local_93.f_291[6] = func_45(5);
				Local_93.f_278 = 7;
			}
			Local_93.f_255 = func_41();
			if (!func_772())
			{
				Local_93.f_1 = 2;
			}
			else
			{
				Local_93.f_1 = 7;
			}
			Local_93.f_2 = Local_93.f_29;
			switch (Local_93.f_29)
			{
				case 0:
					Local_93.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_93.f_43[0] = 331.74f;
					Local_93.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_93.f_43[1] = 327.7335f;
					Local_93.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_93.f_43[2] = 149.1604f;
					Local_93.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_93.f_43[3] = 150.6753f;
					Local_93.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_93.f_148[0] = 147.2177f;
					Local_93.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_93.f_148[1] = 103.9461f;
					Local_93.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_93.f_148[2] = 160.822f;
					Local_93.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_93.f_148[3] = 205.8375f;
					Local_93.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_93.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_93.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_93.f_43[0] = 344.2504f;
					Local_93.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_93.f_43[1] = 340.3425f;
					Local_93.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_93.f_43[2] = 351.5693f;
					Local_93.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_93.f_43[3] = 354.2446f;
					Local_93.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_93.f_148[0] = 245.2865f;
					Local_93.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_93.f_148[1] = 74.1185f;
					Local_93.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_93.f_148[2] = 10.2312f;
					Local_93.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_93.f_148[3] = 222.4017f;
					Local_93.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_93.f_148[4] = 150.2763f;
					Local_93.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_93.f_148[5] = 105.4526f;
					Local_93.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_93.f_148[6] = 88.9429f;
					Local_93.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_93.f_148[7] = 51.1733f;
					Local_93.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_93.f_148[8] = 169.7083f;
					Local_93.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_93.f_148[9] = 29.5849f;
					Local_93.f_243 = 3;
					break;
				
				case 2:
					if (!func_772())
					{
						Local_93.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_93.f_43[0] = 319.153f;
					}
					else
					{
						Local_93.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_93.f_43[0] = 319.153f;
						Local_93.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_93.f_43[1] = 316.7079f;
						Local_93.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_93.f_43[2] = 316.9623f;
						Local_93.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_93.f_43[3] = 314.2003f;
					}
					Local_93.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_93.f_148[0] = 326.4292f;
					Local_93.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_93.f_148[1] = 6.8118f;
					Local_93.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_93.f_148[2] = 32.8776f;
					Local_93.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_93.f_148[3] = 8.387f;
					Local_93.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_93.f_148[4] = 291.5504f;
					Local_93.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_93.f_148[5] = 333.1838f;
					Local_93.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_93.f_148[6] = 203.8353f;
					Local_93.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_93.f_148[7] = 32.2329f;
					Local_93.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_93.f_148[8] = 195.4847f;
					Local_93.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_93.f_148[9] = 327.4941f;
					Local_93.f_243 = 4;
					break;
				
				case 3:
					if (!func_772())
					{
						Local_93.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_93.f_43[0] = 156.0209f;
					}
					else
					{
						Local_93.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_93.f_43[0] = 156.0209f;
						Local_93.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_93.f_43[1] = 41.8571f;
						Local_93.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_93.f_43[2] = 305.7411f;
						Local_93.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_93.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_93.f_242 = 3;
					}
					else
					{
						Local_93.f_242 = 4;
					}
					Local_93.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_93.f_148[0] = 197.3456f;
					Local_93.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_93.f_148[1] = 140.7211f;
					Local_93.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_93.f_148[2] = 98.9528f;
					Local_93.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_93.f_148[3] = 107.0238f;
					Local_93.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_93.f_148[4] = 202.129f;
					Local_93.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_93.f_148[5] = 230.1207f;
					Local_93.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_93.f_148[6] = 36.194f;
					Local_93.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_93.f_148[7] = 48.2522f;
					Local_93.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_93.f_148[8] = 296.114f;
					Local_93.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_93.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_93.f_240 = joaat("lazer");
			Local_93.f_280[0] = 2;
			Local_93.f_291[0] = func_45(2);
			Local_93.f_280[1] = 2;
			Local_93.f_291[1] = func_45(2);
			Local_93.f_280[2] = 2;
			Local_93.f_291[2] = func_45(2);
			if (Local_93.f_12 <= 2 || !func_772())
			{
				Local_93.f_278 = 3;
			}
			else if (Local_93.f_12 == 3)
			{
				Local_93.f_280[3] = 2;
				Local_93.f_291[3] = func_45(2);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_278 = 5;
			}
			else
			{
				Local_93.f_280[3] = 2;
				Local_93.f_291[3] = func_45(2);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_280[5] = 2;
				Local_93.f_291[5] = func_45(2);
				Local_93.f_278 = 6;
			}
			Local_93.f_255 = func_41();
			if (!func_772())
			{
				Local_93.f_1 = 1;
			}
			else
			{
				Local_93.f_1 = 6;
			}
			Local_93.f_2 = Local_93.f_29;
			switch (Local_93.f_29)
			{
				case 0:
					if (!func_772())
					{
						Local_93.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_93.f_43[0] = 197.4435f;
					}
					else
					{
						Local_93.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_93.f_43[0] = 197.4435f;
						Local_93.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_93.f_43[1] = 197.1133f;
						Local_93.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_93.f_43[2] = 272.2065f;
						Local_93.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_93.f_43[3] = 142.941f;
					}
					Local_93.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_93.f_175[0] = 34.149f;
					Local_93.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_93.f_175[1] = -26.0182f;
					Local_93.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_93.f_175[2] = 88.3998f;
					Local_93.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_93.f_175[3] = -141.7949f;
					Local_93.f_228[0] = 10000;
					Local_93.f_228[1] = 10000;
					Local_93.f_228[2] = 10000;
					Local_93.f_228[3] = 10000;
					Local_93.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_93.f_148[0] = 143.4012f;
					Local_93.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_93.f_148[1] = 212.1136f;
					Local_93.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_93.f_148[2] = 95.8248f;
					Local_93.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_93.f_148[3] = 113.3084f;
					Local_93.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_93.f_148[4] = 260.1329f;
					Local_93.f_242 = 4;
					break;
				
				case 1:
					if (!func_772())
					{
						Local_93.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_93.f_43[0] = 131.0993f;
					}
					else
					{
						Local_93.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_93.f_43[0] = 131.0993f;
						Local_93.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_93.f_43[1] = 127.8408f;
						Local_93.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_93.f_43[2] = 131.1571f;
						Local_93.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_93.f_43[3] = 132.943f;
					}
					Local_93.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_93.f_175[0] = 316.9068f;
					Local_93.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_93.f_175[1] = 142.3075f;
					Local_93.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_93.f_175[2] = 93.1231f;
					Local_93.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_93.f_175[3] = -9.0334f;
					Local_93.f_228[0] = 10000;
					Local_93.f_228[1] = 10000;
					Local_93.f_228[2] = 10000;
					Local_93.f_228[3] = 10000;
					Local_93.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_93.f_148[0] = 236.3566f;
					Local_93.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_93.f_148[1] = 212.7533f;
					Local_93.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_93.f_148[2] = 299.3619f;
					Local_93.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_93.f_148[3] = 115.7556f;
					Local_93.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_93.f_148[4] = 191.3862f;
					Local_93.f_242 = 4;
					break;
				
				case 2:
					Local_93.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_93.f_43[0] = 176.244f;
					Local_93.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_93.f_175[0] = 93.8354f;
					Local_93.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_93.f_175[1] = 250.5173f;
					Local_93.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_93.f_175[2] = 337.8961f;
					Local_93.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_93.f_175[3] = 142.1369f;
					Local_93.f_228[0] = 10000;
					Local_93.f_228[1] = 10000;
					Local_93.f_228[2] = 10000;
					Local_93.f_228[3] = 10000;
					Local_93.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_93.f_148[0] = 208.2624f;
					Local_93.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_93.f_148[1] = 349.048f;
					Local_93.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_93.f_148[2] = 69.8162f;
					Local_93.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_93.f_148[3] = 286.6181f;
					Local_93.f_242 = 4;
					Local_93.f_243 = 4;
					break;
				
				case 3:
					Local_93.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_93.f_43[0] = 292.0822f;
					Local_93.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_93.f_43[1] = 43.3907f;
					Local_93.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_93.f_43[2] = 124.2279f;
					Local_93.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_93.f_43[3] = 129.3366f;
					Local_93.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_93.f_175[0] = 137.5025f;
					Local_93.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_93.f_175[1] = 227.9336f;
					Local_93.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_93.f_175[2] = 6.0299f;
					Local_93.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_93.f_175[3] = -87.5596f;
					Local_93.f_228[0] = 10000;
					Local_93.f_228[1] = 10000;
					Local_93.f_228[2] = 10000;
					Local_93.f_228[3] = 10000;
					Local_93.f_242 = 4;
					Local_93.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_93.f_148[0] = 338.8487f;
					Local_93.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_93.f_148[1] = 272.5443f;
					Local_93.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_93.f_148[2] = 223.0158f;
					Local_93.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_93.f_148[3] = 355.6682f;
					Local_93.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_93.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_772())
					{
						Local_93.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_93.f_43[0] = 331.7771f;
					}
					else
					{
						Local_93.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_93.f_43[0] = 331.7771f;
						Local_93.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_93.f_43[1] = 324.1843f;
						Local_93.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_93.f_43[2] = 330.0586f;
						Local_93.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_93.f_43[3] = 329.5413f;
					}
					Local_93.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_93.f_175[0] = 146.9594f;
					Local_93.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_93.f_175[1] = 137.6555f;
					Local_93.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_93.f_175[2] = 114.7478f;
					Local_93.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_93.f_175[3] = -84.6269f;
					Local_93.f_228[0] = 10000;
					Local_93.f_228[1] = 10000;
					Local_93.f_228[2] = 10000;
					Local_93.f_228[3] = 10000;
					Local_93.f_242 = 4;
					Local_93.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_93.f_148[0] = 153.0449f;
					Local_93.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_93.f_148[1] = 153.1271f;
					Local_93.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_93.f_148[2] = 331.3771f;
					Local_93.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_93.f_148[3] = 183.2579f;
					Local_93.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_93.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_93.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_93.f_43[0] = 184.7817f;
					Local_93.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_93.f_175[0] = 91.7761f;
					Local_93.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_93.f_175[1] = 269.7376f;
					Local_93.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_93.f_175[1] = 211.4614f;
					Local_93.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_93.f_175[3] = 148.9204f;
					Local_93.f_228[0] = 10000;
					Local_93.f_228[1] = 10000;
					Local_93.f_228[2] = 10000;
					Local_93.f_228[3] = 10000;
					Local_93.f_242 = 4;
					Local_93.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_93.f_148[0] = 113.298f;
					Local_93.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_93.f_148[1] = 353.0292f;
					Local_93.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_93.f_148[2] = 216.1793f;
					Local_93.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_93.f_148[3] = 347.4008f;
					Local_93.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_93.f_240 = joaat("buzzard");
			Local_93.f_280[0] = 2;
			Local_93.f_291[0] = func_45(2);
			Local_93.f_305[0] = func_44(4);
			Local_93.f_280[1] = 4;
			Local_93.f_291[1] = func_45(4);
			Local_93.f_305[1] = func_44(4);
			Local_93.f_280[2] = 2;
			Local_93.f_291[2] = func_45(2);
			Local_93.f_305[2] = func_44(4);
			if (Local_93.f_12 <= 2 || !func_772())
			{
				Local_93.f_280[3] = 5;
				Local_93.f_291[3] = func_45(5);
				Local_93.f_278 = 4;
			}
			else if (Local_93.f_12 == 3)
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_280[5] = 5;
				Local_93.f_291[5] = func_45(5);
				Local_93.f_278 = 6;
			}
			else
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_280[5] = 4;
				Local_93.f_291[5] = func_45(4);
				Local_93.f_305[5] = func_44(4);
				Local_93.f_280[6] = 5;
				Local_93.f_291[6] = func_45(5);
				Local_93.f_278 = 7;
			}
			Local_93.f_255 = func_41();
			if (!func_772())
			{
				Local_93.f_1 = 3;
			}
			else
			{
				Local_93.f_1 = 8;
			}
			Local_93.f_2 = Local_93.f_29;
			switch (Local_93.f_29)
			{
				case 0:
					if (!func_772())
					{
						Local_93.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_93.f_43[0] = 290.0732f;
					}
					else
					{
						Local_93.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_93.f_43[0] = 290.0732f;
						Local_93.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_93.f_43[1] = 231.5867f;
						Local_93.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_93.f_43[2] = 49.6234f;
						Local_93.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_93.f_43[3] = 229.3317f;
					}
					Local_93.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_93.f_148[0] = 230.0049f;
					Local_93.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_93.f_148[1] = 147.9421f;
					Local_93.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_93.f_148[2] = 22.3204f;
					Local_93.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_93.f_148[3] = 80.7676f;
					Local_93.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_93.f_148[4] = 162.0507f;
					Local_93.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_93.f_148[5] = 225.9002f;
					Local_93.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_93.f_148[6] = 140.0515f;
					Local_93.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_93.f_148[7] = 90.6966f;
					Local_93.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_93.f_148[8] = 226.042f;
					Local_93.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_93.f_148[9] = 79.7294f;
					Local_93.f_243 = 4;
					break;
				
				case 1:
					Local_93.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_93.f_43[0] = 122.9714f;
					Local_93.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_93.f_43[1] = 118.6931f;
					Local_93.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_93.f_43[2] = 26.5272f;
					Local_93.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_93.f_43[3] = 211.0638f;
					Local_93.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_93.f_148[0] = 203.4084f;
					Local_93.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_93.f_148[1] = 123.7895f;
					Local_93.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_93.f_148[2] = 115.9053f;
					Local_93.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_93.f_148[3] = 330.5807f;
					Local_93.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_93.f_148[4] = 116.311f;
					Local_93.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_93.f_148[5] = 145.855f;
					Local_93.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_93.f_148[6] = 41.353f;
					Local_93.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_93.f_148[7] = 266.0158f;
					Local_93.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_93.f_148[8] = 290.3963f;
					Local_93.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_93.f_148[9] = 243.2495f;
					Local_93.f_243 = 4;
					break;
				
				case 2:
					Local_93.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_93.f_43[0] = 280.2862f;
					Local_93.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_93.f_43[1] = 32.9157f;
					Local_93.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_93.f_43[2] = 106.2954f;
					Local_93.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_93.f_43[3] = 272.3807f;
					Local_93.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_93.f_148[0] = 254.5411f;
					Local_93.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_93.f_148[1] = 183.227f;
					Local_93.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_93.f_148[2] = 338.6039f;
					Local_93.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_93.f_148[3] = 71.8258f;
					Local_93.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_93.f_148[4] = 179.6626f;
					Local_93.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_93.f_148[5] = 272.7491f;
					Local_93.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_93.f_148[6] = 270.8252f;
					Local_93.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_93.f_148[7] = 180.4937f;
					Local_93.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_93.f_148[8] = 107.4297f;
					Local_93.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_93.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_93.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_93.f_43[0] = 117.7311f;
					Local_93.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_93.f_43[1] = 46.3958f;
					Local_93.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_93.f_43[2] = 189.2091f;
					Local_93.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_93.f_43[3] = 50.0778f;
					Local_93.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_93.f_148[0] = 229.5714f;
					Local_93.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_93.f_148[1] = 136.4963f;
					Local_93.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_93.f_148[2] = 88.3908f;
					Local_93.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_93.f_148[3] = 271.8922f;
					Local_93.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_93.f_148[4] = 316.4374f;
					Local_93.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_93.f_148[5] = 246.1521f;
					Local_93.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_93.f_148[6] = 198.8985f;
					Local_93.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_93.f_148[7] = 257.2332f;
					Local_93.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_93.f_148[8] = 104.7808f;
					Local_93.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_93.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_93.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_93.f_43[0] = 306.7662f;
					Local_93.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_93.f_43[1] = 303.3918f;
					Local_93.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_93.f_43[2] = 302.365f;
					Local_93.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_93.f_43[3] = 304.9788f;
					Local_93.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_93.f_148[0] = 30.9787f;
					Local_93.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_93.f_148[1] = 97.3626f;
					Local_93.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_93.f_148[2] = 218.2636f;
					Local_93.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_93.f_148[3] = 257.6324f;
					Local_93.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_93.f_148[4] = 244.6777f;
					Local_93.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_93.f_148[5] = 12.745f;
					Local_93.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_93.f_148[6] = 196.3743f;
					Local_93.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_93.f_148[7] = 283.2556f;
					Local_93.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_93.f_148[8] = 243.4268f;
					Local_93.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_93.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_93.f_240 = joaat("buzzard");
			Local_93.f_280[0] = 2;
			Local_93.f_291[0] = func_45(2);
			Local_93.f_280[1] = 4;
			Local_93.f_291[1] = func_45(4);
			Local_93.f_305[1] = func_44(4);
			Local_93.f_280[2] = 2;
			Local_93.f_291[2] = func_45(2);
			if (Local_93.f_12 <= 2 || !func_772())
			{
				Local_93.f_280[3] = 5;
				Local_93.f_291[3] = func_45(5);
				Local_93.f_278 = 4;
			}
			else if (Local_93.f_12 == 3)
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_280[5] = 5;
				Local_93.f_291[5] = func_45(5);
				Local_93.f_278 = 6;
			}
			else
			{
				Local_93.f_280[3] = 4;
				Local_93.f_291[3] = func_45(4);
				Local_93.f_305[3] = func_44(4);
				Local_93.f_280[4] = 2;
				Local_93.f_291[4] = func_45(2);
				Local_93.f_280[5] = 4;
				Local_93.f_291[5] = func_45(4);
				Local_93.f_305[5] = func_44(4);
				Local_93.f_280[6] = 5;
				Local_93.f_291[6] = func_45(5);
				Local_93.f_278 = 7;
			}
			Local_93.f_255 = func_41();
			if (!func_772())
			{
				Local_93.f_1 = 4;
			}
			else
			{
				Local_93.f_1 = 9;
			}
			Local_93.f_2 = Local_93.f_29;
			switch (Local_93.f_29)
			{
				case 0:
					Local_93.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_93.f_43[0] = 180.7904f;
					Local_93.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_93.f_43[1] = 269.3001f;
					Local_93.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_93.f_43[2] = 180.39f;
					Local_93.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_93.f_43[3] = 276.7351f;
					Local_93.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_93.f_148[0] = 329.9165f;
					Local_93.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_93.f_148[1] = 264.7702f;
					Local_93.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_93.f_148[2] = 359.5203f;
					Local_93.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_93.f_148[3] = 111.3101f;
					Local_93.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_93.f_148[4] = 176.3058f;
					Local_93.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_93.f_148[5] = 213.1969f;
					Local_93.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_93.f_148[6] = 275.2275f;
					Local_93.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_93.f_148[7] = 220.0349f;
					Local_93.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_93.f_148[8] = 359.15f;
					Local_93.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_93.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_93.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_93.f_43[0] = 247.4892f;
					Local_93.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_93.f_43[1] = 66.129f;
					Local_93.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_93.f_43[2] = 340.0713f;
					Local_93.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_93.f_43[3] = 245.7466f;
					Local_93.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_93.f_148[0] = 252.6017f;
					Local_93.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_93.f_148[1] = 245.262f;
					Local_93.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_93.f_148[2] = 44.7945f;
					Local_93.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_93.f_148[3] = 255.6518f;
					Local_93.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_93.f_148[4] = 124.8391f;
					Local_93.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_93.f_148[5] = 188.9979f;
					Local_93.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_93.f_148[6] = 159.3613f;
					Local_93.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_93.f_148[7] = 5.7762f;
					Local_93.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_93.f_148[8] = 89.3388f;
					Local_93.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_93.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_93.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_93.f_43[0] = 310.6241f;
					Local_93.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_93.f_43[1] = 166.0191f;
					Local_93.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_93.f_43[2] = 343.1715f;
					Local_93.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_93.f_43[3] = 342.4984f;
					Local_93.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_93.f_148[0] = 248.8594f;
					Local_93.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_93.f_148[1] = 195.7758f;
					Local_93.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_93.f_148[2] = 28.6127f;
					Local_93.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_93.f_148[3] = 296.7476f;
					Local_93.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_93.f_148[4] = 240.9422f;
					Local_93.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_93.f_148[5] = 2.473f;
					Local_93.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_93.f_148[6] = 343.6776f;
					Local_93.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_93.f_148[7] = 0.2495f;
					Local_93.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_93.f_148[8] = 72.7889f;
					Local_93.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_93.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_93.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_93.f_43[0] = 351.0324f;
					Local_93.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_93.f_43[1] = 3.5452f;
					Local_93.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_93.f_43[2] = 7.3237f;
					Local_93.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_93.f_43[3] = 332.0844f;
					Local_93.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_93.f_148[0] = 2.6416f;
					Local_93.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_93.f_148[1] = 171.8638f;
					Local_93.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_93.f_148[2] = 257.0332f;
					Local_93.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_93.f_148[3] = 91.7869f;
					Local_93.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_93.f_148[4] = 4.2016f;
					Local_93.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_93.f_148[5] = 339.729f;
					Local_93.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_93.f_148[6] = 359.2033f;
					Local_93.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_93.f_148[7] = 333.6298f;
					Local_93.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_93.f_148[8] = 73.2788f;
					Local_93.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_93.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_93.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_93.f_43[0] = 42.1535f;
					Local_93.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_93.f_43[1] = 315.0261f;
					Local_93.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_93.f_43[2] = 1.2527f;
					Local_93.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_93.f_43[3] = 1.9403f;
					Local_93.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_93.f_148[0] = 352.9674f;
					Local_93.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_93.f_148[1] = 88.8285f;
					Local_93.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_93.f_148[2] = 177.2297f;
					Local_93.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_93.f_148[3] = 273.1487f;
					Local_93.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_93.f_148[4] = 225.394f;
					Local_93.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_93.f_148[5] = 175.5423f;
					Local_93.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_93.f_148[6] = 191.1842f;
					Local_93.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_93.f_148[7] = 269.6831f;
					Local_93.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_93.f_148[8] = 29.4203f;
					Local_93.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_93.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_93.f_255 != -1)
	{
		return Local_93.f_255;
	}
	if (Local_93.f_278 == 0)
	{
		return ((4 * Global_262145.f_10673) + Global_262145.f_10674);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_93.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_93.f_278)
			{
				iVar0 = (iVar0 + ((Local_93.f_291[iVar1] * iVar4) + Local_93.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_93.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_93.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_93.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_93.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_772())
			{
				iVar0 = Global_262145.f_11857;
			}
			else
			{
				iVar0 = Global_262145.f_11577;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_772())
			{
				iVar0 = Global_262145.f_11858;
			}
			else
			{
				iVar0 = Global_262145.f_11578;
			}
			break;
		
		case 5:
			if (func_772())
			{
				iVar0 = Global_262145.f_11859;
			}
			else
			{
				iVar0 = Global_262145.f_11579;
			}
			break;
		
		case 4:
			if (func_772())
			{
				iVar0 = Global_262145.f_11856;
			}
			else
			{
				iVar0 = Global_262145.f_11576;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_772())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_93.f_252 = 0;
	Local_93.f_302 = 0;
	Local_93.f_317 = 0;
	Local_93.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_93.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_93.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_93.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_109(Local_93.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	if (Local_93.f_318 == 0 || Local_93.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return 0;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_93.f_317 >= func_38())
		{
			iVar0 = Local_93.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_93.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_93.f_317 == 2)
	{
		iVar0 = Local_93.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_93.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_93.f_318 == func_39())
	{
		return 0;
	}
	if (Local_93.f_318 == func_71())
	{
		return 0;
	}
	if (func_98() == 1)
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(Local_93.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_93.f_239) && unk_0x4D64DFA5BE3B2871(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_93.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_93.f_48[(20 + iParam0)]), 22, Local_93.f_239, Local_93.f_117[iVar3 /*3*/], Local_93.f_148[iVar3], 1, 1, 1))
					{
						unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), iLocal_107);
						unk_0x87EDE48547CC8942(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 1, 0);
						unk_0xC6E8E1D693021E9E(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0xB41DEC3AAC1AA107(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, 1, 1);
						}
						else
						{
							unk_0x4BD3F83B0D7E1417(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, 1);
						}
						fVar6 = (30f * func_53());
						unk_0xC652B7E19CE29859(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), round(fVar6));
						unk_0x139711196A42A037(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 1);
						unk_0xD0764B65C2DFEDCA(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 2);
						unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 0, 1);
						unk_0x570AAA413775DFFB(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 1);
						unk_0xCAF62AAD9CA7C260(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 1);
						unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 42, 1);
						unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), round((200f * Global_262145.f_165)), 0);
						unk_0x4BD214FCF7332FF6(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 1);
						unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 1);
						unk_0x9E6CC93E007219AC(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 1);
						unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), 151, 0);
						iVar4 = unk_0x8D91ADE44AC79BC9(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = round((fVar5 * to_float(iVar4)));
						unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_93.f_48[(20 + iParam0)]), iVar4, 0);
						bVar7 = (20 + iParam0);
						if (BitTest(Local_93.f_272[func_91(bVar7)], func_90(bVar7)))
						{
							unk_0x8744D2E3FC95740E(&(Local_93.f_272[func_91(bVar7)]), func_90(bVar7));
						}
						Local_93.f_247++;
						Local_93.f_317++;
						Local_93.f_250++;
						Local_93.f_318++;
						func_106(&(Local_93.f_414[bVar7 /*2*/]));
						func_20(&(Local_93.f_414[bVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_93.f_364[bVar7 /*2*/])))
						{
							func_106(&(Local_93.f_364[bVar7 /*2*/]));
						}
						func_20(&(Local_561[iVar3 /*2*/]), 0, 0);
						unk_0x7AF89DBF250A2C27(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar7]), 1, iLocal_106);
					}
				}
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_93.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_772())
	{
		return Global_262145.f_11845;
	}
	return Global_262145.f_11565;
}

float func_53()
{
	if (func_772())
	{
		return Global_262145.f_11847;
	}
	return Global_262145.f_11567;
}

int func_54(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	iVar0 = unk_0xB1DBFEB95C0EFB88(iParam1, uParam2, Param3, uParam4, iParam6, bParam5);
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

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_873(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_58(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_873(bVar1, 1, 1))
		{
			if (!func_16(bVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_57(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270)
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
								if (unk_0xED977E2AE2CB16EE(func_58(bVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0xED977E2AE2CB16EE(func_58(bVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_57(bool bParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(bParam0)) || Global_2657589[bParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_61() && Global_1853910[iVar0 /*862*/].f_832) && !func_60(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_59(bParam0);
}

Vector3 func_59(bool bParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(bParam0), 0);
}

int func_60(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2683864.f_19;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != bVar1) || iParam6 == 0)
		{
			if (func_873(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_57(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_63(bVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_59(bVar1), Param0, 1) < fParam1)
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

int func_63(bool bParam0)
{
	if (func_67(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	Global_2764203 = { func_66(bParam0) };
	if (unk_0xEDD63461767A518C(&Global_2764203))
	{
		return 1;
	}
	if (func_64(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_65(bParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_5();
}

struct<13> func_66(bool bParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(bParam0, &Var0, 13);
	return Var0;
}

int func_67(bool bParam0, int iParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2764203 = { func_66(bParam0) };
		Global_2764216 = { func_66(iParam1) };
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

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 10);
	if (!func_69(Local_93.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_561[iVar0 /*2*/])) || (func_22(&(Local_561[iVar0 /*2*/])) && func_19(&(Local_561[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_93.f_279 == 0)
	{
		iVar0 = Local_93.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_93.f_279)
		{
			iVar0 = (iVar0 + Local_93.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_93.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_93.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_98() == 3)
	{
		return 0;
	}
	if (Local_93.f_242 < iVar0)
	{
	}
	if (Local_93.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_93.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_93.f_240) && func_70(Local_93.f_239))
	{
		if (func_74(bParam0))
		{
			if (BitTest(Local_93.f_245, bParam0))
			{
				Local_93.f_249++;
				Local_93.f_251++;
				Local_93.f_252++;
				unk_0x8744D2E3FC95740E(&(Local_93.f_245), bParam0);
				if (!BitTest(Local_93.f_3, 19))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	if (unk_0x4D64DFA5BE3B2871(4, 1, 0, 0))
	{
		if (func_80(bParam0))
		{
			if (func_75(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	
	if (func_109(Local_93.f_73[bParam0]) && BitTest(Local_93.f_245, bParam0))
	{
		if (func_79(Local_93.f_73[bParam0]))
		{
			if (Local_93.f_116 <= 0)
			{
				if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bParam0])) == joaat("insurgent"))
				{
					Local_93.f_116 = 2;
				}
				else
				{
					Local_93.f_116 = unk_0x2EEC0612337D20CE(unk_0xE38610F405049F71(Local_93.f_73[bParam0])) + 1;
					if (Local_93.f_116 > 4)
					{
						Local_93.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_93.f_116)
			{
				if (!unk_0x2FC2FDC413532977(Local_93.f_48[(bParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_93.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_93.f_48[(bParam0 * 4 + iVar6)]), Local_93.f_73[bParam0], 22, Local_93.f_239, iVar4, 1, 1, 1))
						{
							unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), iLocal_107);
							unk_0x87EDE48547CC8942(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1, 0);
							unk_0xC6E8E1D693021E9E(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 0);
							unk_0x4BD3F83B0D7E1417(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, 0);
							if (func_77())
							{
								unk_0x4BD3F83B0D7E1417(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							else
							{
								unk_0x4BD3F83B0D7E1417(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, 1);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							unk_0xC652B7E19CE29859(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), round(fVar5));
							unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 2, 1);
							unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 3, 0);
							unk_0x139711196A42A037(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0xD0764B65C2DFEDCA(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 2);
							unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 0, 1);
							unk_0x570AAA413775DFFB(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0xCAF62AAD9CA7C260(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), round((200f * Global_262145.f_165)), 0);
							unk_0x4BD214FCF7332FF6(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 42, 1);
							unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 52, 1);
							unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 53, 1);
							unk_0x34A9A872D3C510BF(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0x3FF406EF0BE27DA3(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0xA39E0AA2C6BBD52E(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 151, 0);
							if (unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0x25DBF9F9C6BDFFEA(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									unk_0xC652B7E19CE29859(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), round(fVar5));
									unk_0x39256A89E9D7464A(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 50);
									unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 52, 1);
									unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 53, 1);
									unk_0x675B6F5098262382(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), -1857128337);
								}
								uVar0 = Global_262145.f_11829;
								uVar1 = Global_262145.f_11830;
								uVar2 = Global_262145.f_11831;
								uVar3 = Global_262145.f_11832;
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 26, uVar3);
							}
							else if (unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bParam0]))))
							{
								unk_0x25DBF9F9C6BDFFEA(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								unk_0xC652B7E19CE29859(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), round(fVar5));
								unk_0x39256A89E9D7464A(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 50);
								unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 52, 1);
								unk_0xBE8796DB2B90A437(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 53, 1);
								uVar0 = Global_262145.f_11829;
								uVar1 = Global_262145.f_11830;
								uVar2 = Global_262145.f_11831;
								uVar3 = Global_262145.f_11832;
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 23, uVar0);
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 24, uVar1);
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 25, uVar2);
								unk_0xC3AD0E1324FB3465(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 26, uVar3);
							}
							bVar7 = (bParam0 * 4 + iVar6);
							if (BitTest(Local_93.f_272[func_91(bVar7)], func_90(bVar7)))
							{
								unk_0x8744D2E3FC95740E(&(Local_93.f_272[func_91(bVar7)]), func_90(bVar7));
							}
							unk_0x9E6CC93E007219AC(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0x68F395D64BC35E68(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1);
							unk_0x7AF89DBF250A2C27(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), 1, iLocal_106);
							Local_93.f_250++;
							func_106(&(Local_93.f_414[(bParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_93.f_414[(bParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_93.f_364[(bParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_93.f_364[(bParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_93.f_116)
			{
				if (!unk_0x2FC2FDC413532977(Local_93.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_93.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0xF4244288C3EF3306(unk_0xC35A3A4C05A4831B(Local_93.f_48[(bParam0 * 4 + iVar6)]), unk_0xE38610F405049F71(Local_93.f_73[bParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()
{
	if (func_772())
	{
		return Global_262145.f_11848;
	}
	return Global_262145.f_11568;
}

int func_77()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
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

int func_79(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

int func_80(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	var uVar11;
	int iVar12;
	
	iVar0 = func_98();
	Local_93.f_240 = func_43(iVar0);
	if (!unk_0x2FC2FDC413532977(Local_93.f_73[bParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_93.f_116)
		{
			iVar3 = (bParam0 * 4 + iVar2);
			if (unk_0x2FC2FDC413532977(Local_93.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_93.f_240) && !BitTest(Local_93.f_245, bParam0))
		{
			fVar8 = 300f;
			if (unk_0xBA16CD57E37AC32A(Local_93.f_240) || unk_0x00C6FDED3EB75117(Local_93.f_240))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (unk_0x00C6FDED3EB75117(Local_93.f_240))
			{
				fVar8 = 800f;
			}
			iVar9 = 0;
			while (iVar9 < Local_93.f_242)
			{
				if (func_87(iVar9))
				{
					func_86(Local_93.f_240, iVar9, &Var10, &uVar11);
					if (!func_69(Var10, 0f, 0f, 0f, 0))
					{
						if (func_55(Var10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, -1, 1, fVar7, 0, 0, 0, 0))
						{
							Var4 = { Var10 };
							uVar5 = uVar11;
							iVar6 = 1;
							func_8(&(Local_93.f_186[iVar9 /*2*/]), 0, 0);
							iVar9 = Local_93.f_242;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 1)
			{
				iVar12 = 1;
				if (unk_0xBA16CD57E37AC32A(Local_93.f_240) || unk_0x00C6FDED3EB75117(Local_93.f_240))
				{
					iVar12 = 0;
				}
				if (func_85(bParam0))
				{
					if (func_82(&(Local_93.f_73[bParam0]), Local_93.f_240, Var4, uVar5, 1, 1, 1, 0, iVar12, 1, 0, 0, 0, 0))
					{
						unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 2);
						unk_0xB2CA6639924FA111(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1);
						unk_0xDD38B2935A3EAC56(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 0, 0);
						unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 2);
						unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1, 1, 0);
						unk_0xAA588DD56719AE3A(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 0);
						unk_0xF977D20CFFFD341F(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 0);
						if (unk_0xBA16CD57E37AC32A(Local_93.f_240))
						{
							unk_0xA9F7300B498DDED7(unk_0xE38610F405049F71(Local_93.f_73[bParam0]));
							unk_0xC7D381E526A969D3(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1);
							unk_0x79B52EC5A9AB6229(unk_0xE38610F405049F71(Local_93.f_73[bParam0]));
							unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 0);
						}
						else if (unk_0x00C6FDED3EB75117(Local_93.f_240))
						{
							unk_0xC2A036647DD761E4(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 3);
							unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 0);
							unk_0xC7D381E526A969D3(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1);
							unk_0x79B52EC5A9AB6229(unk_0xE38610F405049F71(Local_93.f_73[bParam0]));
							unk_0x93C337B66C95C99B(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 30f);
							unk_0x3DCEE0B40D1FEC94(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1);
							unk_0xA7F7529CFB6F1EA7(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1);
							fVar1 = 500f;
							unk_0xD25E9BDC14A0B649(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), round(fVar1), 0);
						}
						else
						{
							unk_0x788F35D395511DFE(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = to_float(func_81());
							unk_0xD25E9BDC14A0B649(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), round(fVar1), 0);
							unk_0xF0259D91B002AE9F(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), round(fVar1));
							unk_0xDF9DC0584881B7AF(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), fVar1);
							unk_0x3E7E7AD923FD91A7(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), fVar1);
							unk_0x2AEBE39F6BF7D6BC(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), fVar1);
							unk_0xB57A96BF24464D21(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x05EE5180C78E4990(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), fVar1);
							unk_0xE0002557891C8D8C(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), fVar1);
						}
						if (func_22(&(Local_93.f_336[bParam0 /*2*/])))
						{
							func_106(&(Local_93.f_336[bParam0 /*2*/]));
						}
						unk_0x8744D2E3FC95740E(&(Local_93.f_253), bParam0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_245), bParam0);
						unk_0x7AF89DBF250A2C27(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 1, iLocal_106);
						if (BitTest(Local_93.f_271, bParam0))
						{
							unk_0x8744D2E3FC95740E(&(Local_93.f_271), bParam0);
						}
						if (BitTest(Local_93.f_303, bParam0))
						{
							unk_0x8744D2E3FC95740E(&(Local_93.f_303), bParam0);
						}
						if (Local_93.f_240 == joaat("hydra") || Local_93.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_93.f_73[bParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()
{
	if (func_772())
	{
		return Global_262145.f_11846;
	}
	return Global_262145.f_11566;
}

int func_82(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
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
			func_83(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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

int func_84(bool bParam0, struct<3> Param1, int iParam2)
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

int func_85(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (BitTest(Local_96[iVar0 /*18*/].f_6, bParam0))
			{
				bVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (unk_0x00C6FDED3EB75117(iParam0) || unk_0xBA16CD57E37AC32A(iParam0));
	switch (Local_93.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_93.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_93.f_159[iParam1 /*3*/] };
				*uParam3 = Local_93.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_93.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_93.f_159[iParam1 /*3*/] };
				*uParam3 = Local_93.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_93.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_93.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_93.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)
{
	if (Local_93.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_93.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_93.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_93.f_207[iParam0 /*2*/]), Local_93.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_93.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_93.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_88()
{
	return Local_93.f_291[Local_93.f_279];
}

void func_89(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -1502696567;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 3, iParam1);
	}
}

int func_90(bool bParam0)
{
	if (bParam0 < 31)
	{
		return bParam0;
	}
	else if (bParam0 < 62)
	{
		return (bParam0 - 31);
	}
	return (bParam0 - func_91(bParam0) * 31);
}

int func_91(bool bParam0)
{
	if (bParam0 < 31)
	{
		return 0;
	}
	else if (bParam0 < 62)
	{
		return 1;
	}
	return (bParam0 / 31);
}

void func_92(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
		bVar0 = true;
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_1))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_7))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_7, 0))
		{
			if (unk_0xA23AABF378361F85(uParam0->f_7))
			{
				unk_0x2BF2F8E20C19583C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_93(bool bParam0)
{
	if (Local_93.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (BitTest(Local_93.f_272[func_91(bParam0)], func_90(bParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)
{
	return func_95(bParam0);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0xC35A3A4C05A4831B(Local_93.f_48[iParam0]), 0);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_96(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (BitTest(Local_93.f_271, bParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (BitTest(Local_93.f_271, bParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_93.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_93.f_27 == joaat("hydra"))
		{
			if (BitTest(Local_93.f_271, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 295801632;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 3, iParam1);
	}
}

int func_98()
{
	return Local_93.f_280[Local_93.f_279];
}

void func_99(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -324560767;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 3, iParam0);
	}
}

int func_100(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			iVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1));
			if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_73[bParam0]), 0))
			{
				if (unk_0x07DCBF1C62A9C503(iVar2, unk_0xE38610F405049F71(Local_93.f_73[bParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x3DC0E2D99138397E(iVar2, unk_0xE38610F405049F71(Local_93.f_73[bParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_101(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 1136184066;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 3, iParam0);
	}
}

bool func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[iParam0]));
	if (unk_0x00C6FDED3EB75117(iVar0) || unk_0xBA16CD57E37AC32A(iVar0))
	{
		return !unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_73[iParam0]), 0);
	}
	return !unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_73[iParam0]), 0);
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	switch (Local_93.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_93.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_93.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(int iParam0)
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
			if (func_873(bVar2, 0, 0))
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

int func_105()
{
	if (func_772())
	{
		return Global_262145.f_11839;
	}
	return Global_262145.f_11562;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_107(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0.f_0 = 2041805809;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam13 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Param0, 14, iParam13);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_873(bVar2, 1, 0))
		{
			if (!unk_0xCECDBB848D53DEB2(unk_0x56E414973C2A8C0E(bVar2), iParam0, 0))
			{
				if (unk_0x1864096A95E36EBA(bVar2) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) || !bParam2)
				{
					if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam1)
					{
						unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
					}
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_109(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_110(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_110(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
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

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_93.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_575))
	{
		func_20(&uLocal_575, 0, 0);
		return;
	}
	if (!func_19(&uLocal_575, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0xE38610F405049F71(Local_93.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_25(&(Local_93.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 20);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_93.f_12 != 0)
	{
		return Local_93.f_12;
	}
	if (!func_772())
	{
		Local_93.f_12 = 1;
		return Local_93.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (unk_0x762604C40829DB72(iVar2))
		{
			if (!func_16(bVar2, 0))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_93.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_93.f_12 = 3;
	}
	else
	{
		Local_93.f_12 = 4;
	}
	return Local_93.f_12;
}

int func_113()
{
	return Global_262145.f_11587;
}

int func_114()
{
	return Global_262145.f_11586;
}

void func_115()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_93.f_256[iVar0], Local_93.f_22[iVar0]);
		}
		else if (Local_93.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
			func_118(iVar0);
			if (Local_96[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_96[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_96[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_96[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_93.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_93.f_465[iVar1 /*4*/].f_1 > Local_93.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_93.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_93.f_465[iVar1 /*4*/];
					uVar4 = Local_93.f_465[iVar1 /*4*/].f_2;
					Local_93.f_465[iVar1 /*4*/].f_1 = Local_93.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_93.f_465[iVar1 /*4*/] = Local_93.f_465[(iVar1 - 1) /*4*/];
					Local_93.f_465[iVar1 /*4*/].f_2 = Local_93.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_93.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_93.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_93.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	Local_93.f_465[iParam2 /*4*/] = iParam0;
	Local_93.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_93.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)
{
	Local_93.f_465[iParam0 /*4*/] = -1;
	Local_93.f_465[iParam0 /*4*/].f_2 = -1;
	Local_93.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_93.f_594[iVar1 /*4*/].f_1 > Local_93.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_93.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_93.f_594[iVar1 /*4*/];
					uVar4 = Local_93.f_594[iVar1 /*4*/].f_2;
					Local_93.f_594[iVar1 /*4*/].f_1 = Local_93.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_93.f_594[iVar1 /*4*/] = Local_93.f_594[(iVar1 - 1) /*4*/];
					Local_93.f_594[iVar1 /*4*/].f_2 = Local_93.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_93.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_93.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_93.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	Local_93.f_594[iParam0 /*4*/] = iParam0;
	Local_93.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_93.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)
{
	Local_93.f_594[iParam0 /*4*/] = -1;
	Local_93.f_594[iParam0 /*4*/].f_1 = -1;
	Local_93.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_122()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_112();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		if (!func_123(bVar1))
		{
			func_106(&(Local_93.f_5));
			return 0;
		}
		if (!BitTest(Local_93.f_13, bVar1))
		{
			func_106(&(Local_93.f_5));
			return 0;
		}
		else if (func_4(unk_0xE38610F405049F71(Local_93.f_7[bVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_106(&(Local_93.f_5));
			return 0;
		}
		bVar1++;
	}
	if (!func_22(&(Local_93.f_5)))
	{
		func_20(&(Local_93.f_5), 0, 0);
	}
	else if (func_19(&(Local_93.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(bool bParam0)
{
	if (func_109(Local_93.f_7[bParam0]))
	{
		if (unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), -1, 0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_772())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar0]))
		{
			if (func_109(Local_93.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_93.f_12)
	{
		Local_93.f_12 = iVar1;
	}
	if (Local_93.f_12 <= 1)
	{
		unk_0x8744D2E3FC95740E(&(Local_93.f_3), 8);
		if (!func_109(Local_93.f_7[0]))
		{
			if (func_109(Local_93.f_7[iVar2]))
			{
				func_25(&(Local_93.f_7[0]));
				Local_93.f_7[0] = Local_93.f_7[iVar2];
			}
		}
	}
}

void func_125()
{
	bool bVar0;
	
	if (!func_772())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[0]))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_93.f_15 != false;
			}
			else
			{
				bVar0 = Local_93.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_93.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_93.f_413 == -1)
		{
			Local_93.f_413 = func_127();
		}
		if (!func_22(&(Local_93.f_326)))
		{
			func_20(&(Local_93.f_326), 0, 0);
		}
		else if (!BitTest(Local_93.f_3, 4))
		{
			if ((Local_93.f_413 - func_126(&(Local_93.f_326), 0, 0)) < 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_93.f_326)))
	{
		func_106(&(Local_93.f_326));
		Local_93.f_413 = (Local_93.f_413 - func_126(&(Local_93.f_326), 0, 0));
	}
}

int func_126(var uParam0, bool bParam1, bool bParam2)
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

var func_127()
{
	if (func_772())
	{
		return Global_262145.f_11849;
	}
	return Global_262145.f_11569;
}

void func_128()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		iLocal_109[bVar0] = 0;
		iLocal_95[bVar0] = -2;
		iLocal_110[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	if (Local_93.f_0 != 4)
	{
		bLocal_100 = false;
		while (bLocal_100 < unk_0x95C7A22DBE7AEF4C())
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(bLocal_100)))
			{
				bVar7 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bLocal_100));
				if (!func_16(bVar7, 0))
				{
					if (Local_96[bLocal_100 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					bVar0 = false;
					while (bVar0 < 4)
					{
						func_135(bLocal_100, bVar0, bVar7);
						bVar0++;
					}
					bVar0 = false;
					bVar0 = false;
					while (bVar0 < 5)
					{
						func_134(bLocal_100, bVar0);
						bVar0++;
					}
					if (!BitTest(Local_93.f_3, 14))
					{
						if (!BitTest(Local_96[bLocal_100 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					bVar0 = false;
					while (bVar0 <= 23)
					{
						func_133(bLocal_100, bVar0);
						bVar0++;
					}
					if (!bVar5)
					{
						if (!BitTest(Local_96[bLocal_100 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(bLocal_100, bVar7);
					if (func_873(bVar7, 1, 1))
					{
						bVar0 = false;
						bVar0 = false;
						while (bVar0 < 4)
						{
							if (Local_93.f_17[bVar0] == func_5())
							{
								if (BitTest(Local_96[bLocal_100 /*18*/].f_2, (0 + bVar0)))
								{
									Local_93.f_17[bVar0] = bVar7;
								}
							}
							else if (Local_93.f_17[bVar0] == bVar7 && Local_93.f_241 == 0)
							{
								if (!BitTest(Local_96[bLocal_100 /*18*/].f_2, (0 + bVar0)))
								{
									Local_93.f_17[bVar0] = func_5();
								}
							}
							bVar0++;
						}
					}
				}
			}
			bLocal_100++;
		}
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!BitTest(Local_93.f_13, bVar0))
		{
			if (iLocal_109[bVar0] == func_130() && func_123(bVar0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_13), bVar0);
			}
			if (!BitTest(Local_93.f_14, bVar0))
			{
				if (iLocal_109[bVar0] >= 1 && func_123(bVar0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_14), bVar0);
				}
			}
			else if (iLocal_109[bVar0] == 0 || !func_123(bVar0))
			{
				if (BitTest(Local_93.f_14, bVar0))
				{
					unk_0x8744D2E3FC95740E(&(Local_93.f_14), bVar0);
					if (iLocal_109[bVar0] == 0)
					{
						if (Local_93.f_241 >= 1)
						{
							if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[bVar0]))
							{
								func_25(&(Local_93.f_7[bVar0]));
							}
						}
					}
				}
			}
			if (!BitTest(Local_93.f_15, bVar0) && func_123(bVar0))
			{
				if (iLocal_109[bVar0] >= 2)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_15), bVar0);
				}
			}
			else if (iLocal_109[bVar0] <= 1 || !func_123(bVar0))
			{
				if (BitTest(Local_93.f_15, bVar0))
				{
					unk_0x8744D2E3FC95740E(&(Local_93.f_15), bVar0);
				}
			}
		}
		else if (iLocal_109[bVar0] < func_130() || !func_123(bVar0))
		{
			unk_0x8744D2E3FC95740E(&(Local_93.f_13), bVar0);
		}
		if (Local_93.f_266[bVar0] != iLocal_109[bVar0])
		{
			Local_93.f_266[bVar0] = iLocal_109[bVar0];
			if (Local_93.f_241 == 1)
			{
				if (Local_93.f_266[bVar0] == 0)
				{
					if (!BitTest(Local_93.f_616, bVar0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_616), bVar0);
					}
				}
			}
		}
		if (Local_93.f_241 == 0)
		{
			if (func_772())
			{
				if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[bVar0]))
				{
					iVar3 = unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[bVar0]));
					if (iLocal_109[bVar0] >= func_129(iVar3) && func_123(bVar0))
					{
						iLocal_110[bVar0] = 1;
					}
				}
			}
		}
		if (Local_93.f_241 == 1)
		{
			if (Local_93.f_256[bVar0] != iLocal_95[bVar0])
			{
				if (iLocal_95[bVar0] >= 0)
				{
					if (iLocal_95[bVar0] > Local_93.f_256[bVar0])
					{
						Local_93.f_256[bVar0] = iLocal_95[bVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_93.f_256[bVar0] - iLocal_95[bVar0]);
						if (Local_93.f_261[bVar0] != iVar8)
						{
							Local_93.f_261[bVar0] = iVar8;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!BitTest(Local_93.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 11);
		}
	}
	bVar0 = false;
	iVar9 = 0;
	if (Local_93.f_241 == 0)
	{
		if (func_772())
		{
			bVar0 = false;
			while (bVar0 < 4)
			{
				if (iLocal_110[bVar0])
				{
					iVar9++;
				}
				bVar0++;
			}
			if (!BitTest(Local_93.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0x8744D2E3FC95740E(&(Local_93.f_3), 9);
			}
		}
	}
	if (Local_93.f_241 == 0)
	{
		if (!func_22(&(Local_93.f_360)))
		{
			func_20(&(Local_93.f_360), 0, 0);
		}
		else if (func_19(&(Local_93.f_360), 5000, 0))
		{
			if (!BitTest(Local_93.f_3, 14))
			{
				if (func_772())
				{
					if (Local_93.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 14);
					}
				}
				else if (Local_93.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_93.f_614)
	{
		Local_93.f_614 = iVar1;
	}
	else
	{
		Local_93.f_613 = (Local_93.f_614 - iVar1);
	}
	if (iVar2 > Local_93.f_615)
	{
		Local_93.f_615 = iVar2;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_130()
{
	return Local_93.f_28;
}

void func_131(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!BitTest(Local_93.f_16, bParam0))
	{
		if (BitTest(Local_96[bParam0 /*18*/].f_2, 12))
		{
			func_132(bParam1, 1);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_16), bParam0);
		}
		else if (Local_93.f_241 >= 1)
		{
			if (Local_96[bParam0 /*18*/].f_1 == 0)
			{
				func_132(bParam1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_16), bParam0);
			}
			else if (Local_96[bParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar1]))
					{
						if (func_109(Local_93.f_7[iVar1]))
						{
							if (unk_0xCECDBB848D53DEB2(unk_0x56E414973C2A8C0E(bParam1), unk_0xE38610F405049F71(Local_93.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(bParam1, 1);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_16), bParam0);
				}
			}
		}
	}
	else if (Local_93.f_241 < 1)
	{
		if (!BitTest(Local_96[bParam0 /*18*/].f_2, 12))
		{
			func_132(bParam1, 0);
			unk_0x8744D2E3FC95740E(&(Local_93.f_16), bParam0);
		}
	}
}

void func_132(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar0]))
		{
			unk_0x60C8432F4C0BDD68(unk_0xE38610F405049F71(Local_93.f_7[iVar0]), bParam0, iParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, bool bParam1)
{
	if (!BitTest(Local_93.f_272[func_91(bParam1)], func_90(bParam1)))
	{
		if (BitTest(Local_96[iParam0 /*18*/].f_3[func_91(bParam1)], func_90(bParam1)))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_272[func_91(bParam1)]), func_90(bParam1));
			if (Local_96[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bParam1]))
			{
				if (!func_31(Local_93.f_48[bParam1]))
				{
					if (!func_94(bParam1))
					{
						unk_0x8744D2E3FC95740E(&(Local_93.f_272[func_91(bParam1)]), func_90(bParam1));
					}
					else if (!unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[bParam1]), 0))
					{
						if (bParam1 >= 20)
						{
							unk_0x8744D2E3FC95740E(&(Local_93.f_272[func_91(bParam1)]), func_90(bParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, bool bParam1)
{
	if (!BitTest(Local_93.f_271, bParam1))
	{
		if (BitTest(Local_96[iParam0 /*18*/].f_6, bParam1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_271), bParam1);
			if (Local_96[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (BitTest(Local_93.f_303, bParam1))
			{
				if (!BitTest(Local_93.f_253, bParam1))
				{
					Local_93.f_251 = (Local_93.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_93.f_252 > 0)
						{
							Local_93.f_302++;
							func_97(bParam1, func_104(1));
						}
					}
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_253), bParam1);
				}
				if (func_22(&(Local_93.f_336[bParam1 /*2*/])))
				{
					func_106(&(Local_93.f_336[bParam1 /*2*/]));
				}
				func_25(&(Local_93.f_73[bParam1]));
				unk_0x8744D2E3FC95740E(&(Local_93.f_303), bParam1);
			}
		}
	}
}

void func_135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_96[iParam0 /*18*/].f_1, bParam1))
	{
		iLocal_109[bParam1]++;
		if (iLocal_95[bParam1] < 0)
		{
			if (Local_96[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_93.f_261[bParam1] > 0)
				{
					iLocal_95[bParam1] = Local_93.f_261[bParam1];
				}
				else
				{
					iLocal_95[bParam1] = 0;
				}
			}
		}
		iLocal_95[bParam1] = (iLocal_95[bParam1] + Local_96[iParam0 /*18*/].f_8);
		if (Local_93.f_241 >= 1)
		{
			if (Local_93.f_22[bParam1] == func_5())
			{
				if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[bParam1]))
				{
					if (func_109(Local_93.f_7[bParam1]))
					{
						iVar1 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[bParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (unk_0x501EBB0523078750(iVar1))
							{
								iVar0 = unk_0x1C1C92A1CBAE364B(iVar1);
								if (iVar0 == bParam2)
								{
									Local_93.f_22[bParam1] = bParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_93.f_319, bParam1))
		{
			if (Local_96[iParam0 /*18*/].f_10 > -1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_319), bParam1);
				func_20(&(Local_93.f_349[bParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_93.f_22[bParam1] != func_5())
	{
		if (!unk_0x762604C40829DB72(Local_93.f_22[bParam1]))
		{
			iVar0 = func_136(bParam1, 1);
			if (iVar0 != func_5())
			{
				Local_93.f_22[bParam1] = iVar0;
			}
			else
			{
				Local_93.f_22[bParam1] = func_5();
			}
		}
		else if (func_16(Local_93.f_22[bParam1], 0))
		{
			Local_93.f_22[bParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = unk_0x56E414973C2A8C0E(Local_93.f_22[bParam1]);
			if (!unk_0x4FAFF4BCB7633475(iVar1))
			{
				if (func_109(Local_93.f_7[bParam1]))
				{
					if (!unk_0xCECDBB848D53DEB2(iVar1, unk_0xE38610F405049F71(Local_93.f_7[bParam1]), 0))
					{
						iVar0 = func_136(bParam1, 1);
						if (iVar0 != func_5())
						{
							Local_93.f_22[bParam1] = iVar0;
						}
						else
						{
							Local_93.f_22[bParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

bool func_136(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = func_5();
	if (bParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < unk_0x95C7A22DBE7AEF4C())
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar3)))
			{
				if (bVar0 == func_5())
				{
					if (Local_96[bVar3 /*18*/].f_17 == 1)
					{
						if (BitTest(Local_96[bVar3 /*18*/].f_1, bParam0))
						{
							if (!bParam1)
							{
								bVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar3));
							}
							else
							{
								bVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar3));
								if (func_109(Local_93.f_7[bParam0]))
								{
									iVar2 = unk_0x56E414973C2A8C0E(bVar1);
									if (!unk_0x4FAFF4BCB7633475(iVar2))
									{
										if (unk_0xCECDBB848D53DEB2(iVar2, unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 0))
										{
											bVar0 = bVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	return bVar0;
}

void func_137(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = 1134070037;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = iParam0;
	iVar1 = func_138(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 3, iVar1);
	}
}

var func_138(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_873(bVar2, 0, 0))
		{
			if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_16(bVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
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
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
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
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_140(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_141()
{
	func_112();
	if (func_70(Local_93.f_27))
	{
		if (func_142())
		{
			unk_0x55098D9E9AD58806(Local_93.f_27);
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	while (bVar0 < Local_93.f_12)
	{
		if (!unk_0x2FC2FDC413532977(Local_93.f_7[bVar0]))
		{
			if (func_70(Local_93.f_27))
			{
				if (!BitTest(Local_93.f_244, bVar0))
				{
					unk_0x2094BC4B6731BA68(Local_93.f_30[bVar0 /*3*/], 5f, 1, 0, 0, 1);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_244), bVar0);
				}
				if (func_82(&(Local_93.f_7[bVar0]), Local_93.f_27, Local_93.f_30[bVar0 /*3*/], Local_93.f_43[bVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0x6EF982A39E8D08FA(unk_0xF5014688C9788D5F(Local_93.f_7[bVar0]), 1, 1);
					unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1);
					unk_0x89E19F9D79DDCA80(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1);
					unk_0xD0794C48F637F16C(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0);
					unk_0xDD38B2935A3EAC56(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0, 0);
					unk_0x5D7CD709B34C90F0(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0);
					unk_0xC7D381E526A969D3(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1);
					unk_0x79B52EC5A9AB6229(unk_0xE38610F405049F71(Local_93.f_7[bVar0]));
					unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1, 1, 0);
					unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1);
					unk_0xAA588DD56719AE3A(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0);
					if (unk_0xBA16CD57E37AC32A(Local_93.f_27) || unk_0x00C6FDED3EB75117(Local_93.f_27))
					{
						unk_0xB57A96BF24464D21(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0);
						if (unk_0xBA16CD57E37AC32A(Local_93.f_27))
						{
							fVar1 = to_float(func_145());
						}
						else if (unk_0x00C6FDED3EB75117(Local_93.f_27))
						{
							fVar1 = to_float(func_144());
						}
						else
						{
							fVar1 = to_float(func_143());
						}
						unk_0xD25E9BDC14A0B649(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), round(fVar1), 0);
						unk_0xF0259D91B002AE9F(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), round(fVar1));
						unk_0xDF9DC0584881B7AF(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
						unk_0x3E7E7AD923FD91A7(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
						unk_0x2AEBE39F6BF7D6BC(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
						if (unk_0x00C6FDED3EB75117(Local_93.f_27))
						{
							unk_0x3DCEE0B40D1FEC94(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1);
						}
						if (unk_0xBA16CD57E37AC32A(Local_93.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x05EE5180C78E4990(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
							unk_0xE0002557891C8D8C(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0xBA16CD57E37AC32A(Local_93.f_27))
						{
							fVar1 = to_float(func_145());
						}
						else if (unk_0x00C6FDED3EB75117(Local_93.f_27))
						{
							fVar1 = to_float(func_144());
						}
						else
						{
							fVar1 = to_float(func_143());
						}
						unk_0xD25E9BDC14A0B649(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), round(fVar1), 0);
						unk_0xF0259D91B002AE9F(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), round(fVar1));
						unk_0xDF9DC0584881B7AF(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
						unk_0x3E7E7AD923FD91A7(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
						unk_0x2AEBE39F6BF7D6BC(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), fVar1);
					}
					unk_0xD05AF216D970F274(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1);
					if (Local_93.f_27 == joaat("savage"))
					{
					}
					if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
					{
						if (unk_0xD130E7CDEE903624(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), "MPBitset"))
						{
							iVar2 = unk_0xE2F6FE9B61232165(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), "MPBitset");
						}
						unk_0x0B0C9A0F9AAEB7F0(&iVar2, 10);
						unk_0x0B0C9A0F9AAEB7F0(&iVar2, 15);
						unk_0xEE8559BBFC27701B(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), "MPBitset", iVar2);
					}
					unk_0x5355DCB5D35ADF0F(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0, iLocal_106);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0x5355DCB5D35ADF0F(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0, Global_1837175[iVar3]);
						iVar3++;
					}
					unk_0xF5706A3E4A060916(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0, 0);
					unk_0xCF9C21E54DB720B8(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0);
					unk_0x935364B4448CD584(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1);
					unk_0x6BFFBDE3C98A828E(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), false);
					unk_0xF977D20CFFFD341F(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < Local_93.f_12)
	{
		if (!unk_0x2FC2FDC413532977(Local_93.f_7[bVar0]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var func_143()
{
	if (func_772())
	{
		return Global_262145.f_11843;
	}
	return Global_262145.f_11582;
}

var func_144()
{
	if (func_772())
	{
		return Global_262145.f_11844;
	}
	return Global_262145.f_11583;
}

var func_145()
{
	if (func_772())
	{
		return Global_262145.f_11842;
	}
	return Global_262145.f_11581;
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_93.f_362)))
	{
		func_20(&(Local_93.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_93.f_362), 3000, 0))
	{
		return 0;
	}
	if (!BitTest(Local_93.f_3, 10))
	{
		if (func_160(&iVar0))
		{
			if (iVar0 < func_159())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 10);
			}
			else
			{
				iVar1 = unk_0xC5935DFB3F39785A(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11837) && !Global_262145.f_11835) || Global_262145.f_11836)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 8);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 10);
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 10);
				}
			}
		}
	}
	if (BitTest(Local_93.f_3, 10))
	{
		if (Local_93.f_12 == 0)
		{
			func_112();
			return 0;
		}
		if (!BitTest(Local_93.f_3, 13))
		{
			if (func_155())
			{
				if (!func_153(129, Local_93.f_1, Local_93.f_2, 0))
				{
					if (func_147())
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 13);
					}
					else
					{
						Local_93.f_29 = -1;
					}
				}
				else
				{
					Local_93.f_29 = -1;
				}
			}
		}
	}
	return BitTest(Local_93.f_3, 13);
}

int func_147()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_148(Local_93.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_93.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_148(struct<3> Param0, float fParam1)
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	
	if (Global_2656005.f_381.f_225 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_2656005.f_381[iVar2 /*7*/] != -1)
		{
			iVar0[iVar1] = unk_0x70E57E9927B6BA58(&(Global_2656005.f_381[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_2656005.f_381.f_225)
			{
				bVar3 = false;
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			bVar3 = false;
		}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	Var4 = { 0f, 0f, 0f };
	Var5 = { Param0 };
	iVar6 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	iVar8 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1573885)
	{
		if (BitTest(Global_4543624[iVar2 /*26*/].f_12, 11))
		{
			Var4 = { Global_4543624[iVar2 /*26*/].f_3 };
			Var5.f_2 = Var4.f_2;
			if (unk_0xED977E2AE2CB16EE(Var4, Var5, 1) < fParam1)
			{
				Var7 = { Global_4543624[iVar2 /*26*/].f_15 };
				iVar8 = func_149(&Var7);
				iVar6 = 0;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 1;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_149(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_150(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_159989[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_978406.f_28205[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_150(var uParam0)
{
	int iVar0;
	
	if (unk_0xD6F9DEE4765092A9(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_152(uParam0->f_1))
	{
		if (func_151(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1818)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x1B79E937E91F40C3(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_978406.f_1804[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_978406.f_1804[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 300)
			{
				if (BitTest(Global_978406.f_1804[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x1B79E937E91F40C3(&(Global_978406.f_1804[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		if (BitTest(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&(Global_1010831.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1010831.f_4[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1010831.f_4[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x1B79E937E91F40C3(&(Global_1010831.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_151(var uParam0)
{
	if (Global_2628582)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_2628582.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	return iParam0 == 9999;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_154(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8577)
		{
			if (Global_2756259.f_136[iVar0 /*2*/] == iVar1 && Global_2756259.f_136[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_155()
{
	if (func_157(&(Local_93.f_27)))
	{
		if (Local_93.f_4)
		{
			func_156();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_156()
{
	Global_1945089 = 1;
	if (!BitTest(Global_2802660, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_2802660, false);
		unk_0x0B0C9A0F9AAEB7F0(&Global_1945090, false);
	}
	if (!BitTest(Global_2802660, 1))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_2802660, true);
		unk_0x0B0C9A0F9AAEB7F0(&Global_1945090, true);
	}
	if (!BitTest(Global_2802660, 5))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_2802660, 5);
		unk_0x0B0C9A0F9AAEB7F0(&Global_1945090, 5);
	}
	if (unk_0x116053132936EA1F(-355737150))
	{
		unk_0xEBB2809684978887(-355737150, 0, 0, 0);
	}
	if (unk_0x116053132936EA1F(-580979506))
	{
		unk_0xEBB2809684978887(-580979506, 0, 0, 0);
	}
	if (unk_0x116053132936EA1F(-1426452475))
	{
		unk_0xEBB2809684978887(-1426452475, 0, 0, 0);
	}
	if (unk_0x116053132936EA1F(745417724))
	{
		unk_0xEBB2809684978887(745417724, 0, 0, 0);
	}
	if (unk_0x116053132936EA1F(-1305304906))
	{
		unk_0xEBB2809684978887(-1305304906, 0, 0, 0);
	}
	if (unk_0x116053132936EA1F(-1543175077))
	{
		unk_0xEBB2809684978887(-1543175077, 0, 0, 0);
	}
	if (unk_0x116053132936EA1F(-811770997))
	{
		unk_0xEBB2809684978887(-811770997, 0, 0, 0);
	}
}

int func_157(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_158(joaat("rhino")))
			{
				Local_93.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_158(joaat("hydra")))
			{
				Local_93.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_93.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_158(joaat("savage")))
			{
				Local_93.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_93.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_158(joaat("valkyrie")))
			{
				Local_93.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_158(joaat("buzzard")))
			{
				Local_93.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (!func_772())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11571;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11573;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11572;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11575;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11574;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11851;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11853;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11852;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11855;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11854;
				break;
			}
	}
	return 0;
}

int func_159()
{
	return Global_262145.f_11585;
}

int func_160(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_93.f_334)))
	{
		func_20(&(Local_93.f_334), 0, 0);
	}
	else if (func_19(&(Local_93.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x95C7A22DBE7AEF4C())
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
			{
				if (!func_16(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar0)), 0))
				{
					if (!BitTest(Local_96[bVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

int func_161(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_163()
{
	struct<3> Var0;
	
	if (iLocal_582 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iLocal_582]))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_93.f_7[iLocal_582]))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[iLocal_582]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_93.f_7[iLocal_582]));
				}
			}
		}
	}
	iLocal_582++;
	if (iLocal_582 >= 4)
	{
		iLocal_582 = 0;
	}
}

void func_164()
{
	if (func_16(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 1)
	{
		if (!BitTest(uLocal_98, 13))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 13);
			unk_0x3DDE6E86B8024EEE(1, 0);
		}
	}
	else if (BitTest(uLocal_98, 13))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x3DDE6E86B8024EEE(0, 0);
				unk_0x8744D2E3FC95740E(&uLocal_98, 13);
			}
		}
	}
}

void func_165()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	if (func_430())
	{
		func_278(0);
	}
	iVar0 = Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_802;
	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
	{
		Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (unk_0x762604C40829DB72(iVar0))
		{
			if (unk_0xCCD470854FB0E643(bVar0))
			{
				uVar1 = unk_0x857CA6FCE5E9C84F(bVar0);
				iVar2 = uVar1;
				iVar3 = Local_96[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_200();
						func_197(iVar2);
						break;
					
					case 1:
						func_196();
						func_170();
						func_166(1);
						break;
					
					case 2:
						func_166(0);
						break;
					}
				}
			}
	}
}

void func_166(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (bParam0)
		{
			func_167(Local_93.f_48[bVar0], &(Local_105[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
		}
		else
		{
			func_167(Local_93.f_48[bVar0], &(Local_105[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1, 0, 0);
		}
		if (unk_0xC450B06E5AAA0985(Local_105[bVar0 /*8*/]))
		{
			unk_0x594D5D0D7071B0DE(Local_105[bVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x360B279488A775FC(Local_105[bVar0 /*8*/], 1);
			}
		}
		if (unk_0xC450B06E5AAA0985(Local_105[bVar0 /*8*/].f_1))
		{
			unk_0x594D5D0D7071B0DE(Local_105[bVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x360B279488A775FC(Local_105[bVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_93.f_27 != joaat("hydra"))
		{
			if (BitTest(Local_93.f_272[func_91(bVar0)], func_90(bVar0)) || BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar0)], func_90(bVar0)))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar0]))
				{
					func_92(&(Local_105[bVar0 /*8*/]));
				}
			}
		}
		else if ((bVar0 % 4) == 0)
		{
			iVar1 = (bVar0 / 4);
			if (BitTest(Local_93.f_271, iVar1) || BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6, iVar1))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar0]))
				{
					func_92(&(Local_105[bVar0 /*8*/]));
				}
			}
		}
		bVar0++;
	}
}

void func_167(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		if (func_169(0))
		{
			Global_2672505 = unk_0x259BE71D8A81D4FA();
		}
		if (bParam3)
		{
			func_168(unk_0xC35A3A4C05A4831B(uParam0), uParam1, 1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_168(unk_0xC35A3A4C05A4831B(uParam0), uParam1, -1, Global_2672505, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (unk_0xC450B06E5AAA0985(*uParam1))
	{
		func_92(uParam1);
	}
}

int func_168(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6B621402486C3E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xA23AABF378361F85(iParam0))
		{
			bVar0 = true;
			if (unk_0x1F7A48429F9F64CE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x2BF2F8E20C19583C(iParam0, 1);
				}
				else
				{
					unk_0xF42995E2FC0559E0(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0x8B185FD7C0308117(iParam0, iParam2);
				unk_0x9FFBD1A17AAE3E0D(iParam0, fParam6);
				if (unk_0xC450B06E5AAA0985(*uParam1))
				{
					unk_0x1456FD5C0C438B19(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x12022943BDF6F088(iParam0, iParam9);
		}
		unk_0xB070F32F5FE88A2A(iParam0, uParam4);
		unk_0x2A253D5DC7CA1CEC(iParam0, uParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(uParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(sParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(sParam7);
					}
					unk_0xFB605529038475D2(*uParam1);
				}
				unk_0x1456FD5C0C438B19(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x7F420695E3F776FB(iParam0, 0))
		{
			uParam1->f_1 = unk_0x294B0261C20A78E0(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xC450B06E5AAA0985(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61183D6239A9D7B8(uParam1->f_1, iParam8);
					}
					if (!unk_0xD6F9DEE4765092A9(sParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(sParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(sParam7);
						}
						unk_0xFB605529038475D2(uParam1->f_1);
					}
					unk_0x1456FD5C0C438B19(uParam1->f_1, 7);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xC450B06E5AAA0985(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_169(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_170()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	
	iVar2 = (func_34() - func_126(&(Local_93.f_332), 0, 0));
	if (iLocal_560 == 0)
	{
		if (BitTest(uLocal_97, 26))
		{
			if ((BitTest(Local_93.f_3, 0) && BitTest(Local_93.f_3, 1)) && BitTest(Local_93.f_3, 2))
			{
				iLocal_560 = (func_34() - func_126(&(Local_93.f_332), 0, 0));
				iVar2 = iLocal_560;
			}
		}
	}
	else
	{
		iVar2 = iLocal_560;
	}
	if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 11))
	{
		return;
	}
	if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_772())
	{
		iVar0 = (((Local_93.f_256[0] + Local_93.f_256[1]) + Local_93.f_256[2]) + Local_93.f_256[3]);
	}
	else
	{
		iVar0 = Local_93.f_256[0];
	}
	func_192(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_772())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar9 = unk_0xB23E0F9B63D009A8(Local_93.f_594[iVar1 /*4*/].f_2);
			if (iVar9 != func_5())
			{
				if (unk_0x762604C40829DB72(iVar9))
				{
					sVar4[iVar1] = unk_0xBD6CA019F46AB947(bVar9);
					iVar6[iVar1] = Local_93.f_594[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_93.f_594[iVar1 /*4*/];
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_93.f_332), 0, 0)) >= 0)
		{
			if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
			{
				func_188(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, func_189(), iVar8);
			}
			else
			{
				func_186(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, func_189(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_93.f_255)
		{
			iVar0 = Local_93.f_255;
		}
		if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
		{
			func_185(unk_0xBD6CA019F46AB947(unk_0x259BE71D8A81D4FA()), iVar0, iVar0, Local_93.f_255, iVar2, iVar3, 0, func_189());
		}
		else
		{
			func_171(iVar0, iVar0, Local_93.f_255, iVar2, iVar3, 0, func_189(), 1);
		}
		if (bVar5)
		{
			func_115();
		}
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar1;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_177(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN";
	if (!func_175(sParam6))
	{
		sVar1 = sParam6;
	}
	func_172(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_172(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_174(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_173(7, bVar0);
		Global_1655472.f_4659[bVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4659.f_172[bVar0] = iParam2;
		Global_1655472.f_4659.f_216[bVar0] = iParam3;
		Global_1655472.f_4659.f_183[bVar0] = iParam4;
		Global_1655472.f_4659.f_194[bVar0] = iParam5;
		Global_1655472.f_4659.f_249[bVar0] = iParam6;
		Global_1655472.f_4659.f_260[bVar0] = iParam7;
		Global_1655472.f_4659.f_205[bVar0] = iParam8;
		Global_1655472.f_4659.f_314[bVar0] = iParam9;
		Global_1655472.f_4659.f_325[bVar0] = iParam10;
		Global_1655472.f_4659.f_357[bVar0] = iParam11;
		Global_1655472.f_4659.f_238[bVar0] = iParam12;
		Global_1655472.f_4659.f_271[bVar0] = iParam13;
		Global_1655472.f_4659.f_368[bVar0] = iParam14;
		Global_1655472.f_4659.f_379[bVar0] = iParam15;
		Global_1655472.f_4659.f_390[bVar0] = iParam16;
		Global_1655472.f_4659.f_227[bVar0] = iParam17;
	}
}

void func_173(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1655472.f_7009[iParam0]), bParam1);
}

int func_174(int iParam0, int iParam1)
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

int func_175(char* sParam0)
{
	if (unk_0xFF692AB7350A74D7(uParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(uParam0, "") || unk_0x1B79E937E91F40C3(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_174(4, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_173(4, bVar0);
		Global_1655472.f_3347[bVar0] = iParam0;
		Global_1655472.f_3347.f_172[bVar0] = iParam1;
		StringCopy(&(Global_1655472.f_3347.f_11[bVar0 /*16*/]), sParam2, 64);
		Global_1655472.f_3347.f_183[bVar0] = iParam3;
		Global_1655472.f_3347.f_216[bVar0] = iParam5;
		Global_1655472.f_3347.f_194[bVar0] = iParam4;
		Global_1655472.f_3347.f_227[bVar0] = iParam6;
		Global_1655472.f_3347.f_270[bVar0] = iParam7;
		Global_1655472.f_3347.f_281[bVar0] = iParam8;
		Global_1655472.f_3347.f_292[bVar0] = iParam9;
		Global_1655472.f_3347.f_303[bVar0] = iParam10;
		Global_1655472.f_3347.f_314[bVar0] = iParam11;
		Global_1655472.f_3347.f_325[bVar0] = iParam13;
		Global_1655472.f_3347.f_336[bVar0] = iParam14;
		Global_1655472.f_3347.f_347[bVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x761778199FE1211C()) && iParam12)
		{
			Global_1655472.f_1172 = 1;
		}
	}
}

void func_177(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_174(6, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_173(6, bVar0);
		Global_1655472.f_4041[bVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4041.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4041.f_183[bVar0] = iParam3;
		Global_1655472.f_4041.f_172[bVar0] = iParam2;
		Global_1655472.f_4041.f_260[bVar0] = iParam4;
		Global_1655472.f_4041.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1655472.f_4041.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1655472.f_4041.f_443[bVar0] = iParam7;
		Global_1655472.f_4041.f_454[bVar0] = iParam8;
		Global_1655472.f_4041.f_497[bVar0] = iParam9;
		Global_1655472.f_4041.f_508[bVar0] = iParam10;
		Global_1655472.f_4041.f_205[bVar0] = iParam11;
		Global_1655472.f_4041.f_216[bVar0] = iParam12;
		Global_1655472.f_4041.f_227[bVar0] = iParam13;
		Global_1655472.f_4041.f_238[bVar0] = iParam14;
		Global_1655472.f_4041.f_249[bVar0] = iParam15;
		Global_1655472.f_4041.f_519[bVar0] = iParam16;
		Global_1655472.f_4041.f_530[bVar0] = iParam17;
		Global_1655472.f_4041.f_541[bVar0] = iParam18;
		Global_1655472.f_4041.f_552[bVar0] = iParam19;
		Global_1655472.f_4041.f_563[bVar0] = iParam20;
		Global_1655472.f_4041.f_574[bVar0] = iParam21;
		Global_1655472.f_4041.f_585[bVar0] = iParam22;
		Global_1655472.f_4041.f_596[bVar0] = iParam23;
		Global_1655472.f_4041.f_607[bVar0] = iParam24;
		Global_1655472.f_4041.f_194[bVar0] = iParam25;
		if (iParam15 == 5 && func_179())
		{
			Global_1655472.f_1172 = 1;
		}
		if (unk_0x761778199FE1211C())
		{
			iVar2 = 0;
			unk_0x21564F65F997D833(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1655472.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1655472.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1655472.f_1172 = 1;
			}
			if (func_178())
			{
				Global_1655472.f_1176 = 1;
			}
		}
	}
}

int func_178()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x761778199FE1211C())
	{
		unk_0x21564F65F997D833(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_179()
{
	if (((unk_0x8608526719A575EE() == 8 || unk_0x8608526719A575EE() == 9) || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(7);
	Global_2696216 = 1;
}

void func_181()
{
	Global_1655472.f_1172 = 1;
}

int func_182(bool bParam0)
{
	if (func_184())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_873(unk_0x259BE71D8A81D4FA(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_183()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

bool func_184()
{
	return BitTest(Global_2621446, 12);
}

void func_185(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_180();
	func_181();
	if (bParam6)
	{
		func_177(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_175(sParam7))
	{
		sVar0 = sParam7;
	}
	func_172(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam0 > -1)
	{
		Var0 = { func_187(iParam1) };
		iVar1 = 1;
		if (iParam11 == iParam1)
		{
			iVar1 = 9;
		}
		func_177(iParam0, &Var0, -1, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_187(iParam3) };
		iVar2 = 1;
		if (iParam11 == iParam3)
		{
			iVar2 = 9;
		}
		func_177(iParam2, &Var0, -1, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_187(iParam5) };
		iVar3 = 1;
		if (iParam11 == iParam5)
		{
			iVar3 = 9;
		}
		func_177(iParam4, &Var0, -1, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_187(iParam7) };
		iVar4 = 1;
		if (iParam11 == iParam7)
		{
			iVar4 = 9;
		}
		func_177(iParam6, &Var0, -1, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar5 = "HUD_COUNTDOWN";
	if (!func_175(sParam10))
	{
		sVar5 = sParam10;
	}
	func_172(iParam8, sVar5, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_187(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0xFACCDE46E24AD056("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_188(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_177(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_177(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_177(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_177(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_175(sParam14))
	{
		sVar4 = sParam14;
	}
	func_172(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_189()
{
	return "HUD_COUNTDOWN";
	switch (func_191(unk_0x259BE71D8A81D4FA()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_190()
{
	if (func_191(unk_0x259BE71D8A81D4FA()) == 133)
	{
		return Global_2793046.f_5146;
	}
	return -1;
}

int func_191(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/];
	}
	return -1;
}

void func_192(int iParam0)
{
	if (func_194(unk_0x259BE71D8A81D4FA()) || func_193(unk_0x259BE71D8A81D4FA()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < unk_0x0B852B0BF94A8DC1())
	{
		if (BitTest(Global_2793046.f_5062, 0))
		{
			if (!unk_0xD6F9DEE4765092A9(&(Global_2793046.f_5064)))
			{
				unk_0x166878629B365828(&(Global_2793046.f_5064));
			}
			unk_0x938C85923AD6778A(1);
			unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_FIRA");
			unk_0xB43467C43086A6A1("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
			unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
			unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 0);
			if (Global_2793046.f_5072 > -1)
			{
				unk_0x394AFAC073E1F277(Global_2793046.f_5072);
				Global_2793046.f_5072 = -1;
			}
			Global_2793046.f_5062 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2793046.f_5062, 0))
		{
			if (BitTest(Global_2793046.f_5062, 4))
			{
				if (!BitTest(Global_2793046.f_5062, 2))
				{
					if (unk_0x2044128E627E0951())
					{
						if ((!unk_0x1B79E937E91F40C3(unk_0x9A7254C20CB82B70(unk_0xE1799BB6E4C1CDFB()), "OFF") && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !unk_0xD6F9DEE4765092A9(&(Global_2793046.f_5064)))
						{
							StringCopy(&(Global_2793046.f_5064), "", 32);
							unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_FIRA");
							unk_0xB43467C43086A6A1("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
							unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
							unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 0);
							unk_0x938C85923AD6778A(1);
							unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), 2);
						}
					}
				}
				else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && BitTest(Global_2793046.f_5062, 5))
				{
					unk_0x166878629B365828("OFF");
				}
			}
			else if (!BitTest(Global_2793046.f_5062, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S");
				}
				unk_0xCAC4020CCF361AC8("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), true);
			}
			else if (!BitTest(Global_2793046.f_5062, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x3BB0DC333050E9BD() != 0)
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !unk_0x93D3C066DE3C5879())
						{
							StringCopy(&(Global_2793046.f_5064), unk_0xA9CB3A11303C5801(), 32);
							unk_0x166878629B365828("OFF");
						}
						unk_0x938C85923AD6778A(1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2793046.f_5062, 3))
				{
					Global_2793046.f_5072 = unk_0xCA369FBC0DE29517();
					unk_0xBF3D28CA44F3BE2D(Global_2793046.f_5072, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2793046.f_5062, 0))
			{
				Global_2793046.f_5062 = 0;
				Global_2793046.f_5072 = -1;
				unk_0x16088CC55E7F218A("FM_COUNTDOWN_30S_KILL");
				unk_0x938C85923AD6778A(0);
				unk_0x86A2BC11844DEEB3("FM_PRE_COUNTDOWN_30S");
				unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
				unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 1);
				unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), false);
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || BitTest(Global_2793046.f_5062, 2))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), 2);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), 5);
				}
				else
				{
					unk_0x8744D2E3FC95740E(&(Global_2793046.f_5062), 5);
					unk_0x8744D2E3FC95740E(&(Global_2793046.f_5062), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2793046.f_5062, 0))
		{
			Global_2793046.f_5062 = 0;
			Global_2793046.f_5072 = -1;
			unk_0x16088CC55E7F218A("FM_COUNTDOWN_30S_KILL");
			unk_0x938C85923AD6778A(0);
			unk_0x86A2BC11844DEEB3("FM_PRE_COUNTDOWN_30S");
			unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
			unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 1);
			unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 1);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), false);
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), 2);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), 5);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_2793046.f_5062), 2);
				unk_0x8744D2E3FC95740E(&(Global_2793046.f_5062), 5);
			}
		}
	}
}

int func_193(int iParam0)
{
	if (iParam0 != func_5() && func_873(iParam0, 1, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_321.f_17;
	}
	return -1;
}

int func_194(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_873(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_195(Global_2657589[iParam0 /*466*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
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

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_104[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uLocal_104[iVar0]));
		}
		iVar0++;
	}
}

void func_197(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!unk_0xC450B06E5AAA0985(uLocal_104[bVar0]))
		{
			if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[bVar0]))
			{
				if (!BitTest(Local_93.f_13, bVar0))
				{
					if (!BitTest(Local_96[iParam0 /*18*/].f_1, bVar0))
					{
						uLocal_104[bVar0] = unk_0x18E23E031A9B798F(unk_0xE38610F405049F71(Local_93.f_7[bVar0]));
						unk_0x4C905FB262965D5D(uLocal_104[bVar0], 429);
						func_198(&(uLocal_104[bVar0]), 29);
						if (func_772())
						{
							unk_0x594D5D0D7071B0DE(uLocal_104[bVar0], "UW_BLIPC");
						}
						else
						{
							unk_0x594D5D0D7071B0DE(uLocal_104[bVar0], "UW_BLIP");
						}
						unk_0x1456FD5C0C438B19(uLocal_104[bVar0], 9);
					}
					else if (unk_0xC450B06E5AAA0985(uLocal_104[bVar0]))
					{
						unk_0xFE54B8568B2ABD12(&(uLocal_104[bVar0]));
					}
				}
				else if (unk_0xC450B06E5AAA0985(uLocal_104[bVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uLocal_104[bVar0]));
				}
			}
		}
		bVar0++;
	}
}

void func_198(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		uVar0 = func_199(iParam1);
		unk_0x61183D6239A9D7B8(*uParam0, uVar0);
	}
}

int func_199(int iParam0)
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

void func_200()
{
	bool bVar0;
	
	bVar0 = func_270();
	if (bVar0)
	{
		if (Local_93.f_413 > -1)
		{
			if ((Local_93.f_413 - func_126(&(Local_93.f_326), 0, 0)) >= 0)
			{
				if (!func_204())
				{
					func_203((Local_93.f_413 - func_126(&(Local_93.f_326), 0, 0)));
					func_201((Local_93.f_413 - func_126(&(Local_93.f_326), 0, 0)), func_202(-1));
				}
			}
			else
			{
				if (!func_204())
				{
					func_201(0, func_202(-1));
				}
				if (unk_0x93E08E0F531E2C35())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_3), 4);
				}
			}
		}
	}
}

void func_201(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_175(sParam1))
	{
		sVar0 = sParam1;
	}
	func_172(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_202(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x1AF90EB93E0012D6();
	return "HUD_STARTING";
	if (unk_0x1B79E937E91F40C3(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x1B79E937E91F40C3(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_203(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x0B852B0BF94A8DC1())
	{
		Global_2793046.f_5062 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2793046.f_5062, 1))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2793046.f_5062 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5062), true);
		}
	}
}

bool func_204()
{
	bool bVar0;
	var uVar1;
	
	if (func_268(17))
	{
		bVar0 = true;
	}
	if (!func_258(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_211(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 9))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				uVar1 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
				if (!unk_0xD9F5E1FEFD1329E4(uVar1, 0))
				{
					func_209(0, -1);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 9))
	{
		unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 9);
	}
	if (Global_1935176)
	{
		bVar0 = true;
	}
	if (func_208(unk_0x259BE71D8A81D4FA()))
	{
		bVar0 = true;
	}
	if (func_207(unk_0x259BE71D8A81D4FA(), 2))
	{
		bVar0 = true;
	}
	if (func_205(unk_0x259BE71D8A81D4FA()))
	{
		bVar0 = true;
	}
	return bVar0;
}

int func_205(int iParam0)
{
	if (func_206(iParam0))
	{
		return 1;
	}
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 8);
}

bool func_206(int iParam0)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 2);
}

bool func_207(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_208(int iParam0)
{
	if (!func_873(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2);
}

void func_209(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1853783)
		{
			if (!func_268(func_210(iParam1)))
			{
				Global_1853783 = 1;
			}
		}
	}
	else if (Global_1853783)
	{
		Global_1853783 = 0;
	}
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return 11;
		
		case 133:
			return 12;
		
		case 136:
			return 19;
		
		case 138:
			return 14;
		
		case 139:
			return 15;
		
		case 129:
			return 17;
		
		case 141:
			return 18;
		
		case 144:
			return 13;
		
		case 146:
			return 16;
		
		case 236:
			return 20;
		
		case 150:
			return 20;
		
		default:
	}
	return Global_262145.f_24142;
}

int func_211(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_257(unk_0x259BE71D8A81D4FA(), 14))
	{
		return 0;
	}
	if (func_207(unk_0x259BE71D8A81D4FA(), 21))
	{
		return 0;
	}
	if (func_207(unk_0x259BE71D8A81D4FA(), 25))
	{
		return 0;
	}
	if (unk_0xF859473E4AD09F30())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x0721B5D4CF3ACD02())
		{
			return 0;
		}
	}
	if (func_255(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_253(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (func_252())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_251(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	else if (func_236(unk_0x259BE71D8A81D4FA()) == 3)
	{
		return 0;
	}
	if (func_235(unk_0x259BE71D8A81D4FA()) != func_5() && func_235(unk_0x259BE71D8A81D4FA()) == func_65(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_232(unk_0x259BE71D8A81D4FA(), 3))
	{
		return 0;
	}
	if (func_230(func_231()) && !func_229(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_228())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	if (func_226(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_224())
	{
		return 0;
	}
	if (func_207(unk_0x259BE71D8A81D4FA(), 0) || func_207(unk_0x259BE71D8A81D4FA(), 3))
	{
		return 0;
	}
	if ((func_207(unk_0x259BE71D8A81D4FA(), 12) || func_207(unk_0x259BE71D8A81D4FA(), 14)) || func_207(unk_0x259BE71D8A81D4FA(), 13))
	{
		return 0;
	}
	if (func_223(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (!func_222() && !Global_2764489)
		{
			return 0;
		}
	}
	if (func_221(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_220())
	{
		return 0;
	}
	if (Global_1935176)
	{
		return 0;
	}
	if (func_208(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_219())
	{
		return 0;
	}
	if (func_217(unk_0x259BE71D8A81D4FA()) && Global_1853556.f_172)
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	if (Global_2792082)
	{
		return 0;
	}
	if (Global_1968331)
	{
		return 0;
	}
	if (func_214(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_213(unk_0x259BE71D8A81D4FA()))
	{
		if (func_212(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	return 1;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890444[iVar0 /*129*/].f_77.f_51 != 0;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 7);
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_5())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 4);
	}
	return 0;
}

bool func_215()
{
	return Global_2764907;
}

bool func_216()
{
	return Global_1950108.f_528;
}

int func_217(int iParam0)
{
	if (func_218(Global_1853910[iParam0 /*862*/].f_267.f_33))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
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

int func_219()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_220()
{
	return Global_100733.f_388 > 0;
}

bool func_221(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 11);
}

bool func_222()
{
	return BitTest(Global_1962996, 5);
}

int func_223(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853910[iParam0 /*862*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_224()
{
	if (func_225() == 0)
	{
		return 1;
	}
	return 0;
}

int func_225()
{
	return Global_1574632.f_18;
}

bool func_226(int iParam0)
{
	return func_227(iParam0);
}

var func_227(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

bool func_228()
{
	return Global_1575060;
}

int func_229(int iParam0)
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
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

int func_231()
{
	return Global_2672505.f_2514[0 /*80*/].f_1;
}

int func_232(int iParam0, int iParam1)
{
	if (func_234(iParam0, 0))
	{
		return func_233(Global_1894573[iParam0 /*608*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_233(int iParam0)
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

int func_234(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_10.f_35;
}

int func_236(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_250(iParam0) && !func_206(iParam0)) && !BitTest(Global_1894573[iParam0 /*608*/].f_1, 8));
	bVar2 = func_251(iParam0);
	bVar3 = func_249();
	uVar4 = func_241();
	if ((bVar1 && (func_213(iParam0) || func_240(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_239(iParam0)) && !func_237(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2793046.f_5225.f_220 != iVar0)
	{
		Global_2793046.f_5225.f_220 = iVar0;
	}
	return iVar0;
}

bool func_237(int iParam0)
{
	return func_238(iParam0, 19);
}

var func_238(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_238(iParam0, 9);
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_241()
{
	if ((func_238(unk_0x259BE71D8A81D4FA(), 21) || func_238(unk_0x259BE71D8A81D4FA(), 22)) || func_246())
	{
		return 1;
	}
	if (func_243())
	{
		func_242(22);
		return 1;
	}
	return 0;
}

void func_242(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_4), bParam0);
}

int func_243()
{
	if (func_234(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (((func_249() && !func_245()) || func_207(unk_0x259BE71D8A81D4FA(), 21)) || func_207(unk_0x259BE71D8A81D4FA(), 25))
		{
			return 1;
		}
		else
		{
			func_244(27);
		}
	}
	return 0;
}

void func_244(bool bParam0)
{
	unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_4), bParam0);
}

bool func_245()
{
	return Global_1574582.f_1;
}

int func_246()
{
	return func_247(424, -1);
}

int func_247(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_248(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

bool func_249()
{
	return Global_1574582;
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

bool func_251(int iParam0)
{
	return func_238(iParam0, 20);
}

bool func_252()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 5;
}

int func_253(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_272.f_4 != 0 || Global_2657589[iParam0 /*466*/].f_272.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 0);
}

int func_255(int iParam0)
{
	if (func_256(iParam0, 1, 0))
	{
		if (Global_1853910[iParam0 /*862*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_226(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_257(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_5, iParam1);
}

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8146 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_262(unk_0x259BE71D8A81D4FA(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4747 == 1)
		{
			return 1;
		}
	}
	if (func_261() || func_260())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_259())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836844[iVar1], iVar0);
}

int func_259()
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2793046.f_1824, 23))
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	uVar0 = Global_1665626[func_248(-1)];
	if (BitTest(uVar0, 7))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1824), 23);
		return 1;
	}
	return 0;
}

bool func_260()
{
	return Global_1575048;
}

bool func_261()
{
	return Global_1575050;
}

int func_262(int iParam0, int iParam1)
{
	if (!func_266())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_263(&(Global_1853910[iParam0 /*862*/].f_792), func_264(iParam1));
}

var func_263(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		default:
	}
	return 1;
}

bool func_265()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_143, 3);
}

int func_266()
{
	if (!func_267())
	{
		return 0;
	}
	return 1;
}

int func_267()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_261())
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	return func_247(120, -1);
}

bool func_268(int iParam0)
{
	var uVar0;
	
	uVar0 = func_269(2483, -1, 0);
	return BitTest(uVar0, iParam0);
}

int func_269(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_248(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_270()
{
	bool bVar0;
	
	if (!func_772())
	{
		if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
	{
		if (func_112() == 2)
		{
			return 0;
		}
	}
	if (!func_772())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[0]))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_93.f_15 != false;
			}
			else
			{
				bVar0 = Local_93.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_93.f_3, 9);
	}
	if (!func_16(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (bVar0 && !func_204())
		{
			if (func_772())
			{
				if (!func_277("UW_ABTSC"))
				{
					func_271("UW_ABTSC", 0);
				}
			}
			else if (!func_277("UW_ABTS"))
			{
				func_271("UW_ABTS", 0);
			}
		}
		else if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_271(char* sParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return;
	}
	if (func_275(sParam0))
	{
		return;
	}
	func_10();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574757.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_274();
	func_273(bParam1);
	func_272();
}

void func_272()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1574757.f_59), true);
}

void func_273(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1574757.f_59), false);
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_1574757.f_59), false);
}

void func_274()
{
	Global_1574757.f_10 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 86400000);
	Global_1574757.f_11 = unk_0x7E3F74F641EE6B27();
}

bool func_275(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_276(uParam0);
	}
	if (unk_0xD6F9DEE4765092A9(uParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_12));
}

bool func_276(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(uParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_16));
}

int func_277(char* sParam0)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		if (unk_0x31A0D8A679F7D5A7(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return 0;
	}
	return func_275(sParam0);
}

void func_278(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	
	Var1 = { func_429() };
	bVar2 = false;
	if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_114[iVar0 /*42*/] = -1;
			Local_114[iVar0 /*42*/].f_1 = func_5();
			Local_114[iVar0 /*42*/].f_9 = 0;
			Local_114[iVar0 /*42*/].f_31 = -1;
			if (Local_93.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_114[iVar0 /*42*/].f_1 = Local_93.f_465[iVar0 /*4*/].f_2;
				Local_114[iVar0 /*42*/].f_9 = Local_93.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_428())
			{
				if (Local_115.f_103 != 129)
				{
					Local_115.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_115.f_103 != 129)
		{
			Local_115.f_103 = 129;
		}
		func_283(&Local_114, &uLocal_113, 27, &Local_115, &uLocal_128, -1, 0, 0);
		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 1)
		{
			if (Local_114[0 /*42*/].f_1 != unk_0x259BE71D8A81D4FA())
			{
				if (Local_93.f_465[0 /*4*/].f_1 > 0)
				{
					func_282();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_114[iVar0 /*42*/] = -1;
			Local_114[iVar0 /*42*/].f_1 = func_5();
			Local_114[iVar0 /*42*/].f_9 = 0;
			Local_114[iVar0 /*42*/].f_31 = -1;
			Local_114[iVar0 /*42*/].f_39 = -1;
			if (Local_93.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_114[iVar0 /*42*/].f_39 = Local_93.f_465[iVar0 /*4*/] + 1;
				Local_114[iVar0 /*42*/].f_1 = unk_0xB23E0F9B63D009A8(Local_93.f_465[iVar0 /*4*/].f_2);
				Local_114[iVar0 /*42*/].f_40 = Local_93.f_465[iVar0 /*4*/].f_1;
				Local_114[iVar0 /*42*/].f_9 = Local_93.f_465[iVar0 /*4*/].f_1;
				Local_114[iVar0 /*42*/].f_2 = Local_93.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_279();
		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 1)
		{
			if (Local_93.f_594[0 /*4*/] > 0)
			{
				if (Local_93.f_594[0 /*4*/] != Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9)
				{
					if (Local_93.f_256[Local_93.f_594[0 /*4*/]] > 0)
					{
						func_282();
					}
				}
			}
		}
		func_283(&Local_114, &uLocal_113, 27, &Local_115, &uLocal_128, -1, 1, 0);
		if (bParam0)
		{
			if (!func_428())
			{
				if (Local_115.f_103 != 129)
				{
					Local_115.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_115.f_103 != 129)
		{
			Local_115.f_103 = 129;
		}
	}
}

void func_279()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_588[0] = Local_93.f_594[0 /*4*/];
	uLocal_588[1] = Local_93.f_594[1 /*4*/];
	uLocal_588[2] = Local_93.f_594[2 /*4*/];
	uLocal_588[3] = Local_93.f_594[3 /*4*/];
	iVar3 = Local_93.f_594[0 /*4*/];
	iVar4 = Local_93.f_594[1 /*4*/];
	iVar5 = Local_93.f_594[2 /*4*/];
	iVar6 = Local_93.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_93.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_93.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_93.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_93.f_266[iVar6];
	}
	uLocal_589[0] = uVar7;
	uLocal_589[1] = uVar8;
	uLocal_589[2] = uVar9;
	uLocal_589[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0x7F258099B06D4C7C())
	{
		iVar2 = func_281(uLocal_588[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_114[iVar2 /*42*/].f_9 = Local_93.f_594[iVar0 /*4*/].f_1;
		}
		func_280(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_589[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_280(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_114[iParam1 /*42*/] };
	Local_114[iParam1 /*42*/] = { Local_114[iParam0 /*42*/] };
	Local_114[iParam0 /*42*/] = { Var0 };
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0x7F258099B06D4C7C() - 1))
	{
		if (iParam0 == Local_114[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0x7F258099B06D4C7C();
		}
		iVar0++;
	}
	return iVar1;
}

void func_282()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1827), 19);
}

void func_283(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
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
	struct<2> Var23;
	
	if (func_427(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (func_425() || iParam2 == 28)
	{
		if (func_375(uParam1, iParam2, uParam3, Global_1836368, 0, func_430(), iParam7))
		{
			func_374(1);
			if ((!func_372() && !func_370()) || BitTest(Global_2793046.f_4687, 1))
			{
				if (func_369())
				{
					func_364();
				}
				else
				{
					unk_0x9A122D542F2BB60E(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_363(1);
						Global_1836368 = 0;
						iVar20 = -1;
						if (Global_1836592 != 1)
						{
							func_362(uParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								unk_0x8744D2E3FC95740E(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (func_873(unk_0xB23E0F9B63D009A8(iVar18), 0, 1))
								{
									bVar4 = unk_0xB23E0F9B63D009A8(bVar18);
									if (!func_16(bVar4, 0))
									{
										if (func_358(bVar4) || func_356(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (func_355(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_352(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								bVar18++;
							}
						}
						if (!func_349(unk_0x259BE71D8A81D4FA(), 0) && func_348(unk_0x259BE71D8A81D4FA()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						bVar18 = false;
						while (bVar18 < 32)
						{
							if (func_347())
							{
								if (func_873(unk_0xB23E0F9B63D009A8(bVar18), 0, 1))
								{
									bVar4 = unk_0xB23E0F9B63D009A8(bVar18);
								}
								else
								{
									bVar4 = func_5();
								}
							}
							else
							{
								bVar4 = (iParam0[bVar18 /*42*/])->f_1;
							}
							if ((func_346(bVar4) && func_343(bVar4, iParam2, bVar3)) && func_873(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853910[bVar10 /*862*/].f_205.f_6;
								Var7 = { func_337(bVar4) };
								if (bVar4 == unk_0x259BE71D8A81D4FA())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), unk_0xBD6CA019F46AB947(bVar4), 64);
								*(uParam4[bVar18 /*13*/]) = { func_66(bVar4) };
								iVar6 = func_331(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = unk_0x008C0EB38E4459EE(iVar6);
								}
								Global_1836368++;
								if ((iParam0[bVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (iParam0[bVar18 /*42*/])->f_22;
								}
								if ((iParam0[bVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (iParam0[bVar18 /*42*/])->f_31;
								}
								if ((iParam0[bVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (iParam0[bVar18 /*42*/])->f_41;
								}
								iVar9 = (iParam0[bVar18 /*42*/])->f_9;
								if (((iParam0[bVar18 /*42*/])->f_9 != -1 || (iParam0[bVar18 /*42*/])->f_22 != -1f) || (iParam0[bVar18 /*42*/])->f_31 != -1)
								{
									if (!func_347())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_326(&iVar9, &fVar11, (iParam0[bVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_325(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (iParam0[bVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = func_320(bVar4, 0);
								if (bVar2)
								{
									if (func_319(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((iParam0[bVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (iParam0[bVar18 /*42*/])->f_39, 16);
								}
								if (func_318(iParam5))
								{
									func_317(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (iParam0[bVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_317(bVar4, uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (iParam0[bVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								unk_0x0B0C9A0F9AAEB7F0(&iVar15, bVar4);
								iVar19++;
							}
							bVar18++;
						}
						bVar18 = false;
						while (bVar18 < 32)
						{
							bVar4 = unk_0xB23E0F9B63D009A8(bVar18);
							if (func_873(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = unk_0xB23E0F9B63D009A8(bVar18);
							}
							else
							{
								bVar4 = func_5();
							}
							if (func_346(bVar4))
							{
								if (func_873(unk_0xB23E0F9B63D009A8(bVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853910[bVar10 /*862*/].f_205.f_6;
									Var7 = { func_337(bVar4) };
									*(uParam4[bVar18 /*13*/]) = { func_66(bVar4) };
									iVar6 = func_331(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = unk_0x008C0EB38E4459EE(iVar6);
									}
									Global_1836368++;
									iVar17 = func_320(bVar4, 1);
									if (bVar2)
									{
										if (func_319(bVar4, 1))
										{
											iVar19 = iVar1[bVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									func_296(bVar4, unk_0xBD6CA019F46AB947(bVar4), uParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							bVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_293(uParam3, uParam1, iParam2);
						}
						func_106(&(uParam3->f_21));
						func_292();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_291(uParam3, uParam1);
							func_290(uParam1, 0, 1);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_33), 7);
						}
						func_291(uParam3, uParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_33), 11);
						}
						if (func_286(uParam3))
						{
							Global_1836592 = 1;
						}
						func_284(uParam3);
						if (Global_1836592 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836592 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA0C7B98BCF1EEF9E(*uParam1))
					{
						unk_0xA4F67CEB594AE064(7);
						unk_0x6D16B99FEB0AFFF1(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xA4F67CEB594AE064(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_292();
			func_363(0);
			if (BitTest(uParam3->f_33, 7))
			{
				unk_0x8744D2E3FC95740E(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				unk_0x8744D2E3FC95740E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x90B531766063C5CD();
}

void func_284(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_106(&(uParam0->f_21));
		func_285(0);
	}
}

void func_285(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836592 != 2)
		{
			Global_1836592 = 2;
		}
	}
	else
	{
		switch (Global_1836592)
		{
			case 0:
				Global_1836592 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_286(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = unk_0xB23E0F9B63D009A8(uParam0->f_37);
	if (bVar3 != func_5() && func_873(bVar3, 0, 1))
	{
		Var2 = { func_66(bVar3) };
		iVar1 = func_289(uParam0, uParam0->f_37);
		if (func_288(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xC9D8BDF3564325CA(&Var2))
					{
						if (unk_0x6E171E077926FBF7(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x73038C255039CB0A(&Var2))
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xC9D8BDF3564325CA(&Var2))
					{
						if (!unk_0x6E171E077926FBF7(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xC9D8BDF3564325CA(&Var2))
					{
						if (!unk_0x73038C255039CB0A(&Var2))
						{
							iVar4 = 1;
							func_287(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x73038C255039CB0A(&Var2))
					{
						iVar4 = 1;
						func_287(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_287(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_288(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

var func_289(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x88F483FBD433696A(*uParam0, "COLLAPSE"))
	{
		unk_0x557F1E2300EF1A3E(iParam1);
		unk_0xE6B753D52F4CA222();
	}
	if (iParam2 == 1)
	{
		if (unk_0x88F483FBD433696A(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE6B753D52F4CA222();
		}
	}
}

void func_291(var uParam0, var uParam1)
{
	if (!BitTest(uParam0->f_33, 10))
	{
		unk_0x88F483FBD433696A(*uParam1, "SET_HIGHLIGHT");
		unk_0x330108B080A2132F(uParam0->f_35);
		unk_0xE6B753D52F4CA222();
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_33), 10);
	}
}

void func_292()
{
	if (Global_1836592 != 0)
	{
		Global_1836592 = 0;
	}
}

void func_293(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = unk_0xB23E0F9B63D009A8(iVar0);
		if (bVar2 != func_5())
		{
			if (func_873(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_295(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
					func_294(uParam1, uParam0->f_38[bVar0 /*2*/].f_1, iVar1, Global_1853910[bVar0 /*862*/].f_205.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		if (unk_0x88F483FBD433696A(*uParam0, "SET_ICON"))
		{
			unk_0x330108B080A2132F(iParam1);
			unk_0x330108B080A2132F(iParam2);
			if (iParam2 == 65)
			{
				unk_0x330108B080A2132F(iParam3);
			}
			unk_0xE6B753D52F4CA222();
		}
	}
}

int func_295(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_296(bool bParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_316() && iParam4 < func_315())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836370)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836592 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x88F483FBD433696A(*uParam2, sVar1))
		{
			unk_0x330108B080A2132F(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				unk_0x330108B080A2132F(iParam10);
			}
			func_314(sParam1);
			unk_0x330108B080A2132F(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				unk_0x330108B080A2132F(65);
			}
			unk_0x330108B080A2132F(-1);
			func_314("");
			if (uParam3->f_108 == 6)
			{
				func_314("");
			}
			else
			{
				func_314(&sParam5);
			}
			func_301(uParam3, bParam0);
			unk_0x3585BEBEDC67FCC7(sParam9);
			unk_0x3585BEBEDC67FCC7(sParam9);
			if (func_300(uParam3))
			{
				func_299("DPAD_FRIEND");
			}
			else if (func_298(uParam3))
			{
				func_299("DPAD_FRIEND");
			}
			else if (func_297(uParam3))
			{
				func_299("DPAD_CREW");
			}
			else
			{
				func_299("");
			}
			unk_0xE6B753D52F4CA222();
		}
	}
}

bool func_297(var uParam0)
{
	return BitTest(uParam0->f_33, 6);
}

bool func_298(var uParam0)
{
	return BitTest(uParam0->f_33, 5);
}

void func_299(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

int func_300(var uParam0)
{
	if (func_298(uParam0) && func_297(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_301(var uParam0, int iParam1)
{
	if (func_313(iParam1))
	{
		unk_0x330108B080A2132F(121);
	}
	else if (func_306(iParam1))
	{
		unk_0x330108B080A2132F(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && BitTest(Global_2657589[iParam1 /*466*/].f_436, 0))
	{
		unk_0x330108B080A2132F(123);
	}
	else
	{
		if (func_302())
		{
			uParam0->f_36 = 0;
		}
		unk_0x557F1E2300EF1A3E(uParam0->f_36);
	}
}

int func_302()
{
	if (unk_0x834C960822A4683F())
	{
		if (func_304() || func_303())
		{
			return 1;
		}
	}
	return 0;
}

var func_303()
{
	return Global_2683864.f_17;
}

int func_304()
{
	if (unk_0x834C960822A4683F())
	{
		return func_303();
	}
	return func_305(Global_4718592.f_113724);
}

int func_305(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5024[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0)
{
	if ((func_873(iParam0, 0, 1) && func_310()) && func_307(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_307(int iParam0, bool bParam1)
{
	return func_308(iParam0, bParam1, 1);
}

int func_308(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_309(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_5() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_309(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_5())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_310()
{
	if (func_250(unk_0x259BE71D8A81D4FA()) || func_312())
	{
		if (!func_311(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	return 1;
}

int func_311(int iParam0)
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return func_213(iParam0);
	}
	return 0;
}

int func_312()
{
	switch (func_348(unk_0x259BE71D8A81D4FA()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_313(int iParam0)
{
	if (func_302())
	{
		if (func_873(iParam0, 0, 1))
		{
			return func_355(iParam0);
		}
	}
	if ((func_873(iParam0, 0, 1) && func_310()) && func_309(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_314(char* sParam0)
{
	unk_0xCE3E870AC37B4253(sParam0);
}

int func_315()
{
	int iVar0;
	
	if (Global_1836370)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_316()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836370)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_317(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_316() && iParam3 < func_315())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836370)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836592 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam1))
		{
			if (unk_0x88F483FBD433696A(*uParam1, sVar1))
			{
				unk_0x330108B080A2132F(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					unk_0x330108B080A2132F(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					func_299(sParam16);
				}
				else
				{
					func_314(&(uParam2->f_1));
				}
				unk_0x330108B080A2132F(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					unk_0x330108B080A2132F(65);
				}
				if (iParam12 == 1)
				{
					unk_0x330108B080A2132F(iVar0);
				}
				else
				{
					unk_0x330108B080A2132F(-1);
				}
				if (func_347())
				{
					func_314("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_ONE_INT");
					unk_0xACF853FB3F6EA7D4(sParam16);
					unk_0x511D14ED2DA887E1(iParam17);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 5 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_ONE_INT");
					unk_0xACF853FB3F6EA7D4(sParam16);
					unk_0x511D14ED2DA887E1(iParam17);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 7 && !unk_0xD6F9DEE4765092A9(sParam16))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_TWO_INT");
					unk_0xACF853FB3F6EA7D4(sParam16);
					unk_0x511D14ED2DA887E1(iParam17);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 8 && !unk_0xD6F9DEE4765092A9(&(uParam2->f_104)))
				{
					unk_0x882AEFD55B8D51FB("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x7DCF91CE9137DE0E(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x511D14ED2DA887E1(iParam10);
					}
					unk_0xACF853FB3F6EA7D4(&(uParam2->f_104));
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x882AEFD55B8D51FB("FM_AE_CASH");
					unk_0xB5DF3215F3864B3F(iParam10, 1);
					unk_0xCFAD3D478C87321A();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x882AEFD55B8D51FB("FM_AE_CASH");
						unk_0xB5DF3215F3864B3F(iParam10, 1);
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						unk_0x882AEFD55B8D51FB("FM_NG_CASH");
						unk_0xB5DF3215F3864B3F(iParam10, 1);
						unk_0xCFAD3D478C87321A();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xD6F9DEE4765092A9(&(uParam2->f_104)))
					{
						func_299(&(uParam2->f_104));
					}
					else
					{
						func_314("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0xBD34A69071611974(iParam14, 6);
					unk_0xCFAD3D478C87321A();
				}
				else if (fParam13 != -1f)
				{
					unk_0x882AEFD55B8D51FB("NUMBER");
					unk_0x7DCF91CE9137DE0E(fParam13, 1);
					unk_0xCFAD3D478C87321A();
				}
				else if (iParam10 != -1)
				{
					unk_0x330108B080A2132F(iParam10);
				}
				else
				{
					func_314("");
				}
				if (uParam2->f_108 == 6)
				{
					func_314("");
				}
				else
				{
					func_314(&sParam4);
				}
				func_301(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xD6F9DEE4765092A9(sParam8))
				{
					func_314("");
					func_314("");
				}
				else
				{
					unk_0x3585BEBEDC67FCC7(sParam8);
					unk_0x3585BEBEDC67FCC7(sParam8);
				}
				if (func_300(uParam2))
				{
					func_299("DPAD_FRIEND");
				}
				else if (func_298(uParam2))
				{
					func_299("DPAD_FRIEND");
				}
				else if (func_297(uParam2))
				{
					func_299("DPAD_CREW");
				}
				else
				{
					func_299("");
				}
				unk_0xE6B753D52F4CA222();
			}
		}
	}
}

int func_318(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_319(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_355(bParam0))
		{
			return 0;
		}
	}
	return Global_1894573[bParam0 /*608*/].f_10 != func_5();
}

int func_320(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_250(bParam0)) && !func_251(bParam0))
	{
		iVar0 = func_324();
	}
	iVar1 = func_323(bParam0);
	if (!iVar1 == -1)
	{
		return func_321(iVar1);
	}
	return iVar0;
}

int func_321(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_322(iParam0);
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

var func_322(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_323(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_319(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_324()
{
	return 21;
}

char* func_325(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x4721B5E26C8861C8())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x4721B5E26C8861C8())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_326(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_330(iParam3))
	{
		*fParam1 = (func_327(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_318(iParam3))
	{
		*fParam1 = (func_327(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x4721B5E26C8861C8())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_329(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x4721B5E26C8861C8())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_328(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_328(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_329(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_331(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_334(bParam0);
	if (iVar0 == -1)
	{
		func_332(bParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_332(int iParam0, bool bParam1)
{
	if (!func_873(iParam0, 0, 1))
	{
		return;
	}
	if (func_334(iParam0) != -1)
	{
		return;
	}
	if (Global_1666831)
	{
		if (iParam0 == Global_1666831.f_1)
		{
			return;
		}
	}
	if (func_333(iParam0))
	{
		return;
	}
	if (Global_1666869 >= 32)
	{
		return;
	}
	Global_1666836[Global_1666869] = iParam0;
	Global_1666869++;
	if (bParam1)
	{
	}
}

int func_333(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666869)
	{
		if (Global_1666836[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_334(int iParam0)
{
	int iVar0;
	
	if (!func_873(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666829 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666829)
	{
		if (Global_1666668[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1666668[iVar0 /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1666668[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_335(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_335(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1666829)
	{
		return;
	}
	if (unk_0xCF3FA9D6B87D2277(Global_1666668[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666668[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x008C0EB38E4459EE(Global_1666668[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x697995B2B26B6CD4(Global_1666668[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1666829)
	{
		Global_1666668[iVar2 /*5*/] = { Global_1666668[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_336(&(Global_1666668[iVar2 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_336(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

struct<4> func_337(bool bParam0)
{
	struct<4> Var0;
	
	if (func_873(bParam0, 0, 1))
	{
		Global_2764203 = { func_66(bParam0) };
		if (func_342())
		{
			if (func_288(Global_2764203))
			{
				if (!unk_0x8EF8E27D73EB5271(&Global_2764203))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x97DD063A9C6137F8(0))
		{
			return Var0;
		}
		if (func_341(&Global_2764203))
		{
			Global_2764133 = { func_339(bParam0) };
			func_338(&Global_2764133, &Var0);
		}
	}
	return Var0;
}

void func_338(var uParam0, var uParam1)
{
	unk_0x29B9959EF2236634(uParam0, 35, uParam1);
}

struct<35> func_339(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_340(iParam0))
	{
		return Global_1575092[unk_0x259BE71D8A81D4FA() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	unk_0xC07B1AA6155EC337(&Var1, 35, &Var0);
	return Var1;
}

int func_340(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return 1;
	}
	return 0;
}

int func_341(var uParam0)
{
	if (unk_0x99DFE4CAC19D527F())
	{
		if (unk_0x7260716F2E4D7661() && unk_0xE582BF3EDDBB1A68(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_342()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_343(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 27)
	{
		if ((func_206(iParam0) || func_345(iParam0)) || func_205(iParam0))
		{
			return 0;
		}
	}
	if (!func_344(iParam0))
	{
		return 0;
	}
	if (!func_358(iParam0) && !func_356(iParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

bool func_344(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_139, 22);
}

int func_345(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1894573[iParam0 /*608*/].f_1, 10) || BitTest(Global_1894573[iParam0 /*608*/].f_1, 9));
	}
	return 0;
}

int func_346(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == func_5())
	{
		return 0;
	}
	if (func_16(bParam0, 0))
	{
		return 0;
	}
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (BitTest(Global_1853910[iVar0 /*862*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_347()
{
	switch (func_348(unk_0x259BE71D8A81D4FA()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_191(unk_0x259BE71D8A81D4FA()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_251(unk_0x259BE71D8A81D4FA()))
	{
		switch (func_348(unk_0x259BE71D8A81D4FA()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_311(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0)
{
	if (func_234(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_349(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 && func_350(Global_1894573[iParam0 /*608*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1)
	{
		if (func_350(Global_1894573[iParam0 /*608*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_351(iParam0, 0);
	return 0;
}

int func_351(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_352(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_873(unk_0xB23E0F9B63D009A8(iVar0), 0, 1))
		{
			iVar1 = unk_0xB23E0F9B63D009A8(bVar0);
			if (!func_16(iVar1, 0))
			{
				if (func_358(iVar1) || func_356(iVar1, bParam4))
				{
					if (func_353(iVar1, iParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

int func_353(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_354(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1894573[iParam0 /*608*/].f_10 != func_5())
		{
			return iParam1 == Global_1894573[iParam0 /*608*/].f_10;
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 != func_5())
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

int func_355(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_5())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_356(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0;
	}
	return (Global_2657589[iParam0 /*466*/].f_246 != -1 || func_357(iParam0));
}

bool func_357(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_192 != 0;
}

int func_358(bool bParam0)
{
	if (!func_873(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_873(unk_0x259BE71D8A81D4FA(), 0, 1))
	{
		return 0;
	}
	if (!func_359(iParam0))
	{
		return 0;
	}
	if ((unk_0xDFAE61B1AEF262C2(iParam0, unk_0x259BE71D8A81D4FA()) || func_348(bParam0) == 233) || func_348(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_360(unk_0x259BE71D8A81D4FA());
	bVar1 = func_360(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_360(int iParam0)
{
	return func_361(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_361(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_362(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x330108B080A2132F(iParam1);
		unk_0x330108B080A2132F(iParam2);
		unk_0xE6B753D52F4CA222();
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1653910.f_2 == 0)
		{
			Global_1653910.f_2 = 1;
		}
	}
	else if (Global_1653910.f_2 == 1)
	{
		Global_1653910.f_2 = 0;
	}
}

void func_364()
{
	if (BitTest(Global_2793046.f_4687, 1))
	{
		if (func_368())
		{
			func_365();
		}
	}
}

void func_365()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2514[iVar0 /*80*/].f_2 != 0)
		{
			Global_2672505.f_2514[iVar0 /*80*/].f_2 = 5;
			func_366(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_366(var uParam0, int iParam1)
{
	func_367(uParam0, iParam1);
}

void func_367(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_368()
{
	return Global_2672505.f_2514[0 /*80*/].f_1 != 0;
}

int func_369()
{
	if (BitTest(Global_2793046.f_4687, 0) && func_368())
	{
		return 1;
	}
	if (BitTest(Global_2793046.f_4687, 1) && func_368())
	{
		return 1;
	}
	return 0;
}

int func_370()
{
	if (func_368())
	{
		if (func_371(Global_2672505.f_2514[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0)
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

int func_372()
{
	if (func_368())
	{
		if (func_373(Global_2672505.f_2514[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_373(int iParam0)
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

void func_374(int iParam0)
{
	if (Global_1653910.f_1 != Global_1653910)
	{
		Global_1653910.f_1 = Global_1653910;
	}
	if (Global_1653910 != iParam0)
	{
		Global_1653910 = iParam0;
	}
}

int func_375(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_424(iParam1);
	fVar4 = func_423();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_422())
		{
			if (func_421() > 0 && Global_1836370)
			{
				unk_0x0C9B2F8C2BD128C2();
				unk_0x043244A32AD6E17D(fVar4);
				unk_0x4EB223432F8FA0A0(18);
				if (unk_0x4C705AAF75363287())
				{
					unk_0x7009D885379C8CDF();
				}
				unk_0x4EB223432F8FA0A0(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_408())
		{
			func_407(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2793046.f_4690, 26))
	{
		func_407(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_421() == 1)
		{
			func_406(bVar3, uParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_407(uParam0, uParam2, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_4692), 5);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x4C705AAF75363287())
		{
			unk_0x7009D885379C8CDF();
		}
		unk_0x4EB223432F8FA0A0(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_421() == 0 && !bParam5))
		{
			func_407(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_405();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0x0C9B2F8C2BD128C2();
				}
				unk_0x4EB223432F8FA0A0(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_405();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0x0C9B2F8C2BD128C2();
					}
					unk_0x4EB223432F8FA0A0(18);
				}
				unk_0x043244A32AD6E17D(fVar4);
				if (func_406(bVar3, uParam0, 0))
				{
					func_362(uParam0, 0, 0);
					uVar1 = func_403(iParam1, &(Global_4718592.f_113731), bParam4);
					Var0 = { func_401(iParam1) };
					if (bParam4)
					{
						func_398(uParam0, uVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_393(uParam0, func_395(uParam2), func_394(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_386(uParam2);
						if (!unk_0xD6F9DEE4765092A9(uParam6))
						{
							sVar6 = sParam6;
						}
						func_384(uParam0, sVar6, func_385(), -1);
					}
					else if (func_302())
					{
						uParam2->f_34 = Global_1836369;
						func_398(uParam0, uVar1, &Var0, 1, -1, Global_1836369, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_377(iParam1);
						uParam2->f_34 = Global_1836369;
						func_398(uParam0, uVar1, "", 0, iVar5, func_376(), 1);
					}
					else
					{
						iVar5 = func_377(iParam1);
						func_398(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam2->f_33), false);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836368 = uParam3;
				Global_1836367 = 1;
				unk_0x043244A32AD6E17D(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836369)
					{
						unk_0x8744D2E3FC95740E(&(uParam2->f_33), false);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_376()
{
	return Global_1836369;
}

int func_377(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_383())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 42:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_382(unk_0x259BE71D8A81D4FA()))
			{
				iVar0 = 20;
			}
			if (func_381(unk_0x259BE71D8A81D4FA()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_380(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = 2;
	}
	if (func_378())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_378()
{
	if (unk_0x834C960822A4683F())
	{
		return func_61();
	}
	return func_379(Global_4718592.f_113724);
}

int func_379(int iParam0)
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

bool func_380(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 4;
}

bool func_381(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

bool func_382(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_383()
{
	return Global_4718592.f_1 == 0;
}

void func_384(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_TITLE");
		if (unk_0xD6F9DEE4765092A9(sParam2))
		{
			func_299(sParam1);
		}
		else
		{
			unk_0x882AEFD55B8D51FB("FM_AE_BRACKT");
			unk_0xACF853FB3F6EA7D4(sParam1);
			unk_0xACF853FB3F6EA7D4(sParam2);
			unk_0xCFAD3D478C87321A();
		}
		func_299("");
		if (iParam3 != -1)
		{
			unk_0x330108B080A2132F(iParam3);
		}
		unk_0xE6B753D52F4CA222();
	}
}

char* func_385()
{
	switch (func_348(unk_0x259BE71D8A81D4FA()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_386(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_348(unk_0x259BE71D8A81D4FA()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_389())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_388(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_388(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_387(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_387(int iParam0)
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

bool func_388(bool bParam0)
{
	return func_307(unk_0x259BE71D8A81D4FA(), bParam0);
}

bool func_389()
{
	return (func_392() && func_390(func_391()));
}

int func_390(int iParam0)
{
	return func_309(iParam0, 1);
}

int func_391()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_35;
}

bool func_392()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 148;
}

void func_393(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_TITLE");
		if (unk_0xD6F9DEE4765092A9(uParam2))
		{
			func_299(uParam1);
		}
		else if (func_191(unk_0x259BE71D8A81D4FA()) == 133)
		{
			unk_0x882AEFD55B8D51FB("FM_AE_BRACKT_C");
			unk_0xACF853FB3F6EA7D4(uParam1);
			unk_0xACF853FB3F6EA7D4(sParam2);
			unk_0xCFAD3D478C87321A();
		}
		else
		{
			unk_0x882AEFD55B8D51FB("FM_AE_BRACKT");
			unk_0xACF853FB3F6EA7D4(sParam1);
			unk_0xACF853FB3F6EA7D4(sParam2);
			unk_0xCFAD3D478C87321A();
		}
		func_299("");
		if (iParam3 != -1)
		{
			unk_0x330108B080A2132F(iParam3);
		}
		unk_0xE6B753D52F4CA222();
	}
}

char* func_394(var uParam0)
{
	int iVar0;
	
	iVar0 = func_191(unk_0x259BE71D8A81D4FA());
	if (func_428())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

char* func_395(var uParam0)
{
	int iVar0;
	
	iVar0 = func_191(unk_0x259BE71D8A81D4FA());
	if (func_428())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_397() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_397() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_396() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_396()
{
	return Global_2793046.f_5149;
}

int func_397()
{
	if (func_191(unk_0x259BE71D8A81D4FA()) == 132)
	{
		return Global_2793046.f_5144;
	}
	return -1;
}

void func_398(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0x88F483FBD433696A(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_314(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x882AEFD55B8D51FB(uParam1);
			unk_0x511D14ED2DA887E1(iParam5);
			unk_0xCFAD3D478C87321A();
		}
		else
		{
			func_299(sParam1);
		}
		if (func_422() && iParam6)
		{
			if (func_400())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x882AEFD55B8D51FB("LBD_DPD_CNT");
			unk_0x511D14ED2DA887E1(iVar0);
			unk_0x511D14ED2DA887E1(iVar1);
			unk_0xCFAD3D478C87321A();
		}
		else
		{
			func_299(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x330108B080A2132F(iParam4);
			if (func_399(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x330108B080A2132F(166);
			}
			else if (func_61())
			{
				unk_0x330108B080A2132F(166);
			}
		}
		unk_0xE6B753D52F4CA222();
	}
}

int func_399(int iParam0)
{
	if (func_382(iParam0) || func_381(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_400()
{
	return Global_1836370;
}

struct<4> func_401(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_402(unk_0x259BE71D8A81D4FA()) || func_380(unk_0x259BE71D8A81D4FA()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_1198, 16);
			break;
	}
	if (func_302() && unk_0x834C960822A4683F())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_1198, 16);
	}
	return Var0;
}

bool func_402(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 5;
}

char* func_403(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_302() || unk_0xD6F9DEE4765092A9(uParam1)))
	{
		uVar0 = func_404();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836612 == 0)
		{
			Global_1836612 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xD6F9DEE4765092A9(sParam1))
	{
		if (Global_1836612 == 1)
		{
			Global_1836612 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836612 == 0)
		{
			Global_1836612 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
			case 42:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_404()
{
	if (unk_0xCA440502CAC1617C())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x568C5A2B6834D226())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xDC8C0439F5CD3C85())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x6CCB49E4B35F59D6())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_405()
{
	Global_44200 = 1;
}

bool func_406(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x8DE4F68A9728925E("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x8DE4F68A9728925E("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x8DE4F68A9728925E("mp_matchmaking_card");
	}
	return unk_0xA0C7B98BCF1EEF9E(*uParam1);
}

void func_407(var uParam0, var uParam1, bool bParam2)
{
	unk_0x8744D2E3FC95740E(&(uParam1->f_33), 7);
	Global_1836368 = 0;
	func_292();
	Global_1836367 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_106(&(uParam1->f_19));
			unk_0x8744D2E3FC95740E(&(Global_2793046.f_4692), 5);
		}
	}
	if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		unk_0xD314260005F064BF(uParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		unk_0x8744D2E3FC95740E(&(uParam1->f_33), false);
	}
	unk_0x043244A32AD6E17D(0f);
}

int func_408()
{
	if (func_420())
	{
		return 0;
	}
	if (func_252())
	{
		return 0;
	}
	if (!func_418())
	{
		return 0;
	}
	if (!func_224())
	{
		return 0;
	}
	if (func_417(8, -1))
	{
		return 0;
	}
	if (func_421() == 2)
	{
		return 0;
	}
	if (Global_2793046.f_4642)
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	else if (!func_256(unk_0x259BE71D8A81D4FA(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_416(1) || func_414(1)) || Global_23131.f_124) || Global_23131)
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (func_413() && Global_1969891 == 2)
	{
		return 0;
	}
	if (func_411(unk_0x259BE71D8A81D4FA()) && !func_413())
	{
		return 0;
	}
	if (Global_1935176)
	{
		return 0;
	}
	if (Global_1935181)
	{
		return 0;
	}
	if (func_410(0))
	{
		return 0;
	}
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 4))
	{
		return 0;
	}
	if (Global_1648740)
	{
		return 0;
	}
	if ((Global_1964005.f_718.f_5 || Global_1966831.f_718.f_5) || Global_1963033.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1970895.f_724.f_5 || Global_1970895.f_744.f_724.f_5) || Global_1970895.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1977693.f_726.f_5)
	{
		return 0;
	}
	if (func_409(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if ((Global_1648781 || Global_1648782) || Global_1648783)
	{
		return 0;
	}
	return 1;
}

int func_409(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_4, 6);
}

bool func_410(int iParam0)
{
	return BitTest(Global_2793046.f_5225.f_47, iParam0);
}

int func_411(int iParam0)
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_412())
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

bool func_412()
{
	return BitTest(Global_2621446, 3);
}

bool func_413()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 0));
}

int func_414(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_415(unk_0x4A8C381C258A124D()))
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

int func_415(int iParam0)
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

bool func_416(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23131.f_4 && Global_23131.f_104 == 4);
	}
	return Global_23131.f_4;
}

bool func_417(int iParam0, int iParam1)
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

int func_418()
{
	if (func_419())
	{
		return 1;
	}
	if (unk_0x15CCE8886267624F())
	{
		return 0;
	}
	if (unk_0x78ABC1D11B34F324() || unk_0xDDED2C93E8FD5B69())
	{
		return 0;
	}
	if (unk_0x114ABA9988FF784B())
	{
		return 0;
	}
	return 1;
}

bool func_419()
{
	return Global_1574604;
}

bool func_420()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

int func_421()
{
	return Global_1653913.f_68;
}

int func_422()
{
	if (Global_1836369 > 16)
	{
		return 1;
	}
	return 0;
}

float func_423()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x897B441FF18ECBBB()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_425()
{
	if (func_430())
	{
		return 1;
	}
	if (func_205(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_428())
	{
		return 1;
	}
	if (func_250(unk_0x259BE71D8A81D4FA()))
	{
		switch (func_191(unk_0x259BE71D8A81D4FA()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_426(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_426(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_426(unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_426(int iParam0)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 4);
}

int func_427(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_250(unk_0x259BE71D8A81D4FA()) && !func_251(unk_0x259BE71D8A81D4FA())) && !func_311(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_234(unk_0x259BE71D8A81D4FA(), 0) && func_251(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
		if (func_236(unk_0x259BE71D8A81D4FA()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_428()
{
	return Global_1853783;
}

struct<4> func_429()
{
	struct<4> Var0;
	
	switch (Local_93.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_430()
{
	if (func_431(unk_0x259BE71D8A81D4FA()))
	{
		return Global_1581949;
	}
	return 0;
}

int func_431(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_16(iParam0, 0))
		{
			return unk_0x6BAFBE8178274578(iParam0);
		}
	}
	return 0;
}

void func_432()
{
	struct<2> Var0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (func_16(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	switch (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17)
	{
		case 0:
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 == 0)
			{
				if (Local_93.f_241 == 0)
				{
					func_777();
				}
			}
			if (!BitTest(uLocal_97, 22))
			{
				if (Local_93.f_27 == joaat("rhino") && Local_93.f_29 == 2)
				{
					func_746(Local_93.f_30[0 /*3*/], 1120403456);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 22);
				}
				else if (!func_69(Local_93.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_746(Local_93.f_30[0 /*3*/], 1120403456);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 22);
				}
			}
			func_745();
			func_739();
			if (Local_93.f_241 == 0)
			{
				func_736(1);
			}
			func_735(0);
			if (Local_93.f_241 == 0)
			{
				if (!Local_93.f_27 == joaat("hydra") && !Local_93.f_27 == joaat("rhino"))
				{
					func_200();
				}
				else if (func_772())
				{
					func_200();
				}
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
				{
					if (!BitTest(uLocal_98, 1))
					{
						func_734(129);
						func_705(1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, true);
						unk_0x6106E62525304863(0);
					}
					if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 6))
					{
						if (Local_93.f_28 > 1 || (Local_93.f_28 == 1 && func_112() > 1))
						{
							if (BitTest(Local_93.f_3, 4))
							{
								Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 = 0;
								unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (BitTest(uLocal_98, 1))
				{
					unk_0x8744D2E3FC95740E(&uLocal_98, true);
					func_704(1);
					func_703();
					func_705(0);
				}
			}
			if (Local_93.f_241 == 1)
			{
				func_702(&bVar1, &uVar2);
				iLocal_554 = bVar1;
				func_701(0);
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
				{
					if (!func_700())
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 19);
					}
					if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
					{
						func_9();
					}
					unk_0x6106E62525304863(0);
					if ((func_699("UW_MINV") || func_699("UW_TIMELA")) || func_699("UW_TIMEL"))
					{
						unk_0x428C32CC68809A35(1);
					}
					func_196();
					func_688(129, 0f, 0f, 1, 1, 1, 0);
					func_677(1);
					func_676();
					unk_0x425BBE19F25A57AB(0.1f);
					iLocal_102 = unk_0xD6436470CD2C1484();
					unk_0xDAE61414743C8D1D(0);
					func_675(1);
					func_674(1);
					if (Local_93.f_27 != joaat("rhino"))
					{
						func_654(1);
					}
					iLocal_108 = unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D());
					unk_0x3CEA1FD137ACE2D9(unk_0x4A8C381C258A124D(), iLocal_106);
					unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
					unk_0x86A2BC11844DEEB3("MP_MC_START");
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 184, 1);
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 151, 0);
					func_653(0);
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9 = iLocal_554;
					if (!func_772())
					{
						func_652(63, "UW_TITLE", "UW_DESC", func_324(), -1, func_324(), 1, 0);
					}
					else if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
					{
						func_652(63, "UW_TITLEC", "UW_DESCC", func_324(), -1, func_324(), 1, 0);
					}
					else
					{
						bVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, bVar1, 16);
						func_651(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_324(), func_324(), 0);
					}
					Local_94.f_9 = unk_0x39D1D336459711BE();
					func_653(0);
					func_649(3, 0, 1);
					func_20(&uLocal_568, 0, 0);
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 1;
				}
				else
				{
					func_196();
					if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
					{
						func_9();
					}
					if (func_646("UW_HELP1", func_648(), func_647(1)) || func_646("UW_HELP1C", func_648(), func_647(1)))
					{
						unk_0x428C32CC68809A35(1);
					}
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 2;
					func_653(0);
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 == 0)
					{
					}
					else if (!func_645())
					{
					}
				}
			}
			else if (Local_93.f_241 == 3)
			{
				func_653(0);
				if (func_646("UW_HELP1", func_648(), func_647(1)) || func_646("UW_HELP1C", func_648(), func_647(1)))
				{
					unk_0x428C32CC68809A35(1);
				}
				if (!func_644())
				{
				}
				if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
				{
					func_9();
				}
				func_196();
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 3;
			}
			else if (Local_93.f_241 > 3)
			{
				if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
				{
					func_9();
				}
				func_653(0);
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
				{
					func_643();
					func_642();
					if (func_122())
					{
						func_676();
					}
				}
				if (func_772())
				{
					if (func_636(2, 0, 1, 0, 0))
					{
						if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
						{
							func_9();
						}
						func_653(0);
						Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 4;
					}
				}
				else if (Local_93.f_27 == joaat("valkyrie"))
				{
					if (func_636(2, 0, 1, 0, 0))
					{
						if (func_277("UW_ABTSC") || func_277("UW_ABTS"))
						{
							func_9();
						}
						func_653(0);
						Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_166(1);
			func_739();
			func_560();
			func_170();
			func_558();
			func_546();
			func_278(0);
			func_542();
			func_539();
			func_643();
			func_642();
			if (!BitTest(uLocal_97, 26))
			{
				if (!func_538(55))
				{
					if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 11))
					{
						if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 10))
						{
							if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 == -1)
							{
								if (!func_772())
								{
									if (!func_277("UW_ATTK"))
									{
										func_271("UW_ATTK", 0);
									}
								}
								else if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
								{
									if (!func_277("UW_ATTK"))
									{
										func_271("UW_ATTK", 0);
									}
								}
								else if (!func_277("UW_ATTK"))
								{
									func_702(&bVar1, &uVar2);
									bVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, bVar1, 16);
									func_271("UW_ATTK", 0);
								}
							}
							else if (func_277("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_537();
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
			{
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 == -1)
				{
					func_676();
				}
			}
			if (!func_873(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 2;
				func_9();
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 21);
			}
			else if (func_183())
			{
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 1)
			{
				if (!func_536())
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 23);
					func_9();
					if (iLocal_554 > -1)
					{
						if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iLocal_554]))
						{
							func_25(&(Local_93.f_7[iLocal_554]));
						}
					}
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 2;
				}
			}
			if (Local_93.f_241 == 3)
			{
				func_704(1);
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 3;
			}
			else if (Local_93.f_241 > 3)
			{
				func_704(1);
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 4;
			}
			else if (func_772())
			{
				if (func_636(2, 0, 1, 0, 0))
				{
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_93.f_241 == 3)
			{
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 3;
			}
			else if (Local_93.f_241 > 3)
			{
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 4;
			}
			func_467();
			if (func_644())
			{
				if (func_191(unk_0x259BE71D8A81D4FA()) == 129)
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !unk_0xBE259DBA45F2996E())
					{
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 398, 0);
						if (BitTest(uLocal_97, 22))
						{
							func_466();
							unk_0x8744D2E3FC95740E(&uLocal_97, 22);
						}
						func_703();
						func_463();
						func_461(0);
						func_459(0);
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 184, 0);
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 151, 1);
						func_705(0);
						func_704(1);
					}
					func_458();
				}
			}
			else if (!BitTest(uLocal_98, 8))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 8);
			}
			if (!func_204())
			{
				func_457();
				func_558();
				func_166(0);
				func_546();
				func_278(1);
				func_542();
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_456();
			}
			func_449();
			func_448();
			func_560();
			if (!BitTest(uLocal_98, 7))
			{
				iVar3 = 0;
				while (iVar3 < 24)
				{
					if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iVar3]))
					{
						if (!func_31(Local_93.f_48[iVar3]))
						{
							unk_0xF861636AF1D2D3D2(unk_0xC35A3A4C05A4831B(Local_93.f_48[iVar3]), unk_0x259BE71D8A81D4FA(), 0);
						}
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (unk_0x93BF17E19A9F0E9B(Local_93.f_80[iVar3]))
					{
						if (!func_31(Local_93.f_80[iVar3]))
						{
							unk_0xF861636AF1D2D3D2(unk_0xC35A3A4C05A4831B(Local_93.f_80[iVar3]), unk_0x259BE71D8A81D4FA(), 0);
						}
					}
					iVar3++;
				}
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 7);
			}
			else if (Local_93.f_247 != iLocal_552)
			{
				iLocal_552 = Local_93.f_247;
				unk_0x8744D2E3FC95740E(&uLocal_98, 7);
			}
			if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 11))
			{
				unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 11);
			}
			if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 10))
			{
				unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 10);
			}
			if (unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()) == iLocal_106)
			{
				unk_0x3CEA1FD137ACE2D9(unk_0x4A8C381C258A124D(), iLocal_108);
			}
			break;
		
		case 3:
			if (!BitTest(uLocal_97, 31))
			{
				if (BitTest(Local_93.f_3, 12))
				{
					func_196();
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 31);
				}
			}
			func_537();
			func_443();
			if (!func_204())
			{
				if (!BitTest(Local_93.f_3, 14) && !BitTest(Local_93.f_3, 12))
				{
					func_278(1);
				}
				func_546();
				func_558();
				func_542();
				func_434();
			}
			func_467();
			func_448();
			func_560();
			if (Local_93.f_241 > 3)
			{
				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_815();
			break;
	}
	func_433();
}

void func_433()
{
	bool bVar0;
	
	if (iLocal_579 != Local_93.f_616)
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (BitTest(Local_93.f_616, bVar0))
			{
				if (!BitTest(iLocal_579, bVar0))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[bVar0]))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_93.f_7[bVar0]))
						{
							unk_0x0B74F181ADFC39BF(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 2);
							func_25(&(Local_93.f_7[bVar0]));
							unk_0x0B0C9A0F9AAEB7F0(&iLocal_579, bVar0);
						}
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_579, bVar0);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_434()
{
	if (BitTest(Local_93.f_3, 14))
	{
		if (!BitTest(uLocal_98, 5))
		{
			if (func_437(0, 1, 1, 1))
			{
				if (func_772())
				{
					func_436("UW_TFEWC", 30000);
				}
				else
				{
					func_436("UW_TFEW", 30000);
				}
				func_435(1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 5);
			}
		}
	}
}

void func_435(int iParam0)
{
	unk_0x55DAC9CDA320120B(3, 21, 200, 0, 0);
	if (iParam0 && !func_368())
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_436(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam1);
}

int func_437(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x4C705AAF75363287())
	{
		return 0;
	}
	if (func_442())
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (func_420())
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_256(unk_0x259BE71D8A81D4FA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_441(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (func_440())
	{
		return 0;
	}
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (Global_1836367)
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (func_438())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (Global_2803648)
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	return 1;
}

bool func_438()
{
	return Global_2683864.f_691;
}

bool func_439()
{
	return Global_2683864.f_845;
}

bool func_440()
{
	return Global_2672505.f_2838.f_582;
}

int func_441(int iParam0)
{
	if (Global_2657589[iParam0 /*466*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

int func_442()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_443()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!BitTest(uLocal_97, (27 + iVar2)))
		{
			if (unk_0x2FC2FDC413532977(Local_93.f_7[iVar2]))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_7[iVar2]), 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, (27 + iVar2));
					uLocal_555[iVar2] = unk_0xCA369FBC0DE29517();
					unk_0xBD618A73193F9982(uLocal_555[iVar2], "Explosion_Countdown", unk_0xE38610F405049F71(Local_93.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0x3F002AA9562BF0BE(uLocal_555[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_772())
	{
		if (unk_0x2FC2FDC413532977(Local_93.f_7[0]))
		{
			if (!BitTest(Local_93.f_319, 0))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_7[0]), 0))
				{
					if ((func_447() - func_126(&(Local_93.f_324), 0, 0)) >= 0)
					{
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0 || BitTest(Local_93.f_3, 14))
						{
							if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_204())
								{
									func_446();
									func_172((func_447() - func_126(&(Local_93.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0 || BitTest(Local_93.f_3, 14))
						{
							if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_204())
								{
									func_446();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
						{
							func_704(1);
						}
						if (unk_0xEADBDBE0422CF7E6(Local_93.f_7[0]))
						{
							unk_0x935364B4448CD584(unk_0xE38610F405049F71(Local_93.f_7[0]), 0);
							unk_0x6BFFBDE3C98A828E(unk_0xE38610F405049F71(Local_93.f_7[0]), true);
							if (!unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[0]))))
							{
								unk_0xC392361DCE030EF4(unk_0xE38610F405049F71(Local_93.f_7[0]), 1, 0, -1);
								func_25(&(Local_93.f_7[0]));
							}
							else
							{
								unk_0xB5BD605FB63CDBE6(unk_0xE38610F405049F71(Local_93.f_7[0]), 1, 0, 0);
								func_25(&(Local_93.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_196();
		if (!func_204())
		{
			if (!BitTest(uLocal_97, 12))
			{
				if (func_109(Local_93.f_7[0]))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[0])))
						{
							if (!func_772())
							{
								if (!func_277("UW_EXPL"))
								{
									func_271("UW_EXPL", 0);
								}
							}
							else if (!func_277("UW_EXPLC"))
							{
								func_271("UW_EXPLC", 0);
							}
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 12);
						}
					}
				}
			}
			else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (unk_0x2FC2FDC413532977(Local_93.f_7[bVar0]))
			{
				if (!BitTest(Local_93.f_319, bVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0))
					{
						if ((func_447() - func_126(&(Local_93.f_324), 0, 0)) >= 0)
						{
							if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0 || BitTest(Local_93.f_3, 14))
							{
								if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_446();
											func_172((func_447() - func_126(&(Local_93.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0 || BitTest(Local_93.f_3, 14))
							{
								if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_446();
											func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
							{
								func_704(1);
							}
							if (func_444(Local_93.f_7[bVar0]))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_93.f_7[bVar0]))
								{
									unk_0x935364B4448CD584(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0);
									unk_0x6BFFBDE3C98A828E(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), true);
									if (!unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[bVar0]))))
									{
										unk_0xC392361DCE030EF4(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1, 0, -1);
										func_25(&(Local_93.f_7[bVar0]));
									}
									else
									{
										unk_0xB5BD605FB63CDBE6(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 1, 0, 0);
										func_25(&(Local_93.f_7[bVar0]));
									}
								}
							}
						}
					}
				}
				if (!BitTest(uLocal_97, 12))
				{
					if (func_109(Local_93.f_7[bVar0]))
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bVar0])))
							{
								if (!func_204())
								{
									if (!func_772())
									{
										if (!func_277("UW_EXPL"))
										{
											func_271("UW_EXPL", 0);
										}
									}
									else if (!func_277("UW_EXPLC"))
									{
										func_271("UW_EXPLC", 0);
									}
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 12);
								}
							}
						}
					}
				}
				else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
						{
							func_9();
						}
					}
				}
			}
			bVar0++;
		}
	}
}

int func_444(var uParam0)
{
	if (unk_0xB0AB1F334666E337(uParam0))
	{
		return 1;
	}
	if (func_445(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_445(var uParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return 0;
	}
	if (!unk_0x93BF17E19A9F0E9B(uParam0))
	{
		return 0;
	}
	if (func_79(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_446()
{
	Global_1655472.f_1173 = 1;
}

int func_447()
{
	if (func_772())
	{
		return Global_262145.f_11850;
	}
	return Global_262145.f_11570;
}

void func_448()
{
	if (!BitTest(uLocal_98, 4))
	{
		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					func_704(1);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 4);
				}
			}
		}
	}
}

void func_449()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xF0C9E5565CB32F4B(iLocal_101);
	if (unk_0x7206AEB20960CCC8(iVar0))
	{
		bVar1 = unk_0x4470BE79F5771783(iVar0);
		if (unk_0x762604C40829DB72(bVar1))
		{
			if (bLocal_101 != unk_0xAE032CEDCF23C6D5())
			{
				if (!BitTest(uLocal_580, bLocal_101))
				{
					if (!func_204())
					{
						if (Local_96[bLocal_101 /*18*/].f_17 == 1)
						{
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_580, bLocal_101);
							func_450(bVar1, 55, 1, 0);
						}
					}
				}
				else if (func_204())
				{
					func_450(bVar1, 55, 0, 0);
					unk_0x8744D2E3FC95740E(&uLocal_580, bLocal_101);
				}
				else if (Local_96[bLocal_101 /*18*/].f_17 > 1)
				{
					unk_0x8744D2E3FC95740E(&uLocal_580, bLocal_101);
					func_450(bVar1, 55, 0, 0);
				}
			}
		}
	}
	bLocal_101++;
	if (bLocal_101 >= unk_0x95C7A22DBE7AEF4C())
	{
		bLocal_101 = false;
	}
}

void func_450(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_452(bParam0))
	{
		return;
	}
	if (func_451(&(Global_2646729.f_624[bParam0]), &(Global_2646729.f_987[bParam0]), &(Global_2646729.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2646729.f_459[bParam0] = iParam1;
		}
	}
}

int func_451(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0xF40767E41852FB72(*uParam1) || *uParam1 == unk_0x8F76B2250AC806FA())
		{
			*uParam1 = unk_0x8F76B2250AC806FA();
			*uParam0 = unk_0x8F76B2250AC806FA();
		}
	}
	if (!unk_0xF40767E41852FB72(*uParam0) || *uParam0 == unk_0x8F76B2250AC806FA())
	{
		if (bParam3)
		{
			if (!BitTest(*uParam2, bParam4))
			{
				*uParam6 = 1;
				unk_0x0B0C9A0F9AAEB7F0(uParam2, bParam4);
			}
			*uParam0 = unk_0x8F76B2250AC806FA();
		}
		else
		{
			if (BitTest(*uParam2, bParam4))
			{
				*uParam6 = 1;
				unk_0x8744D2E3FC95740E(uParam2, bParam4);
			}
			if (*uParam1 == unk_0x8F76B2250AC806FA())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0xF40767E41852FB72(*uParam1) && !*uParam1 == unk_0x8F76B2250AC806FA())
	{
	}
	return 0;
}

int func_452(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 1;
	}
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_453())
	{
		return 1;
	}
	return 0;
}

int func_453()
{
	switch (func_455())
	{
		case 0:
			return func_454();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_454()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_455()
{
	return Global_32163;
}

void func_456()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xC450B06E5AAA0985(Local_105[iVar0 /*8*/]))
		{
			unk_0xFE54B8568B2ABD12(&(Local_105[iVar0 /*8*/]));
		}
		if (unk_0xC450B06E5AAA0985(Local_105[iVar0 /*8*/].f_1))
		{
			unk_0xFE54B8568B2ABD12(&(Local_105[iVar0 /*8*/].f_1));
		}
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iVar0]))
		{
			if (!func_31(Local_93.f_48[iVar0]))
			{
				if (unk_0xA23AABF378361F85(unk_0xC35A3A4C05A4831B(Local_93.f_48[iVar0])))
				{
					func_92(&(Local_105[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_457()
{
	if (!BitTest(uLocal_97, 11))
	{
		if (!BitTest(Local_93.f_3, 6))
		{
			if (!BitTest(uLocal_97, 13))
			{
				if (func_191(unk_0x259BE71D8A81D4FA()) != 129)
				{
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
					{
						if (!func_538(65) && !func_538(66))
						{
							if (BitTest(uLocal_98, 11))
							{
								if (!BitTest(uLocal_98, 12))
								{
									if (func_437(0, 1, 1, 1))
									{
										if (func_772())
										{
											func_436("UW_HELIMC", -1);
										}
										else
										{
											func_436("UW_HELIM", -1);
										}
										func_435(1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 12);
									}
								}
							}
							else if (!(Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra")))
							{
								if (func_437(0, 1, 1, 1))
								{
									if (!func_772())
									{
										func_436("UW_TAVAIL", 30000);
									}
									else
									{
										func_436("UW_TAVAILC", 30000);
									}
									func_435(1);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_458()
{
	float fVar0;
	
	if (iLocal_577 != 0)
	{
		return;
	}
	if (func_22(&uLocal_568))
	{
		iLocal_577 = func_126(&uLocal_568, 0, 0);
	}
	fVar0 = to_float(iLocal_577);
	fVar0 = (fVar0 / 60000f);
	iLocal_577 = floor(fVar0);
	if (iLocal_577 >= 1)
	{
	}
	else
	{
		iLocal_577 = 1;
	}
	if (iLocal_577 > Global_262145.f_11910)
	{
		iLocal_577 = Global_262145.f_11910;
	}
}

void func_459(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100733.f_8 = 1;
	}
	else
	{
		Global_100733.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_460(iVar0);
		iVar0++;
	}
}

void func_460(int iParam0)
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_461(int iParam0)
{
	if (func_462() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_4585348)
	{
		return;
	}
	Global_4585348 = iParam0;
	Global_4585350 = 0;
	Global_4585351 = 0;
}

int func_462()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

void func_463()
{
	unk_0xDAE61414743C8D1D(5);
	func_465();
	unk_0x425BBE19F25A57AB(1f);
	unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 8);
	func_464();
}

void func_464()
{
	if (Global_1945089)
	{
		if (BitTest(Global_1945090, 0))
		{
			unk_0x8744D2E3FC95740E(&Global_2802660, false);
		}
		if (BitTest(Global_1945090, 1))
		{
			unk_0x8744D2E3FC95740E(&Global_2802660, true);
		}
		if (BitTest(Global_1945090, 5))
		{
			unk_0x8744D2E3FC95740E(&Global_2802660, 5);
		}
		if (unk_0x116053132936EA1F(-355737150))
		{
			unk_0xEBB2809684978887(-355737150, 1, 0, 0);
		}
		if (unk_0x116053132936EA1F(-580979506))
		{
			unk_0xEBB2809684978887(-580979506, 1, 0, 0);
		}
		if (unk_0x116053132936EA1F(-1426452475))
		{
			unk_0xEBB2809684978887(-1426452475, 1, 0, 0);
		}
		if (unk_0x116053132936EA1F(745417724))
		{
			unk_0xEBB2809684978887(745417724, 1, 0, 0);
		}
		if (unk_0x116053132936EA1F(-1305304906))
		{
			unk_0xEBB2809684978887(-1305304906, 1, 0, 0);
		}
		if (unk_0x116053132936EA1F(-1543175077))
		{
			unk_0xEBB2809684978887(-1543175077, 1, 0, 0);
		}
		if (unk_0x116053132936EA1F(-811770997))
		{
			unk_0xEBB2809684978887(-811770997, 1, 0, 0);
		}
		Global_1945090 = 0;
	}
	Global_1945089 = 0;
}

void func_465()
{
	if (unk_0xF40767E41852FB72(Global_2793046.f_5221))
	{
		if (!Global_2793046.f_5221 == unk_0x8F76B2250AC806FA() && Global_2793046.f_5220 < 1f)
		{
			return;
		}
	}
	Global_2793046.f_5221 = -1;
	Global_2793046.f_5220 = 1f;
}

void func_466()
{
	Global_4585352 = { 0f, 0f, 0f };
	Global_4585355 = 0;
	Global_4585356 = 100f;
}

void func_467()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (BitTest(uLocal_97, 13))
	{
		return;
	}
	bVar0 = BitTest(Local_93.f_3, 6);
	bVar1 = BitTest(uLocal_97, 21);
	bVar2 = BitTest(uLocal_97, 23);
	bVar3 = Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_644())
	{
		if (!BitTest(uLocal_98, 17))
		{
			if (func_873(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || bVar2)
				{
					if (!func_204())
					{
						if (!func_772())
						{
							if (bVar0)
							{
								func_652(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
								{
									func_652(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[0]) && func_109(Local_93.f_7[0]))
								{
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 11);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 16);
									func_652(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_652(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_652(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || BitTest(Local_93.f_3, 16))
							{
								func_652(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_652(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
							{
								if (func_535())
								{
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 11);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 16);
									func_652(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_652(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (func_535())
							{
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 11);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 16);
								func_652(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_652(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_535())
							{
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 11);
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 16);
								func_652(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_652(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || BitTest(Local_93.f_3, 16))
						{
							func_652(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_534(1);
					Local_94.f_6 = (Local_94.f_6 + iVar4);
					if (!Global_262145.f_11977)
					{
						if (Local_94.f_6 > 0)
						{
							func_533(19, Local_94.f_6);
						}
					}
					Global_2696875 = iVar4;
					if (iVar4 > 0)
					{
						if (func_532())
						{
							func_520(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0x237E99388DCA3CEF(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_519(1);
					Local_94.f_7 = (Local_94.f_7 + iVar7);
					func_518();
					func_468(0, unk_0x4A8C381C258A124D(), "", -1636175450, 153786435, iVar7, 1, -1, 0, 0, 0);
					Local_94.f_5 = 2;
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 398, 0);
					if (!BitTest(uLocal_98, 16))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 8);
					}
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 17);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 18);
				}
			}
		}
	}
}

int func_468(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_469(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_469(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_479(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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
				func_475(unk_0x83FDC027F0BEA202(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_470(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_470(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_473(iParam0, 1) };
	if (iParam0 == func_472(unk_0x4A8C381C258A124D()))
	{
		func_471(1);
	}
	func_475(Var0, iParam1, 0, sParam2, iParam3);
}

void func_471(int iParam0)
{
	Global_2672505.f_1682 = iParam0;
}

int func_472(int iParam0)
{
	return iParam0;
}

Vector3 func_473(int iParam0, bool bParam1)
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
	if (iParam0 == func_474(unk_0x4A8C381C258A124D()) && unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) == 4)
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

int func_474(int iParam0)
{
	return iParam0;
}

void func_475(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2672505.f_1081[iVar1 /*30*/].f_4 = func_478(Global_2672505.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672505.f_1081[iVar1 /*30*/].f_7 = unk_0x7E3F74F641EE6B27();
			Global_2672505.f_1081[iVar1 /*30*/].f_3 = iParam1;
			Global_2672505.f_1081[iVar1 /*30*/].f_8 = iParam2;
			Global_2672505.f_1081[iVar1 /*30*/].f_9 = func_477();
			Global_2672505.f_1081[iVar1 /*30*/].f_10 = func_476();
			StringCopy(&(Global_2672505.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2672505.f_1081[iVar1 /*30*/].f_26 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam4);
		}
	}
}

int func_476()
{
	if (Global_2672505.f_1682)
	{
		Global_2672505.f_1682 = 0;
		return 1;
	}
	Global_2672505.f_1682 = 0;
	return 0;
}

var func_477()
{
	var uVar0;
	
	uVar0 = Global_2672505.f_1684;
	Global_2672505.f_1684 = 1;
	return uVar0;
}

float func_478(struct<3> Param0, var uParam1, var uParam2)
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

var func_479(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_480(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_480(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_513();
	if (func_175(uParam2))
	{
	}
	if (func_512())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_510(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_509(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_507(0, &iVar1);
					break;
				
				case 3:
					func_507(1, &iVar1);
					break;
				
				case 1:
					func_502(&iVar1);
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
			func_500(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_490((func_499(unk_0x259BE71D8A81D4FA()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF509A0F327DF0ADD(iVar1, iParam8, iParam9);
				if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_2 != -1)
				{
					func_500(1166, iVar1, -1);
				}
				func_485(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_481((func_483(unk_0x259BE71D8A81D4FA()) + iVar1));
			}
			else
			{
				func_481((func_483(unk_0x259BE71D8A81D4FA()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_481(int iParam0)
{
	if (func_512())
	{
		Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_5 = iParam0;
		func_482(joaat("mpply_globalxp"), iParam0);
	}
}

void func_482(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_483(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_873(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return func_484(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_484(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_484(int iParam0)
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

void func_485(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_66(unk_0x259BE71D8A81D4FA()) };
	if (unk_0x7260716F2E4D7661())
	{
		if (unk_0xE582BF3EDDBB1A68(&Var0))
		{
			iVar1 = func_488(func_489(&Var0));
			if (iVar1 == 0)
			{
				func_487(&Global_1665493, iParam0);
				func_486(joaat("mpply_crew_local_xp_0"), Global_1665493);
			}
			else if (iVar1 == 1)
			{
				func_487(&Global_1665494, iParam0);
				func_486(joaat("mpply_crew_local_xp_1"), Global_1665494);
			}
			else if (iVar1 == 2)
			{
				func_487(&Global_1665495, iParam0);
				func_486(joaat("mpply_crew_local_xp_2"), Global_1665495);
			}
			else if (iVar1 == 3)
			{
				func_487(&Global_1665496, iParam0);
				func_486(joaat("mpply_crew_local_xp_3"), Global_1665496);
			}
			else if (iVar1 == 4)
			{
				func_487(&Global_1665497, iParam0);
				func_486(joaat("mpply_crew_local_xp_4"), Global_1665497);
			}
		}
	}
}

void func_486(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
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

void func_487(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_488(int iParam0)
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

int func_489(var uParam0)
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

void func_490(int iParam0, int iParam1, int iParam2)
{
	if (func_512())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_248(-1)])
				{
					unk_0xF509A0F327DF0ADD(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_248(-1)])
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
		if (func_498(unk_0x259BE71D8A81D4FA()))
		{
			Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_6 = func_496(iParam0, 1);
		}
		func_495(640, iParam0, -1, 1);
		func_494(641, func_496(iParam0, 1), -1, 1, 0);
		Global_1665638[func_248(-1)] = iParam0;
		func_491(-1109644434, 7, 0);
	}
}

void func_491(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_493(iParam1, iParam2))
	{
		iVar0 = func_492();
		Global_2694420[iVar0] = iParam1;
		Global_2694431[iVar0] = iParam0;
	}
}

int func_492()
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

int func_493(int iParam0, var uParam1)
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

void func_494(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_248(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

void func_495(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805029[iParam0 /*3*/][func_248(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_248(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_248(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_248(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_248(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_248(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_248(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_248(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_248(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_248(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_248(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_248(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_248(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_248(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_248(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_248(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_248(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_248(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_248(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_248(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_248(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_248(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_248(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_248(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_248(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851325[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851325[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851325[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851325[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851504[func_248(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_248(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_248(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_248(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_248(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_248(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_248(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_248(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851413[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851413[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851413[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851413[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851413[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851507[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851507[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851507[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851507[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851507[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851523[0 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851523[1 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851523[2 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851523[3 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851523[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851413[5 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851325[4 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851539[func_248(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851548[func_248(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851542[func_248(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851551[func_248(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851545[func_248(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851554[func_248(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851557[func_248(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851413[6 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851325[5 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851413[7 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851325[6 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851413[8 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851325[7 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851413[9 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851325[8 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851413[10 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851325[9 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851413[11 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851325[10 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851413[12 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851325[11 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851413[13 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851325[12 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851413[14 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851325[13 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851413[15 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851325[14 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851413[16 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851325[15 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851413[17 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851325[16 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851325[17 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851325[18 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851325[19 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851325[20 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851560[func_248(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851563[func_248(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851566[func_248(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851569[func_248(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851572[func_248(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851575[func_248(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851578[func_248(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851581[func_248(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851584[func_248(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851587[func_248(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851590[func_248(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851593[func_248(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851596[func_248(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851599[func_248(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851325[21 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851413[23 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851325[22 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851413[24 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851325[23 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851325[24 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851325[25 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851413[27 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851325[26 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851413[28 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851325[27 /*3*/][func_248(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_496(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_497(iParam0, 0);
}

int func_497(int iParam0, int iParam1)
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

int func_498(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_499(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return Global_1665638[func_248(-1)];
			}
			else if (func_498(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_248(-1)];
	}
	return 0;
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_269(iParam0, func_248(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_501(iParam0))
	{
		func_494(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_495(iParam0, iVar0, iParam2, 1);
	}
}

int func_501(int iParam0)
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

void func_502(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		iVar4 = unk_0xF0C9E5565CB32F4B(iVar0);
		if (unk_0x7206AEB20960CCC8(iVar4))
		{
			iVar5 = unk_0x4470BE79F5771783(iVar4);
			if (unk_0x1864096A95E36EBA(iVar5) != -1)
			{
				if (unk_0x1864096A95E36EBA(bVar5) == iVar1 || func_504(unk_0x1864096A95E36EBA(bVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (bVar5 != unk_0x259BE71D8A81D4FA())
					{
						if (func_67(unk_0x259BE71D8A81D4FA(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_503(*iParam0, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_503(*iParam0, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_503(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_504(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_505(iParam0, bVar0, iParam1, bVar1) || !func_505(iParam1, bVar1, iParam0, bVar0))
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

int func_505(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
		if (((!func_873(iVar1, 1, 1) || func_16(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_506(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0x56E414973C2A8C0E(bVar1);
			if (unk_0x4FAFF4BCB7633475(uVar2))
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

var func_506(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

void func_507(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
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
				iVar4 = unk_0x4470BE79F5771783(iVar3);
				if (func_873(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x259BE71D8A81D4FA())
					{
						iVar1++;
						if (func_67(unk_0x259BE71D8A81D4FA(), iVar4))
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
			iVar4 = iVar0;
			if (func_873(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x259BE71D8A81D4FA())
				{
					if (func_508(unk_0x259BE71D8A81D4FA(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(unk_0x259BE71D8A81D4FA(), iVar4))
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
		iVar5 = round((func_503(*iParam1, 100) * (10f * Global_262145.f_4228)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_503(*iParam1, 100) * (20f * Global_262145.f_4221)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_508(int iParam0, int iParam1)
{
	return vdist(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_509(int iParam0)
{
	int iVar0;
	
	if (unk_0xC613ED89DC21151D() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_503(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_510(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x510D0699BE9C6D06(iParam0) > func_499(unk_0x259BE71D8A81D4FA()))
		{
			iParam0 = -func_499(unk_0x259BE71D8A81D4FA());
		}
	}
	if (func_511(8000, 0, 0) > 0)
	{
		if (func_511(8000, 0, 0) < (iParam0 + func_499(unk_0x259BE71D8A81D4FA())))
		{
			iParam0 = (func_511(8000, 0, 0) - func_499(unk_0x259BE71D8A81D4FA()));
		}
	}
	return iParam0;
}

int func_511(int iParam0, bool bParam1, int iParam2)
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

int func_512()
{
	return 1;
}

int func_513()
{
	int iVar0;
	
	if (func_517(unk_0x259BE71D8A81D4FA()) || func_516(unk_0x259BE71D8A81D4FA()))
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
	else if (func_378() || func_514(unk_0x259BE71D8A81D4FA()))
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

int func_514(int iParam0)
{
	return func_515(func_348(iParam0));
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_516(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_517(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

void func_518()
{
	Global_2696212 = 1;
}

int func_519(bool bParam0)
{
	int iVar0;
	
	if (BitTest(uLocal_98, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_772())
		{
			return Global_262145.f_11791;
		}
		else
		{
			return Global_262145.f_11730;
		}
	}
	func_458();
	if (func_772())
	{
		iVar0 = (Global_262145.f_11791 * iLocal_577);
	}
	else
	{
		iVar0 = (Global_262145.f_11730 * iLocal_577);
	}
	return iVar0;
}

void func_520(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_532())
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
				func_521(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_521(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_521(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_521(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_521(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_532())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_18()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_528(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_527(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_522(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_522(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_523(iParam0);
	}
}

void func_523(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_532())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_526(iParam0))
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
		func_524(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_524(var uParam0)
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
	func_525(&(uParam0->f_14));
	func_525(&(uParam0->f_14.f_13));
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

void func_525(var uParam0)
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

int func_526(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_527(int iParam0, var uParam1)
{
	Global_2697015 = uParam1;
	Global_2697014 = iParam0;
}

int func_528(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_532())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = uParam2;
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_529(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_529(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_531(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_530();
		unk_0x01F0B819E78A18A1(1, &Var0, 36, iVar1);
	}
}

void func_530()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_531(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_532()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

void func_533(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23997 == 0 || Global_262145.f_23997 == 1)
		{
			if (!unk_0x761778199FE1211C() || Global_262145.f_23997 == 1)
			{
				Global_2793046.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7044)
				{
					iParam1 = Global_262145.f_7044;
				}
				Global_2793046.f_284 = iParam1;
				Global_2793046.f_285 = 0;
			}
		}
	}
}

int func_534(bool bParam0)
{
	int iVar0;
	
	if (BitTest(uLocal_98, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_772())
		{
			return Global_262145.f_11790;
		}
		else
		{
			return Global_262145.f_11729;
		}
	}
	func_458();
	if (func_772())
	{
		iVar0 = (Global_262145.f_11790 * iLocal_577);
	}
	else
	{
		iVar0 = (Global_262145.f_11729 * iLocal_577);
	}
	return iVar0;
}

int func_535()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iLocal_554]))
	{
		if (func_109(Local_93.f_7[iLocal_554]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_93.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_93.f_256[iLocal_554];
	if (!bVar0)
	{
		if (Local_93.f_594[0 /*4*/] != iLocal_554)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_93.f_594[0 /*4*/] == iLocal_554)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_93.f_256[Local_93.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_93.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_536()
{
	bool bVar0;
	var uVar1;
	
	func_702(&bVar0, &uVar1);
	if (iLocal_554 > -1)
	{
		if (func_109(Local_93.f_7[iLocal_554]))
		{
			return 1;
		}
	}
	return 0;
}

void func_537()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_93.f_241 == 1)
	{
		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
		{
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_566) || (func_22(&uLocal_566) && func_19(&uLocal_566, 5000, 0)))
				{
					if (Local_93.f_27 == joaat("savage") || Local_93.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_554;
						if (iVar1 > -1)
						{
							if (func_109(Local_93.f_7[iVar1]))
							{
								iVar0 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x4FAFF4BCB7633475(iVar0))
								{
									Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x501EBB0523078750(iVar0))
								{
									Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_93.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_554;
						if (iVar1 > -1)
						{
							if (func_109(Local_93.f_7[iVar1]))
							{
								iVar0 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x4FAFF4BCB7633475(iVar0))
								{
									Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0x501EBB0523078750(iVar0))
								{
									Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 = iVar1;
								}
								if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0xDC1AA2FE20EEB2E9(joaat("valkyrie"));
									bVar2 = false;
									while (bVar2 < iVar4)
									{
										iVar0 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[iVar1]), bVar2, 0);
										if (iVar0 != 0)
										{
											if (!unk_0x4FAFF4BCB7633475(iVar0))
											{
												if (unk_0x501EBB0523078750(iVar0))
												{
													iVar3++;
												}
											}
										}
										bVar2++;
									}
									if (iVar3 == 0)
									{
										Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_566);
					func_20(&uLocal_566, 0, 0);
				}
			}
		}
	}
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < 4)
	{
		if (BitTest(Local_93.f_319, bVar2))
		{
			if (unk_0x2FC2FDC413532977(Local_93.f_7[bVar2]))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_7[bVar2]), 0))
				{
					if ((func_447() - func_126(&(Local_93.f_349[bVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
						{
							if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bVar2]), 0))
							{
								if (!func_204())
								{
									func_446();
									func_172((func_447() - func_126(&(Local_93.f_349[bVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
						{
							if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bVar2]), 0))
							{
								if (!func_204())
								{
									func_446();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (unk_0xEADBDBE0422CF7E6(Local_93.f_7[bVar2]))
						{
							unk_0x935364B4448CD584(unk_0xE38610F405049F71(Local_93.f_7[bVar2]), 0);
							unk_0x6BFFBDE3C98A828E(unk_0xE38610F405049F71(Local_93.f_7[bVar2]), true);
							if (!unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[bVar2]))))
							{
								unk_0xC392361DCE030EF4(unk_0xE38610F405049F71(Local_93.f_7[bVar2]), 1, 0, -1);
								func_25(&(Local_93.f_7[bVar2]));
							}
							else
							{
								unk_0xB5BD605FB63CDBE6(unk_0xE38610F405049F71(Local_93.f_7[bVar2]), 1, 0, 0);
								func_25(&(Local_93.f_7[bVar2]));
							}
						}
					}
				}
			}
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 == bVar2)
			{
				if (!BitTest(uLocal_98, 6))
				{
					if (func_437(0, 1, 1, 1))
					{
						if (func_772())
						{
							if (!BitTest(uLocal_98, 19))
							{
								func_436("UW_NOPILC", 30000);
							}
							else
							{
								func_436("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_436("UW_NOPIL", 30000);
						}
						func_435(1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 6);
					}
					else if (BitTest(uLocal_98, 19))
					{
						if (unk_0x4C705AAF75363287())
						{
							unk_0x428C32CC68809A35(1);
						}
					}
				}
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					iVar5 = Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10;
					if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar5]))
					{
						if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[iVar5])))
						{
							if (!func_772())
							{
								if (!func_277("UW_EXPL"))
								{
									func_271("UW_EXPL", 0);
								}
							}
							else if (!func_277("UW_EXPLC"))
							{
								func_271("UW_EXPLC", 0);
							}
						}
						else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_277("UW_EXPL") || func_277("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		bVar2++;
	}
}

bool func_538(int iParam0)
{
	return Global_2672505.f_2514[0 /*80*/].f_1 == iParam0;
}

void func_539()
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
	{
		if (Local_93.f_27 == joaat("rhino"))
		{
			if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 11))
			{
				if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_562) || (func_22(&uLocal_562) && func_19(&uLocal_562, 5000, 0)))
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (func_69(Local_578, 0f, 0f, 0f, 0))
							{
								Local_578 = { Local_93.f_30[0 /*3*/] };
							}
							fVar0 = func_541(unk_0x4A8C381C258A124D(), Local_578, 1);
							if (fVar0 > 750f)
							{
								unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 10);
							}
						}
						func_106(&uLocal_562);
						func_20(&uLocal_562, 0, 0);
					}
				}
				else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (!func_277("UW_OOB"))
					{
						func_271("UW_OOB", 0);
					}
					if (!func_22(&uLocal_564))
					{
						uVar2 = unk_0xCA369FBC0DE29517();
						unk_0xBD618A73193F9982(uVar2, "Explosion_Countdown", unk_0xE38610F405049F71(Local_93.f_7[func_540()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x3F002AA9562BF0BE(uVar2, "Time", 30f);
						func_20(&uLocal_564, 0, 0);
					}
					if (func_22(&uLocal_564))
					{
						if ((func_447() - func_126(&uLocal_564, 0, 0)) >= 0)
						{
							func_446();
							func_172((func_447() - func_126(&uLocal_564, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_446();
							func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 11);
						}
					}
					if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 11))
					{
						fVar0 = func_541(unk_0x4A8C381C258A124D(), Local_93.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 10);
							func_106(&uLocal_564);
							unk_0x8E4825CCACA34B58(uVar2);
						}
					}
				}
			}
		}
	}
	if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 11))
	{
		func_704(1);
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			iVar1 = func_540();
			if (iVar1 > -1)
			{
				if (func_109(Local_93.f_7[iVar1]))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_93.f_7[iVar1]))
					{
						unk_0x935364B4448CD584(unk_0xE38610F405049F71(Local_93.f_7[iVar1]), 0);
						unk_0x6BFFBDE3C98A828E(unk_0xE38610F405049F71(Local_93.f_7[iVar1]), true);
						unk_0xC392361DCE030EF4(unk_0xE38610F405049F71(Local_93.f_7[iVar1]), 1, 0, -1);
						func_25(&(Local_93.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_540()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar1]))
			{
				if (func_109(Local_93.f_7[iVar1]))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_541(int iParam0, struct<3> Param1, int iParam2)
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

void func_542()
{
	var uVar0;
	bool bVar1;
	
	bVar1 = -1;
	if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!BitTest(uLocal_97, 24))
	{
		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 1)
		{
			func_702(&bVar1, &uVar0);
			if (func_545(bVar1))
			{
				if (bVar1 > -1)
				{
					if (Local_93.f_22[bVar1] != func_5())
					{
						fLocal_103 = unk_0xA928AA924B7E3EE2();
						unk_0x1D9E253CF963B125(-1f);
						func_544(1, bVar1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 24);
						func_543(1);
					}
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 24);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 25);
			}
		}
	}
	if (!BitTest(uLocal_97, 25))
	{
		if (BitTest(uLocal_97, 24))
		{
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 > 1)
			{
				unk_0x1D9E253CF963B125(fLocal_103);
				func_702(&bVar1, &uVar0);
				if (bVar1 > -1)
				{
					func_544(0, bVar1);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 25);
					func_543(0);
				}
			}
		}
	}
}

void func_543(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 15);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 4);
	}
}

void func_544(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar0));
			if (func_873(iVar1, 0, 1) && iVar1 != unk_0x259BE71D8A81D4FA())
			{
				if (BitTest(Local_96[bVar0 /*18*/].f_1, bParam1) || !bParam0)
				{
					unk_0x38C14A8B378CBD7B(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0x38C14A8B378CBD7B(iVar1, 0);
				}
			}
		}
		bVar0++;
	}
}

bool func_545(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (!bVar0)
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
			{
				if (bVar1 != unk_0xAE032CEDCF23C6D5())
				{
					if (BitTest(Local_96[bVar1 /*18*/].f_1, bParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void func_546()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF859473E4AD09F30())
	{
		return;
	}
	if (!BitTest(uLocal_97, 15))
	{
		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 2)
		{
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 == 0)
			{
				if (Local_93.f_22[0] != func_5())
				{
					if (func_437(0, 0, 1, 1))
					{
						if (!func_772())
						{
							if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
							{
								if (!func_772())
								{
									func_557("UW_START1P", unk_0xBD6CA019F46AB947(Local_93.f_22[0]), 1, 30000);
								}
								else
								{
									func_557("UW_START1PC", unk_0xBD6CA019F46AB947(Local_93.f_22[0]), 1, 30000);
								}
								func_435(1);
							}
							else if (BitTest(Local_93.f_15, 0))
							{
								if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 14))
								{
									if (!func_772())
									{
										func_436("UW_STARTM", 30000);
									}
									else
									{
										func_436("UW_STARTMC", 30000);
									}
									func_435(1);
								}
							}
							else
							{
								func_557("UW_START1P", unk_0xBD6CA019F46AB947(Local_93.f_22[0]), 1, 30000);
								func_435(1);
							}
						}
						else if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 14))
						{
							if (!func_772())
							{
								func_436("UW_STARTM", 30000);
							}
							else
							{
								func_436("UW_STARTMC", 30000);
							}
							func_435(1);
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 15);
					}
				}
			}
		}
	}
	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 2)
	{
		if (Local_93.f_241 == 1)
		{
			if (Local_93.f_27 != joaat("hydra") && Local_93.f_27 != joaat("rhino"))
			{
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
				{
					if (iLocal_554 >= 0)
					{
						if (!BitTest(uLocal_98, 10))
						{
							if (!BitTest(uLocal_98, 9))
							{
								if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iLocal_554]))
								{
									if (func_109(Local_93.f_7[iLocal_554]))
									{
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 9);
									}
								}
							}
							else if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iLocal_554]))
							{
								if (!func_109(Local_93.f_7[iLocal_554]))
								{
									func_556("UW_TEAMV", 0);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_772())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!BitTest(Local_93.f_3, 6))
			{
				if (!BitTest(uLocal_97, (16 + iVar1)))
				{
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 >= 2)
					{
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 == 0)
						{
							if ((BitTest(Local_93.f_3, 0) && BitTest(Local_93.f_3, 1)) && BitTest(Local_93.f_3, 2))
							{
								if (unk_0x2FC2FDC413532977(Local_93.f_7[0]))
								{
									if (func_109(Local_93.f_7[0]))
									{
										if (unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_555(iVar1, 0);
											if (iVar0 != func_5())
											{
												func_547("UW_COMP", iVar0, 1, 0, 0, 0, 1, 0);
											}
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, (16 + iVar1));
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
}

int func_547(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(bParam1), 64);
		}
		if (unk_0xD6F9DEE4765092A9(&Var1))
		{
		}
		unk_0xCCDB0041859B85A6(sParam0);
		unk_0x4E5A3D96808F7F84(iParam2);
		unk_0x60D332F23943B34F(func_553(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
		}
		else
		{
			Global_2764203 = { func_66(bParam1) };
			if (unk_0xC07B1AA6155EC337(&Global_2764133, 35, &Global_2764203))
			{
				iVar2 = 0;
				if (unk_0x1B79E937E91F40C3(&(Global_2764133.f_22), "Leader") && Global_2764133.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2764133.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_552(&Var1) };
					}
					iVar0 = unk_0x4252EAF1B00ED825(iVar3, unk_0xF05A19B508A1ECF0(&Global_2764133, 35), &(Global_2764133.f_17), Global_2764133.f_30, iVar2, 0, Global_2764133, &Var1, Global_1576217, Global_1576218, Global_1576219);
				}
				else
				{
					iVar0 = unk_0xB262204BCFF28FCC(iVar3, unk_0xF05A19B508A1ECF0(&Global_2764133, 35), &(Global_2764133.f_17), Global_2764133.f_30, iVar2, 0, Global_2764133, Global_1576217, Global_1576218, Global_1576219);
				}
			}
			else
			{
				iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
			}
		}
		func_548(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_548(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_551() || !unk_0x834C960822A4683F()) || !func_16(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_549(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944061.f_5[iVar0 /*53*/] = iParam0;
		Global_1944061.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944061.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_549(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_550(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944061++;
	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}
	return (Global_1944061 - 1);
}

void func_550(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_551()
{
	return unk_0x087611B922B50F13(-1762644250);
}

struct<16> func_552(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_553(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_554(&cVar0);
}

var func_554(char[4] cParam0)
{
	return cParam0;
}

int func_555(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (unk_0x2FC2FDC413532977(Local_93.f_7[iParam1]))
	{
		if (func_109(Local_93.f_7[iParam1]))
		{
			iVar1 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (unk_0x501EBB0523078750(iVar1))
				{
					iVar0 = unk_0x1C1C92A1CBAE364B(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_556(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xCCDB0041859B85A6(sParam0);
	iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
	func_548(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_557(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x4E5A3D96808F7F84(iParam2);
	}
	unk_0x60D332F23943B34F(sParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam3);
}

void func_558()
{
	if (!BitTest(uLocal_97, 9))
	{
		if (Local_93.f_241 == 1)
		{
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
			{
				if (unk_0x86A2BC11844DEEB3("KILL_LIST_START_MUSIC"))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 9);
				}
			}
		}
	}
	if (!BitTest(uLocal_97, 10))
	{
		if (BitTest(uLocal_97, 9))
		{
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 > 1)
			{
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
				{
					if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0x86A2BC11844DEEB3("MP_MC_FAIL"))
						{
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 10);
						}
					}
					else if (unk_0x86A2BC11844DEEB3("KILL_LIST_STOP_MUSIC"))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 10);
						func_559();
					}
				}
			}
		}
	}
}

void func_559()
{
	if (BitTest(Global_2793046.f_5062, 1))
	{
		unk_0x8744D2E3FC95740E(&(Global_2793046.f_5062), true);
	}
	if (Global_2793046.f_5062 > 0)
	{
		unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_KILL");
		unk_0x86A2BC11844DEEB3("FM_COUNTDOWN_30S_FIRA");
		unk_0xB43467C43086A6A1("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x938C85923AD6778A(1);
		Global_2793046.f_5062 = 0;
		unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
		unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
		unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", 0);
		if (!unk_0x1B79E937E91F40C3(unk_0x1AF90EB93E0012D6(), "am_pi_menu"))
		{
			if (Global_2793046.f_5072 > -1)
			{
				unk_0x394AFAC073E1F277(Global_2793046.f_5072);
				Global_2793046.f_5072 = -1;
			}
		}
	}
}

void func_560()
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iVar8 = 1;
	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
	{
		if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 8))
		{
			if (!BitTest(uLocal_97, 26))
			{
				if ((((BitTest(Local_93.f_3, 0) && BitTest(Local_93.f_3, 1)) && BitTest(Local_93.f_3, 2)) || (func_772() && BitTest(Local_93.f_3, 6))) || (func_772() && BitTest(Local_93.f_3, 15)))
				{
					if (!func_22(&uLocal_573))
					{
						func_20(&uLocal_573, 0, 0);
					}
					if (func_19(&uLocal_573, 1000, 0))
					{
						if (func_277("UW_ATTK"))
						{
							func_9();
						}
						func_635();
						if (func_634())
						{
							iVar13 = func_534(1);
							if (iVar13 > 0)
							{
								Local_94.f_6 = (Local_94.f_6 + iVar13);
								if ((!Global_262145.f_11977 && !BitTest(Local_93.f_3, 8)) || (!Global_262145.f_11978 && BitTest(Local_93.f_3, 8)))
								{
									if (Local_94.f_6 > 0)
									{
										func_533(19, Local_94.f_6);
									}
								}
								Global_2696875 = iVar13;
								if (func_532())
								{
									func_520(210955503, iVar13, &uVar15, 0, 1, 0);
								}
								else
								{
									unk_0x237E99388DCA3CEF(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_519(1);
							func_518();
							Local_94.f_7 = (Local_94.f_7 + iVar11);
							func_468(0, unk_0x4A8C381C258A124D(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_94.f_5 = 2;
							func_652(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
						}
						else if (!func_772())
						{
							iVar13 = func_647(0);
							func_622(&iVar13, 1);
							iVar13 = (iVar13 + func_534(1));
							if (iVar13 > 0)
							{
								Local_94.f_6 = (Local_94.f_6 + iVar13);
								if (!Global_262145.f_11977)
								{
									if (Local_94.f_6 > 0)
									{
										func_533(19, Local_94.f_6);
									}
								}
								Global_2696875 = iVar13;
								if (func_532())
								{
									func_520(210955503, iVar13, &uVar17, 0, 1, 0);
								}
								else
								{
									unk_0x237E99388DCA3CEF(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_519(1);
							iVar11 = (iVar11 + func_621());
							Local_94.f_7 = (Local_94.f_7 + iVar11);
							func_518();
							func_468(0, unk_0x4A8C381C258A124D(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_94.f_5 = 1;
							func_651(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_620())
						{
							if (!func_619(1))
							{
								if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
								{
									func_9();
								}
								iVar13 = func_647(0);
								func_622(&iVar13, 1);
								iVar13 = (iVar13 + func_534(1));
								Local_94.f_6 = (Local_94.f_6 + iVar13);
								if (!Global_262145.f_11978)
								{
									if (Local_94.f_6 > 0)
									{
										func_533(19, Local_94.f_6);
									}
								}
								Global_2696875 = iVar13;
								if (iVar13 > 0)
								{
									if (func_532())
									{
										func_520(210955503, iVar13, &uVar19, 0, 1, 0);
									}
									else
									{
										unk_0x237E99388DCA3CEF(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
								{
									func_651(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									func_651(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_94.f_5 = 1;
								iVar11 = func_621();
								iVar11 = (iVar11 + func_519(1));
								Local_94.f_7 = (Local_94.f_7 + iVar11);
								func_518();
								func_468(0, unk_0x4A8C381C258A124D(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar13 = func_534(1);
								iVar11 = func_519(1);
								iVar8 = 0;
								iVar10 = 0;
								while (iVar10 <= 3)
								{
									if (Local_93.f_465[iVar10 /*4*/].f_1 == Local_93.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = -1;
										if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
										{
											if (Local_93.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (Local_93.f_465[iVar10 /*4*/].f_2 != unk_0x259BE71D8A81D4FA())
												{
													if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(Local_93.f_465[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = unk_0xB23E0F9B63D009A8(Local_93.f_465[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_554 > -1)
										{
											if (iLocal_554 != Local_93.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_93.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
								{
									if (iVar8 > 2)
									{
										bVar9 = true;
									}
									else if (iVar3[0] == func_5())
									{
										bVar9 = true;
									}
									else
									{
										func_618(68, "UW_DRAWP", unk_0xBD6CA019F46AB947(iVar3[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar8 > 2)
								{
									bVar9 = true;
								}
								else if (iVar6[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									func_651(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar9)
								{
									if (!func_772())
									{
										func_652(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
									}
									else
									{
										func_652(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
									}
								}
								iVar14 = round((to_float(func_647(0)) / to_float(iVar8)));
								iVar12 = round((to_float(func_621()) / to_float(iVar8)));
								func_622(&iVar14, 1);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_94.f_6 = (Local_94.f_6 + iVar13);
								if (!Global_262145.f_11978)
								{
									if (Local_94.f_6 > 0)
									{
										func_533(19, Local_94.f_6);
									}
								}
								Global_2696875 = iVar13;
								if (iVar13 > 0)
								{
									if (func_532())
									{
										func_520(210955503, iVar13, &uVar21, 0, 1, 0);
									}
									else
									{
										unk_0x237E99388DCA3CEF(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_94.f_7 = (Local_94.f_7 + iVar11);
								func_518();
								func_468(0, unk_0x4A8C381C258A124D(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_616(1);
							iVar13 = func_534(1);
							iVar11 = func_519(1);
							Local_94.f_6 = (Local_94.f_6 + iVar13);
							if (!Global_262145.f_11978)
							{
								if (Local_94.f_6 > 0)
								{
									func_533(19, Local_94.f_6);
								}
							}
							Global_2696875 = iVar13;
							if (iVar13 > 0)
							{
								if (func_532())
								{
									func_520(210955503, iVar13, &uVar23, 0, 1, 0);
								}
								else
								{
									unk_0x237E99388DCA3CEF(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_94.f_7 = (Local_94.f_7 + iVar11);
							func_518();
							func_468(0, unk_0x4A8C381C258A124D(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							if (!func_619(0))
							{
								iVar5 = Local_93.f_465[0 /*4*/];
								if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
								{
									iVar2 = unk_0xB23E0F9B63D009A8(Local_93.f_465[0 /*4*/].f_2);
									if (func_319(iVar2, 1))
									{
										iVar26 = func_323(iVar2);
										if (iVar26 > -1)
										{
											uVar28 = func_321(iVar26);
											sVar27 = func_610(iVar2);
											bVar25 = true;
										}
									}
									if (iVar2 != func_5())
									{
										if (!bVar25)
										{
											if (!func_772())
											{
												func_618(65, "UW_FWONP", unk_0xBD6CA019F46AB947(iVar2), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_618(65, "UW_FWONPC", unk_0xBD6CA019F46AB947(bVar2), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_772())
										{
											func_608(66, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_608(66, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_772())
									{
										func_651(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										func_651(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
								{
									func_9();
								}
								iVar10 = 1;
								while (iVar10 <= 3)
								{
									if (Local_93.f_465[iVar10 /*4*/].f_1 == Local_93.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
										{
											if (Local_93.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(Local_93.f_465[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = unk_0xB23E0F9B63D009A8(Local_93.f_465[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_554 > -1)
										{
											if (iLocal_554 != Local_93.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_93.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_93.f_27 == joaat("hydra") || Local_93.f_27 == joaat("rhino"))
								{
									if (iVar8 == 2)
									{
										if (iVar3[0] != func_5() && unk_0x762604C40829DB72(iVar3[0]))
										{
											if (iVar3[1] != func_5() && unk_0x762604C40829DB72(iVar3[1]))
											{
												func_566(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_324(), 15000, func_324(), unk_0xBD6CA019F46AB947(iVar3[0]), unk_0xBD6CA019F46AB947(iVar3[1]), 0);
											}
											else
											{
												bVar9 = true;
											}
										}
										else
										{
											bVar9 = true;
										}
									}
									else
									{
										bVar9 = true;
									}
								}
								else if (iVar8 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[1] + 1, 16);
									func_651(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var1, 1, 2, 0);
									bVar9 = true;
								}
								else
								{
									bVar9 = true;
								}
								if (bVar9)
								{
									func_652(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
								}
							}
						}
						func_674(0);
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
						{
							Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 2;
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 13);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 26);
					}
				}
				else if (BitTest(Local_93.f_3, 6) || (!func_772() && BitTest(Local_93.f_3, 15)))
				{
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_10 != -1)
					{
						func_652(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
					}
					else
					{
						func_651(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_674(0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 26);
					iVar13 = func_534(1);
					Local_94.f_6 = (Local_94.f_6 + iVar13);
					if (!Global_262145.f_11977)
					{
						if (Local_94.f_6 > 0)
						{
							func_533(19, Local_94.f_6);
						}
					}
					Global_2696875 = iVar13;
					if (iVar13 > 0)
					{
						if (func_532())
						{
							func_520(210955503, iVar13, &uVar29, 0, 1, 0);
						}
						else
						{
							unk_0x237E99388DCA3CEF(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_519(1);
					Local_94.f_7 = (Local_94.f_7 + iVar11);
					func_518();
					func_468(0, unk_0x4A8C381C258A124D(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_94.f_5 = 2;
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
					{
						Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_93.f_3, 14))
				{
					func_674(0);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 8);
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 3)
					{
						Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 3;
					}
				}
				else if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 11))
				{
					func_651(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					func_674(0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 26);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 8);
					iVar13 = func_534(1);
					Local_94.f_6 = (Local_94.f_6 + iVar13);
					if (!Global_262145.f_11977)
					{
						if (Local_94.f_6 > 0)
						{
							func_533(19, Local_94.f_6);
						}
					}
					Global_2696875 = iVar13;
					if (iVar13 > 0)
					{
						if (func_532())
						{
							func_520(210955503, iVar13, &uVar31, 0, 1, 0);
						}
						else
						{
							unk_0x237E99388DCA3CEF(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_519(1);
					Local_94.f_7 = (Local_94.f_7 + iVar11);
					func_518();
					func_468(0, unk_0x4A8C381C258A124D(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_94.f_5 = 2;
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
					{
						Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_93.f_3, 12))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 8);
				}
			}
			if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 8))
			{
				if (BitTest(uLocal_97, 26))
				{
					if (func_277("UW_ATTK"))
					{
						func_9();
					}
					if (func_561(&uLocal_545, 1))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 8);
					}
					if (!func_277("UW_EXPL") && !func_277("UW_EXPLC"))
					{
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9 > -1)
						{
							if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9]))
							{
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									if (func_109(Local_93.f_7[Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9]))
									{
										if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 8))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 8);
	}
}

int func_561(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if ((((*uParam0 > 0 && !func_368()) && !(func_234(unk_0x259BE71D8A81D4FA(), 0) && (func_239(unk_0x259BE71D8A81D4FA()) || func_237(unk_0x259BE71D8A81D4FA())))) && !func_565(unk_0x259BE71D8A81D4FA())) && !func_214(unk_0x259BE71D8A81D4FA()))
	{
		func_564();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 25);
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_4687), false);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_563(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_562();
				func_563(uParam0, 2);
			}
			break;
		
		case 2:
			func_562();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_699("AMEV_LBD_HELP"))
				{
					unk_0x428C32CC68809A35(1);
				}
				func_563(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0x8744D2E3FC95740E(&(Global_2793046.f_4687), true);
				func_563(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x8744D2E3FC95740E(&(Global_2793046.f_4687), true);
			return 1;
	}
	return 0;
}

void func_562()
{
	if (BitTest(Global_2793046.f_4687, 0))
	{
		if (((((!unk_0xBE259DBA45F2996E() && !BitTest(Global_2793046.f_848, 2)) && func_873(unk_0x259BE71D8A81D4FA(), 1, 1)) && !Global_75693) && !Global_60543) && !unk_0x15CCE8886267624F())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_4687), true);
			func_436("AMEV_LBD_HELP", -1);
			func_435(1);
			unk_0x8744D2E3FC95740E(&(Global_2793046.f_4687), false);
		}
	}
}

void func_563(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_564()
{
	Global_2696213 = 1;
}

int func_565(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_5())
	{
		if (func_873(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				iVar0 = func_195(Global_2657589[iParam0 /*466*/].f_321.f_7);
				return (iVar0 == 2 || iVar0 == 25);
			}
		}
	}
	return 0;
}

int func_566(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_607(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_567(&Var0);
}

int func_567(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672505.f_2836)
		{
			return 0;
		}
	}
	func_578(uParam0, uParam0->f_17);
	func_577(uParam0);
	if (func_61())
	{
		func_577(uParam0);
	}
	if (func_576(uParam0->f_1))
	{
		func_569();
		if (Global_2672505.f_2514[0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2514[0 /*80*/] = { *uParam0 };
			if (func_568(uParam0->f_69, 8192))
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
				func_569();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_366(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
				Global_2672505.f_2514[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_568(uParam0->f_69, 128))
			{
				if (func_371(Global_2672505.f_2514[iVar0 /*80*/].f_1))
				{
					Global_2672505.f_2514[iVar0 /*80*/].f_2 = 5;
					func_366(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_568(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_569()
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
	func_570();
	if (bVar0)
	{
		Global_78827 = 0;
	}
}

void func_570()
{
	Global_2672505.f_2838 = 0;
	Global_2672505.f_2838.f_582 = 0;
	func_574(&(Global_2672505.f_2838.f_1));
	Global_2672505.f_2838.f_1.f_1 = 0;
	func_571(&(Global_2672505.f_2838.f_1), 1);
}

void func_571(var uParam0, int iParam1)
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
				if (unk_0x15CCE8886267624F() && !func_573(0))
				{
					unk_0x10B228D2FDB7AF16(800);
				}
			}
		}
	}
	func_572(0);
}

void func_572(int iParam0)
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

int func_573(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_574(var uParam0)
{
	func_575(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_575(var uParam0)
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

int func_576(int iParam0)
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

void func_577(var uParam0)
{
	if (func_373(uParam0->f_1))
	{
		uParam0->f_72 = func_324();
	}
}

void func_578(var uParam0, int iParam1)
{
	if (func_373(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_5() || !func_873(iParam1, 0, 1))
	{
		return;
	}
	if (func_371(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_579(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_579(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_411(iParam0) && !bParam4)
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
		iVar0 = unk_0x1864096A95E36EBA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_108449[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_411(unk_0x259BE71D8A81D4FA()) || (func_606() && func_605())) && !BitTest(Global_2793046.f_4690, 31)) && !bParam4)
	{
		uVar1 = func_604();
		if (unk_0xFC8BFE4B41177C22(uVar1))
		{
			if (unk_0x501EBB0523078750(iVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(iVar1) != -1)
				{
					if (func_873(unk_0x1C1C92A1CBAE364B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_602(iParam1, bParam0, 0);
							}
							else
							{
								return func_591(bParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_591(bParam0, unk_0x1C1C92A1CBAE364B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_602(iParam1, bParam0, 0);
				}
				else
				{
					return func_580(0, -1, 0);
				}
			}
			else
			{
				return func_580(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_602(iParam1, bParam0, 0);
		}
		else
		{
			return func_591(bParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_591(bParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_580(bool bParam0, int iParam1, bool bParam2)
{
	return func_581(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_581(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(bParam0);
	if ((func_590() || (func_589() && func_587())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_586(iParam2, iVar0);
		}
		else
		{
			return func_586(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_504(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_585(1);
				}
				else
				{
					return func_585(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_582(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_582(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_585(1);
	}
	return func_585(0);
}

int func_582(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_584(iParam0, iParam1, iParam3);
	if (func_583(Global_4718592.f_113724, 1))
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

int func_583(int iParam0, bool bParam1)
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

int func_584(int iParam0, int iParam1, int iParam2)
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
			if (!func_504(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_585(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_586(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_584(iParam1, iParam0, 4);
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

int func_587()
{
	if (func_588())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_588()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_589()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_590()
{
	if (func_588() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_591(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_594())
			{
				iVar3 = func_323(bParam0);
				if (!iVar3 == -1)
				{
					return func_321(iVar3);
				}
			}
			if ((func_593(iParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_504(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(bParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_585(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_592(1);
			}
			else
			{
				return func_581(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_585(1);
			}
			else
			{
				return func_581(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_323(bParam0);
	if (!iVar4 == -1)
	{
		return func_321(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_592(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_593(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1)
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

int func_594()
{
	if ((((((func_303() || func_601()) || func_61()) || func_600()) || func_599()) || func_597()) || func_595())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_595()
{
	return func_596(Global_4718592.f_113724);
}

int func_596(int iParam0)
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

int func_597()
{
	return func_598(Global_4718592.f_113724);
}

int func_598(int iParam0)
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

var func_599()
{
	return Global_2683864.f_24;
}

bool func_600()
{
	return Global_2683864.f_21;
}

var func_601()
{
	return Global_2683864.f_18;
}

int func_602(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_594())
	{
		iVar2 = func_323(iParam1);
		if (!iVar2 == -1)
		{
			return func_321(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
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
			iVar0 = func_581(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_603(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_504(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
		{
			iVar0 = func_592(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_603(int iParam0)
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

var func_604()
{
	return Global_2621446.f_2;
}

var func_605()
{
	return BitTest(Global_2621446, 4);
}

var func_606()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

void func_607(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
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

int func_608(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_609(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_609(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_607(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_366(&(Var0.f_69), 4);
	return func_567(&Var0);
}

char* func_610(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		uVar0 = func_615(&(Global_1894573[iParam0 /*608*/].f_10.f_105));
		return uVar0;
	}
	if (Global_1894573[iParam0 /*608*/].f_10.f_121 != Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_121)
	{
		uVar0 = func_613(iParam0, 0);
		return uVar0;
	}
	if (((func_238(iParam0, 28) || func_238(unk_0x259BE71D8A81D4FA(), 28)) || func_612(iParam0)) && !func_611(iParam0))
	{
		return func_613(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != unk_0x259BE71D8A81D4FA())
		{
			if (!func_342() && !unk_0x8FF2665359043205(0, -1, 1))
			{
				return func_613(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		uVar0 = func_615(&(Global_1894573[iVar1 /*608*/].f_10.f_105));
		if (unk_0xD6F9DEE4765092A9(uVar0))
		{
			return func_613(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_611(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (func_342())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
		else if (unk_0x97DD063A9C6137F8(0))
		{
			if (unk_0x8EF8E27D73EB5271(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_612(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_66(iParam0) };
		if ((unk_0x3B880DE16766E9C3() && !unk_0x716271729B9FB8E6()) || unk_0x761778199FE1211C())
		{
			if (unk_0x97DD063A9C6137F8(0))
			{
				return 0;
			}
		}
		else if (func_342() || unk_0x716271729B9FB8E6())
		{
			if (unk_0x97DD063A9C6137F8(0))
			{
				if (unk_0x8EF8E27D73EB5271(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_613(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_307(iParam0, 1))
		{
			return func_614();
		}
	}
	return unk_0xFACCDE46E24AD056("GB_REST_ACC");
}

char* func_614()
{
	return unk_0xFACCDE46E24AD056("GB_REST_ACCM");
}

var func_615(var uParam0)
{
	return uParam0;
}

void func_616(bool bParam0)
{
	if (bParam0)
	{
		if (func_617(1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1836883, true);
		}
	}
	else if (func_617(2))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1836883, 2);
	}
}

int func_617(int iParam0)
{
	var uVar0;
	
	uVar0 = func_269(2537, -1, 0);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_618(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_607(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_567(&Var0);
}

int func_619(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_702(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_93.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_93.f_27 == joaat("rhino") || Local_93.f_27 == joaat("hydra"))
	{
		return Local_93.f_465[0 /*4*/].f_1 == Local_93.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_93.f_594[0 /*4*/].f_1 == Local_93.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_620()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_702(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_93.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_621()
{
	if (!func_772())
	{
		return round((to_float(Global_262145.f_11726) * Global_262145.f_11916));
	}
	if ((BitTest(Local_93.f_3, 0) && BitTest(Local_93.f_3, 1)) && BitTest(Local_93.f_3, 2))
	{
		return round((to_float(Global_262145.f_11787) * Global_262145.f_11918));
	}
	if (BitTest(Local_93.f_3, 6))
	{
		return round((to_float(Global_262145.f_11787) * Global_262145.f_11918));
	}
	return 0;
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_633())
		{
			if (func_632(0))
			{
				if (!func_388(0))
				{
					if (unk_0x762604C40829DB72(func_631()))
					{
						if (func_630() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_630());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_628(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_627("GB_BCUT_TICK1", func_631(), iVar0, 0, 0, 1);
						}
						func_626(20);
						func_623(func_631(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_623(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_873(bParam0, 0, 1))
	{
		Var0.f_0 = 1810976828;
		Var0.f_1 = unk_0x259BE71D8A81D4FA();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_625(bParam0);
		func_624(&(Var0.f_6), &(Var0.f_7));
		unk_0x01F0B819E78A18A1(1, &Var0, 8, func_531(bParam0));
	}
}

void func_624(var uParam0, var uParam1)
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

var func_625(int iParam0)
{
	return Global_1894573[iParam0 /*608*/].f_510;
}

void func_626(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5225.f_7[iVar0]), bVar1);
}

int func_627(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xBD6CA019F46AB947(bParam1), 64);
		}
		if (unk_0xD6F9DEE4765092A9(&Var1))
		{
		}
		unk_0xCCDB0041859B85A6(sParam0);
		unk_0x4E5A3D96808F7F84(func_579(bParam1, -2, 1, 0, 0));
		unk_0x60D332F23943B34F(func_553(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x4E5A3D96808F7F84(iParam3);
		}
		unk_0x511D14ED2DA887E1(iParam2);
		iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
		func_548(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_628(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_629(1);
	}
	else
	{
		iVar1 = func_629(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_629(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12865;
}

int func_630()
{
	return Global_262145.f_12864;
}

bool func_631()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

bool func_632(bool bParam0)
{
	return func_319(unk_0x259BE71D8A81D4FA(), bParam0);
}

bool func_633()
{
	return func_355(unk_0x259BE71D8A81D4FA());
}

int func_634()
{
	int iVar0;
	
	if (!BitTest(Local_93.f_3, 6) && !BitTest(Local_93.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_93.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_635()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_73[iVar0]))
		{
			if (!func_109(Local_93.f_73[iVar0]))
			{
				func_25(&(Local_93.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iVar0]))
		{
			if (func_31(Local_93.f_48[iVar0]))
			{
				func_25(&(Local_93.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_636(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_234(unk_0x259BE71D8A81D4FA(), 0) || func_349(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_239(unk_0x259BE71D8A81D4FA()) || func_251(unk_0x259BE71D8A81D4FA()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xC259E614564DAB8F() < iParam0)
	{
		if (bParam2)
		{
			func_641(sParam3, sParam4, 1);
		}
		if (func_640(26, -1))
		{
			func_638(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1836858.f_18)))
	{
		if (!func_19(&(Global_1836858.f_18), 7500, 0))
		{
			return 0;
		}
		func_106(&(Global_1836858.f_18));
	}
	if (func_637())
	{
		if (bParam2)
		{
			func_641(sParam3, sParam4, 0);
		}
		if (func_640(26, -1))
		{
			func_638(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x7F258099B06D4C7C() < iParam0)
	{
		if (bParam2)
		{
			func_641(sParam3, sParam4, 1);
		}
		if (func_640(26, -1))
		{
			func_638(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_637()
{
	return BitTest(Global_1836858.f_1, 0);
}

void func_638(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			unk_0x91F6DFBE57E45538(0, iParam1);
			break;
		
		default:
			uVar1 = func_639(iParam1);
			iVar0 = unk_0x38640D2193CB547F(uVar1);
			if (BitTest(iVar0, bParam0))
			{
				unk_0x8744D2E3FC95740E(&iVar0, bParam0);
				unk_0x91F6DFBE57E45538(iVar0, iParam1);
			}
			break;
	}
}

int func_639(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_640(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	uVar0 = func_639(iParam1);
	uVar1 = unk_0x38640D2193CB547F(uVar0);
	return BitTest(uVar1, iParam0);
}

void func_641(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!BitTest(Global_1836858.f_1, 2) && !func_206(unk_0x259BE71D8A81D4FA())) && !func_205(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xD6F9DEE4765092A9(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_652(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 2);
	}
}

void func_642()
{
	Global_2793046.f_1886.f_56 = 1;
}

void func_643()
{
	Global_2793046.f_1886.f_54 = 1;
}

bool func_644()
{
	return BitTest(Global_2793046.f_1827, 11);
}

int func_645()
{
	if (iLocal_554 > -1)
	{
		if (func_109(Local_93.f_7[iLocal_554]))
		{
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[iLocal_554])))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_646(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_647(bool bParam0)
{
	if (!func_772())
	{
		return round((to_float(Global_262145.f_11725) * Global_262145.f_11915));
	}
	if (bParam0)
	{
		return round((to_float(Global_262145.f_11786) * Global_262145.f_11917));
	}
	if ((BitTest(Local_93.f_3, 0) && BitTest(Local_93.f_3, 1)) && BitTest(Local_93.f_3, 2))
	{
		return round((to_float(Global_262145.f_11786) * Global_262145.f_11917));
	}
	if (BitTest(Local_93.f_3, 6))
	{
		return round((to_float(Global_262145.f_11786) * Global_262145.f_11917));
	}
	return 0;
}

char* func_648()
{
	if (Local_93.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0x00C6FDED3EB75117(Local_93.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_649(int iParam0, int iParam1, bool bParam2)
{
	if (func_249())
	{
		if (iParam1 == 1)
		{
			if (Global_2793046.f_4492 == -1)
			{
				Global_2793046.f_4492 = Global_262145.f_27184;
			}
			func_8(&(Global_2793046.f_4490), 0, 0);
			if (bParam2)
			{
				if (Global_2793046.f_4495 == -1)
				{
					Global_2793046.f_4495 = Global_262145.f_27185;
				}
				func_8(&(Global_2793046.f_4493), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_8 = 0;
				func_704(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_8 = 0;
			func_704(1);
		}
		if ((!unk_0x834C960822A4683F() && !func_650()) && !func_255(unk_0x259BE71D8A81D4FA()))
		{
			Global_1057408 = 0;
		}
		unk_0xD3ABBB1A96756065(0, -1, -1, iParam0);
	}
}

bool func_650()
{
	return Global_2683864.f_841;
}

int func_651(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_607(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_366(&(Var0.f_69), iParam10);
	}
	return func_567(&Var0);
}

int func_652(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_607(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_366(&(Var0.f_69), iParam7);
	}
	return func_567(&Var0);
}

void func_653(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 4);
	}
}

void func_654(bool bParam0)
{
	int iVar0;
	
	if (unk_0xC0120BBCC298EA2F(unk_0x4A8C381C258A124D(), 5) != 0)
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 177, 1);
		func_672(unk_0x259BE71D8A81D4FA(), func_269(586, -1, 0), 0);
		if (func_671(3610, -1))
		{
		}
		iVar0 = func_269(2042, -1, 0);
		unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_670(unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA()), iVar0));
		if (func_632(0))
		{
			func_672(unk_0x259BE71D8A81D4FA(), func_269(586, -1, 0), 0);
		}
		else
		{
			func_672(unk_0x259BE71D8A81D4FA(), func_669(Global_2802973), 0);
		}
		func_667(unk_0x259BE71D8A81D4FA(), iVar0);
		unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_660(unk_0x4A8C381C258A124D(), iVar0), func_659(unk_0x4A8C381C258A124D(), iVar0), 0);
		func_658(func_269(2042, -1, 0), 1);
		Global_2793046.f_287 = 1;
		func_655(unk_0x259BE71D8A81D4FA(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_655(bool bParam0, int iParam1, int iParam2)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_657();
		if (iParam2 == -1)
		{
			iParam2 = func_269(2042, -1, 0);
		}
		unk_0x740F6E63EE1C1D43(iParam0, 5, func_660(unk_0x56E414973C2A8C0E(iParam0), iParam2), func_659(unk_0x56E414973C2A8C0E(bParam0), iParam2), 0);
		unk_0xC02C4AB8A5C744D7(bParam0, func_670(unk_0x56E414973C2A8C0E(bParam0), iParam2));
		unk_0xD1C578C204015E1F(unk_0x56E414973C2A8C0E(bParam0), 5, func_660(unk_0x56E414973C2A8C0E(bParam0), iParam2), func_659(unk_0x56E414973C2A8C0E(bParam0), iParam2), func_670(unk_0x56E414973C2A8C0E(bParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_269(586, -1, 0);
		}
		if (func_632(1) && func_656(bParam0))
		{
			func_672(bParam0, func_669(Global_2802973), 0);
		}
		else
		{
			func_672(bParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_672(bParam0, Global_1836625, 1);
		}
		func_667(bParam0, iParam2);
		unk_0x0FB8E752BCC547A9(unk_0x56E414973C2A8C0E(bParam0), 177, 1);
	}
}

var func_656(int iParam0)
{
	return func_238(iParam0, 10);
}

void func_657()
{
	Global_78530 = 0;
	Global_78531 = -1;
	Global_78532 = -1;
	Global_78533 = -1;
	Global_78534 = -1;
	Global_78538 = -1;
}

void func_658(int iParam0, int iParam1)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_657();
		func_494(2042, iParam0, -1, 1, 0);
		unk_0x740F6E63EE1C1D43(unk_0x259BE71D8A81D4FA(), 5, func_660(unk_0x4A8C381C258A124D(), iParam0), func_659(unk_0x4A8C381C258A124D(), iParam0), 0);
		func_667(unk_0x259BE71D8A81D4FA(), iParam0);
		unk_0xC02C4AB8A5C744D7(unk_0x259BE71D8A81D4FA(), func_670(unk_0x4A8C381C258A124D(), iParam0));
		if ((iParam1 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && unk_0xC0120BBCC298EA2F(unk_0x4A8C381C258A124D(), 5) != 0)
		{
			func_655(unk_0x259BE71D8A81D4FA(), -1, -1);
		}
	}
}

int func_659(int iParam0, int iParam1)
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

var func_660(int iParam0, int iParam1)
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
		Global_78538 = func_661(iParam0, iParam1);
	}
	return Global_78538;
}

int func_661(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
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
	uVar3 = unk_0x94B8A32AA940A6B5(iParam0, 8, unk_0xC0120BBCC298EA2F(iParam0, 8), unk_0xD6AED6BFCC58AF7F(iParam0, 8));
	if (unk_0x304A39EB177D246B(uVar3, joaat("over_jacket"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_666(iParam0, iParam1, 1);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8))
			{
				return func_666(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_666(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_666(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_2"), 8))
			{
				return func_666(iParam0, iParam1, 6);
			}
			if ((unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_3"), 8) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_0"), 8)) || unk_0x304A39EB177D246B(iVar3, joaat("h4_draw_1"), 8))
			{
				return func_666(iParam0, iParam1, 7);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_4"), 8))
			{
				return func_666(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_5"), 8))
			{
				return func_666(iParam0, iParam1, 10);
			}
			if (unk_0x304A39EB177D246B(iVar3, joaat("x17_draw_6"), 8))
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		return func_666(iParam0, iParam1, 9);
	}
	if (func_665(iParam0))
	{
		if (bVar1)
		{
			return func_666(iParam0, iParam1, 7);
		}
		else
		{
			return func_666(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0x94B8A32AA940A6B5(iParam0, 11, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 11));
		if (unk_0x304A39EB177D246B(iVar4, 98087521, 0))
		{
			return func_666(iParam0, iParam1, 0);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -135391604, 0))
		{
			return func_666(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1398721900, 0))
		{
			return func_666(iParam0, iParam1, 2);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 1030529416, 0))
		{
			return func_666(iParam0, iParam1, 3);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 873008833, 0))
		{
			return func_666(iParam0, iParam1, 4);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1646534043, 0))
		{
			return func_666(iParam0, iParam1, 5);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1868675094, 0))
		{
			return func_666(iParam0, iParam1, 6);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1500122155, 0))
		{
			return func_666(iParam0, iParam1, 7);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -1741007074, 0))
		{
			return func_666(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, -226291902, 0))
		{
			return func_666(iParam0, iParam1, 9);
		}
		else if (unk_0x304A39EB177D246B(iVar4, 607416996, 0))
		{
			return func_666(iParam0, iParam1, 10);
		}
		if (unk_0x304A39EB177D246B(iVar4, joaat("hipster_dress"), 0))
		{
			if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -405912369, 0))
		{
			return func_666(iParam0, iParam1, 1);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("dress"), 0))
		{
			if (bVar1)
			{
				return func_666(iParam0, iParam1, 5);
			}
			else
			{
				return func_666(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("pilot_suit"), 0))
		{
			return func_666(iParam0, iParam1, 8);
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("combat_gear"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("hooded_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			iVar5 = func_664(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_666(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_666(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_663(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_666(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_663(iVar4);
						break;
					}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_bomb"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("heist_gear"), 0))
		{
			iVar6 = func_662(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_666(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_666(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_666(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_666(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_666(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_666(iParam0, iParam1, 9);
					}
					else
					{
						return func_666(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_666(iParam0, iParam1, 9);
					}
					else
					{
						return func_666(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_666(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_663(iVar4);
					break;
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("xmas2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 1);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 1);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 8);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_7"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("LOW_DRAW_8"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("jan_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x304A39EB177D246B(iVar4, joaat("air_draw_3"), 0))
				{
					return func_666(iParam0, iParam1, 10);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, -1086258388, 0) || unk_0x304A39EB177D246B(iVar4, joaat("luxe_sweat"), 0)) || unk_0x304A39EB177D246B(iVar4, joaat("low_sweat"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 6);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 9);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
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
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 5);
				}
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
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
				return func_666(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_0"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("air_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("stunt_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 3);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("biker_draw_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("gun_draw_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smug_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
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
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("x17_draw_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("assault_draw_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 0);
			}
			else
			{
				return func_666(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_666(iParam0, iParam1, 10);
				}
				else
				{
					return func_666(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 1);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("apart_draw_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("low2_draw_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 3);
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 1);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("ie_draw_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("luxe2_draw_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 9);
			}
			else
			{
				return func_666(iParam0, iParam1, 10);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("arena_draw_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 10);
			}
			else
			{
				return func_666(iParam0, iParam1, 9);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("vest_shirt"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 0);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("tails_jacket"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_666(iParam0, iParam1, 7);
			}
			else
			{
				return func_666(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x304A39EB177D246B(iVar4, joaat("smoking_jacket"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_666(iParam0, iParam1, 2);
			}
			else
			{
				return func_666(iParam0, iParam1, 7);
			}
		}
		else if ((unk_0x304A39EB177D246B(iVar4, joaat("silk_pyjamas"), 0) || unk_0x304A39EB177D246B(iVar4, joaat("silk_robe"), 0)) || unk_0x304A39EB177D246B(iVar4, -826135203, 0))
		{
			return func_666(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_663(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 6);
				}
				else
				{
					return func_666(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 2);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 2);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 2);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 2);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 6);
				}
				else
				{
					return func_666(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 5);
				}
				else
				{
					return func_666(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 4);
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
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 6);
				}
				else
				{
					return func_666(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 3);
				}
				else
				{
					return func_666(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 5);
				}
				else
				{
					return func_666(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 6);
				}
				else
				{
					return func_666(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 6);
				}
				else
				{
					return func_666(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 6);
				}
				else
				{
					return func_666(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_666(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 6);
				}
				else
				{
					return func_666(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 7);
				}
				else
				{
					return func_666(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_666(iParam0, iParam1, 1);
				}
				else
				{
					return func_666(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_666(iParam0, iParam1, 0);
	return 0;
}

int func_662(int iParam0, int iParam1)
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

int func_663(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x304A39EB177D246B(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_664(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x304A39EB177D246B(uParam0, joaat("luxe_draw_0"), iParam1))
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

int func_665(int iParam0)
{
	if (unk_0xCA362C769B0F4F0E(iParam0, 4, joaat("dungarees")))
	{
		return 1;
	}
	return 0;
}

int func_666(int iParam0, int iParam1, int iParam2)
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

void func_667(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_668(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		unk_0xD8FE716A11BE669A(iParam0, iVar0);
	}
	else
	{
		unk_0xBDAA517C3D10DB80(iParam0);
	}
}

int func_668(int iParam0)
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

int func_669(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_670(int iParam0, int iParam1)
{
	return 0;
}

bool func_671(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

void func_672(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_673(iParam1, iParam2, &uVar0, &uVar1))
	{
		unk_0x9C63D805CB2ABDB5(iParam0, uVar1);
		unk_0xCE1864BA99DCF3C2(iParam0, uVar0);
	}
	else
	{
		unk_0x9C63D805CB2ABDB5(iParam0, 0);
		unk_0xC7DB642109D72AF8(iParam0);
	}
}

bool func_673(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
				
				case 17:
					*uParam2 = joaat("reh_prop_reh_para_sp_s_01a");
					*uParam3 = 1;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

void func_674(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2793046.f_1827, 11))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1827), 11);
		}
	}
	else if (BitTest(Global_2793046.f_1827, 11))
	{
		unk_0x8744D2E3FC95740E(&(Global_2793046.f_1827), 11);
	}
}

void func_675(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2793046.f_1827, 9))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1827), 9);
		}
	}
	else if (BitTest(Global_2793046.f_1827, 9))
	{
		unk_0x8744D2E3FC95740E(&(Global_2793046.f_1827), 9);
	}
}

void func_676()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
}

void func_677(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 7))
		{
			if (((!func_251(unk_0x259BE71D8A81D4FA()) && !func_205(unk_0x259BE71D8A81D4FA())) && !func_687(unk_0x259BE71D8A81D4FA())) && !func_686(unk_0x259BE71D8A81D4FA()))
			{
				if (func_249())
				{
					func_649(2, 0, 1);
					func_685();
				}
				if (func_268(func_210(func_191(unk_0x259BE71D8A81D4FA()))))
				{
					uVar0 = func_269(2483, -1, 0);
					unk_0x8744D2E3FC95740E(&uVar0, func_210(func_191(unk_0x259BE71D8A81D4FA())));
					func_685();
				}
				if (func_684())
				{
					func_685();
				}
				if (func_191(unk_0x259BE71D8A81D4FA()) > -1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 7);
					if (func_229(unk_0x259BE71D8A81D4FA()))
					{
						func_683();
					}
					func_680(func_682(func_191(unk_0x259BE71D8A81D4FA())));
				}
			}
		}
	}
	else if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 7))
	{
		unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 7);
		func_678();
	}
}

void func_678()
{
	if (func_679())
	{
		unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 17);
	}
}

bool func_679()
{
	return BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 17);
}

void func_680(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9036)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_681() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_681()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_683()
{
	if (!func_679())
	{
		Global_2793046.f_6866 = unk_0x7E3F74F641EE6B27();
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 17);
	}
}

int func_684()
{
	if (Global_2672505.f_947.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_685()
{
	if (func_684())
	{
		Global_2672505.f_947.f_16 = 1;
	}
}

int func_686(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2764907;
	}
	else
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
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

int func_687(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		if (((func_249() && !func_245()) || func_207(unk_0x259BE71D8A81D4FA(), 21)) || func_207(unk_0x259BE71D8A81D4FA(), 25))
		{
			return 1;
		}
		if (func_22(&(Global_1836858.f_13)))
		{
			if (!func_19(&(Global_1836858.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_106(&(Global_1836858.f_13));
		}
	}
	else if (BitTest(Global_1894573[iParam0 /*608*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1894573[iParam0 /*608*/].f_1, 9);
}

void func_688(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0xCFBD89D2F1F18961("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 1);
	}
	Global_2793046.f_5072 = -1;
	bVar0 = (func_234(unk_0x259BE71D8A81D4FA(), 0) && func_239(unk_0x259BE71D8A81D4FA()));
	if (bParam6)
	{
		func_697(func_698(iParam0), 1);
	}
	else
	{
		func_696(iParam0, -1);
		if (func_206(unk_0x259BE71D8A81D4FA()))
		{
			Global_1836858.f_3 = iParam0;
		}
		else
		{
			func_734(iParam0);
		}
		Global_1836858.f_4 = -1;
		if (func_206(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 5);
		}
		if (((func_249() && !func_245()) || func_207(unk_0x259BE71D8A81D4FA(), 21)) || func_207(unk_0x259BE71D8A81D4FA(), 25))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 4);
		}
		unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 17);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 20);
		if (func_695(iParam0))
		{
			func_694();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_693(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x425BBE19F25A57AB(fParam2);
			if (iParam0 == 146)
			{
				unk_0xDAE61414743C8D1D(0);
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
				unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			}
		}
		if (func_692(iParam0))
		{
			unk_0xDAE61414743C8D1D(0);
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_4585348)
			{
				func_461(1);
				if (func_617(0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_459(1);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 12);
		}
		if (bParam5)
		{
			func_691();
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_689(iParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 21);
			}
		}
	}
	Global_2764094 = 1;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_140(iParam0) == 1)
	{
		return 1;
	}
	if (func_690())
	{
		return 1;
	}
	return 0;
}

int func_690()
{
	switch (func_190())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_691()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_5063), false);
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_240(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_693(float fParam0)
{
	float fVar0;
	
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_453())
	{
		return;
	}
	fVar0 = (Global_2793046.f_5220 - fParam0);
	if (unk_0xF40767E41852FB72(Global_2793046.f_5221))
	{
		if (!Global_2793046.f_5221 == unk_0x8F76B2250AC806FA() && unk_0x1D5CD3EAAA7422B0(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2793046.f_5220 = fParam0;
	Global_2793046.f_5221 = unk_0x8F76B2250AC806FA();
}

void func_694()
{
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_210 = 0;
	unk_0x8744D2E3FC95740E(&(Global_2793046.f_4660), true);
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_696(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_268(func_210(iVar0)))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 2);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 2);
		}
	}
}

void func_697(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218, bParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218, bParam0))
	{
		unk_0x8744D2E3FC95740E(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_218), bParam0);
	}
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

bool func_699(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_700()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_93.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	iVar1 = unk_0xDC1AA2FE20EEB2E9(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0xFD5C5BBD1FE92BB7(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(iVar4))
			{
				if (unk_0x501EBB0523078750(iVar4))
				{
					iVar3++;
				}
			}
		}
		bVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_701(bool bParam0)
{
	var uVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0x1B1A446EFA398EB5(uVar0))
		{
			unk_0x935364B4448CD584(uVar0, bParam0);
			unk_0x6BFFBDE3C98A828E(iVar0, !bParam0);
		}
	}
}

void func_702(bool bParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1, bVar0))
		{
			*bParam0 = bVar0;
			*uParam1 = Local_93.f_256[bVar0];
		}
		bVar0++;
	}
}

void func_703()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (iVar0 != -1)
	{
		Global_1894573[iVar0 /*608*/] = -1;
	}
}

void func_704(bool bParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_249())
		{
			if (func_873(unk_0x259BE71D8A81D4FA(), 1, 0))
			{
				unk_0x1537AF7B62B52EB1(unk_0x4A8C381C258A124D(), 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 342, 0);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 122, 0);
			}
			unk_0x7754DB9F9579CEE4(unk_0x259BE71D8A81D4FA(), 1f);
			unk_0x08C2ACB534243279(0);
			unk_0x6106E62525304863(1);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					unk_0x3DDE6E86B8024EEE(0, 0);
				}
			}
		}
		else
		{
			if (func_873(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				unk_0x1537AF7B62B52EB1(unk_0x4A8C381C258A124D(), 0);
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 342, 1);
				unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 122, 1);
				unk_0x7754DB9F9579CEE4(unk_0x259BE71D8A81D4FA(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					unk_0x3DDE6E86B8024EEE(1, 0);
				}
			}
			unk_0x08C2ACB534243279(1);
			unk_0x6106E62525304863(0);
		}
	}
}

void func_705(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		if (!BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 0))
		{
			Global_2696845 = func_191(unk_0x259BE71D8A81D4FA());
			if (Global_2696845 == -1)
			{
				Global_2696845 = Global_1836858.f_4;
			}
			if (func_733(Global_2696845) == 0)
			{
				if (func_732(1) > 0)
				{
					func_731(26, -1);
				}
			}
			if (func_249())
			{
				func_649(2, 0, 1);
				func_685();
			}
			if (func_268(func_210(func_191(unk_0x259BE71D8A81D4FA()))))
			{
				uVar1 = func_269(2483, -1, 0);
				unk_0x8744D2E3FC95740E(&uVar1, func_210(func_191(unk_0x259BE71D8A81D4FA())));
				func_685();
			}
			if (func_684())
			{
				func_685();
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), false);
		}
	}
	else if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 0))
	{
		if ((!func_228() && !func_730()) && !func_729())
		{
			Global_2696845 = -1;
			func_638(26, -1);
		}
		else if (func_733(Global_2696845) == 0)
		{
			iVar0 = func_708(1);
			if (iVar0 > 0)
			{
				func_706(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_500(1934, 1, -1);
				func_706(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_640(26, -1))
		{
			Global_2696845 = -1;
			func_638(26, -1);
		}
		unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), false);
	}
}

void func_706(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_484(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_707(iParam0))
	{
		func_482(iParam0, iVar0);
	}
	else
	{
		func_486(iParam0, iVar0);
	}
}

int func_707(int iParam0)
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_721();
	if (Global_2695719 == 0)
	{
		return 0;
	}
	if (func_729())
	{
		if (unk_0x834C960822A4683F() || (func_720() || func_718()))
		{
			Global_2694530 = 1;
		}
	}
	Global_2695719 = 0;
	if (Global_1577886)
	{
		iVar0 = 1;
	}
	if (Global_2694530)
	{
		iVar0 = 1;
	}
	if (Global_2694529)
	{
		iVar0 = 1;
	}
	if (func_568(Global_112676.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2694469)
	{
		iVar0 = 1;
	}
	if (func_717(512))
	{
		iVar0 = 1;
	}
	if (func_716(128))
	{
		iVar0 = 1;
	}
	if (Global_1577910 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169(0))
	{
		iVar0 = 0;
	}
	if (Global_2695024)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_714())
		{
			if (Global_4718592.f_114279 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x259BE71D8A81D4FA(), 0))
	{
		iVar0 = 0;
	}
	if (func_713())
	{
		iVar0 = 0;
	}
	if ((Global_2694530 || Global_2694529) || Global_1577886)
	{
		if (func_718())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837315)
	{
		iVar0 = 2;
	}
	Global_2695024 = 0;
	Global_2694529 = 0;
	Global_2694530 = 0;
	Global_1577886 = 0;
	Global_2694469 = 0;
	func_711(&(Global_112676.f_1), 32);
	func_710(512);
	func_709(128);
	Global_1837315 = 0;
	return iVar0;
}

void func_709(int iParam0)
{
	Global_112733 = (Global_112733 - (Global_112733 && iParam0));
}

void func_710(int iParam0)
{
	Global_112734 = (Global_112734 - (Global_112734 && iParam0));
}

void func_711(var uParam0, int iParam1)
{
	func_712(uParam0, iParam1);
}

void func_712(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_713()
{
	if (((Global_1836615 || Global_1836584) || func_16(unk_0x259BE71D8A81D4FA(), 0)) || func_606())
	{
		return 1;
	}
	return 0;
}

int func_714()
{
	switch (func_715())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_715()
{
	return Global_2684801.f_1.f_2822;
}

bool func_716(int iParam0)
{
	return (Global_112733 && iParam0) != 0;
}

bool func_717(int iParam0)
{
	return (Global_112734 && iParam0) != 0;
}

int func_718()
{
	if (func_733(Global_2696845))
	{
		return 0;
	}
	if (func_719(unk_0x259BE71D8A81D4FA(), 146))
	{
		return 1;
	}
	return 0;
}

int func_719(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/] == iParam1)
	{
		return func_240(iParam0);
	}
	return 0;
}

int func_720()
{
	if (func_733(Global_2696845))
	{
		return 0;
	}
	if (func_240(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_721()
{
	if (Global_1577910 == 1 && (func_727() || func_722()))
	{
		return 1;
	}
	return 0;
}

int func_722()
{
	if ((((func_599() || func_597()) || func_595()) || func_725(Global_4718592.f_113724)) || func_723(Global_4718592.f_113724))
	{
		return 1;
	}
	return 0;
}

int func_723(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iParam0 == func_724(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_724(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33703[iParam0];
	}
	return -1;
}

int func_725(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_726(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_726(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32850[iParam0];
	}
	return -1;
}

int func_727()
{
	return func_728(Global_4718592.f_113724);
}

int func_728(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31722[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_729()
{
	return BitTest(Global_1574589, 0);
}

bool func_730()
{
	return Global_1575027;
}

void func_731(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			unk_0x91F6DFBE57E45538(0, iParam1);
			break;
		
		default:
			uVar1 = func_639(iParam1);
			iVar0 = unk_0x38640D2193CB547F(uVar1);
			if (!BitTest(iVar0, bParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, bParam0);
				unk_0x91F6DFBE57E45538(iVar0, iParam1);
			}
			break;
	}
}

int func_732(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_721();
	if (Global_1577910 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169(0))
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_714())
		{
			if (Global_4718592.f_114279 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x259BE71D8A81D4FA(), 0))
	{
		iVar0 = 0;
	}
	if (func_713())
	{
		iVar0 = 0;
	}
	Global_2695719 = 1;
	return iVar0;
}

int func_733(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11864)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11866)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11863)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11867)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11868)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11869)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11865)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11870)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11871)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11872)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11873)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_734(int iParam0)
{
	Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/] = iParam0;
}

void func_735(int iParam0)
{
	Global_2695958 = iParam0;
}

void func_736(int iParam0)
{
	if (func_204())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!BitTest(uLocal_97, 0))
			{
				if ((((func_738(60000) && !unk_0x4C705AAF75363287()) && !func_420()) && !unk_0x4D9174D8796EA622()) && func_437(0, 1, 1, 1))
				{
					if (!func_772())
					{
						func_737("UW_HELP1", func_648(), func_647(1), 30000);
					}
					else
					{
						func_737("UW_HELP1C", func_648(), func_647(1), 30000);
					}
					func_435(0);
					unk_0xBF3D28CA44F3BE2D(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, false);
				}
			}
			break;
	}
}

void func_737(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam3);
}

bool func_738(int iParam0)
{
	return unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(Global_2644545, unk_0x7E3F74F641EE6B27())) > iParam0;
}

void func_739()
{
	bool bVar0;
	
	unk_0x8744D2E3FC95740E(&uLocal_98, 15);
	bVar0 = false;
	while (bVar0 < 4)
	{
		func_740(bVar0);
		bVar0++;
	}
	if (BitTest(uLocal_98, 15))
	{
		if (!BitTest(Global_1836858.f_1, 15))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 15);
		}
	}
	else if (BitTest(Global_1836858.f_1, 15))
	{
		unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 15);
	}
}

void func_740(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (unk_0x2FC2FDC413532977(Local_93.f_7[bParam0]))
	{
		if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 0))
		{
			if (Local_93.f_241 == 0)
			{
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 0))
		{
			if (!func_204())
			{
				if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1, bParam0))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (!BitTest(uLocal_98, 15))
						{
							if (unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D()) == unk_0xE38610F405049F71(Local_93.f_7[bParam0]))
							{
								unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 15);
							}
						}
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 0))
						{
							if (func_744("UW_HELP2", func_648()) || func_744("UW_HELP2C", func_648()))
							{
								unk_0x428C32CC68809A35(1);
							}
							if (!func_426(unk_0x259BE71D8A81D4FA()))
							{
								func_653(1);
							}
							iVar0 = func_743(unk_0x4A8C381C258A124D(), 0);
							if (func_646("UW_HELP1", func_648(), func_647(1)) || func_646("UW_HELP1C", func_648(), func_647(1)))
							{
								unk_0x428C32CC68809A35(1);
							}
							if (Local_93.f_463 != -1)
							{
								if (iVar0 > (Local_93.f_463 - 2))
								{
									iVar0 = (Local_93.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1), bParam0);
							Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9 = bParam0;
							unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 398, 1);
							func_196();
							iLocal_581 = iVar0;
						}
						else if (Local_93.f_241 == 0)
						{
							if (!BitTest(uLocal_97, 1))
							{
								if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
								{
									if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 1)) < 2500f)
									{
										if (func_437(0, 1, 1, 1))
										{
											if (!func_772())
											{
												func_742("UW_HELP2", func_648(), 30000);
											}
											else
											{
												func_742("UW_HELP2C", func_648(), 30000);
											}
											func_435(1);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, true);
										}
									}
								}
							}
							if (!func_249())
							{
								if (BitTest(uLocal_98, 2))
								{
									unk_0x8744D2E3FC95740E(&uLocal_98, 2);
								}
								if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
								{
									if (!BitTest(uLocal_97, 4))
									{
										if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 12))
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 12);
										}
										if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
										{
											if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 1)) < 2500f)
											{
												if (func_437(0, 1, 1, 1))
												{
													if (!func_772())
													{
														func_436("UW_COPS", 30000);
													}
													else
													{
														func_436("UW_COPSC", 30000);
													}
													func_435(1);
													unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 4);
												}
											}
										}
									}
									else if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 1)) > 10000f)
									{
										unk_0x8744D2E3FC95740E(&uLocal_97, 4);
									}
								}
								else
								{
									if (BitTest(uLocal_97, 4))
									{
										unk_0x8744D2E3FC95740E(&uLocal_97, 4);
									}
									if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 12))
									{
										unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 12))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 12);
								}
								if (!BitTest(uLocal_98, 2))
								{
									if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 1)) < 2500f)
									{
										if (func_437(0, 1, 1, 1))
										{
											if (!func_772())
											{
												func_436("UW_PASSMD", 30000);
											}
											else
											{
												func_436("UW_PASSMD", 30000);
											}
											func_435(1);
											unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 == 0)
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_93.f_28)
								{
									if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1, bParam0))
								{
									unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1), bParam0);
								}
								if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9 != -1)
								{
									Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9 = -1;
								}
								if (func_699("UW_TIMEL"))
								{
									unk_0x428C32CC68809A35(1);
								}
								if (func_699("UW_TIMELA"))
								{
									unk_0x428C32CC68809A35(1);
								}
								if (func_426(unk_0x259BE71D8A81D4FA()))
								{
									func_653(0);
								}
								unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 398, 0);
							}
							else
							{
								if (Local_93.f_241 == 0 && !BitTest(Local_93.f_3, 4))
								{
									iVar0 = func_743(unk_0x4A8C381C258A124D(), 0);
									if (Local_93.f_463 != -1)
									{
										if (iVar0 > (Local_93.f_463 - 2))
										{
											iVar0 = (Local_93.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_581)
									{
										unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1), bParam0);
										unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), (0 + iLocal_581 + 1));
									}
								}
								bVar1 = false;
								if (func_270())
								{
									if (Local_93.f_413 > -1)
									{
										iVar3 = (Local_93.f_413 - func_126(&(Local_93.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_741(bVar1);
								if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[bParam0])) == joaat("rhino"))
								{
									unk_0x9A81B26B3D3B37C7(unk_0xE38610F405049F71(Local_93.f_7[bParam0]));
								}
								if (!func_22(&uLocal_111))
								{
									func_20(&uLocal_111, 0, 0);
								}
								else if (func_19(&uLocal_111, 2000, 0))
								{
									if (BitTest(Local_93.f_3, 9) || !func_772())
									{
										if (func_699("UW_MINV"))
										{
										}
										if (!BitTest(uLocal_97, 5))
										{
											if (Local_93.f_28 > 1 || (Local_93.f_28 == 1 && func_112() > 1))
											{
												if (func_22(&(Local_93.f_326)))
												{
													if (!unk_0x4C705AAF75363287())
													{
														if (func_112() > 1)
														{
															func_436("UW_TIMELA", 30000);
														}
														else
														{
															func_436("UW_TIMEL", 30000);
														}
														func_435(1);
														unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 5);
													}
												}
											}
										}
									}
									else if (func_772())
									{
										if (!BitTest(Local_93.f_3, 9))
										{
											if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[bParam0])) != joaat("valkyrie"))
											{
												if (!BitTest(uLocal_97, 14))
												{
													if (!unk_0x4C705AAF75363287())
													{
														func_436("UW_MINV", 30000);
														func_435(1);
														unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_93.f_241 == 0)
					{
						if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_7[bParam0])) == joaat("valkyrie"))
						{
							if (!func_699("UW_VALK") && !func_699("UW_VALKC"))
							{
								unk_0xAD01710361B8BCF5();
								if (BitTest(uLocal_97, 8))
								{
									unk_0x8744D2E3FC95740E(&uLocal_97, 8);
								}
							}
							if (!BitTest(uLocal_97, 8))
							{
								if (!unk_0x4C705AAF75363287())
								{
									iVar6 = 0;
									iVar4 = unk_0x2EEC0612337D20CE(unk_0xE38610F405049F71(Local_93.f_7[bParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0xC39AE5D390581AD5(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_772())
										{
											func_436("UW_VALK", 30000);
										}
										else
										{
											func_436("UW_VALKC", 30000);
										}
										func_435(1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 8);
									}
									if (!BitTest(uLocal_97, 8))
									{
										if (func_772())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != bParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar7]))
														{
															if (func_109(Local_93.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0xC39AE5D390581AD5(unk_0xE38610F405049F71(Local_93.f_7[iVar7]), (iVar5 - 1), 0))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_436("UW_VALKC", 30000);
												func_435(1);
												unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_93.f_241 == 1)
					{
						if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1, bParam0))
						{
							if (!BitTest(uLocal_97, 6))
							{
								if (func_109(Local_93.f_7[bParam0]))
								{
									if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
									{
										if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[bParam0])))
										{
											if (!BitTest(uLocal_97, 7))
											{
												if ((unk_0x875A214D5EBCA509(0, 75) || unk_0x6D05C5731A838CB3(0, 75)) || unk_0x4465D55576678706(0, 75))
												{
													unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 7);
												}
											}
											if (BitTest(uLocal_97, 7))
											{
												if (!unk_0x4C705AAF75363287())
												{
													if (func_772())
													{
														func_436("UW_EXITVC", 30000);
													}
													else
													{
														func_436("UW_EXITV", 30000);
													}
													func_435(1);
													unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (unk_0x2FC2FDC413532977(Local_93.f_7[iVar10]))
					{
						if (unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(Local_93.f_7[iVar10]), 0))
						{
							if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_93.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_268(17))
					{
						iVar9 = func_269(2483, -1, 0);
						unk_0x8744D2E3FC95740E(&iVar9, 17);
						func_494(2483, iVar9, -1, 1, 0);
						func_685();
						if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 9))
						{
							unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
					{
						Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 = 0;
					}
					if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 12))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 12);
					}
				}
				if (!BitTest(uLocal_98, 14))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (func_109(Local_93.f_7[bParam0]))
						{
							if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[bParam0]), 1)) < 2500f)
							{
								if (func_437(0, 1, 1, 1))
								{
									if (!func_258(129, 0, 0))
									{
										if (!func_772())
										{
											func_436("UW_TUT", -1);
										}
										else
										{
											func_436("UW_TUTC", -1);
										}
										func_435(1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 14);
									}
									else
									{
										if (!func_772())
										{
											func_436("UW_HIDE", -1);
										}
										else
										{
											func_436("UW_HIDEC", -1);
										}
										func_435(1);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_873(unk_0x259BE71D8A81D4FA(), 1, 1) && Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_1 != 0)
			{
				if (!BitTest(Global_2793046.f_4692, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_4692), true);
				}
			}
			else if (BitTest(Global_2793046.f_4692, 1))
			{
				unk_0x8744D2E3FC95740E(&(Global_2793046.f_4692), true);
			}
		}
	}
}

void func_741(bool bParam0)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	unk_0x66EFB3D6110055C4(0, 69, 1);
	unk_0x66EFB3D6110055C4(0, 70, 1);
	unk_0x66EFB3D6110055C4(0, 92, 1);
	unk_0x66EFB3D6110055C4(0, 68, 1);
	unk_0x66EFB3D6110055C4(0, 91, 1);
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 99, 1);
	unk_0x66EFB3D6110055C4(0, 100, 1);
	unk_0x66EFB3D6110055C4(0, 65, 1);
	unk_0x66EFB3D6110055C4(0, 105, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 51, 1);
	unk_0x66EFB3D6110055C4(0, 47, 1);
	unk_0x66EFB3D6110055C4(0, 24, 1);
	unk_0x66EFB3D6110055C4(0, 257, 1);
}

void func_742(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam2);
}

bool func_743(int iParam0, int iParam1)
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
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

var func_744(char* sParam0, char* sParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_745()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x2FC2FDC413532977(Local_93.f_7[iVar0]) && unk_0xEADBDBE0422CF7E6(Local_93.f_7[iVar0]))
		{
			iVar1 = unk_0xE38610F405049F71(Local_93.f_7[iVar0]);
			if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
			{
				unk_0x5FB8641E415105C3(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_746(struct<3> Param0, int iParam1)
{
	Global_4585352 = { Param0 };
	Global_4585355 = 1;
	Global_4585356 = iParam1;
}

void func_747()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x703C4F7316B7195D(1))
	{
		iVar1 = unk_0x4BC3E5D2FB0A1665(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_763(iVar0);
				break;
			
			case 174:
				func_748(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_748(int iParam0)
{
	int iVar0;
	
	unk_0xFCEF367B86651ED3(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 295801632:
			func_762(iParam0);
			break;
		
		case -1502696567:
			func_761(iParam0);
			break;
		
		case -150720855:
			func_760(iParam0);
			break;
		
		case 355530893:
			func_759(iParam0);
			break;
		
		case 899454375:
			func_758(iParam0);
			break;
		
		case 1136184066:
			func_755(iParam0);
			break;
		
		case -324560767:
			func_749(iParam0);
			break;
	}
}

void func_749(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	if (unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 3))
	{
		bVar4 = Var0.f_2;
		if (!unk_0x93BF17E19A9F0E9B(Local_93.f_73[bVar4]))
		{
			return;
		}
		if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6, bVar4))
		{
			if (!BitTest(Local_93.f_271, bVar4))
			{
				if (func_100(bVar4))
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_73[bVar4]), 0))
					{
						if (unk_0x07DCBF1C62A9C503(unk_0x259BE71D8A81D4FA(), unk_0xE38610F405049F71(Local_93.f_73[bVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (unk_0x3DC0E2D99138397E(unk_0x259BE71D8A81D4FA(), unk_0xE38610F405049F71(Local_93.f_73[bVar4]), &uVar3))
					{
						bVar6 = true;
					}
				}
				else if (!func_772())
				{
					if (Local_93.f_465[0 /*4*/].f_1 > 0)
					{
						iVar7 = unk_0xB23E0F9B63D009A8(Local_93.f_465[0 /*4*/].f_2);
						if (iVar7 != func_5())
						{
							if (iVar7 == unk_0x259BE71D8A81D4FA())
							{
								bVar6 = true;
							}
						}
					}
					else if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[0]))
					{
						if (func_109(Local_93.f_7[0]))
						{
							iVar9 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[0]), -1, 0);
							if (iVar9 != 0)
							{
								if (unk_0x501EBB0523078750(iVar9))
								{
									iVar8 = unk_0x1C1C92A1CBAE364B(iVar9);
									if (iVar8 == unk_0x259BE71D8A81D4FA())
									{
										bVar6 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
			{
				iVar2 = func_754();
				iVar10 = unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[bVar4]));
				iVar5 = bVar4 * 4;
				if (func_753(iVar10))
				{
					iVar1 = func_42(iVar10);
					bVar12 = iVar5;
					while (bVar12 <= (iVar5 + (iVar1 - 1)))
					{
						if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar12]) && !BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar12)], func_90(bVar12)))
						{
							iVar11++;
							unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar12)]), func_90(bVar12));
						}
						bVar12++;
					}
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 = (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8++;
				}
				if (Local_94.f_11 == 0)
				{
					Local_94.f_11 = unk_0x39D1D336459711BE();
				}
				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
				{
					Local_94.f_7 = (Local_94.f_7 + iVar2);
					func_751(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
					func_750();
				}
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar4);
		}
	}
}

void func_750()
{
	if (!func_22(&uLocal_570) || (func_22(&uLocal_570) && func_19(&uLocal_570, 2000, 0)))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_106(&uLocal_570);
		func_20(&uLocal_570, 0, 0);
	}
}

var func_751(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_479(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_752()
{
	if (func_772())
	{
		return Global_262145.f_11789;
	}
	return Global_262145.f_11728;
}

bool func_753(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_754()
{
	if (func_772())
	{
		return Global_262145.f_11788;
	}
	return Global_262145.f_11727;
}

void func_755(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	if (unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 3))
	{
		bVar4 = Var0.f_2;
		if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6, bVar4))
		{
			if (!BitTest(Local_93.f_271, bVar4))
			{
				if (func_757(bVar4))
				{
					bVar6 = true;
				}
				else if (!func_756(bVar4))
				{
					if (func_100(bVar4))
					{
						if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_93.f_73[bVar4]), 0))
						{
							if (unk_0x07DCBF1C62A9C503(unk_0x259BE71D8A81D4FA(), unk_0xE38610F405049F71(Local_93.f_73[bVar4]), &uVar3))
							{
								bVar6 = true;
							}
						}
						else if (unk_0x3DC0E2D99138397E(unk_0x259BE71D8A81D4FA(), unk_0xE38610F405049F71(Local_93.f_73[bVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (!func_772())
					{
						if (Local_93.f_465[0 /*4*/].f_1 > 0)
						{
							iVar7 = unk_0xB23E0F9B63D009A8(Local_93.f_465[0 /*4*/].f_2);
							if (iVar7 != func_5())
							{
								if (iVar7 == unk_0x259BE71D8A81D4FA())
								{
									bVar6 = true;
								}
							}
						}
						else if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[0]))
						{
							if (func_109(Local_93.f_7[0]))
							{
								iVar9 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[0]), -1, 0);
								if (iVar9 != 0)
								{
									if (unk_0x501EBB0523078750(iVar9))
									{
										iVar8 = unk_0x1C1C92A1CBAE364B(iVar9);
										if (iVar8 == unk_0x259BE71D8A81D4FA())
										{
											bVar6 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
					{
						iVar1 = func_42(joaat("savage"));
						iVar5 = bVar4 * 4;
						iVar11 = 0;
						bVar10 = iVar5;
						while (bVar10 <= (iVar5 + (iVar1 - 1)))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar10]) && !BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10)], func_90(bVar10)))
							{
								iVar11++;
								unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
							}
							bVar10++;
						}
						Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 = (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
						{
							iVar2 = func_754();
							iVar2 = (iVar2 * iVar1);
							Local_94.f_7 = (Local_94.f_7 + iVar2);
							func_751(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
							func_750();
							if (Local_94.f_11 == 0)
							{
								Local_94.f_11 = unk_0x39D1D336459711BE();
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar4);
					}
				}
			}
		}
	}
}

int func_756(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (Local_96[bVar0 /*18*/].f_11[bParam0] > 0)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_757(bool bParam0)
{
	int iVar0;
	
	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_11[bParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (bVar0 != unk_0xAE032CEDCF23C6D5())
			{
				if (Local_96[bVar0 /*18*/].f_11[bParam0] > Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_11[bParam0])
				{
					return 0;
				}
			}
		}
		bVar0++;
	}
	return 1;
}

void func_758(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 3))
	{
		if (unk_0xF1A4B8228C5E44B7("am_kill_list", -1, 0) != func_5())
		{
		}
		if (unk_0x93E08E0F531E2C35())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_93.f_464), Var0.f_2);
		}
	}
}

void func_759(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 3))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_557, Var0.f_2);
	}
}

void func_760(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 3))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_558, Var0.f_2);
	}
}

void func_761(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 3))
	{
		if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(Var0.f_2)], func_90(Var0.f_2)))
		{
			unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(Var0.f_2)]), func_90(Var0.f_2));
		}
	}
}

void func_762(int iParam0)
{
	struct<3> Var0;
	bool bVar1;
	
	if (unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 3))
	{
		bVar1 = Var0.f_2;
		if (BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6, bVar1))
		{
			unk_0x8744D2E3FC95740E(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar1);
		}
	}
}

void func_763(int iParam0)
{
	struct<6> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	var uVar12;
	
	if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 13))
	{
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6, bVar1))
			{
				if (!BitTest(Local_93.f_271, bVar1))
				{
					if (unk_0xFC8BFE4B41177C22(Var0.f_0))
					{
						if (unk_0x55B80B6E7AB61270(Var0.f_0))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_93.f_73[bVar1]))
							{
								if (unk_0xFC8BFE4B41177C22(unk_0xE38610F405049F71(Local_93.f_73[bVar1])))
								{
									if (unk_0xE93EDE86BBB66532(Var0.f_0) == unk_0xE38610F405049F71(Local_93.f_73[bVar1]))
									{
										if (unk_0xFC8BFE4B41177C22(Var0.f_1))
										{
											if (unk_0x0101C509A6E67F99(Var0.f_1))
											{
												if (unk_0xBD545F8729E9F413(Var0.f_1) == unk_0x4A8C381C258A124D())
												{
													if (Var0.f_5)
													{
														iVar4 = unk_0x4B423FAA24E8ABF0(Var0.f_0);
														if (Local_93.f_27 == joaat("hydra"))
														{
															if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
															{
																iVar7 = func_754();
																if (func_753(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 = (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8++;
																}
																if (Local_94.f_11 == 0)
																{
																	Local_94.f_11 = unk_0x39D1D336459711BE();
																}
																if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
																{
																	Local_94.f_7 = (Local_94.f_7 + iVar7);
																	func_751(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																	func_750();
																}
															}
															unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar1);
														}
														else if (iVar4 == joaat("buzzard"))
														{
															iVar9 = -1;
															iVar9 = -1;
															while (iVar9 <= 3)
															{
																iVar6 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_73[bVar1]), iVar9, 0);
																if (iVar6 != 0)
																{
																	iVar8 = func_764(iVar6);
																	if (iVar8 > -1)
																	{
																		if (!BitTest(Local_93.f_272[func_91(iVar8)], func_90(iVar8)))
																		{
																			if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(iVar8)], func_90(iVar8)))
																			{
																				unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(iVar8)]), func_90(iVar8));
																				iVar7 = func_754();
																				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8++;
																				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
																				{
																					Local_94.f_7 = (Local_94.f_7 + iVar7);
																					func_751(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_750();
																				}
																				if (unk_0xA23AABF378361F85(unk_0xC35A3A4C05A4831B(Local_93.f_48[iVar8])))
																				{
																					func_92(&(Local_105[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																bVar9++;
															}
															unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar1);
														}
													}
													else if (!func_109(Local_93.f_73[bVar1]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (unk_0x501EBB0523078750(unk_0xBD545F8729E9F413(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			bVar1++;
		}
		if (Local_93.f_27 != joaat("hydra"))
		{
			bVar1 = false;
			while (bVar1 <= 19)
			{
				if (!BitTest(Local_93.f_272[func_91(bVar1)], func_90(bVar1)))
				{
					if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar1)], func_90(bVar1)))
					{
						if (unk_0xFC8BFE4B41177C22(Var0.f_0))
						{
							if (unk_0x0101C509A6E67F99(Var0.f_0))
							{
								if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar1]))
								{
									if (unk_0xFC8BFE4B41177C22(unk_0xE38610F405049F71(Local_93.f_48[bVar1])))
									{
										if (unk_0xBD545F8729E9F413(Var0.f_0) == unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0xFC8BFE4B41177C22(Var0.f_1))
												{
													if (unk_0x0101C509A6E67F99(Var0.f_1))
													{
														iVar5 = unk_0xBD545F8729E9F413(Var0.f_1);
														if (unk_0x501EBB0523078750(iVar5))
														{
															if (iVar5 == unk_0x4A8C381C258A124D())
															{
																if (Var0.f_5)
																{
																	iVar7 = func_754();
																	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
																	{
																		Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8++;
																		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
																		{
																			func_751(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			Local_94.f_7 = (Local_94.f_7 + iVar7);
																			func_750();
																		}
																	}
																	if (Local_94.f_11 == 0)
																	{
																		Local_94.f_11 = unk_0x39D1D336459711BE();
																	}
																	unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar1)]), func_90(bVar1));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (bVar1 < 5)
				{
					if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6, bVar1))
					{
						if (!BitTest(Local_93.f_271, bVar1))
						{
							if (unk_0xFC8BFE4B41177C22(Var0.f_0))
							{
								if (unk_0x55B80B6E7AB61270(Var0.f_0))
								{
									if (unk_0x93BF17E19A9F0E9B(Local_93.f_73[bVar1]))
									{
										if (unk_0xFC8BFE4B41177C22(unk_0xE38610F405049F71(Local_93.f_73[bVar1])))
										{
											if (unk_0xE93EDE86BBB66532(Var0.f_0) == unk_0xE38610F405049F71(Local_93.f_73[bVar1]))
											{
												if (unk_0x4B423FAA24E8ABF0(Var0.f_0) == joaat("savage"))
												{
													if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar1)], func_90(bVar1)))
													{
														if (Var0.f_5)
														{
															if (unk_0xFC8BFE4B41177C22(Var0.f_1))
															{
																if (unk_0x0101C509A6E67F99(Var0.f_1))
																{
																	iVar5 = unk_0xBD545F8729E9F413(Var0.f_1);
																	if (unk_0x501EBB0523078750(iVar5))
																	{
																		if (iVar5 == unk_0x4A8C381C258A124D())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
																				{
																					iVar2 = func_42(joaat("savage"));
																					Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 = (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 + iVar2);
																					iVar7 = func_754();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
																					{
																						func_751(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																						Local_94.f_7 = (Local_94.f_7 + iVar7);
																						func_750();
																						if (Local_94.f_11 == 0)
																						{
																							Local_94.f_11 = unk_0x39D1D336459711BE();
																						}
																					}
																					bVar10 = bVar1 * 4;
																					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
																					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 1)]), func_90(bVar10 + 1));
																					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 2)]), func_90(bVar10 + 2));
																					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 3)]), func_90(bVar10 + 3));
																					unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar1);
																				}
																			}
																		}
																	}
																	else if (func_757(bVar1))
																	{
																		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
																		{
																			iVar2 = func_42(joaat("savage"));
																			Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 = (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 + iVar2);
																			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
																			{
																				iVar7 = func_754();
																				iVar7 = (iVar7 * iVar2);
																				Local_94.f_7 = (Local_94.f_7 + iVar7);
																				func_751(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																				func_750();
																				if (Local_94.f_11 == 0)
																				{
																					Local_94.f_11 = unk_0x39D1D336459711BE();
																				}
																			}
																			bVar10 = bVar1 * 4;
																			unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
																			unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 1)]), func_90(bVar10 + 1));
																			unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 2)]), func_90(bVar10 + 2));
																			unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 3)]), func_90(bVar10 + 3));
																			unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar1);
																		}
																	}
																	else if (func_756(bVar1))
																	{
																	}
																	else if (unk_0x3DC0E2D99138397E(iVar11, Var0.f_0, &uVar12))
																	{
																		if (bVar11 == unk_0x259BE71D8A81D4FA())
																		{
																			if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
																			{
																				iVar2 = func_42(joaat("savage"));
																				Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 = (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 + iVar2);
																				if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
																				{
																					iVar7 = func_754();
																					iVar7 = (iVar7 * iVar2);
																					Local_94.f_7 = (Local_94.f_7 + iVar7);
																					func_751(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_750();
																					if (Local_94.f_11 == 0)
																					{
																						Local_94.f_11 = unk_0x39D1D336459711BE();
																					}
																				}
																				bVar10 = bVar1 * 4;
																				unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10)]), func_90(bVar10));
																				unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 1)]), func_90(bVar10 + 1));
																				unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 2)]), func_90(bVar10 + 2));
																				unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar10 + 3)]), func_90(bVar10 + 3));
																				unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_6), bVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0xFC8BFE4B41177C22(Var0.f_1))
															{
																if (unk_0x0101C509A6E67F99(Var0.f_1))
																{
																	iVar5 = unk_0xBD545F8729E9F413(Var0.f_1);
																	if (unk_0x501EBB0523078750(iVar5))
																	{
																		if (iVar5 == unk_0x4A8C381C258A124D())
																		{
																			iVar3 = unk_0x39D1D336459711BE();
																			Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_11[bVar1] = iVar3;
																		}
																	}
																}
															}
															if (!unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(Var0.f_0), 0))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				bVar1++;
			}
			bVar1 = 20;
			while (bVar1 <= 23)
			{
				if (!BitTest(Local_93.f_272[func_91(bVar1)], func_90(bVar1)))
				{
					if (!BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar1)], func_90(bVar1)))
					{
						if (unk_0xFC8BFE4B41177C22(Var0.f_0))
						{
							if (unk_0x0101C509A6E67F99(Var0.f_0))
							{
								if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar1]))
								{
									if (unk_0xFC8BFE4B41177C22(unk_0xE38610F405049F71(Local_93.f_48[bVar1])))
									{
										if (unk_0xBD545F8729E9F413(Var0.f_0) == unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0xFC8BFE4B41177C22(Var0.f_1))
												{
													if (unk_0x0101C509A6E67F99(Var0.f_1))
													{
														iVar5 = unk_0xBD545F8729E9F413(Var0.f_1);
														if (unk_0x501EBB0523078750(iVar5))
														{
															if (iVar5 == unk_0x4A8C381C258A124D())
															{
																if (Var0.f_5)
																{
																	if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_17 < 2)
																	{
																		Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8++;
																		if (Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8 <= func_752())
																		{
																			iVar7 = func_754();
																			Local_94.f_7 = (Local_94.f_7 + iVar7);
																			if (Local_94.f_11 == 0)
																			{
																				Local_94.f_11 = unk_0x39D1D336459711BE();
																			}
																			func_751(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			func_750();
																		}
																	}
																	unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar1)]), func_90(bVar1));
																}
															}
														}
													}
												}
												else
												{
													unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_3[func_91(bVar1)]), func_90(bVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar1]))
				{
				}
				bVar1++;
			}
		}
	}
}

int func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iVar1]))
			{
				if (unk_0xC35A3A4C05A4831B(Local_93.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_765()
{
	int iVar0;
	int iVar1;
	
	if (Local_93.f_27 != joaat("hydra"))
	{
		if (iLocal_583 == 0)
		{
			iLocal_583 = 20;
		}
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[iLocal_583]))
		{
			if (!func_31(Local_93.f_48[iLocal_583]))
			{
				iVar0 = unk_0x71698F8AAB574CF7(unk_0xC35A3A4C05A4831B(Local_93.f_48[iLocal_583]));
				if (iLocal_584[iLocal_583] != iVar0)
				{
					iLocal_584[iLocal_583] = iVar0;
					unk_0x7B95E064D91BFE49(Local_93.f_48[iLocal_583], 1);
				}
			}
		}
		iLocal_583++;
		if (iLocal_583 == 23)
		{
			iLocal_583 = 20;
		}
	}
	if (Local_93.f_27 != joaat("hydra") && Local_93.f_27 != joaat("rhino"))
	{
		if (!bLocal_587)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0x93BF17E19A9F0E9B(Local_93.f_73[iVar1]))
					{
						if (func_109(Local_93.f_73[iVar1]))
						{
							if (unk_0x4B423FAA24E8ABF0(unk_0xE38610F405049F71(Local_93.f_73[iVar1])) == joaat("savage"))
							{
								unk_0x7B95E064D91BFE49(Local_93.f_73[iVar1], 1);
								bLocal_587 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_93.f_73[iLocal_585]))
	{
		if (func_109(Local_93.f_73[iLocal_585]))
		{
			iVar0 = unk_0x71698F8AAB574CF7(unk_0xC35A3A4C05A4831B(Local_93.f_73[iLocal_585]));
			if (iLocal_586[iLocal_585] != iVar0)
			{
				iLocal_586[iLocal_585] = iVar0;
				if (!bLocal_587)
				{
					unk_0x7B95E064D91BFE49(Local_93.f_73[iLocal_585], 1);
				}
			}
		}
	}
	iLocal_585++;
	if (iLocal_585 == 5)
	{
		iLocal_585 = 0;
	}
}

void func_766()
{
	bool bVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	var uVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar9 = -1;
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (BitTest(uLocal_559, bVar0))
		{
			if (Local_93.f_85[bVar0] != 2)
			{
				unk_0x8744D2E3FC95740E(&uLocal_559, bVar0);
			}
		}
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_48[bVar0]))
		{
			func_770(bVar0);
			if (!func_31(Local_93.f_48[bVar0]))
			{
				switch (Local_93.f_85[bVar0])
				{
					case 1:
						if (unk_0xEADBDBE0422CF7E6(Local_93.f_48[bVar0]))
						{
							if (unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), 0))
							{
								uVar2 = unk_0x6EF03BE64E058E2F(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), 0);
								uVar1 = unk_0x4B423FAA24E8ABF0(uVar2);
								if (unk_0xBA16CD57E37AC32A(uVar1))
								{
									if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 0)
									{
										if (unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0) == unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != func_5())
											{
												uVar6 = unk_0x56E414973C2A8C0E(iVar5);
												if (!unk_0x4FAFF4BCB7633475(uVar6))
												{
													if (func_26(iVar2, iVar6, 1) > 250f)
													{
														Var3 = { unk_0xD1A6A821F5AC81DB(iVar6, 1) };
														unk_0xDAC27BA46D21818F(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0x00C6FDED3EB75117(iVar1))
								{
									if (unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0) == unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]))
									{
										iVar11 = 1;
										iVar10 = (bVar0 / 4);
									}
									if ((unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 0) || ((iVar11 && iVar10 < 5) && iLocal_99[iVar10] != Local_93.f_110[iVar10]))
									{
										if (unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0) == unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]))
										{
											iVar9 = Local_93.f_110[iVar10];
											if (iVar9 > -1)
											{
												bVar5 = unk_0xB23E0F9B63D009A8(iVar9);
												if (bVar5 != func_5())
												{
													iVar6 = unk_0x56E414973C2A8C0E(bVar5);
													if (!unk_0x4FAFF4BCB7633475(iVar6))
													{
														Var3 = { unk_0xD1A6A821F5AC81DB(iVar6, 1) };
														unk_0x8737E7B1F3150A9F(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 100, 50, 1);
														if (iLocal_99[iVar10] != Local_93.f_110[iVar10])
														{
															iLocal_99[iVar10] = Local_93.f_110[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 0) && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_go_to_coord_any_means_extra_params_with_cruise_speed")) != 0) && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_go_to_coord_any_means_extra_params_with_cruise_speed")) != 1)
								{
									if (unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0) == unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]))
									{
										bVar5 = func_27();
										if (bVar5 != func_5())
										{
											iVar6 = unk_0x56E414973C2A8C0E(bVar5);
											if (!unk_0x4FAFF4BCB7633475(iVar6))
											{
												fVar7 = func_26(iVar2, iVar6, 1);
												if (fVar7 > 500f)
												{
													unk_0x8B561CAF821BBFCE(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), unk_0xD1A6A821F5AC81DB(iVar6, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar7 > 250f)
												{
													unk_0x13DE13EA38996410(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xEADBDBE0422CF7E6(Local_93.f_48[bVar0]))
						{
							if (!func_23())
							{
								if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_combat_hated_targets_around_ped")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), joaat("script_task_combat_hated_targets_around_ped")) != 0)
								{
									if (unk_0x7F420695E3F776FB(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), 0))
									{
										if (!BitTest(uLocal_559, bVar0))
										{
											iVar8 = func_769(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), 1133084672);
											if (iVar8 > -1)
											{
												unk_0xF6CC23160DD0AAED(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), 299f, 0);
											}
											else if (!BitTest(uLocal_559, bVar0))
											{
												func_768(bVar0, func_104(1));
												unk_0x0B0C9A0F9AAEB7F0(&uLocal_559, bVar0);
											}
										}
									}
									else
									{
										unk_0xF6CC23160DD0AAED(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), -251125078) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), -251125078) != 0)
						{
							Var4 = { func_767() };
							unk_0x974022927CB47E68(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]));
							unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), 1);
							unk_0xFD251F92B546F389(unk_0xC35A3A4C05A4831B(Local_93.f_48[bVar0]), Var4, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		bVar0++;
	}
}

Vector3 func_767()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar0]))
		{
			return unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_93.f_30[0 /*3*/];
}

void func_768(bool bParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 899454375;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 3, iParam1);
	}
}

int func_769(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar3]))
		{
			if (func_109(Local_93.f_7[iVar3]))
			{
				iVar5 = unk_0xFD5C5BBD1FE92BB7(unk_0xE38610F405049F71(Local_93.f_7[iVar3]), -1, 0);
				if (!unk_0x4FAFF4BCB7633475(iVar5))
				{
					if (unk_0x501EBB0523078750(iVar5))
					{
						Var4 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[iVar3]), 1) };
						fVar2 = func_541(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_770(bool bParam0)
{
	var uVar0;
	
	return;
	if (!func_31(Local_93.f_48[bParam0]))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_93.f_48[bParam0]))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0xC35A3A4C05A4831B(Local_93.f_48[bParam0])))
			{
				uVar0 = unk_0x6EF03BE64E058E2F(unk_0xC35A3A4C05A4831B(Local_93.f_48[bParam0]), 0);
				if (unk_0x00C6FDED3EB75117(unk_0x4B423FAA24E8ABF0(uVar0)) || unk_0xBA16CD57E37AC32A(unk_0x4B423FAA24E8ABF0(iVar0)))
				{
					if (!unk_0xD9F5E1FEFD1329E4(iVar0, 0))
					{
						unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_93.f_48[bParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_771(struct<3> Param0)
{
	Global_1836858.f_6 = { Param0 };
}

bool func_772()
{
	return BitTest(Local_93.f_3, 8);
}

void func_773(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_774("kwUfKUus6EuQyNSL8KpY-w");
					func_774("yMTOFLfO2UKwzKrmgPP7kg");
					func_774("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_774("tP5HSeCA0UiHnkRzakdO2Q");
					func_774("uEkrqoerQEmQ0uZRtp4rkw");
					func_774("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_774("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_774("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_774("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_774("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_774("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_774("uEkrqoerQEmQ0uZRtp4rkw");
					func_774("92t91kL3Wkqvl2Kc82cNSA");
					func_774("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_774("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_774("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_774("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_774("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_774("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_774("fOfm7nzMLkav0ldcSCNAzA");
					func_774("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_774("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_774("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_774("Ma78E44OMkGfYPmCPZXUNA");
					func_774("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_774("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_774("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_774("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_774("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_774("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_774("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_774("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_774("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_774("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_774("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_774("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_774("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_774("fOfm7nzMLkav0ldcSCNAzA");
							func_774("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_774("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_774("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_774("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_774("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_774("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_774("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_774("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_774("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_774("fOfm7nzMLkav0ldcSCNAzA");
							func_774("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_774("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_774("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_774("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_774("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_774("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_774("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_774("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_774("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_774("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_774("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_774("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_774("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_774("aGBjo2rKi0yMDLl3a2ATGA");
									func_774("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_774("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_774("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_774("f2lnL6wZPkGWUowu0yLm1Q");
									func_774("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_774("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_774("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_774("W-OJzHlM-0ym9PsIASYZtw");
									func_774("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_774("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_774("TjGz31AMYE6bGCjAIitu6w");
									func_774("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_774("QmlvLMLCwkOvoZlkAstYxw");
									func_774("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_774("BktATxH9R0Wp2x0kWSbqjw");
									func_774("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_774("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_774("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_774("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_774("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_774("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_774("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_774("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_774("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_774("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_774("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_774(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (BitTest(Global_4543624[iVar1 /*26*/].f_12, 11))
		{
			if (func_775(&(Global_4543624[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!BitTest(Global_4543624[iVar1 /*26*/].f_13, 26))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_4543624[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_775(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_150(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_776(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_776(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_150(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_159989[iVar1 /*13*/];
		
		case 62:
			return Global_978406.f_28205[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

void func_777()
{
	bool bVar0;
	struct<3> Var1;
	
	if (BitTest(Local_93.f_3, 12))
	{
		func_196();
	}
	if (func_772())
	{
		if (iLocal_553 != Local_93.f_12)
		{
			iLocal_553 = Local_93.f_12;
			func_196();
		}
	}
	if (!func_204())
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (!unk_0xC450B06E5AAA0985(uLocal_104[bVar0]))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[bVar0]))
				{
					if (func_109(Local_93.f_7[bVar0]))
					{
						Var1 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[bVar0]), 0) };
						if (!func_778(bVar0, Var1))
						{
							if (!BitTest(Local_93.f_13, bVar0))
							{
								uLocal_104[bVar0] = unk_0x18E23E031A9B798F(unk_0xE38610F405049F71(Local_93.f_7[bVar0]));
								unk_0x4C905FB262965D5D(uLocal_104[bVar0], 429);
								func_198(&(uLocal_104[bVar0]), 29);
								if (!BitTest(uLocal_97, 20))
								{
									unk_0x861AC9C2D48CEA7F(uLocal_104[bVar0], 1);
									unk_0x8D777E1B885E428C(uLocal_104[bVar0], 7000);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_97, 20);
								}
								unk_0x1456FD5C0C438B19(uLocal_104[bVar0], 9);
								if (func_772())
								{
									unk_0x594D5D0D7071B0DE(uLocal_104[bVar0], "UW_BLIPC");
								}
								else
								{
									unk_0x594D5D0D7071B0DE(uLocal_104[bVar0], "UW_BLIP");
								}
								if (!BitTest(uLocal_98, 3))
								{
									unk_0x2716F9D3A99349AB();
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_98, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[bVar0]))
			{
				if (!func_109(Local_93.f_7[bVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uLocal_104[bVar0]));
				}
				else if (BitTest(Local_93.f_13, bVar0))
				{
					unk_0xFE54B8568B2ABD12(&(uLocal_104[bVar0]));
				}
			}
			else
			{
				unk_0xFE54B8568B2ABD12(&(uLocal_104[bVar0]));
			}
			bVar0++;
		}
	}
	else
	{
		func_196();
	}
}

int func_778(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x93BF17E19A9F0E9B(Local_93.f_7[iVar0]))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_93.f_7[iVar0]), 0) };
				if (func_69(Param1, Var1, 0))
				{
					if (unk_0xC450B06E5AAA0985(uLocal_104[iVar0]))
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

int func_779()
{
	return Local_93.f_0;
}

int func_780(int iParam0)
{
	return Local_96[iParam0 /*18*/];
}

void func_781()
{
	if (BitTest(Global_1836858.f_1, 6))
	{
		func_463();
		unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 6);
	}
	if (!BitTest(Global_1836858.f_1, 7))
	{
		if (BitTest(Global_1836858.f_1, 4) || BitTest(Global_1836858.f_1, 16))
		{
			if (((!unk_0xBE259DBA45F2996E() && !unk_0x4C705AAF75363287()) && !func_368()) && func_873(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 7);
				func_436("FME_PASINT", 30000);
				func_435(1);
			}
		}
		else if (BitTest(Global_1836858.f_1, 17))
		{
			if (func_249() && !func_245())
			{
				unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 17);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836858.f_1, 23))
	{
		if (((((!unk_0xBE259DBA45F2996E() && !BitTest(Global_2793046.f_848, 2)) && func_873(unk_0x259BE71D8A81D4FA(), 1, 1)) && !Global_75693) && !Global_60543) && !unk_0x4C705AAF75363287())
		{
			if (func_804())
			{
				func_436("AMEV_GA_RP", -1);
				if (func_348(unk_0x259BE71D8A81D4FA()) != 200)
				{
					func_435(1);
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 23);
			}
		}
	}
	if (unk_0x4D9174D8796EA622() && unk_0x05AA183DA1344935() == 15)
	{
		if (func_240(unk_0x259BE71D8A81D4FA()))
		{
			if (!unk_0xBFF989187F281795(1344549371))
			{
				unk_0x9BC444D671469DCD(1344549371);
			}
		}
		else if (unk_0xBFF989187F281795(1344549371))
		{
			unk_0xB4CD52D6B8305BD4(1344549371);
		}
	}
	if (BitTest(Global_1836858.f_1, 9))
	{
		if (((((!unk_0xBE259DBA45F2996E() && !unk_0x4C705AAF75363287()) && !func_368()) && func_873(unk_0x259BE71D8A81D4FA(), 1, 1)) && !func_207(unk_0x259BE71D8A81D4FA(), 21)) && !func_207(unk_0x259BE71D8A81D4FA(), 25))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 9);
			func_803(0);
			func_436("FME_TBL00", -1);
			func_435(1);
		}
	}
	if (func_250(unk_0x259BE71D8A81D4FA()))
	{
		if (!BitTest(Global_1836858.f_1, 18))
		{
			if ((func_207(unk_0x259BE71D8A81D4FA(), 21) && BitTest(Global_1836858.f_1, 20)) && !BitTest(Global_1836858.f_1, 19))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 18);
			}
		}
		else if (BitTest(Global_1836858.f_1, 18))
		{
			if (((((!unk_0xBE259DBA45F2996E() && !unk_0x4C705AAF75363287()) && !func_368()) && func_873(unk_0x259BE71D8A81D4FA(), 1, 1)) && unk_0x9390801B06EE998F()) && !func_802())
			{
				unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 18);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 19);
				func_436("AMTT_RPAS", -1);
				func_435(1);
			}
		}
	}
	if (((((func_250(unk_0x259BE71D8A81D4FA()) && !func_206(unk_0x259BE71D8A81D4FA())) && func_191(unk_0x259BE71D8A81D4FA()) != 146) && !func_205(unk_0x259BE71D8A81D4FA())) && !func_687(unk_0x259BE71D8A81D4FA())) && !func_792())
	{
		if (func_692(func_191(unk_0x259BE71D8A81D4FA())))
		{
			unk_0x73CB9EAA55D097EB(unk_0x259BE71D8A81D4FA());
		}
		if (!BitTest(Global_1836858.f_1, 22))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 22);
		}
		if (func_213(unk_0x259BE71D8A81D4FA()) || func_690())
		{
			if (!BitTest(Global_1836858.f_1, 10))
			{
				if (func_790(func_191(unk_0x259BE71D8A81D4FA())))
				{
					if (func_617(0) && !Global_4585348)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 9);
					}
					if (!Global_4585348)
					{
						func_461(1);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 14);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 10);
			}
		}
		if (func_240(unk_0x259BE71D8A81D4FA()))
		{
			if (!BitTest(Global_1836858.f_1, 11))
			{
				if (!Global_100733.f_8)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 12);
					func_459(1);
				}
				if (!func_789())
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 13);
					func_691();
				}
				if (!Global_4585348)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 14);
					if (func_617(0) && !Global_4585348)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 9);
					}
					func_461(1);
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 11);
			}
		}
		else
		{
			func_787(0);
		}
	}
	else
	{
		func_787(1);
	}
	func_782();
	if (func_689(func_191(unk_0x259BE71D8A81D4FA())) && !BitTest(Global_1836858.f_1, 21))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 21);
	}
	if (((func_249() && !func_245()) || func_207(unk_0x259BE71D8A81D4FA(), 21)) || func_207(unk_0x259BE71D8A81D4FA(), 25))
	{
		if (!BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 10))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 10))
	{
		unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 10);
	}
}

void func_782()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_368())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_538(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836858.f_1, 26))
				{
					unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 26);
				}
				func_783(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836858.f_1, 26))
	{
		func_106(&(Global_1836858.f_22));
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 26);
	}
}

void func_783(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1836858.f_22)))
	{
		func_20(&(Global_1836858.f_22), 0, 0);
	}
	else if (func_19(&(Global_1836858.f_22), iParam1, 0))
	{
		if (func_421() > 0)
		{
			func_786(iParam0);
			if (func_699("AMEV_LBD_HELP"))
			{
				unk_0x428C32CC68809A35(1);
			}
			func_106(&(Global_1836858.f_22));
		}
	}
	else
	{
		func_785(0);
		func_784();
	}
}

void func_784()
{
	Global_2793046.f_4629 = 0;
}

void func_785(int iParam0)
{
	Global_1653913.f_68 = iParam0;
}

void func_786(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2672505.f_2514[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2672505.f_2514[iVar0 /*80*/].f_2 = 5;
			func_366(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_787(int iParam0)
{
	if ((BitTest(Global_1836858.f_1, 11) || (BitTest(Global_1836858.f_1, 10) && iParam0)) || (BitTest(Global_1836858.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836858.f_1, 12))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 12);
			func_459(0);
		}
		if (BitTest(Global_1836858.f_1, 13))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 13);
			func_788();
		}
		if (BitTest(Global_1836858.f_1, 14) && !func_234(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 14);
			func_461(0);
		}
		unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 11);
		unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 10);
		unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 22);
	}
}

void func_788()
{
	unk_0x8744D2E3FC95740E(&(Global_2793046.f_5063), false);
}

bool func_789()
{
	return BitTest(Global_2793046.f_5063, 0);
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_240(unk_0x259BE71D8A81D4FA());
		
		case 133:
			return (func_690() || func_791(func_190()));
		
		default:
	}
	return 0;
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_792()
{
	if (((((((((func_801() || func_800()) || func_799()) || func_183()) || (func_798() && !unk_0x834C960822A4683F())) || (func_795() && !func_794())) || Global_2625211) || Global_2625211.f_1 != 0) || Global_2625286 != 0) || (func_793() == 2 && !unk_0x834C960822A4683F()))
	{
		return 1;
	}
	return 0;
}

int func_793()
{
	return Global_1057409;
}

bool func_794()
{
	return BitTest(Global_2683864.f_2, 27);
}

int func_795()
{
	if (func_797() || func_796())
	{
		return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_95 == 8;
	}
	return 0;
}

var func_796()
{
	return Global_2683864.f_735;
}

var func_797()
{
	return BitTest(Global_2683864.f_2, 11);
}

var func_798()
{
	return BitTest(Global_2683864, 5);
}

var func_799()
{
	return BitTest(Global_2683864, 2);
}

var func_800()
{
	return BitTest(Global_2683864, 20);
}

bool func_801()
{
	return Global_2683864.f_698;
}

bool func_802()
{
	return Global_2793046.f_5158 != -1;
}

void func_803(int iParam0)
{
	int iVar0;
	
	iVar0 = func_269(2537, -1, 0);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
		}
		else if (!BitTest(iVar0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, true);
		}
		else if (!BitTest(iVar0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 11);
		}
	}
	func_494(2537, iVar0, -1, 1, 0);
}

int func_804()
{
	int iVar0;
	
	if (!func_22(&(Global_1836858.f_15)))
	{
		func_20(&(Global_1836858.f_15), 0, 0);
		Global_1836858.f_17 = 0;
	}
	else if (func_19(&(Global_1836858.f_15), 1000, 0))
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(Global_1836858.f_17)))
		{
			iVar0 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(Global_1836858.f_17));
			if (unk_0x762604C40829DB72(iVar0))
			{
				if (func_873(bVar0, 1, 1) && func_805(bVar0, 6))
				{
					if (vdist(func_59(unk_0x259BE71D8A81D4FA()), func_59(bVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836858.f_17++;
		if (Global_1836858.f_17 >= 32)
		{
			Global_1836858.f_17 = 0;
			func_106(&(Global_1836858.f_15));
		}
	}
	return 0;
}

int func_805(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_455() != 0)
	{
		return 0;
	}
	if (!func_498(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853910[iVar0 /*862*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_806()
{
	return Global_1836858.f_24;
}

bool func_807(int iParam0)
{
	return !func_808(iParam0);
}

int func_808(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7120)
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7121)
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7122)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7123)
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_809(4))
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_809(4))
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_809(4))
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_809(4))
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_809(4))
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_809(4))
			{
				return 0;
			}
			if (func_207(unk_0x259BE71D8A81D4FA(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_809(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_873(unk_0xB23E0F9B63D009A8(iVar0), 0, 1))
		{
			if (BitTest(Global_2657589[bVar0 /*466*/].f_218, bParam0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_810()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_813())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_812())
	{
		return 1;
	}
	if (func_811(159))
	{
		if (!func_801())
		{
			return 1;
		}
	}
	if (func_811(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_453() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_453()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_811(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_812()
{
	return Global_2694526;
}

bool func_813()
{
	return Global_2683864.f_693;
}

void func_814()
{
	wait(0);
}

void func_815()
{
	int iVar0;
	
	func_196();
	if (func_779() == 4 && Local_93.f_27 != 0)
	{
		unk_0xCCA6D8A84EE8C88A(Local_93.f_27, 0);
	}
	unk_0x8744D2E3FC95740E(&(Global_2793046.f_4692), true);
	func_697(19, 0);
	func_675(0);
	if (unk_0xAE032CEDCF23C6D5() != -1)
	{
		func_821(129, 0, BitTest(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2, 8));
	}
	func_820(129);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 184, 0);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 151, 1);
	unk_0x425BBE19F25A57AB(1f);
	if (iLocal_102 > 0)
	{
		unk_0xDAE61414743C8D1D(iLocal_102);
	}
	if (unk_0x259BE71D8A81D4FA() != -1)
	{
		if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 129)
		{
			Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] = -1;
		}
	}
	if (unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()) == iLocal_106)
	{
		unk_0x3CEA1FD137ACE2D9(unk_0x4A8C381C258A124D(), iLocal_108);
	}
	func_819();
	func_209(0, 129);
	if (BitTest(uLocal_97, 22))
	{
		func_466();
		unk_0x8744D2E3FC95740E(&uLocal_97, 22);
	}
	if (BitTest(uLocal_97, 9))
	{
		unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
		if (!BitTest(uLocal_97, 10))
		{
			unk_0x86A2BC11844DEEB3("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_103 != -100f)
	{
		func_544(0, 0);
		unk_0x1D9E253CF963B125(fLocal_103);
	}
	func_543(0);
	if (func_810())
	{
		Local_94.f_5 = 5;
	}
	else if (func_636(2, 0, 0, 0, 0))
	{
		Local_94.f_5 = 6;
	}
	else if (Local_94.f_5 != 1)
	{
		Local_94.f_5 = 2;
	}
	unk_0x8E4825CCACA34B58(uLocal_556);
	Local_94.f_0 = Local_93.f_611;
	Local_94.f_1 = Local_93.f_612;
	Local_94.f_4 = Local_93.f_613;
	Local_94.f_3 = Local_93.f_615;
	if (Local_94.f_9 > 0)
	{
		Local_94.f_10 = (unk_0x39D1D336459711BE() - Local_94.f_9);
	}
	if ((!Global_262145.f_11977 && !BitTest(Local_93.f_3, 8)) || (!Global_262145.f_11978 && BitTest(Local_93.f_3, 8)))
	{
		if (Local_94.f_6 > 0)
		{
		}
	}
	if (BitTest(Local_93.f_3, 8))
	{
		iVar0 = 1;
	}
	if (BitTest(uLocal_98, 1))
	{
		func_704(1);
		unk_0x3DDE6E86B8024EEE(0, 0);
	}
	if (iVar0 == 0)
	{
		func_817(Local_94, Local_93.f_27, Local_93.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0xAE032CEDCF23C6D5() != -1)
	{
		func_817(Local_94, Local_93.f_279, Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_426(unk_0x259BE71D8A81D4FA()))
	{
		func_653(0);
	}
	func_674(0);
	func_735(1);
	func_816();
}

void func_816()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_817(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	var uVar0;
	struct<13> Var1;
	struct<15> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	uVar0 = unk_0x1AF90EB93E0012D6();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_78558)
	{
		if (unk_0x1B79E937E91F40C3(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0x32E12CCFF254D37A(&Var1);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, func_818()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			Var2.f_14 = iParam3;
			unk_0xD2041B451EDC1C66(&Var2);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			unk_0x173E12E4AAA563A1(&Var3);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0x2D37C46EADE98E63(&Var4);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_penned_in"))
		{
			unk_0xC98FBB17B1EC9BA1(&Param0);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0x4C70DC8FBB218E4E(&Var5);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0xEBB6A19519CEBE34(&Var6);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0x41A58057D21172EA(&Var7);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			unk_0x0E8BC7181CB760A3(&Var8);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0x842F188EE807AF8B(&Var9);
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x2825919430010B91(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0xEC859204FA292EDF(&Var11);
			}
		}
		else if (unk_0x1B79E937E91F40C3(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0x05FBB9E5C4B211A4(&Var12);
		}
	}
}

char* func_818()
{
	switch (Global_2697021)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_819()
{
	unk_0x2B1BDC32466B40A9(iLocal_107);
	unk_0x2B1BDC32466B40A9(iLocal_106);
}

void func_820(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_821(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x259BE71D8A81D4FA() != -1)
	{
		if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 13))
		{
			unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 13);
		}
		if (BitTest(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1, 14))
		{
			unk_0x8744D2E3FC95740E(&(Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836858.f_1, 21))
	{
		unk_0x8744D2E3FC95740E(&(Global_1836858.f_1), 21);
	}
	func_857();
	unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
	unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_856(func_191(unk_0x259BE71D8A81D4FA()));
		func_697(func_698(iParam0), 0);
	}
	else
	{
		if ((iParam2 && unk_0x259BE71D8A81D4FA() != -1) && func_855(unk_0x259BE71D8A81D4FA()) >= 12)
		{
			func_854(2549, -1);
			iVar1 = func_269(2549, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836884, false);
			}
			else if (iVar1 == 4)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836884, true);
			}
			else if (iVar1 == 6)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836884, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836884, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836884, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1836884, 5);
			}
		}
		func_703();
		func_853();
		func_852();
		if ((!func_239(unk_0x259BE71D8A81D4FA()) && !func_237(unk_0x259BE71D8A81D4FA())) && !func_851())
		{
			func_830();
		}
		func_829();
		if (!BitTest(Global_1947724.f_3, 0) && !BitTest(Global_1947724.f_3, 1))
		{
			func_463();
		}
		func_828();
		unk_0x8744D2E3FC95740E(&(Global_2793046.f_1841), 2);
		func_559();
		func_827();
	}
	if (unk_0xBFF989187F281795(1344549371))
	{
		unk_0xB4CD52D6B8305BD4(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x259BE71D8A81D4FA() != -1 && !func_207(unk_0x259BE71D8A81D4FA(), 21)) && !func_207(unk_0x259BE71D8A81D4FA(), 25)) && !func_234(unk_0x259BE71D8A81D4FA(), 0))
		{
			func_461(0);
			func_459(0);
			if (!bParam1)
			{
				func_826();
			}
		}
	}
	if (iParam2 && !bParam1)
	{
		if (func_640(26, -1))
		{
			Global_2696845 = -1;
			func_638(26, -1);
		}
	}
	if (!func_822())
	{
		Global_2764094 = 1;
	}
}

int func_822()
{
	if (((((((!func_399(unk_0x259BE71D8A81D4FA()) && !func_380(unk_0x259BE71D8A81D4FA())) && func_191(unk_0x259BE71D8A81D4FA()) != 146) && !func_825()) && !func_824()) && !func_823(Global_4718592.f_166301)) && !func_600()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_823(int iParam0)
{
	return iParam0 == 57;
}

int func_824()
{
	if (Global_4718592.f_113724 == Global_262145.f_10063)
	{
		return 1;
	}
	return 0;
}

int func_825()
{
	if ((Global_4718592 == 0 && unk_0x834C960822A4683F()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_166301 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_826()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_4543624[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_4543624[iVar0 /*26*/].f_13, 26))
			{
				unk_0x8744D2E3FC95740E(&(Global_4543624[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_827()
{
	Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_7 = 0;
}

void func_828()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836858 = { Var0 };
}

void func_829()
{
	var uVar0;
	
	Global_1581949 = uVar0;
}

void func_830()
{
	unk_0xDD7F149F8BAF1260(&(Global_2635559.f_24), &Global_2639845, 2);
	unk_0xDD7F149F8BAF1260(&(Global_2635559.f_26), &Global_2639847, 19);
	func_849();
	func_833(1, 1, 0);
	func_831();
}

void func_831()
{
	func_832(0, 0);
}

void func_832(int iParam0, int iParam1)
{
	Global_2635559.f_22 = iParam0;
	Global_2635559.f_23 = iParam1;
}

void func_833(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xDD7F149F8BAF1260(&(Global_2635559.f_45), &Global_2639866, 323);
	}
	else
	{
		Global_2635559.f_45 = { Global_2639866 };
		Global_2635559.f_45.f_49 = { Global_2639866.f_49 };
		Global_2635559.f_45.f_52 = Global_2639866.f_52;
		Global_2635559.f_45.f_53 = Global_2639866.f_53;
	}
	if (bParam0)
	{
		func_848();
	}
	if (!bParam2)
	{
		func_836(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_835(0);
	func_834();
}

void func_834()
{
	struct<6> Var0;
	
	if (Global_2635559.f_490.f_1 == unk_0x8F76B2250AC806FA())
	{
		Global_2635559.f_490 = { Var0 };
	}
}

void func_835(bool bParam0)
{
	if (bParam0)
	{
		Global_2635559.f_713 = 0;
	}
	else
	{
		Global_2635559.f_713 = 1;
	}
}

void func_836(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_847())
		{
			func_846();
		}
		Global_2635559.f_714.f_518 = unk_0x8F76B2250AC806FA();
		Global_2635559.f_714.f_504 = iParam1;
		Global_2635559.f_714.f_505 = iParam2;
		Global_2635559.f_714.f_506 = iParam10;
		func_844();
		func_840(8, 0, 0, 0, 0);
		Global_2635559.f_714.f_507 = iParam11;
		Global_2635559.f_714.f_512 = iParam3;
		Global_2635559.f_714.f_513 = iParam4;
		Global_2635559.f_714.f_510 = iParam5;
		Global_2635559.f_714.f_511 = iParam6;
		Global_2635559.f_714.f_514 = iParam7;
		Global_2635559.f_714.f_515 = iParam8;
		Global_2635559.f_714.f_516 = iParam9;
		Global_2635559.f_714.f_517 = iParam14;
		Global_2635559.f_714.f_508 = iParam12;
		Global_2635559.f_714.f_509 = iParam13;
		Global_2635559.f_1753 = 1;
	}
	else
	{
		func_837();
	}
}

void func_837()
{
	if (func_847() && !func_839())
	{
		func_846();
	}
	if (func_839())
	{
		func_838();
	}
	else
	{
		func_844();
		func_840(0, 0, 0, 0, 0);
		Global_2635559.f_1753 = 0;
		Global_2635559.f_1752 = 0;
	}
}

void func_838()
{
	unk_0xDD7F149F8BAF1260(&(Global_2635559.f_714), &(Global_2635559.f_1233), 519);
	Global_2635559.f_490 = { Global_2635559.f_496 };
	if (unk_0x8F76B2250AC806FA() == Global_2635559.f_714.f_518)
	{
		Global_2635559.f_1752 = 0;
	}
}

int func_839()
{
	if ((Global_2635559.f_1752 && !unk_0x8F76B2250AC806FA() == Global_2635559.f_1233.f_518) && unk_0xF40767E41852FB72(Global_2635559.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_840(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2672505.f_1685.f_703.f_16 != func_5())
	{
		if (BitTest(Global_2657589[Global_2672505.f_1685.f_703.f_16 /*466*/].f_427, 0) && func_841())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643290 = 0;
	}
	Global_2635559.f_490 = iParam0;
	Global_2635559.f_490.f_1 = unk_0x8F76B2250AC806FA();
	Global_2635559.f_490.f_2 = iParam1;
	Global_2635559.f_490.f_3 = iParam2;
	Global_2635559.f_490.f_4 = iParam3;
	Global_2635559.f_490.f_5 = iParam4;
}

int func_841()
{
	if ((((((func_348(unk_0x259BE71D8A81D4FA()) == 229 || func_348(unk_0x259BE71D8A81D4FA()) == 191) || func_843()) || func_851()) || func_215()) || Global_2764908.f_227 == 1) || (Global_2635559.f_1753 && func_842(unk_0x259BE71D8A81D4FA())))
	{
		return 0;
	}
	return 1;
}

int func_842(int iParam0)
{
	if (func_213(iParam0))
	{
		return 1;
	}
	if (func_251(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_843()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_844()
{
	if (func_847() && !func_839())
	{
		func_846();
	}
	func_845();
	Global_2635559.f_714 = 0;
}

void func_845()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635559.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_846()
{
	if (func_839())
	{
		if (Global_2635559.f_714.f_518 == Global_2635559.f_1233.f_518)
		{
			return;
		}
	}
	if (!unk_0x8F76B2250AC806FA() == Global_2635559.f_714.f_518)
	{
		unk_0xDD7F149F8BAF1260(&(Global_2635559.f_1233), &(Global_2635559.f_714), 519);
		Global_2635559.f_496 = { Global_2635559.f_490 };
		Global_2635559.f_1752 = 1;
	}
}

int func_847()
{
	if ((Global_2635559.f_1753 && !unk_0x8F76B2250AC806FA() == Global_2635559.f_714.f_518) && unk_0xF40767E41852FB72(Global_2635559.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_848()
{
	unk_0xDD7F149F8BAF1260(&(Global_2635559.f_368), &Global_2640189, 121);
}

void func_849()
{
	func_850();
}

void func_850()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2635559.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635559.f_2262 = 0;
}

bool func_851()
{
	return Global_1836591;
}

void func_852()
{
	Global_2793046.f_5063 = 0;
}

void func_853()
{
	if (unk_0x259BE71D8A81D4FA() != -1)
	{
		Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_1 = 0;
	}
}

void func_854(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_269(iParam0, func_248(iParam1), 0);
	iVar0++;
	if (!func_501(iParam0))
	{
		func_494(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_495(iParam0, iVar0, iParam1, 1);
	}
}

int func_855(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_240(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_857()
{
	if (BitTest(Global_2793046.f_1828, 3) || BitTest(Global_2793046.f_1828, 4))
	{
		if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
	}
	if (BitTest(Global_2793046.f_1828, 5))
	{
		unk_0x8744D2E3FC95740E(&(Global_2793046.f_1828), 5);
	}
	if (BitTest(Global_2793046.f_1828, 3))
	{
		unk_0x8744D2E3FC95740E(&(Global_2793046.f_1828), 3);
	}
	if (BitTest(Global_2793046.f_1828, 4))
	{
		unk_0x8744D2E3FC95740E(&(Global_2793046.f_1828), 4);
	}
	func_860(0);
	func_859(0);
	func_858(0);
}

void func_858(int iParam0)
{
	if (Global_2793046.f_4617 != iParam0)
	{
		Global_2793046.f_4617 = iParam0;
	}
}

void func_859(bool bParam0)
{
	if (Global_2793046.f_4616 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2793046.f_4616 = bParam0;
	}
}

void func_860(int iParam0)
{
	if (Global_2793046.f_4614 != iParam0)
	{
		Global_2793046.f_4614 = iParam0;
	}
}

void func_861(struct<21> Param0)
{
	int iVar0;
	
	func_870(func_871(Param0.f_0), Param0);
	unk_0x17C7D9B3979F5759(24);
	unk_0x552B3BADB43FF551(9);
	func_869(0, -1, 0);
	func_867(129);
	unk_0x6F4A865F87C7A3AD(&Local_93, 617, 0);
	unk_0x7B13DC83218D9AF5(&Local_96, 577, 0);
	func_866(1);
	if (!func_865())
	{
		func_815();
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xAECC5FA98C879D67(0);
		if (unk_0x93E08E0F531E2C35())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_93.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_93.f_22[iVar0] = func_5();
				Local_93.f_256[iVar0] = -1;
				Local_93.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0x0189E96FAC892B16(&(Local_93.f_611), &(Local_93.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_99[iVar0] = -1;
			iVar0++;
		}
		Local_94.f_2 = unk_0xC259E614564DAB8F();
		Local_94.f_8 = unk_0x39D1D336459711BE();
		func_697(19, 1);
		func_862();
		if (func_204())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_2), 7);
		}
		Local_96[unk_0xAE032CEDCF23C6D5() /*18*/].f_9 = -1;
		Global_2793046.f_5149 = -1;
		Local_96[unk_0xAE032CEDCF23C6D5() /*18*/] = 0;
	}
	else
	{
		func_815();
	}
}

void func_862()
{
	int iVar0;
	
	unk_0x06CD913C241C765E("relUWPlayer", &iLocal_106);
	unk_0x06CD913C241C765E("relUWAi", &iLocal_107);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xD414C47AFF81382A(1, Global_1837175[iVar0], iLocal_106);
		unk_0xD414C47AFF81382A(1, iLocal_106, Global_1837175[iVar0]);
		unk_0xD414C47AFF81382A(1, Global_1837175[iVar0], iLocal_107);
		unk_0xD414C47AFF81382A(1, iLocal_107, Global_1837175[iVar0]);
		unk_0xD414C47AFF81382A(1, iLocal_106, joaat("COP"));
		unk_0xD414C47AFF81382A(1, joaat("COP"), iLocal_106);
		unk_0xD414C47AFF81382A(1, iLocal_106, Global_1837223[5]);
		unk_0xD414C47AFF81382A(1, Global_1837223[5], iLocal_106);
		unk_0xD414C47AFF81382A(1, iLocal_106, Global_1837208);
		unk_0xD414C47AFF81382A(1, Global_1837208, iLocal_106);
		iVar0++;
	}
	unk_0xD414C47AFF81382A(5, iLocal_106, iLocal_107);
	unk_0xD414C47AFF81382A(5, iLocal_107, iLocal_106);
	unk_0xD414C47AFF81382A(1, 2017343592, iLocal_107);
	unk_0xD414C47AFF81382A(5, 2017343592, iLocal_106);
	func_864(1, &iLocal_107);
	func_863(&iLocal_107);
	func_863(&iLocal_106);
}

void func_863(int iParam0)
{
	unk_0xD414C47AFF81382A(1, -1865950624, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, -1865950624);
	unk_0xD414C47AFF81382A(1, 296331235, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, 296331235);
	unk_0xD414C47AFF81382A(1, 1166638144, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, 1166638144);
	unk_0xD414C47AFF81382A(1, 2037579709, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, 2037579709);
	unk_0xD414C47AFF81382A(1, 2017343592, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, 2017343592);
	unk_0xD414C47AFF81382A(1, -1821475077, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, -1821475077);
	unk_0xD414C47AFF81382A(1, 1782292358, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, 1782292358);
	unk_0xD414C47AFF81382A(1, -1033021910, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, -1033021910);
	unk_0xD414C47AFF81382A(1, -1285976420, *iParam0);
	unk_0xD414C47AFF81382A(1, *iParam0, -1285976420);
}

void func_864(int iParam0, int iParam1)
{
	unk_0xD414C47AFF81382A(iParam0, joaat("COP"), *iParam1);
	unk_0xD414C47AFF81382A(iParam0, *iParam1, joaat("COP"));
	unk_0xD414C47AFF81382A(iParam0, joaat("army"), *iParam1);
	unk_0xD414C47AFF81382A(iParam0, *iParam1, joaat("army"));
	unk_0xD414C47AFF81382A(iParam0, -183807561, *iParam1);
	unk_0xD414C47AFF81382A(iParam0, *iParam1, -183807561);
}

int func_865()
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
		if (func_813())
		{
			return 0;
		}
		if (func_811(157))
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

void func_866(bool bParam0)
{
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_453())
	{
		return;
	}
	if (!unk_0xF40767E41852FB72(Global_2646729.f_1317) || Global_2646729.f_1317 == unk_0x8F76B2250AC806FA())
	{
		if (bParam0)
		{
			Global_2646729.f_1317 = unk_0x8F76B2250AC806FA();
		}
		else
		{
			Global_2646729.f_1317 = -1;
		}
	}
}

void func_867(int iParam0)
{
	func_828();
	func_868();
	func_852();
	Global_1836858.f_4 = iParam0;
	Global_1836858.f_5 = iParam0;
	func_696(iParam0, -1);
	func_8(&(Global_1836858.f_18), 0, 0);
	Global_2793046.f_4687 = 0;
	Global_2695729[0] = func_5();
	Global_2695729[1] = func_5();
	Global_2695729[2] = func_5();
	Global_2695729[3] = func_5();
	Global_2695729[4] = func_5();
	func_827();
	if (!func_230(func_231()))
	{
		func_365();
	}
	if (func_249() && !func_245())
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 16);
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836858.f_1), 17);
	}
}

void func_868()
{
	var uVar0;
	
	Global_1836883 = uVar0;
}

int func_869(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_816();
			}
			else
			{
				return 0;
			}
		}
		if (!func_169(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_816();
					}
					else
					{
						return 0;
					}
				}
				if (func_813())
				{
					if (!bParam2)
					{
						func_816();
					}
					else
					{
						return 0;
					}
				}
				if (func_811(157))
				{
					if (!bParam2)
					{
						func_816();
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
					func_816();
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
				func_816();
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
			func_816();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_870(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_816();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_140(func_872(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_872(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

int func_873(bool bParam0, bool bParam1, bool bParam2)
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
