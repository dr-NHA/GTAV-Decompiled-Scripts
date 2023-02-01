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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<123> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 16;
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
	var uLocal_249 = 16;
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
	struct<6> Local_414 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_415 = 0;
	var uLocal_416 = 16;
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
	struct<5> Local_581[2];
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	bool bLocal_588 = 0;
	bool bLocal_589 = 0;
	bool bLocal_590 = 0;
	bool bLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	struct<21> Local_596 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_60 = 20;
	iLocal_61 = 33;
	bLocal_588 = true;
	bLocal_589 = true;
	bLocal_590 = true;
	bLocal_591 = true;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_806(ScriptParam_596);
	}
	while (true)
	{
		func_805();
		if (func_800())
		{
			func_424(1);
		}
		if (func_421(0))
		{
			Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 3;
		}
		if (func_420(unk_0xAE032CEDCF23C6D5()) > -1)
		{
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
		}
		switch (func_419(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (!BitTest(uLocal_582, 10))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 10);
					}
				}
				unk_0xF2CB0224D3BE0B42("FMINT", 0);
				if (func_418() && unk_0xCC2EFE4B1D0EE422("FMINT", 0))
				{
					if (func_417() > 0)
					{
						func_416(&uLocal_249, 1, 0, "Lamar", 0, 1);
						func_415(0);
						func_414(4, 1);
						func_414(1, 1);
						func_414(0, 1);
						func_414(2, 1);
						func_414(3, 0);
						func_412(iLocal_61, 1);
						Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 2;
						if (bLocal_590)
						{
							Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = -2;
						}
						else
						{
							Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_417() == 4)
				{
					Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 4;
				}
				if (func_417() == 6 && Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] < 4)
				{
					Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_390();
				func_23();
				if (func_417() == 4)
				{
					Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 4;
				}
				if (func_417() == 6 && Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] < 4)
				{
					Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 5;
				break;
			
			case 5:
				func_21(&(Local_414.f_5));
				if (func_20(&(Local_414.f_5)))
				{
					Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_60);
				Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 6;
			
			case 6:
				func_424(0);
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_417())
			{
				case 0:
					Local_414.f_0 = 2;
					break;
				
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_414.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_588)
	{
		if (BitTest(Local_414.f_1, 1))
		{
			return 1;
		}
	}
	else if (BitTest(Local_414.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (unk_0x93E08E0F531E2C35())
	{
		if (!BitTest(Local_414.f_1, 3))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), 3);
			}
		}
		if (!BitTest(Local_414.f_1, 4))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), 4);
			}
		}
		if (!BitTest(Local_414.f_1, 5))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 3))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), 5);
			}
		}
		if (!BitTest(Local_414.f_1, 6))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 4))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), 6);
			}
		}
		if (!BitTest(Local_414.f_1, 7))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 5))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), 7);
			}
		}
		if (!BitTest(Local_414.f_1, 8))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 6))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), 8);
			}
		}
		switch (Local_414.f_2)
		{
			case 0:
				if (BitTest(Local_414.f_1, 3))
				{
					if (func_4(&(Local_414.f_3), &(Local_414.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_416))
					{
						unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_414.f_3), 1, 0, 0);
						Local_414.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (BitTest(Local_414.f_1, 4))
				{
					Local_414.f_2 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_414.f_1, 5))
				{
					Local_414.f_2 = 3;
				}
				break;
			
			case 3:
				if (BitTest(Local_414.f_1, 6))
				{
					Local_414.f_2 = 4;
				}
				break;
			
			case 4:
				if (BitTest(Local_414.f_1, 7))
				{
					Local_414.f_2 = 5;
				}
				break;
			
			case 5:
				if (BitTest(Local_414.f_1, 8))
				{
					Local_414.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam3, var uParam4)
{
	if (func_9(Global_2793046.f_849) && func_9(Global_2793046.f_850))
	{
		if (!unk_0x2FC2FDC413532977(*uParam0))
		{
			if (func_6(uParam0, Global_2793046.f_849, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				unk_0x983B8E72C35B01F2(unk_0xE38610F405049F71(*uParam0), 1);
			}
		}
		if (!unk_0x2FC2FDC413532977(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2793046.f_850, -1, 1, 1, 1))
			{
				unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(*uParam1), 1);
				unk_0x55098D9E9AD58806(Global_2793046.f_849);
				unk_0x55098D9E9AD58806(Global_2793046.f_850);
				unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(*uParam0), 0);
				unk_0x379E96D5D36B27DC(unk_0xC35A3A4C05A4831B(*uParam1), 1);
				func_416(uParam4, 8, unk_0xC35A3A4C05A4831B(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(*uParam0) || !unk_0x2FC2FDC413532977(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_7(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_8(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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
		Global_2635559.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_8(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
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

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (bLocal_588)
			{
				if (!BitTest(Local_414.f_1, 2))
				{
					if (BitTest(Local_581[iVar0 /*5*/].f_3, 2))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), 2);
					}
				}
			}
			else if (!BitTest(Local_414.f_1, 1))
			{
				if (BitTest(Local_581[iVar0 /*5*/].f_3, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_414.f_1), true);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(unk_0x259BE71D8A81D4FA(), 1))
	{
		return;
	}
	if (!func_13(unk_0x259BE71D8A81D4FA()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

bool func_15(int iParam0, bool bParam1)
{
	if (func_19() != 0)
	{
		return func_13(iParam0) != 0;
	}
	return func_16(iParam0, bParam1, 0);
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(iParam0))
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

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

var func_18(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_19()
{
	return Global_32163;
}

int func_20(var uParam0)
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

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	switch (func_420(unk_0xAE032CEDCF23C6D5()))
	{
		case -2:
			func_204();
			break;
		
		case -1:
			func_203();
			break;
		
		case 0:
			func_31();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_24();
			break;
	}
}

void func_24()
{
	switch (iLocal_587)
	{
		case 0:
			if (!func_25(iLocal_61))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 2);
				Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 5, 1);
}

int func_26(int iParam0, int iParam1, bool bParam2)
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
		if (func_19() == 0)
		{
			return BitTest(func_27(func_30(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_28(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1574918;
}

int func_30(int iParam0)
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

void func_31()
{
	int iVar0;
	
	if (func_202())
	{
		if (func_14(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			func_201(0);
		}
	}
	if (!func_200(&uLocal_239))
	{
		func_22(&uLocal_239, 0, 0);
	}
	if (!BitTest(uLocal_582, 21))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 21);
	}
	if (!BitTest(uLocal_582, 3))
	{
		if (!func_200(&uLocal_237))
		{
			func_22(&uLocal_237, 0, 0);
		}
		else if (BitTest(uLocal_582, 21))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (func_199(&uLocal_237, 3000, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 3);
					}
				}
			}
		}
		if (func_199(&uLocal_237, 40000, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 3);
		}
	}
	else if (!BitTest(uLocal_582, 16))
	{
		if (!unk_0x4C705AAF75363287())
		{
			if (!unk_0x4D9174D8796EA622())
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 16);
				func_198(&uLocal_237);
			}
		}
	}
	if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
	{
		if (!func_200(&uLocal_243))
		{
			func_22(&uLocal_243, 0, 0);
		}
		else if (!BitTest(uLocal_583, 1))
		{
			if (func_199(&uLocal_243, 10000, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_583, true);
				func_198(&uLocal_243);
			}
		}
		else if (BitTest(uLocal_582, 19))
		{
			if (!BitTest(uLocal_582, 18))
			{
				if (!func_196() || func_199(&uLocal_237, 5000, 0))
				{
					func_195(0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 18);
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 0);
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 0);
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 0);
					}
				}
			}
		}
	}
	if (BitTest(uLocal_582, 18))
	{
		if (!BitTest(uLocal_582, 2))
		{
			if (unk_0x9390801B06EE998F())
			{
				iVar0 = 0;
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
				if (func_99(&uLocal_249, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_98(1);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 2);
					if (!BitTest(uLocal_582, 20))
					{
						func_83(19, 3, 1);
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 20);
					}
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 1, 1);
					}
				}
			}
		}
		else if (!func_82(0))
		{
			if (!func_81())
			{
				if (!func_79())
				{
					if (!BitTest(uLocal_582, 12))
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 0, 1);
							unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 1);
							unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 1);
							unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 1);
						}
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 12);
						func_22(&uLocal_241, 0, 0);
						func_22(&uLocal_245, 0, 0);
					}
				}
			}
		}
		if (BitTest(uLocal_582, 12))
		{
			if (!BitTest(uLocal_582, 17))
			{
				if (!unk_0x4D9174D8796EA622())
				{
					func_75();
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 17);
					func_198(&uLocal_237);
				}
			}
			else if (!func_196())
			{
				if (!BitTest(uLocal_582, 23))
				{
					if (func_199(&uLocal_245, 4500, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 23);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 3);
					}
				}
				if (func_199(&uLocal_241, 15000, 0))
				{
					if (!BitTest(uLocal_582, 22))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 22);
					}
				}
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
				{
					if (BitTest(uLocal_582, 14))
					{
						unk_0x8744D2E3FC95740E(&uLocal_582, 14);
					}
					if (!func_25(iLocal_61))
					{
						if (BitTest(uLocal_582, 13))
						{
							unk_0x8744D2E3FC95740E(&uLocal_582, 13);
						}
						if (BitTest(uLocal_582, 25) || (!BitTest(uLocal_582, 25) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)))
						{
							if (!BitTest(uLocal_582, 0))
							{
								if (BitTest(uLocal_582, 15))
								{
									unk_0x8744D2E3FC95740E(&uLocal_582, 15);
								}
								if (unk_0xC450B06E5AAA0985(Global_100733.f_263[iLocal_61]))
								{
									func_69("GET_AMMU", 0);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, false);
									unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 25);
									if (unk_0xC450B06E5AAA0985(Global_100733.f_263[iLocal_61]))
									{
										if (!BitTest(Global_2793046.f_848, 2))
										{
											unk_0xBC64B805EE071A37(Global_100733.f_263[iLocal_61], 1);
										}
										func_412(iLocal_61, 1);
									}
								}
							}
							else if (BitTest(Global_2793046.f_848, 2))
							{
								if (unk_0xC450B06E5AAA0985(Global_100733.f_263[iLocal_61]))
								{
									if (!BitTest(uLocal_582, 15))
									{
										unk_0xBC64B805EE071A37(Global_100733.f_263[iLocal_61], 0);
										unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 15);
									}
								}
							}
							else if (unk_0xC450B06E5AAA0985(Global_100733.f_263[iLocal_61]))
							{
								if (BitTest(uLocal_582, 15))
								{
									unk_0xBC64B805EE071A37(Global_100733.f_263[iLocal_61], 1);
									unk_0x8744D2E3FC95740E(&uLocal_582, 15);
								}
							}
						}
					}
					else
					{
						if (BitTest(uLocal_582, 0))
						{
							unk_0x8744D2E3FC95740E(&uLocal_582, false);
						}
						if (!BitTest(uLocal_582, 13))
						{
							func_69("GET_GUN", 0);
							func_68(1);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 13);
						}
					}
				}
				else if (!BitTest(uLocal_582, 14))
				{
					unk_0x428C32CC68809A35(1);
					if (BitTest(uLocal_582, 0))
					{
						unk_0x8744D2E3FC95740E(&uLocal_582, false);
					}
					if (BitTest(uLocal_582, 13))
					{
						unk_0x8744D2E3FC95740E(&uLocal_582, 13);
					}
					if (unk_0xC450B06E5AAA0985(Global_100733.f_263[iLocal_61]))
					{
						unk_0xBC64B805EE071A37(Global_100733.f_263[iLocal_61], 0);
						unk_0x861AC9C2D48CEA7F(Global_100733.f_263[iLocal_61], 0);
						func_412(iLocal_61, 0);
					}
					func_69("LOSE_COP", 0);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 14);
				}
			}
		}
	}
	else if (func_199(&uLocal_239, 300000, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 18);
	}
	if (!BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 0))
	{
		if (((unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_pistol"), 0) || unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_combatpistol"), 0)) || unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_appistol"), 0)) || unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_microsmg"), 0))
		{
			if (func_66())
			{
				func_61(1);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), false);
				if (func_25(iLocal_61))
				{
				}
			}
		}
		else
		{
			func_44(400);
		}
	}
	else if (!BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 1))
	{
		if (!func_42())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), true);
			func_35();
			func_34("FM_IHELP_AMMU", -1);
			if (!BitTest(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 31);
			}
			func_198(&uLocal_237);
			if (bLocal_588)
			{
				if (bLocal_589)
				{
					Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 3;
				}
				else
				{
					Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_33())
	{
		iVar0 = Global_2848282[iParam0 /*3*/][func_28(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
		}
	}
}

int func_33()
{
	return 1;
	return 0;
}

void func_34(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_35()
{
	if (!func_41())
	{
		return;
	}
	if (!unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == Global_1574757.f_9)
	{
		return;
	}
	func_36();
}

void func_36()
{
	func_38();
	func_37(0);
}

void func_37(bool bParam0)
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

void func_38()
{
	if (!func_40())
	{
	}
	if (func_41())
	{
		unk_0x7C59282918D59E1B(&(Global_1574757.f_12));
		func_39();
		unk_0xD4C961FBE468D19D();
	}
}

void func_39()
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

int func_40()
{
	if (!func_41())
	{
		return 0;
	}
	unk_0x32A590914F10401C(&(Global_1574757.f_12));
	func_39();
	return unk_0x96DEE7666C9409E5();
}

int func_41()
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_42()
{
	return ((((((((((func_43(28) || func_43(29)) || func_43(30)) || func_43(31)) || func_43(32)) || func_43(33)) || func_43(34)) || func_43(35)) || func_43(36)) || func_43(37)) || func_43(38));
}

int func_43(int iParam0)
{
	return func_26(iParam0, 6, 1);
}

void func_44(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar0 = func_58(unk_0x259BE71D8A81D4FA());
		if (iVar0 < iParam0)
		{
			if (func_57())
			{
				func_45(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				unk_0xC972841F26BA2800((iParam0 - iVar0));
			}
		}
	}
}

void func_45(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_57())
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
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_46(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_46(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_29()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_53(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_52(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_47(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_51(iParam0))
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
		func_49(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_49(var uParam0)
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
	func_50(&(uParam0->f_14));
	func_50(&(uParam0->f_14.f_13));
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

void func_50(var uParam0)
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

int func_51(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_52(int iParam0, var uParam1)
{
	Global_2697015 = uParam1;
	Global_2697014 = iParam0;
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_57())
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
				func_54(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_54(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_56(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_55();
		unk_0x01F0B819E78A18A1(1, &Var0, 36, iVar1);
	}
}

void func_55()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_56(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_57()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

var func_58(int iParam0)
{
	var uVar0;
	
	uVar0 = func_59(iParam0);
	return uVar0;
}

int func_59(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return unk_0x00BDC89742B13CD2(-1);
		}
		else if (func_60(iParam0))
		{
			return Global_1853910[iParam0 /*862*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_60(int iParam0)
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

void func_61(bool bParam0)
{
	func_62(28, bParam0);
	func_62(29, bParam0);
	func_62(30, bParam0);
	func_62(31, bParam0);
	func_62(32, bParam0);
	func_62(33, bParam0);
	func_62(34, bParam0);
	func_62(35, bParam0);
	func_62(36, bParam0);
	func_62(37, bParam0);
	func_62(38, bParam0);
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_65(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_63(iParam0, 14, 1);
	}
}

void func_63(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x8744D2E3FC95740E(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_30(iParam0), -1, 0);
			unk_0x8744D2E3FC95740E(&uVar0, bParam1);
			func_64(func_30(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

void func_65(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_100733.f_1407[iParam0]), bParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_19() == 0)
		{
			uVar0 = func_27(func_30(iParam0), -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam1);
			func_64(func_30(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_668[iParam0]), bParam1);
	}
}

bool func_66()
{
	return ((((((((((func_67(28) || func_67(29)) || func_67(30)) || func_67(31)) || func_67(32)) || func_67(33)) || func_67(34)) || func_67(35)) || func_67(36)) || func_67(37)) || func_67(38));
}

int func_67(int iParam0)
{
	return func_26(iParam0, 3, 0);
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1926510, 19))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1926510, 19);
		}
	}
	else if (BitTest(Global_1926510, 19))
	{
		unk_0x8744D2E3FC95740E(&Global_1926510, 19);
	}
}

void func_69(char* sParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam0) > 23)
	{
		return;
	}
	if (func_73(sParam0))
	{
		return;
	}
	func_36();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574757.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_72();
	func_71(bParam1);
	func_70();
}

void func_70()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1574757.f_59), true);
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1574757.f_59), false);
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_1574757.f_59), false);
}

void func_72()
{
	Global_1574757.f_10 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 86400000);
	Global_1574757.f_11 = unk_0x7E3F74F641EE6B27();
}

bool func_73(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_74(sParam0);
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_12));
}

bool func_74(char* sParam0)
{
	if (!func_41())
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return 0;
	}
	return unk_0x70E57E9927B6BA58(sParam0) == unk_0x70E57E9927B6BA58(&(Global_1574757.f_16));
}

void func_75()
{
	struct<13> Var0;
	bool bVar1;
	bool bVar2;
	
	Var0 = { func_78(unk_0x259BE71D8A81D4FA()) };
	bVar1 = unk_0xFE087BC8EB584AA2();
	bVar2 = func_77(&Var0);
	if (!bVar1 && !bVar2)
	{
		func_76("HLP_TAXI3", 9000);
	}
	else if (bVar1 && !bVar2)
	{
		func_76("HLP_SOC2", 9000);
	}
	else if (bVar1 && bVar2)
	{
		func_76("HLP_SOC1", 9000);
	}
}

void func_76(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 0, iParam1);
}

int func_77(var uParam0)
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

struct<13> func_78(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

bool func_79()
{
	return func_80();
}

bool func_80()
{
	return Global_1649046.f_40 == 3;
}

int func_81()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
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

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8939 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		func_90();
		if (iParam1 == 4)
		{
			func_89(iParam0, 0, 1);
			func_89(iParam0, 1, 1);
			func_89(iParam0, 2, 1);
			func_88(iParam0, 0, 1);
			func_88(iParam0, 1, 1);
			func_88(iParam0, 2, 1);
		}
		else
		{
			if (func_87(iParam0, iParam1) == 1 && func_86(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_89(iParam0, iVar0, 1);
			func_88(iParam0, iVar0, 1);
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
						Global_8912[iParam1 /*4*/] = { func_85(iParam0) };
						Global_8929[iParam1] = 1;
						Global_8934[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { func_85(iParam0) };
						Global_8863[1 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { func_85(iParam0) };
					Global_8863[1 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { func_85(iParam0) };
				Global_8863[1 /*6*/].f_5 = iParam1;
				func_84();
			}
		}
	}
}

void func_84()
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

struct<4> func_85(int iParam0)
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

void func_88(int iParam0, int iParam1, int iParam2)
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

void func_89(int iParam0, int iParam1, int iParam2)
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

void func_90()
{
	if (func_97(14))
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
		Global_20383 = func_91();
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

var func_91()
{
	func_92();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_92()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_95(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_94(unk_0x4A8C381C258A124D());
			if (func_93(iVar0) && (!func_97(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_93(Global_113648.f_2365.f_539.f_4321))
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

bool func_93(int iParam0)
{
	return iParam0 < 3;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_95(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_97(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 17);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8254, 17);
	}
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_193())
	{
		return 0;
	}
	if (func_192())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_100(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_100(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD6F9DEE4765092A9(sParam2))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xD6F9DEE4765092A9(sParam3))
	{
		return 0;
	}
	if (unk_0x31A0D8A679F7D5A7(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
	iVar1 = func_191(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		iVar2 = unk_0x70E57E9927B6BA58(sParam7);
	}
	if (func_190(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_186(uParam6))
	{
		return 0;
	}
	if (func_183(iVar0, iVar1, iVar2))
	{
		if (func_182())
		{
			return 0;
		}
		func_181();
		return func_107(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_106(iParam4))
	{
		return 0;
	}
	func_101(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1649046.f_40.f_1 = iParam0;
	Global_1649046.f_40.f_2 = iParam1;
	Global_1649046.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649046.f_40.f_4), sParam3, 16);
	Global_1649046.f_40.f_8 = iParam4;
	Global_1649046.f_40.f_9 = iParam5;
	Global_1649046.f_40.f_14 = uParam6;
	func_102(iParam4);
	func_181();
	Global_1649046.f_40.f_13 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 7000);
}

void func_102(int iParam0)
{
	if (func_105(iParam0))
	{
		func_104();
		return;
	}
	func_103();
}

void func_103()
{
	Global_1649046.f_40.f_10 = 0;
}

void func_104()
{
	Global_1649046.f_40.f_10 = 1;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_106(int iParam0)
{
	return iParam0 > Global_1649046.f_40.f_8;
}

int func_107(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_180();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_177(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_174(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_177(uParam0, sParam3, sParam4);
		}
		return func_156(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_155(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_144(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_143(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_108(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_108(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_142();
	bVar0 = true;
	if (func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

void func_109(int iParam0)
{
	Global_1649046.f_40.f_11 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam0);
	Global_1649046.f_40.f_12 = 1;
}

int func_110(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_141();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_135(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1649046.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_134(sParam5, bParam6, &iVar3);
	uVar5 = func_132(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		iVar6++;
		if (!unk_0xD6F9DEE4765092A9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x1B79E937E91F40C3(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xD6F9DEE4765092A9(sVar2))
	{
		bVar12 = func_131(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_114(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_113();
	}
	func_142();
	func_112();
	func_111();
	return 1;
}

void func_111()
{
	Global_1649046.f_57 = 0;
	Global_1649046.f_57.f_1 = 0;
}

void func_112()
{
	Global_1649046.f_40 = 3;
}

void func_113()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 8);
}

int func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_115(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8960 = iParam6;
			unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, false);
		}
		return 1;
	}
	return 0;
}

int func_115(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20383 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20383 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20383 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		if (Global_4542282 == 1)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_130() == 0)
	{
		func_128();
		return 0;
	}
	func_127(Global_4542281);
	StringCopy(&(Global_4541032[Global_4542281 /*104*/]), sParam1, 64);
	Global_4541032[Global_4542281 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541032[Global_4542281 /*104*/].f_24 = iParam2;
	}
	Global_4541032[Global_4542281 /*104*/].f_25 = iParam7;
	Global_4541032[Global_4542281 /*104*/].f_26 = uParam8;
	Global_4541032[Global_4542281 /*104*/].f_29 = uParam9;
	Global_4541032[Global_4542281 /*104*/].f_30 = uParam12;
	Global_4541032[Global_4542281 /*104*/].f_31 = uParam11;
	Global_4541032[Global_4542281 /*104*/].f_28 = 0;
	Global_4541032[Global_4542281 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_33), sParam4, 64);
	Global_4541032[Global_4542281 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_50), sParam5, 64);
	Global_4541032[Global_4542281 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541032[Global_4542281 /*104*/].f_83), sParam15, 64);
	func_90();
	switch (iParam16)
	{
		case 3:
			Global_4541032[Global_4542281 /*104*/].f_99[Global_20383] = 1;
			break;
		
		case 0:
			Global_4541032[Global_4542281 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541032[Global_4542281 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541032[Global_4542281 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20383)
		{
			case 0:
				func_126(0);
				break;
			
			case 1:
				func_126(1);
				break;
			
			case 2:
				func_126(2);
				break;
			
			case 3:
				func_126(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4542282 = 1;
				break;
			
			case 0:
				Global_4542282 = 1;
				break;
			
			case 2:
				Global_4542282 = 1;
				break;
			
			case 1:
				Global_4542282 = 1;
				break;
			}
	}
	Global_22794[Global_4542281] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_20326)
		{
			StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20383)
			{
				case 0:
					StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_125())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_124(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			func_124(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_116(iParam0, sParam1, bVar1, func_120(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_116(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_117())
	{
		return;
	}
	unk_0x7114D68882DD5DFB(iParam0, -1180597171, unk_0x70E57E9927B6BA58(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

int func_117()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_141())
	{
		return 0;
	}
	if (func_118(unk_0x259BE71D8A81D4FA()))
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

bool func_118(int iParam0)
{
	return func_119(iParam0, 20);
}

var func_119(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

var func_120(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

void func_121(int iParam0)
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
	
	Global_22793 = 0;
	Global_8858 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8822[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_97(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar2 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20588 = 0;
								}
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_123(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2694521)
							{
								if (iVar1 == 14)
								{
									func_122(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8260[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8260[iVar1 /*15*/].f_4)
					{
						if (Global_8822[iVar0] == 0)
						{
							Global_8786[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113648.f_14143[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113648.f_14143[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113648.f_14143[iVar3 /*104*/].f_99[Global_20383] == 1)
											{
												Global_22793++;
											}
										}
									}
									iVar3++;
								}
								func_122(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78558)
								{
									iVar4 = 0;
									iVar4 = Global_4541031;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541032[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541032[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541032[iVar5 /*104*/].f_99[Global_20383] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_122(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20383)
									{
										case 0:
											iVar6 = Global_44457;
											break;
										
										case 1:
											iVar6 = Global_44458;
											break;
										
										case 2:
											iVar6 = Global_44459;
											break;
										
										default:
											break;
									}
									func_122(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_122(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_123(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(Global_8259);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8254, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_123(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar7);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8254, 3))
								{
									iVar8 = 42;
									Global_20588 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20588 = 0;
								}
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_123(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar8);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 8)
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_123(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if ((iVar1 == 23 && unk_0x1B79E937E91F40C3(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8254, 6))
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_123(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_122(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_122(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8822[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_122(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam6));
	}
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_123(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_123(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_123(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_123(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_123(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_123(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_124(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

bool func_125()
{
	return Global_1575060;
}

void func_126(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113648.f_14053[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_127(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_4541032[iParam0 /*104*/].f_18 = uVar0;
	Global_4541032[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4541032[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4541032[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4541032[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541032[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4542281 = 11;
	Global_4541032[Global_4542281 /*104*/].f_18 = -1;
	Global_4541032[Global_4542281 /*104*/].f_18.f_1 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_2 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_3 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_129(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
		{
			Global_4542281 = iVar2;
		}
		iVar2++;
	}
	Global_4541032[Global_4542281 /*104*/].f_24 = 1;
}

int func_129(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
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

int func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541032[iVar2 /*104*/].f_24 == 0)
		{
			Global_4542281 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4542281 = 11;
	Global_4541032[Global_4542281 /*104*/].f_18 = -1;
	Global_4541032[Global_4542281 /*104*/].f_18.f_1 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_2 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_3 = 0;
	Global_4541032[Global_4542281 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541032[iVar2 /*104*/].f_24 == 0 || Global_4541032[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_129(Global_4541032[iVar2 /*104*/].f_18, Global_4541032[Global_4542281 /*104*/].f_18))
			{
				Global_4542281 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4542281 == 11)
	{
		return 0;
	}
	Global_4541032[Global_4542281 /*104*/].f_99[0] = 0;
	Global_4541032[Global_4542281 /*104*/].f_99[1] = 0;
	Global_4541032[Global_4542281 /*104*/].f_99[2] = 0;
	return 1;
}

int func_131(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_115(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8960 = iParam10;
			unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, false);
		}
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_133(2, iParam1);
	return iParam0;
}

void func_133(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_134(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xD6F9DEE4765092A9(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_133(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFACCDE46E24AD056(sParam0);
}

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = func_138(iParam0);
	if (iVar0 == -1)
	{
		func_136(iParam0, 1);
		return 0;
	}
	Global_1666668[iVar0 /*5*/].f_4 = 1;
	return Global_1666668[iVar0 /*5*/].f_2;
}

void func_136(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_138(iParam0) != -1)
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
	if (func_137(iParam0))
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

int func_137(int iParam0)
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

int func_138(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
			func_139(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_139(int iParam0)
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
	func_140(&(Global_1666668[iVar2 /*5*/]));
	Global_1666829 = (Global_1666829 - 1);
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_141();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

int func_141()
{
	return -1;
}

void func_142()
{
	Global_1649046.f_40.f_9 = 4;
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_142();
	bVar0 = false;
	return func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_144(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_145(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_141();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xBD6CA019F46AB947(iVar0);
		iVar1 = func_135(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1649046.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22786 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_134(sParam5, bParam6, &iVar3);
	uVar5 = func_132(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		iVar6++;
		if (!unk_0xD6F9DEE4765092A9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x1B79E937E91F40C3(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xD6F9DEE4765092A9(sVar2))
	{
		bVar12 = func_154(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_147(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_113();
	}
	func_146();
	func_112();
	func_111();
	return 1;
}

void func_146()
{
	Global_1649046.f_40.f_9 = 3;
}

int func_147(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x8744D2E3FC95740E(&Global_8253, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_148(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8960 = iParam6;
			Global_8863[3 /*6*/] = { func_85(iParam0) };
			Global_8940 = iParam0;
			unk_0x0B0C9A0F9AAEB7F0(&Global_8253, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

int func_148(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x1B79E937E91F40C3(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20383 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20383 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20383 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		if (Global_113648.f_14053[Global_20383 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x486FF5D06E9659F1(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_153() == 0)
	{
		func_151();
		return 0;
	}
	func_150(Global_22792);
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/]), sParam1, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113648.f_14143[Global_22792 /*104*/].f_24 = iParam2;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_25 = iParam7;
	Global_113648.f_14143[Global_22792 /*104*/].f_26 = uParam8;
	Global_113648.f_14143[Global_22792 /*104*/].f_29 = uParam9;
	Global_113648.f_14143[Global_22792 /*104*/].f_30 = uParam12;
	Global_113648.f_14143[Global_22792 /*104*/].f_31 = uParam11;
	Global_113648.f_14143[Global_22792 /*104*/].f_28 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
	Global_113648.f_14143[Global_22792 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8253, 10))
	{
		Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 1;
		Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 1;
		Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 1;
		Global_8959 = 4;
		func_126(0);
		func_126(2);
		func_126(1);
	}
	else
	{
		func_90();
		switch (iParam16)
		{
			case 3:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383] = 1;
				break;
			
			case 0:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20383)
			{
				case 0:
					func_126(0);
					Global_8959 = 0;
					break;
				
				case 1:
					func_126(1);
					Global_8959 = 1;
					break;
				
				case 2:
					func_126(2);
					Global_8959 = 2;
					break;
				
				case 3:
					func_126(3);
					Global_8959 = 3;
					break;
				
				default:
					Global_8959 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8253, 10))
		{
			Global_113648.f_14053[0 /*20*/].f_17 = 1;
			Global_113648.f_14053[1 /*20*/].f_17 = 1;
			Global_113648.f_14053[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113648.f_14053[Global_20383 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113648.f_14053[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113648.f_14053[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113648.f_14053[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22794[Global_22792] = 0;
	if (bParam10)
	{
		func_90();
		if (Global_20326)
		{
			StringCopy(&Global_20372, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20383)
			{
				case 0:
					StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_125())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "Text_Arrive_Tone", &Global_20372, 1);
			}
		}
	}
	if (!Global_20585)
	{
		if (Global_20383.f_1 == 6)
		{
			func_124(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			func_124(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1977527 != -1 && iParam0 == Global_1977527)
	{
		bVar1 = true;
	}
	func_149(iParam0, sParam1, bVar1, func_120(unk_0x259BE71D8A81D4FA()));
	return 1;
}

void func_149(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (!func_117())
	{
		return;
	}
	unk_0x7114D68882DD5DFB(iParam0, 1654525105, unk_0x70E57E9927B6BA58(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
	if (bParam2)
	{
		Global_1977527 = -1;
	}
}

void func_150(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_113648.f_14143[iParam0 /*104*/].f_18 = uVar0;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113648.f_14143[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_151()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22792 = 34;
	Global_113648.f_14143[Global_22792 /*104*/].f_18 = -1;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_152(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
		{
			Global_22792 = iVar2;
		}
		iVar2++;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_24 = 1;
}

int func_152(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
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

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113648.f_14143[iVar2 /*104*/].f_24 == 0)
		{
			Global_22792 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22792 = 34;
	Global_113648.f_14143[Global_22792 /*104*/].f_18 = -1;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3 = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113648.f_14143[iVar2 /*104*/].f_24 == 0 || Global_113648.f_14143[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_152(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18))
			{
				Global_22792 = iVar2;
			}
		}
		if (Global_113648.f_14143[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22792 == 34)
	{
		return 0;
	}
	Global_113648.f_14143[Global_22792 /*104*/].f_99[0] = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_99[1] = 0;
	Global_113648.f_14143[Global_22792 /*104*/].f_99[2] = 0;
	return 1;
}

int func_154(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x8744D2E3FC95740E(&Global_8253, 10);
	iVar0 = 3;
	if (func_148(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8960 = iParam10;
			Global_8863[3 /*6*/] = { func_85(iParam0) };
			Global_8940 = iParam0;
			StringCopy(&Global_8941, sParam5, 64);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8253, true);
			unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 7);
		}
		return 1;
	}
	return 0;
}

int func_155(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	func_146();
	bVar0 = true;
	if (func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(120000);
		return 1;
	}
	return 0;
}

int func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_173(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_162(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_161(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_160(1);
		}
		func_159();
		func_112();
		func_158();
		func_157();
		return 1;
	}
	return 0;
}

void func_157()
{
	Global_2803164 = 0;
}

void func_158()
{
	Global_1649046.f_57 = 1;
	Global_1649046.f_57.f_1 = 0;
}

void func_159()
{
	Global_1649046.f_40.f_9 = 1;
}

void func_160(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8255, false);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8255, false);
	}
}

void func_161(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 20);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 20);
	}
}

int func_162(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_172(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21773 = 0;
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
	return func_163(sParam3, iParam4, bParam7);
}

int func_163(char* sParam0, int iParam1, bool bParam2)
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
					func_171();
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
		if (func_170(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_169();
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
				func_90();
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
				if (func_168())
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
			if (func_167())
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
			func_166();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_165();
		func_164();
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
		func_171();
	}
	return 0;
}

void func_164()
{
	if (!func_117())
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

void func_165()
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

void func_166()
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

int func_167()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_168()
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

void func_169()
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

bool func_170(int iParam0, int iParam1)
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

void func_171()
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

void func_172(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_173(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_172(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_163(sParam3, iParam4, bParam7);
}

int func_174(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
	}
	if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (func_176(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_175();
		func_159();
		func_112();
		func_158();
		func_157();
		return 1;
	}
	return 0;
}

void func_175()
{
	Global_22743 = 0;
}

bool func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_172(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 1;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 1;
	Global_21779 = 0;
	StringCopy(&Global_21873, sParam5, 24);
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam8);
}

int func_177(var uParam0, char* sParam1, char* sParam2)
{
	if (func_179(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_178();
		func_112();
		func_158();
		return 1;
	}
	return 0;
}

void func_178()
{
	Global_1649046.f_40.f_9 = 2;
}

bool func_179(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_172(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_163(sParam2, iParam3, 0);
}

void func_180()
{
	Global_1649046.f_55 = Global_1649046.f_40.f_1;
	Global_1649046.f_55.f_1 = Global_1649046.f_40.f_10;
}

void func_181()
{
	Global_1649046.f_40 = 1;
}

bool func_182()
{
	return Global_1649046.f_40 == 1;
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	if (!func_184(iParam0))
	{
		return 0;
	}
	if (Global_1649046.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1649046.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_184(int iParam0)
{
	if (!func_185())
	{
		return 0;
	}
	if (!Global_1649046.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_185()
{
	if (Global_1649046.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_186(var uParam0)
{
	if (func_189())
	{
		return 0;
	}
	if (func_80())
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935176 || func_188())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_187())
		{
			return 0;
		}
	}
	return 1;
}

bool func_187()
{
	return unk_0xC9FA0059132D5731(unk_0x7E3F74F641EE6B27(), Global_1665292);
}

int func_188()
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_189()
{
	return func_167();
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (!func_80())
	{
		return 0;
	}
	return func_183(iParam0, iParam1, iParam2);
}

int func_191(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x70E57E9927B6BA58(&cVar0);
}

bool func_192()
{
	return Global_2800025.f_1;
}

int func_193()
{
	if (Global_1649234.f_2)
	{
		return 1;
	}
	return func_194();
}

bool func_194()
{
	return func_189();
}

void func_195(int iParam0)
{
	Global_2803655.f_1072 = iParam0;
}

int func_196()
{
	if (func_197("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_197("HLP_SOC1"))
	{
		return 1;
	}
	if (func_197("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_197(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_198(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_199(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_200(var uParam0)
{
	return uParam0->f_1;
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 8))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 8);
		}
	}
	else if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 8))
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 8);
	}
}

bool func_202()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 8);
}

void func_203()
{
	unk_0x10B228D2FDB7AF16(800);
	if (!bLocal_590 || bLocal_591)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
		}
	}
	if (!bLocal_591)
	{
		Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 0;
	}
	else
	{
		Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = 3;
	}
}

void func_204()
{
	if (func_210(&Local_62, &(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4)))
	{
		Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_2 = -1;
	}
	func_205(&Local_62);
}

void func_205(var uParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4D9174D8796EA622();
	switch (iLocal_586)
	{
		case 0:
			if (BitTest(*uParam0, 18))
			{
				if (!func_200(&uLocal_592))
				{
					func_22(&uLocal_592, 0, 0);
				}
				if (!bVar0)
				{
					if (!unk_0x4C705AAF75363287())
					{
						func_76("HLP_XP1", 9000);
						func_198(&uLocal_592);
						func_22(&uLocal_592, 0, 0);
						iLocal_586++;
					}
				}
				else if (func_199(&uLocal_592, 5000, 0))
				{
					iLocal_586++;
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!unk_0x4C705AAF75363287())
				{
					func_76("HLP_XP2", 9000);
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!unk_0x4C705AAF75363287())
				{
					func_76("HLP_RNK1", 9000);
					func_209(1);
					Global_2793046.f_1948 = 1;
					func_208(1, 0, -1);
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!unk_0x4C705AAF75363287())
				{
					func_195(0);
					if (unk_0x1226C55CA7D2269A() || func_207())
					{
						func_76("HLP_CASHXBX", 9000);
					}
					else if (unk_0x0BA1A956D36B210F() || func_206())
					{
						func_76("HLP_CASHPSN", 9000);
					}
					else
					{
						func_76("HLP_CASHGEN", 9000);
					}
					func_198(&uLocal_592);
					func_22(&uLocal_592, 0, 0);
					iLocal_586 = 99;
				}
			}
			else if (func_199(&uLocal_592, 5000, 0))
			{
				iLocal_586 = 99;
				func_198(&uLocal_592);
				func_22(&uLocal_592, 0, 0);
			}
			break;
		
		case 99:
			if (!BitTest(uLocal_583, 2))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_583, 2);
			}
			break;
	}
}

var func_206()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_207()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_208(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1653913.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1653913.f_1046), bParam0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_1653913.f_1046), bParam0);
			}
			break;
	}
}

void func_209(int iParam0)
{
	Global_2793046.f_4628 = iParam0;
}

int func_210(var uParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	
	if (!BitTest(*uParam0, 13))
	{
		if (unk_0x78411E34CF90EA8C(unk_0xFCB6553111578B2F()))
		{
			Var3 = { unk_0xA452B06E281A9014(unk_0xFCB6553111578B2F()) };
			if ((Var3.f_0 != 0f || Var3.f_1 != 0f) || Var3.f_2 != 0f)
			{
				unk_0x2D8D239B3F1D13F9(Var3, 0f, 0f, 0f);
				if (!BitTest(*uParam0, 14))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 14);
				}
			}
		}
	}
	else if (BitTest(*uParam0, 14))
	{
		unk_0xE3F88173F42C071B();
		unk_0x8744D2E3FC95740E(uParam0, 14);
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 337, 1);
	}
	func_389(uParam0);
	unk_0xF8A2800C0B863DB1(1f);
	func_383(uParam0);
	func_382(unk_0x259BE71D8A81D4FA());
	if (!BitTest(*uParam0, 31))
	{
		if (uParam0->f_6 > 0)
		{
			uParam0->f_32 = unk_0x0556019E7EE8EC9A(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (uParam0->f_32 != 0)
			{
				unk_0x74C1590CC91B3930(uParam0->f_32);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 31);
			}
		}
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		switch (uParam0->f_6)
		{
			case 0:
				uParam0->f_292 = 1;
				uParam0->f_293 = 0;
				uParam0->f_295 = 0;
				uParam0->f_294 = 0;
				if (unk_0x486FF5D06E9659F1(joaat("fm_intro")) > 0)
				{
					uParam0->f_295 = 1;
					uParam0->f_294 = 1;
				}
				else if (unk_0x486FF5D06E9659F1(func_381()) > 0)
				{
					uParam0->f_295 = 1;
				}
				if (!Global_2793046.f_1947)
				{
					Global_2793046.f_1947 = 1;
					unk_0x4314716E4B544721(0);
				}
				if (!func_202())
				{
					func_201(1);
				}
				if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
				{
					unk_0x8F72AF14CE5AACE4(800);
				}
				if (!func_200(&(uParam0->f_15)))
				{
					func_22(&(uParam0->f_15), 0, 0);
				}
				unk_0xD314260005F064BF(&Global_1935677);
				Global_1935678 = 0;
				Global_1935680 = 0;
				Global_1935679 = 0;
				Global_1935681 = 0;
				uParam0->f_19 = { 0f, 0f, 0f };
				if (unk_0x15CCE8886267624F())
				{
					*uParam0 = 0;
					uParam0->f_4 = 0;
					uParam0->f_5 = 0;
					func_370(0, 0, 0, 1, 1, 1, 0);
					unk_0x61780C0351CEFAD1(1, 0);
					func_415(1);
					unk_0x01C8E9BB989C1EEE(1);
					unk_0x88791F880F624022("EXTRASUNNY");
					unk_0xAFD3BC0F6EBB5474(19, 0, 0);
					unk_0x0A83667A5D36A4FF(1);
					func_369(0);
					unk_0xD82473EFEF7FC622(0);
					func_361(1, 0);
					func_332(1, 1);
					if (unk_0x486FF5D06E9659F1(joaat("fm_intro")) < 1 || !func_331())
					{
						if (uParam0->f_292)
						{
							if (func_330() == 0)
							{
								unk_0xADF8AA2F22A19163("GTAO_INTRO_MALE");
								unk_0x6BD0E2C3AF4FF666(1);
							}
						}
					}
					func_323(14, 0);
					uParam0->f_6 = 1;
					*uParam0 = 0;
					unk_0x8744D2E3FC95740E(uParam0, false);
					unk_0x8744D2E3FC95740E(uParam0, true);
					unk_0x8744D2E3FC95740E(uParam0, 2);
					unk_0x8744D2E3FC95740E(uParam0, 9);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 7);
					uParam0->f_122 = unk_0xA7B0B03284E7503C(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0, 1, 1, 1);
				}
				break;
			
			case 1:
				unk_0xEC9DAA34BBB4658C(joaat("frogger"));
				if (unk_0x6252BC0DD8A320DB(joaat("frogger")))
				{
					if (!uParam0->f_292 || unk_0xEBCB9138B2CABF20())
					{
						if (func_320())
						{
							unk_0x8F8802BEE0727FD5(0);
							func_315(1, 1, 0);
							unk_0xF5AB6155B7363507(0);
							unk_0x428C32CC68809A35(1);
							if (!func_194())
							{
								func_314();
							}
							func_209(0);
							func_313();
							unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Global_1574725, 1, 0, 0, 1);
							unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 1);
							unk_0x44C48AC14D3C09ED(unk_0x4A8C381C258A124D(), false, 0);
							unk_0xDAE61414743C8D1D(0);
							if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
							{
								unk_0x5D3946F818C6B331(unk_0x413A91F497E3428F(), 0f);
							}
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
							uParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!unk_0x3555462DB47B7AB1())
				{
					if (!BitTest(*uParam0, 4))
					{
						if (func_312() == 65 || func_312() == 66)
						{
							unk_0xE3F88173F42C071B();
							unk_0xAC48F8E2BF2BEBF7(754.2219f, 1226.831f, 356.5081f, func_311(-14.367f, 0f, 157.3524f), 100f, 0);
							func_198(&(uParam0->f_17));
							func_22(&(uParam0->f_17), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 4);
						}
					}
					else if (unk_0x16088CC55E7F218A("FM_INTRO_START") && (unk_0x9E2D35FA908F57B4() || func_199(&(uParam0->f_17), 5000, 0)))
					{
						if (!BitTest(*uParam0, 24))
						{
							if (BitTest(*uParam0, 7))
							{
								unk_0x86A2BC11844DEEB3("FM_INTRO_START");
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 24);
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 21);
							}
						}
						else if (unk_0x1304366BC7BE185B() > 0)
						{
							unk_0x6981C3213B841071();
							unk_0xE3349610A15FA0D0(6);
							if (!unk_0x78411E34CF90EA8C(uParam0->f_7))
							{
								uParam0->f_7 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
								unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
							}
							unk_0xA3774254665BAA82(uParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							unk_0xA3774254665BAA82(uParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							unk_0x2A09425009DAD0F5(uParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 1, 0);
							func_310(uParam0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 11);
							if (uParam0->f_292)
							{
								unk_0x216049890A2D1EC6(9, 9, 9, 9);
								unk_0x89EAF23AE72CD8A8();
							}
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
							if (unk_0x15CCE8886267624F())
							{
								unk_0x10B228D2FDB7AF16(800);
							}
							uParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_309(uParam0, 6);
				func_308(uParam0);
				if (func_307(uParam0, 6, 0))
				{
					unk_0x428C32CC68809A35(1);
					uParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!BitTest(*uParam0, 2))
				{
					unk_0x428C32CC68809A35(1);
					func_76("FMIC_INTRO2", -1);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 2);
				}
				unk_0xA3774254665BAA82(uParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				unk_0x216049890A2D1EC6(9, 13, 9, 13);
				uParam0->f_6 = 8;
				break;
			
			case 8:
				func_309(uParam0, 8);
				if (func_308(uParam0))
				{
					func_306(uParam0);
					if (func_307(uParam0, 8, 0))
					{
						uParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!BitTest(*uParam0, 10))
				{
					func_305();
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 10);
				}
				unk_0xA3774254665BAA82(uParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (unk_0xD9F5E1FEFD1329E4(uParam0->f_48, 0))
				{
					unk_0x937DE6A451B47D92(uParam0->f_48);
					unk_0x4285E11B28063EE0(uParam0->f_48, true, 0);
					unk_0xA9F7300B498DDED7(uParam0->f_48);
				}
				uParam0->f_6 = 10;
				break;
			
			case 10:
				if (unk_0xD9F5E1FEFD1329E4(uParam0->f_48, 0))
				{
					unk_0xA9F7300B498DDED7(uParam0->f_48);
				}
				func_309(uParam0, 10);
				if (func_304())
				{
					if (func_303(uParam0))
					{
						if (func_306(uParam0))
						{
							if (func_307(uParam0, 10, 0))
							{
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -2870.804f, 81.4979f, 13.1957f, 1, 0, 0, 1);
									unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
								}
								fVar0 = 5000f;
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[0], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[0], 100, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[0], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[1], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[1], 101, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[1], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[2], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[2], 102, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[2], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[3], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[3], 103, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[3], fVar0);
								}
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[4], 0))
								{
									unk_0x88556DA0593A0748(uParam0->f_92[4], 104, "FM_Intro_uber", 1);
									unk_0x8BCD7C11D27FB9A1(uParam0->f_92[4], fVar0);
								}
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
								unk_0x10B228D2FDB7AF16(800);
								uParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (BitTest(*uParam0, 15))
				{
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					func_302(uParam0);
					func_301(uParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					unk_0x584EE85BE0BFA70E(uParam0->f_7, 1);
					unk_0x9BC35A57CAC5458D(uParam0->f_7);
					unk_0x85E6A1E36B5E2E4D(uParam0->f_7, 0);
					unk_0xCAC4020CCF361AC8("MP_INTRO_RACE_SCENE");
					unk_0x216049890A2D1EC6(9, 12, 9, 12);
					func_299(uParam0, 14);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(*uParam0, 5))
				{
					func_76("FMIC_RACE1", -1);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 5);
				}
				func_309(uParam0, 14);
				if (func_307(uParam0, 14, 0))
				{
					func_298(uParam0, 23539f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_299(uParam0, 15);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_287(uParam0);
				}
				else if (func_286(uParam0) && func_280(uParam0))
				{
					func_278(uParam0);
				}
				func_309(uParam0, 15);
				if (func_307(uParam0, 15, 0))
				{
					func_298(uParam0, 28833.33f, 75f);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (BitTest(*uParam0, 15))
				{
					func_277(uParam0, "race_camera_3a", "mp_intro_seq@", uParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_299(uParam0, 16);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_287(uParam0);
				}
				else if (func_286(uParam0) && func_280(uParam0))
				{
					func_278(uParam0);
				}
				func_309(uParam0, 16);
				if (func_307(uParam0, 16, 0))
				{
					func_298(uParam0, 29700f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x16B754A9C2FD8E74(uParam0->f_9, 0.7f);
					func_299(uParam0, 17);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(*uParam0, 6))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 6);
					func_76("FMIC_RACE2", -1);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_287(uParam0);
				}
				else if (func_286(uParam0) && func_280(uParam0))
				{
					func_278(uParam0);
				}
				func_309(uParam0, 17);
				if (func_307(uParam0, 17, 0))
				{
					func_298(uParam0, 36450f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 18);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_287(uParam0);
				}
				else if (func_286(uParam0) && func_280(uParam0))
				{
					func_278(uParam0);
				}
				func_309(uParam0, 18);
				if (func_276() && func_307(uParam0, 18, 0))
				{
					func_298(uParam0, 43650f, 0);
					unk_0xAFD3BC0F6EBB5474(16, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (BitTest(*uParam0, 15))
				{
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[2]))
					{
						unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[2]));
					}
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[3]))
					{
						unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[3]));
					}
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[4]))
					{
						unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[4]));
					}
					func_301(uParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 19);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(uParam0->f_3, 0))
				{
					func_287(uParam0);
				}
				else
				{
					if (!BitTest(uParam0->f_3, 6))
					{
						if (uParam0->f_32 != 0)
						{
							if (unk_0xD0B0D1BD29678350(uParam0->f_32))
							{
								if (!unk_0x1C2F771CDC87A3A5(uParam0->f_91, 0))
								{
									unk_0x10D289FA72A25777(uParam0->f_91, uParam0->f_32, unk_0x70E57E9927B6BA58("GtaMloRoom001"));
								}
								unk_0xC897319696131088("SE_MP_GARAGE_L_RADIO", 0);
								iVar2 = 0;
								while (iVar2 < 8)
								{
									if (!unk_0x1C2F771CDC87A3A5(uParam0->f_49[iVar2], 0))
									{
										unk_0x10D289FA72A25777(uParam0->f_49[iVar2], uParam0->f_32, unk_0x70E57E9927B6BA58("GtaMloRoom001"));
									}
									iVar2++;
								}
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 6);
							}
						}
					}
					if (func_286(uParam0) && func_280(uParam0))
					{
						func_278(uParam0);
					}
				}
				func_275(uParam0);
				func_274(uParam0);
				func_309(uParam0, 19);
				if (func_307(uParam0, 19, 0) && BitTest(uParam0->f_3, 0))
				{
					if (BitTest(*uParam0, 12))
					{
						unk_0x8744D2E3FC95740E(uParam0, 12);
					}
					uParam0->f_6 = 22;
				}
				else if (func_307(uParam0, 19, -4968))
				{
					if (!BitTest(*uParam0, 12))
					{
						unk_0x428C32CC68809A35(1);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 12);
					}
				}
				else if (func_307(uParam0, 19, -5618))
				{
					if (!BitTest(*uParam0, 30))
					{
						unk_0xDCAFFD08A08087EB("MP_intro_logo", 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 30);
					}
				}
				break;
			
			case 22:
				func_275(uParam0);
				func_274(uParam0);
				if (BitTest(uParam0->f_3, 0))
				{
					if (!unk_0x78411E34CF90EA8C(uParam0->f_7))
					{
						uParam0->f_7 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
					unk_0xA3774254665BAA82(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					unk_0xA3774254665BAA82(uParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					unk_0x2A09425009DAD0F5(uParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0xA88C91AADCB02A8A(uParam0->f_32, unk_0x70E57E9927B6BA58("GtaMloRoom001"));
					unk_0xC897319696131088("SE_MP_GARAGE_L_RADIO", 0);
					unk_0xE3349610A15FA0D0(0);
					unk_0x7BB893EF8F683419(uParam0->f_10, 0f);
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_91))
					{
						unk_0xD8ED11B32DF72E0B(uParam0->f_91, 0, 0);
					}
					if (unk_0xBC2EE32DE886BD08("MP_INTRO_RACE_SCENE"))
					{
						unk_0xB43467C43086A6A1("MP_INTRO_RACE_SCENE");
					}
					unk_0x216049890A2D1EC6(9, 13, 9, 13);
					func_273(uParam0);
					func_272();
					func_76("FMIC_GAR", -1);
					uParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_275(uParam0);
				func_274(uParam0);
				func_309(uParam0, 23);
				if (func_286(uParam0) && func_280(uParam0))
				{
					func_278(uParam0);
				}
				if (func_307(uParam0, 23, 0))
				{
					unk_0xA3774254665BAA82(uParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					unk_0xA3774254665BAA82(uParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					unk_0x7BB893EF8F683419(uParam0->f_10, 0f);
					if (!unk_0x4FAFF4BCB7633475(uParam0->f_91))
					{
						unk_0xD8ED11B32DF72E0B(uParam0->f_91, 0, 0);
					}
					func_270(uParam0, 0);
					func_270(uParam0, 1);
					func_270(uParam0, 5);
					func_270(uParam0, 6);
					uParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_275(uParam0);
				func_274(uParam0);
				func_309(uParam0, 24);
				if (func_286(uParam0) && func_280(uParam0))
				{
					func_278(uParam0);
				}
				if (func_307(uParam0, 24, 0))
				{
					uParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_275(uParam0);
				func_274(uParam0);
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -1148.286f, -1639.737f, 5.106698f, 1, 0, 0, 1);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
				unk_0xA3774254665BAA82(uParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				unk_0xAFD3BC0F6EBB5474(18, 0, 0);
				func_270(uParam0, 2);
				func_270(uParam0, 7);
				unk_0x55098D9E9AD58806(func_269());
				if (unk_0xFC8BFE4B41177C22(uParam0->f_91))
				{
					unk_0x734A9F4537A31459(&(uParam0->f_91));
				}
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 29);
				uParam0->f_6 = 28;
				break;
			
			case 28:
				func_275(uParam0);
				func_274(uParam0);
				if (!BitTest(*uParam0, 8))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 8);
				}
				if (func_286(uParam0) && func_280(uParam0))
				{
					func_278(uParam0);
				}
				func_309(uParam0, 28);
				if ((unk_0x16088CC55E7F218A("FM_INTRO_DRIVE_START") && BitTest(uParam0->f_3, 3)) && func_307(uParam0, 28, 0))
				{
					uParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (uParam0->f_295)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						if (func_266(uParam0))
						{
							unk_0xF293D66D4452C854(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_Male_Character", 0, 0, 0);
							unk_0xF293D66D4452C854(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_266(uParam0))
				{
					unk_0xF293D66D4452C854(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					unk_0xF293D66D4452C854(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_33, 0))
				{
					unk_0x4285E11B28063EE0(uParam0->f_33, true, 0);
					unk_0xF293D66D4452C854(uParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_264(uParam0);
				unk_0xEE3C332799057645("CONTRAILS", 0);
				unk_0x216049890A2D1EC6(9, 9, 9, 9);
				func_76("FMIC_TENN", -1);
				unk_0xED65412F8B26ED99(4);
				func_256(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 30;
				break;
			
			case 30:
				if (unk_0xFD216000DC314A92())
				{
					if (uParam0->f_32 != 0)
					{
						unk_0xBBB6D0F765409642(uParam0->f_32);
					}
					func_255(uParam0);
					if (uParam0->f_293)
					{
						uParam0->f_26 = (unk_0x1DD05E817C89C737() - uParam0->f_13);
					}
					else
					{
						uParam0->f_26 = 52618;
						uParam0->f_27 = 52618;
					}
					uParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (uParam0->f_295)
				{
					if (func_266(uParam0))
					{
						if (unk_0xD8FC13DA1BA1DBA2("MP_Female_Character", 0))
						{
							if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
							{
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
									{
										unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (unk_0xD8FC13DA1BA1DBA2("MP_Male_Character", 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
								{
									unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("LAMAR", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								unk_0xD8ED11B32DF72E0B(uParam0->f_35, 0, 0);
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("MP_Lamar_Car", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						unk_0xC229299217554C78(uParam0->f_34, 1, 1, 0);
						unk_0xB2BD5837A8D3CEDA(uParam0->f_34, -1028.406f, -2732.782f, 19.5931f, 1, 0, 0, 1);
						unk_0x5C96CEA06531AB03(uParam0->f_34, -106.11f);
						func_254(uParam0, 3099.997f);
						unk_0xC3680B85B2D7086A(uParam0->f_34, 1);
					}
				}
				if (unk_0x2B60F53D06BC6971(0))
				{
					unk_0xAFD3BC0F6EBB5474(21, 0, 0);
					func_299(uParam0, 33);
					func_301(uParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (BitTest(*uParam0, 29))
				{
					if (unk_0xF1FEB57E542C41F1() || unk_0x15EF8F22A719BE5E() > 3254)
					{
						unk_0x8744D2E3FC95740E(uParam0, 29);
					}
				}
				if ((func_253(uParam0) && func_252(uParam0)) && !unk_0xFD216000DC314A92())
				{
					if (uParam0->f_293)
					{
						uParam0->f_28 = (unk_0x1DD05E817C89C737() - uParam0->f_13);
					}
					else
					{
						uParam0->f_29 = 134784;
						if (func_266(uParam0))
						{
							uParam0->f_28 = 134784;
						}
						else
						{
							uParam0->f_28 = 134784;
						}
					}
					unk_0x59ABC1F373CE1F5B();
					unk_0x9136D50973A71229();
					if (BitTest(*uParam0, 7))
					{
						unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_START");
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 21);
					}
					if (!unk_0xC9BA6D804FA4FAAA())
					{
						unk_0xB479965CBAA3EAE1(0);
					}
					if (!BitTest(*uParam1, 1))
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam1, true);
					}
					func_251(uParam0);
					func_250(uParam0);
					func_256(0, 1, 1, 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					unk_0x8744D2E3FC95740E(uParam0, 13);
					uParam0->f_6 = 33;
				}
				else
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x1DD05E817C89C737() - (uParam0->f_26 + unk_0x15EF8F22A719BE5E()));
					}
					if (!BitTest(*uParam0, 22))
					{
						if (unk_0x6BC87CF59151C630() == 1)
						{
							unk_0xAFD3BC0F6EBB5474(19, 59, 0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 22);
						}
					}
					if (func_248(uParam0))
					{
						if (unk_0x6BC87CF59151C630() == 2)
						{
							if (!BitTest(*uParam0, 18))
							{
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 18);
							}
							if (unk_0x15EF8F22A719BE5E() > 23146)
							{
								if (!BitTest(*uParam0, 27))
								{
									unk_0xDD19F75405614D3C("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x0B0C9A0F9AAEB7F0(uParam0, 27);
								}
								if (!BitTest(*uParam0, 28))
								{
									unk_0xDD19F75405614D3C("scr_mp_plane_landing_tyre_smoke", uParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1065353216, 0, 0, 0);
									unk_0x0B0C9A0F9AAEB7F0(uParam0, 28);
								}
							}
							unk_0xF5EF5C15CE92F236(4950f);
							if (BitTest(*uParam0, 22))
							{
								unk_0xAFD3BC0F6EBB5474(21, 0, 0);
								unk_0x8744D2E3FC95740E(uParam0, 22);
							}
							if (unk_0x15EF8F22A719BE5E() > 23254)
							{
								func_247(uParam0);
							}
						}
					}
					if (unk_0x6BC87CF59151C630() > 2)
					{
						func_250(uParam0);
						if (!BitTest(*uParam0, 22))
						{
							unk_0xAFD3BC0F6EBB5474(21, 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(uParam0, 22);
						}
						if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
						{
							unk_0x53152C1272227778(uParam0->f_34);
							unk_0xBA3C1A9AA7FD9616(uParam0->f_34, 2);
						}
					}
					uParam0->f_31 = unk_0x15EF8F22A719BE5E();
				}
				break;
			
			case 33:
				if (func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 1))
					{
						if (func_307(uParam0, 33, -5450))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), true);
							}
						}
					}
					if (!BitTest(uParam0->f_1, 2))
					{
						if (func_307(uParam0, 33, -5450))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 1))
					{
						if (func_307(uParam0, 33, -5450))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), true);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					unk_0xCAC4020CCF361AC8("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 33);
				func_245(uParam0);
				if (func_307(uParam0, 33, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 2))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 2);
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33.3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_266(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.129f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.129f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.145f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.145f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 34);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 34);
				func_245(uParam0);
				if (func_307(uParam0, 34, 0))
				{
					func_254(uParam0, 18966.65f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 3))
					{
						if (func_307(uParam0, 34, 1100))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 3);
							}
						}
					}
					if (!BitTest(uParam0->f_1, 4))
					{
						if (func_307(uParam0, 34, 1100))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 3))
					{
						if (func_307(uParam0, 34, 1000))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 3);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 35);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 35);
				func_245(uParam0);
				if (func_307(uParam0, 35, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 5))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 5);
						}
					}
				}
				if (!func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 4))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 4);
						}
					}
					if (!BitTest(uParam0->f_1, 5))
					{
						if (func_307(uParam0, 36, -3750))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 5);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33.3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_266(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.363f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.363f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.298f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.298f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 36);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 36);
				func_245(uParam0);
				if (func_307(uParam0, 36, 0))
				{
					func_254(uParam0, 42700.96f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 6))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 6);
						}
					}
				}
				if (!func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 6))
					{
						if (func_307(uParam0, 36, 1000))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 6);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 37);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 37);
				func_245(uParam0);
				if (func_307(uParam0, 37, 0))
				{
					func_254(uParam0, 51033.28f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 7))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 7);
						}
					}
					if (!BitTest(uParam0->f_1, 8))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 8);
						}
					}
					if (!BitTest(uParam0->f_1, 9))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 9);
						}
					}
				}
				if (!func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 7))
					{
						if (func_307(uParam0, 37, 2500))
						{
							if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 7);
							}
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 38);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 38);
				func_245(uParam0);
				if (func_307(uParam0, 38, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 8))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 8);
						}
					}
					if (!BitTest(uParam0->f_1, 9))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 9);
						}
					}
					if (!BitTest(uParam0->f_1, 31))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 31);
						}
					}
				}
				if (func_266(uParam0))
				{
					if (!BitTest(uParam0->f_1, 31))
					{
						if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 31);
						}
					}
				}
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33.3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_266(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.811f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.811f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.791f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.791f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 39);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 39);
				func_245(uParam0);
				if (func_307(uParam0, 39, 0))
				{
					func_254(uParam0, 85050f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!BitTest(uParam0->f_1, 31))
				{
					if (func_246(&(uParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_1), 31);
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					unk_0x216049890A2D1EC6(9, 12, 9, 12);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 40);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 40);
				if (func_245(uParam0) && func_307(uParam0, 40, 0))
				{
					func_254(uParam0, 116366.5f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (BitTest(*uParam0, 15))
				{
					unk_0xAFD3BC0F6EBB5474(0, 0, 0);
					func_301(uParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_299(uParam0, 41);
					unk_0xE6FCB8178DFE489F("CONTRAILS", 0);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 41);
				if (func_307(uParam0, 41, 0))
				{
					unk_0x4DA9E018E2F3A01C(1);
					func_254(uParam0, 127166.5f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (BitTest(*uParam0, 15))
				{
					func_244(uParam0);
					func_301(uParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 42);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 42);
				if (func_307(uParam0, 42, 0))
				{
					unk_0x4DA9E018E2F3A01C(0);
					func_254(uParam0, 170800f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 43);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 43);
				if (func_307(uParam0, 43, 0))
				{
					unk_0x216049890A2D1EC6(9, 12, 9, 12);
					func_254(uParam0, 191799.8f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 44);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 44);
				if (func_307(uParam0, 44, 0))
				{
					func_254(uParam0, 196633.1f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 45);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 45);
				if (func_307(uParam0, 45, 0))
				{
					func_254(uParam0, 201466.5f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 46);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 46);
				if (func_307(uParam0, 46, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_243(uParam0);
				if (BitTest(*uParam0, 15))
				{
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0x03F10D56CCA2C055(uParam0->f_7, uParam0->f_34, 0.8056f, 2.2245f, 0.5533f, 1);
						unk_0xD6B4D02A102485DC(uParam0->f_7, uParam0->f_34, -0.4552f, -0.4977f, 0.5449f, 1);
						unk_0x58BDA5D9262F5D30(uParam0->f_7, 33.3479f);
						unk_0x2A09425009DAD0F5(uParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0x4CBC5D1BC117616B(uParam0->f_7, 1);
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_35, false, 0);
						}
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
						{
							unk_0x4285E11B28063EE0(uParam0->f_36, true, 0);
						}
						uParam0->f_11 = -1;
						uParam0->f_11 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
						unk_0x2DCB8CA1FE6895AB(uParam0->f_11, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_dside_f"));
						if (func_266(uParam0))
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, unk_0x365DC1E8054AF31A(uParam0->f_34, "seat_pside_f"));
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.726f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.74f);
						}
						else
						{
							uParam0->f_12 = -1;
							uParam0->f_12 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_12, uParam0->f_34, 0);
							unk_0x3DA436E63AB0F541(uParam0->f_36, uParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1148846080, 0);
							unk_0x7BB893EF8F683419(uParam0->f_11, 0.726f);
							unk_0x7BB893EF8F683419(uParam0->f_12, 0.815f);
						}
						unk_0xD8ED11B32DF72E0B(uParam0->f_36, 0, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 47);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 47);
				if (func_307(uParam0, 47, 0))
				{
					func_254(uParam0, 213066.4f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_243(uParam0);
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_35, true, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(uParam0->f_36, 0))
					{
						unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
					}
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
					{
						unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
					}
					func_299(uParam0, 48);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 48);
				if (func_307(uParam0, 48, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 3);
					func_242(uParam0, 10177.75f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_243(uParam0);
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(uParam0, 49);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				func_309(uParam0, 49);
				if (unk_0x16088CC55E7F218A("FM_INTRO_DRIVE_END") && func_307(uParam0, 49, 0))
				{
					func_240(uParam0, 4500f);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
					uParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_243(uParam0);
				if (!unk_0x9390801B06EE998F())
				{
					if (!unk_0xDDED2C93E8FD5B69())
					{
						unk_0x10B228D2FDB7AF16(250);
					}
				}
				if (BitTest(*uParam0, 15))
				{
					func_301(uParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (uParam0->f_292)
					{
						unk_0xE9DE8F39ED85311E();
						unk_0x8744D2E3FC95740E(uParam0, 11);
					}
					func_299(uParam0, 50);
					unk_0x8744D2E3FC95740E(uParam0, 15);
				}
				if (!BitTest(*uParam0, 20))
				{
					if (func_266(uParam0))
					{
						unk_0x839AD252B0708F35("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						unk_0x839AD252B0708F35("MP_INT_MCS_5_ALT1", 8);
					}
					if (uParam0->f_295)
					{
						if (unk_0xB3FA103AA6383C28())
						{
							if (func_266(uParam0))
							{
								unk_0x7901DE0AC779EB29("MP_Female_Character", 0, 1);
							}
							else
							{
								unk_0x7901DE0AC779EB29("MP_1", 0, 1);
							}
						}
					}
					if (unk_0x0DDDD9D153BCF51F())
					{
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 20);
					}
				}
				func_309(uParam0, 50);
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
				{
					if (unk_0x050D073F91C5243C(uParam0->f_34))
					{
						if (unk_0xDF93B3CFAC96698F(uParam0->f_34) < 1f)
						{
							unk_0x1D2DAF2A41FFC4A0(uParam0->f_34);
						}
					}
				}
				if (func_307(uParam0, 50, 0) && BitTest(*uParam0, 20))
				{
					if (BitTest(*uParam0, 21))
					{
						unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
						unk_0x8744D2E3FC95740E(uParam0, 21);
					}
					unk_0x1D2DAF2A41FFC4A0(uParam0->f_34);
					uParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (uParam0->f_295)
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						if (func_266(uParam0))
						{
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							unk_0xF293D66D4452C854(unk_0x4A8C381C258A124D(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_35, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!unk_0x1C2F771CDC87A3A5(uParam0->f_34, 0))
				{
					unk_0xF293D66D4452C854(uParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
				if (unk_0xBC2EE32DE886BD08("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0xB43467C43086A6A1("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0xED65412F8B26ED99(4);
				func_256(1, 1, 1, 0, 0, 0, 0);
				uParam0->f_6 = 52;
				break;
			
			case 52:
				if (unk_0xFD216000DC314A92())
				{
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
					if (uParam0->f_293)
					{
						uParam0->f_30 = (unk_0x1DD05E817C89C737() - uParam0->f_13);
					}
					else
					{
						uParam0->f_30 = func_239(uParam0);
					}
					uParam0->f_14 = 0;
					uParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (uParam0->f_295)
				{
					if (func_266(uParam0))
					{
						if (!BitTest(*uParam0, 23))
						{
							if (unk_0xD8FC13DA1BA1DBA2("MP_Female_Character", 0))
							{
								if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
								{
									unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1));
									unk_0x64BB72494B9DF6DC(0);
									unk_0xD815D4BD1AE9E85A(0, 1065353216);
									unk_0x0B0C9A0F9AAEB7F0(uParam0, 23);
								}
							}
						}
					}
					else if (!BitTest(*uParam0, 23))
					{
						if (unk_0xD8FC13DA1BA1DBA2("MP_1", 0))
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1));
								unk_0x64BB72494B9DF6DC(0);
								unk_0xD815D4BD1AE9E85A(0, 1065353216);
								unk_0x0B0C9A0F9AAEB7F0(uParam0, 23);
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("LAMAR", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (unk_0xD8FC13DA1BA1DBA2("MP_Lamar_Car", 0))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
					{
						unk_0x1DE99C193C7EC64B(uParam0->f_34, 1084227584);
					}
				}
				if (unk_0x2B60F53D06BC6971(0))
				{
					func_238(1);
					unk_0x64BB72494B9DF6DC(0);
					unk_0xD815D4BD1AE9E85A(0, 1065353216);
				}
				if (!func_237(unk_0x259BE71D8A81D4FA()))
				{
					func_236(1);
				}
				if (unk_0xFD216000DC314A92())
				{
					if (uParam0->f_293)
					{
						uParam0->f_13 = (unk_0x1DD05E817C89C737() - (uParam0->f_30 + unk_0x15EF8F22A719BE5E()));
					}
					switch (uParam0->f_14)
					{
						case 0:
							func_235(uParam0, 0);
							break;
						
						case 10:
							func_235(uParam0, 1);
							break;
						
						case 20:
							func_235(uParam0, 2);
							break;
						
						case 30:
							func_235(uParam0, 3);
							break;
						
						case 40:
							func_235(uParam0, 4);
							break;
						
						case 50:
							func_235(uParam0, 5);
							break;
						
						case 60:
							func_235(uParam0, 6);
							break;
						
						case 70:
							func_235(uParam0, 7);
							break;
						
						case 80:
							func_235(uParam0, 8);
							break;
						
						case 90:
							func_235(uParam0, 9);
							break;
						
						case 100:
							if (unk_0xFC8BFE4B41177C22(uParam0->f_36))
							{
								unk_0x734A9F4537A31459(&(uParam0->f_36));
							}
							break;
					}
					uParam0->f_14++;
				}
				else
				{
					unk_0x59ABC1F373CE1F5B();
					unk_0x9136D50973A71229();
					if (!unk_0xC9BA6D804FA4FAAA())
					{
						unk_0xB479965CBAA3EAE1(0);
					}
					func_256(0, 1, 1, 0, 0, 0, 0);
					unk_0x8744D2E3FC95740E(uParam0, 13);
					uParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (unk_0xFD216000DC314A92())
				{
					unk_0xA7E4AA8D29D3DAC1();
				}
				else if (!BitTest(*uParam0, 17))
				{
					if (unk_0x15CCE8886267624F())
					{
						unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
						if (uParam0->f_292)
						{
							unk_0xE9DE8F39ED85311E();
							unk_0x8744D2E3FC95740E(uParam0, 11);
						}
						func_198(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 17);
					}
					else if (!unk_0x78ABC1D11B34F324())
					{
						unk_0x8F72AF14CE5AACE4(250);
					}
				}
				else if (func_199(&(uParam0->f_17), 10000, 0))
				{
					if (func_234(uParam0))
					{
						func_302(uParam0);
						func_250(uParam0);
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0x44C48AC14D3C09ED(unk_0x4A8C381C258A124D(), true, 0);
								unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 61.3164f);
							}
						}
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
								{
									unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_238(1);
						if (!func_237(unk_0x259BE71D8A81D4FA()))
						{
							func_236(1);
						}
						func_256(0, 1, 1, 0, 0, 0, 0);
						unk_0xAFD3BC0F6EBB5474(0, 0, 0);
						if (BitTest(*uParam0, 21))
						{
							unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
							unk_0x8744D2E3FC95740E(uParam0, 21);
						}
						unk_0x0B0C9A0F9AAEB7F0(uParam0, true);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
						uParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (unk_0xFD216000DC314A92())
				{
					unk_0xA7E4AA8D29D3DAC1();
				}
				else if (!BitTest(*uParam0, 17))
				{
					if (unk_0x15CCE8886267624F())
					{
						unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 13);
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -195.2f, 307.1825f, 95.9455f, 1, 0, 0, 1);
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
						if (uParam0->f_292)
						{
							unk_0xE9DE8F39ED85311E();
							unk_0x8744D2E3FC95740E(uParam0, 11);
						}
						func_198(&(uParam0->f_17));
						func_22(&(uParam0->f_17), 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 17);
					}
					else if (!unk_0x78ABC1D11B34F324())
					{
						unk_0x8F72AF14CE5AACE4(250);
					}
				}
				else if (func_199(&(uParam0->f_17), 10000, 0))
				{
					if (func_286(uParam0))
					{
						func_302(uParam0);
						func_250(uParam0);
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								unk_0x44C48AC14D3C09ED(unk_0x4A8C381C258A124D(), true, 0);
								unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), -200.8225f, 302.9014f, 95.9455f, 1, 0, 0, 1);
								unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 61.3164f);
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
								{
									unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), uParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
						{
							if (!unk_0x7F420695E3F776FB(uParam0->f_35, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
								{
									unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_237(unk_0x259BE71D8A81D4FA()))
						{
						}
						func_256(0, 1, 1, 0, 0, 0, 0);
						if (BitTest(*uParam0, 21))
						{
							unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
							unk_0x8744D2E3FC95740E(uParam0, 21);
						}
						unk_0x10B228D2FDB7AF16(250);
						unk_0xAFD3BC0F6EBB5474(0, 0, 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 3);
						uParam0->f_13 = (unk_0x1DD05E817C89C737() - func_231(uParam0, 48, 0));
						uParam0->f_293 = 1;
						func_242(uParam0, 10177.75f);
						unk_0x0B0C9A0F9AAEB7F0(uParam0, 15);
						uParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_309(uParam0, 57);
				bVar4 = !uParam0->f_288;
				func_219(uParam0, bVar4, 0);
				if (uParam0->f_292)
				{
					unk_0xE9DE8F39ED85311E();
					unk_0x8744D2E3FC95740E(uParam0, 11);
				}
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_35))
				{
					unk_0x0FD8B5F4BB15CD71(uParam0->f_35, -1);
					unk_0x44FB298D6382876D(uParam0->f_35, 1);
				}
				unk_0x4314716E4B544721(1);
				if (!uParam0->f_288)
				{
					func_32(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_218(uParam0);
		if (!uParam0->f_291)
		{
			if (uParam0->f_293)
			{
				uParam0->f_289 = to_float((unk_0x1DD05E817C89C737() - uParam0->f_13));
			}
			else
			{
				uParam0->f_289 = to_float(func_239(uParam0));
			}
			uParam0->f_290 = func_217(uParam0);
		}
		uParam0->f_291 = 0;
		if (uParam0->f_292 && BitTest(*uParam0, 11))
		{
			if (uParam0->f_293)
			{
				unk_0x4B1F30FB3C9A4B7F(uParam0->f_289);
			}
			else
			{
				unk_0x4B1F30FB3C9A4B7F(uParam0->f_290);
			}
		}
		func_214(uParam0);
		if (BitTest(*uParam0, 12))
		{
			if (func_276())
			{
				func_213();
			}
		}
		if (uParam0->f_6 > 0 && uParam0->f_6 <= 57)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 60);
				}
			}
			func_211(uParam0);
			unk_0x6C978B200DAA54DE();
			unk_0x4EB223432F8FA0A0(9);
			unk_0x4EB223432F8FA0A0(7);
			unk_0x4EB223432F8FA0A0(18);
			unk_0x4EB223432F8FA0A0(6);
			unk_0x4EB223432F8FA0A0(3);
			unk_0x4EB223432F8FA0A0(13);
			unk_0x4EB223432F8FA0A0(4);
		}
		if (Global_2793046.f_1948)
		{
			unk_0xB211E45F1FE1ED2D(2, 187, 1);
		}
	}
	return 0;
}

void func_211(var uParam0)
{
	var uVar0;
	
	if (!BitTest(*uParam0, 9))
	{
		if (uParam0->f_6 > 0)
		{
			if (!unk_0xF859473E4AD09F30())
			{
				if (!unk_0x6457A0C458E98FFB())
				{
					uVar0 = unk_0x259BE71D8A81D4FA() + 32;
					unk_0x5147DD7078544AD1(1, uVar0);
					func_212(1);
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 9);
				}
			}
			else
			{
				func_212(1);
				unk_0x0B0C9A0F9AAEB7F0(uParam0, 9);
			}
		}
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 18))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 18);
		}
	}
	else if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 18))
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 18);
	}
}

void func_213()
{
	unk_0xA91A4C18A2DB01BD(Global_1577867, 255, 255, 255, 255, 0);
	if (Global_1577869 == 0)
	{
		unk_0x88F483FBD433696A(Global_1577867, "SET_BIG_LOGO_VISIBLE");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(1);
		unk_0xE6B753D52F4CA222();
		Global_1577869 = 1;
	}
}

void func_214(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xFC8BFE4B41177C22(uParam0->f_58[uParam0->f_90]))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_58[uParam0->f_90], 0))
		{
		}
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0->f_58[uParam0->f_90], 1) };
		if (Var0.f_2 < -50f)
		{
			func_215(uParam0, uParam0->f_90);
		}
	}
	uParam0->f_90++;
	if (uParam0->f_90 >= 15)
	{
		uParam0->f_90 = 0;
	}
}

void func_215(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0->f_58[bParam1]))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_58[bParam1], 0))
		{
		}
		func_216(bParam1, &Var0, &fVar1);
		unk_0xB2BD5837A8D3CEDA(uParam0->f_58[bParam1], Var0, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uParam0->f_58[bParam1], fVar1);
		unk_0x5D7CD709B34C90F0(uParam0->f_58[bParam1], true);
		unk_0xF698038C13845696(uParam0->f_58[bParam1]);
		unk_0x44C48AC14D3C09ED(uParam0->f_58[bParam1], false, 0);
		unk_0x4285E11B28063EE0(uParam0->f_58[bParam1], false, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_74[bParam1]))
	{
		if (unk_0x1C2F771CDC87A3A5(uParam0->f_74[bParam1], 0))
		{
		}
		unk_0x4285E11B28063EE0(uParam0->f_74[bParam1], false, 0);
	}
}

void func_216(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_217(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (uParam0->f_6 >= 31 && uParam0->f_6 < 33)
	{
		if (func_266(uParam0))
		{
			fVar0 = to_float((uParam0->f_27 + unk_0x15EF8F22A719BE5E()));
			if (unk_0x6BC87CF59151C630() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / to_float(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = to_float((uParam0->f_27 + unk_0x15EF8F22A719BE5E()));
		}
		return fVar0;
	}
	return uParam0->f_289;
}

void func_218(var uParam0)
{
	if (BitTest(*uParam0, 29))
	{
		unk_0xE2E1B9096BCD8C5C(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0xE2E1B9096BCD8C5C(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_219(var uParam0, bool bParam1, bool bParam2)
{
	if (!BitTest(*uParam0, 0))
	{
		if (unk_0xFD216000DC314A92())
		{
			unk_0xB479965CBAA3EAE1(0);
		}
		unk_0x01C8E9BB989C1EEE(0);
		if (uParam0->f_292)
		{
			unk_0x6BD0E2C3AF4FF666(0);
			unk_0xE9DE8F39ED85311E();
			unk_0x8744D2E3FC95740E(uParam0, 11);
		}
		if (BitTest(*uParam0, 14))
		{
			unk_0xE3F88173F42C071B();
			unk_0x8744D2E3FC95740E(uParam0, 14);
		}
		func_230();
		func_251(uParam0);
		func_302(uParam0);
		func_250(uParam0);
		func_272();
		func_255(uParam0);
		func_273(uParam0);
		func_229(uParam0);
		func_244(uParam0);
		unk_0x830C51B62E7CD5B2();
		if (bParam2)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_34))
			{
				unk_0x68298CA6191CDFDB(&(uParam0->f_34));
			}
			if (unk_0xFC8BFE4B41177C22(uParam0->f_35))
			{
				unk_0xF09E30AF1B8FB379(&(uParam0->f_35));
			}
		}
		if (unk_0xFC8BFE4B41177C22(uParam0->f_36))
		{
			unk_0x734A9F4537A31459(&(uParam0->f_36));
		}
		if (!uParam0->f_288)
		{
			func_415(0);
		}
		func_227();
		func_220();
		func_256(0, 1, 1, 0, 0, 0, 0);
		unk_0xD7C0EA10993D3214(0, -1);
		unk_0x938C85923AD6778A(1);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if (unk_0x0721B5D4CF3ACD02())
			{
				unk_0x42B4970D598C8A72(0, 1);
			}
		}
		if (BitTest(*uParam0, 21))
		{
			unk_0x86A2BC11844DEEB3("FM_INTRO_DRIVE_END");
			unk_0x8744D2E3FC95740E(uParam0, 21);
		}
		unk_0x0A83667A5D36A4FF(0);
		func_369(1);
		if (BitTest(*uParam0, 26))
		{
			func_361(1, 0);
			unk_0x8744D2E3FC95740E(uParam0, 26);
		}
		Global_2672505.f_3542 = 0;
		if (!unk_0x3555462DB47B7AB1())
		{
			unk_0x030379A8083CE8F9(0);
		}
		unk_0xD82473EFEF7FC622(1);
		if (bParam1)
		{
		}
		func_195(0);
		func_209(1);
		Global_2793046.f_1948 = 0;
		Global_2793046.f_1947 = 0;
		if (unk_0xBC2EE32DE886BD08("MP_INTRO_RACE_SCENE"))
		{
			unk_0xB43467C43086A6A1("MP_INTRO_RACE_SCENE");
		}
		if (unk_0xBC2EE32DE886BD08("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0xB43467C43086A6A1("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_323(14, 1);
		unk_0xDAE61414743C8D1D(5);
		unk_0xE6FCB8178DFE489F("CONTRAILS", 0);
		unk_0x7821F942CAEEBEE1(5, "FMINTRO");
		unk_0x7821F942CAEEBEE1(6, "FMINTRO");
		unk_0x7821F942CAEEBEE1(7, "FMINTRO");
		unk_0x268BE77F77533D03("mp_intro_seq@");
		unk_0x268BE77F77533D03("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x268BE77F77533D03("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x268BE77F77533D03("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
		{
			unk_0x5D3946F818C6B331(unk_0x413A91F497E3428F(), 0.7f);
		}
		unk_0x4D2F1CB87CBF249D(0);
		unk_0x64BB72494B9DF6DC(0);
		unk_0xD815D4BD1AE9E85A(0, 1065353216);
		if (unk_0x76CD105BCAC6EB9F())
		{
			unk_0x81F9331288182129();
			unk_0x4314716E4B544721(1);
		}
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
		if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		unk_0x0B0C9A0F9AAEB7F0(uParam0, false);
	}
}

void func_220()
{
	func_221(0);
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		func_226();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_82(0))
		{
			func_222(0);
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

void func_222(int iParam0)
{
	if (func_225())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_224())
		{
			func_223(1, 1);
		}
		else
		{
			func_223(0, 0);
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
	if (!func_167())
	{
		Global_20383.f_1 = 3;
	}
}

void func_223(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
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

bool func_224()
{
	return BitTest(Global_1962996, 5);
}

bool func_225()
{
	return BitTest(Global_1962996, 19);
}

void func_226()
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

void func_227()
{
	if (!Global_1574747)
	{
		return;
	}
	func_228();
}

void func_228()
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_229(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_235(uParam0, iVar0);
		iVar0++;
	}
}

void func_230()
{
	unk_0x2AF2D6F164BD6F5A(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	unk_0x2AF2D6F164BD6F5A(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_231(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = uParam0->f_29;
		}
		else
		{
			iVar1 = uParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_233(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_232(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_234(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xEC9DAA34BBB4658C(iVar1);
	if (unk_0x6252BC0DD8A320DB(iVar0) && unk_0x6252BC0DD8A320DB(iVar1))
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_34))
		{
			uParam0->f_34 = unk_0x5779387E956077A6(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0, 0, 0);
			unk_0x05177DCE3DD6F271(uParam0->f_34, 1);
			unk_0x4DC72C4B884A6C59(uParam0->f_34, 0);
			unk_0xD0F1DB0E50B367AD(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
			unk_0xBA3C1A9AA7FD9616(uParam0->f_34, 2);
		}
		else if (!unk_0xFC8BFE4B41177C22(uParam0->f_35))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xB1DBFEB95C0EFB88(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0, 0);
				unk_0xAAA71DD7E9059338(uParam0->f_35, 1);
				unk_0x935364B4448CD584(uParam0->f_34, 1);
				unk_0x935364B4448CD584(uParam0->f_35, 1);
				unk_0x3CEA1FD137ACE2D9(uParam0->f_35, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
				unk_0xD0F1DB0E50B367AD(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_34) || !unk_0xFC8BFE4B41177C22(uParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_235(var uParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_58[iParam1]))
	{
		unk_0x8C1F7D7A31B2A38E(&(uParam0->f_58[iParam1]));
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_74[iParam1]))
	{
		unk_0x734A9F4537A31459(&(uParam0->f_74[iParam1]));
	}
}

void func_236(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_143), 22);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_143), 22);
	}
}

bool func_237(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_143, 22);
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 4);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 4);
	}
}

int func_239(var uParam0)
{
	if (uParam0->f_6 < 31)
	{
		return unk_0x1304366BC7BE185B();
	}
	if (uParam0->f_6 < 33)
	{
		return (uParam0->f_26 + unk_0x15EF8F22A719BE5E());
	}
	return (uParam0->f_28 + unk_0x1304366BC7BE185B());
}

void func_240(var uParam0, float fParam1)
{
	func_241(uParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_241(var uParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if (bParam4)
		{
			unk_0x1D2DAF2A41FFC4A0(uParam0);
			unk_0x88556DA0593A0748(uParam0, iParam1, sParam2, 1);
		}
		else if (!unk_0x050D073F91C5243C(uParam0))
		{
			unk_0x88556DA0593A0748(uParam0, iParam1, sParam2, 1);
			unk_0xF2FCE3F2F4D0CB50(uParam0, 1);
		}
		else
		{
			iVar0 = unk_0x95610E68DFCFC225(iParam1, sParam2);
			if (unk_0x0008A5B9B95FED93(uParam0) != iVar0)
			{
				unk_0x88556DA0593A0748(uParam0, iParam1, sParam2, 1);
				unk_0xF2FCE3F2F4D0CB50(uParam0, 1);
			}
		}
		unk_0x8BCD7C11D27FB9A1(uParam0, (fParam3 - unk_0x157F3D5A4AAB2C50(uParam0)));
	}
}

void func_242(var uParam0, float fParam1)
{
	func_241(uParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!uParam0->f_296)
	{
		iVar0 = unk_0x70E57E9927B6BA58("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0xE7D342E0F16AAA8F(iVar1))
		{
			func_9(iVar1);
			uParam0->f_296 = 1;
		}
	}
}

void func_244(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_37[iVar0]))
		{
			unk_0x734A9F4537A31459(&(uParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	unk_0x55098D9E9AD58806(joaat("g_m_y_mexgoon_02"));
	unk_0x268BE77F77533D03("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x268BE77F77533D03("amb@world_human_hang_out_street@male_a@base");
}

int func_245(var uParam0)
{
	int iVar0;
	
	if (BitTest(uParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(joaat("g_m_y_mexgoon_02"));
		unk_0x80813AC549A1E8AE("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x80813AC549A1E8AE("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0x6252BC0DD8A320DB(joaat("g_m_y_mexgoon_02")) && unk_0xE100DD4F82A51BDE("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0xE100DD4F82A51BDE("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_37[iVar0]))
				{
					uParam0->f_37[iVar0] = unk_0xB1DBFEB95C0EFB88(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0, 0);
					unk_0x935364B4448CD584(uParam0->f_37[iVar0], 1);
					unk_0xAAA71DD7E9059338(uParam0->f_37[iVar0], 1);
					switch (iVar0)
					{
						case 0:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0, 2, 0);
							break;
						
						case 1:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 2:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 3:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 4:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 5:
							unk_0xB2BD5837A8D3CEDA(uParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(uParam0->f_37[iVar0], 76.8852f);
							unk_0xB41DEC3AAC1AA107(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x5D7CD709B34C90F0(uParam0->f_37[iVar0], true);
							break;
						
						case 6:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 7:
							unk_0xB2BD5837A8D3CEDA(uParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(uParam0->f_37[iVar0], 87.5786f);
							unk_0xB41DEC3AAC1AA107(uParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, 1, 1);
							unk_0x5D7CD709B34C90F0(uParam0->f_37[iVar0], true);
							break;
						
						case 8:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						
						case 9:
							unk_0x9F5225AA1E102B7A(uParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x55098D9E9AD58806(joaat("g_m_y_mexgoon_02"));
		unk_0x268BE77F77533D03("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x268BE77F77533D03("amb@world_human_hang_out_street@male_a@base");
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_246(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_172(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_163(sParam2, iParam4, 0);
}

void func_247(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!BitTest(*uParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 1:
					Var1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_98[iVar0]) && unk_0xD9F5E1FEFD1329E4(uParam0->f_92[iVar0], 0))
			{
				unk_0x5D7CD709B34C90F0(uParam0->f_92[iVar0], false);
				unk_0x93C337B66C95C99B(uParam0->f_92[iVar0], 10f);
				unk_0xCF6CC9EA0D2EFE23(uParam0->f_98[iVar0], uParam0->f_92[iVar0], Var1, 5f, 0, unk_0x4B423FAA24E8ABF0(uParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		unk_0x0B0C9A0F9AAEB7F0(uParam0, 25);
	}
}

int func_248(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (BitTest(uParam0->f_3, 11))
	{
		return 1;
	}
	iVar3 = joaat("shamal");
	unk_0xEC9DAA34BBB4658C(iVar3);
	unk_0xEC9DAA34BBB4658C(func_249());
	if (unk_0x6252BC0DD8A320DB(iVar3))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar2 = 149.9339f;
						break;
					
					case 1:
						Var1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar2 = 239.9712f;
						break;
				}
				uParam0->f_92[iVar0] = unk_0x5779387E956077A6(iVar3, Var1, fVar2, 0, 0, 0);
				unk_0x1DE99C193C7EC64B(uParam0->f_92[iVar0], 1084227584);
				unk_0x5D7CD709B34C90F0(uParam0->f_92[iVar0], true);
				unk_0xBA3C1A9AA7FD9616(uParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (unk_0x6252BC0DD8A320DB(func_249()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar0]))
			{
				if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
				{
					if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[iVar0], 0))
					{
						uParam0->f_98[iVar0] = unk_0x8728A378EF2B46B2(uParam0->f_92[iVar0], 4, func_249(), -1, 0, false);
						unk_0xAAA71DD7E9059338(uParam0->f_98[iVar0], 1);
						unk_0xC229299217554C78(uParam0->f_92[iVar0], 1, 1, 0);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x55098D9E9AD58806(iVar3);
	unk_0x55098D9E9AD58806(func_249());
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 11);
	return 1;
}

int func_249()
{
	return unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
}

void func_250(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar0]))
		{
			unk_0x8C1F7D7A31B2A38E(&(uParam0->f_92[iVar0]));
		}
		if (unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar0]))
		{
			unk_0x734A9F4537A31459(&(uParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	unk_0x55098D9E9AD58806(joaat("shamal"));
	unk_0x55098D9E9AD58806(func_249());
}

void func_251(var uParam0)
{
	int iVar0;
	
	if (BitTest(uParam0->f_3, 2))
	{
		unk_0x55098D9E9AD58806(joaat("p_cs_mp_jet_01_s"));
		if (unk_0xFC8BFE4B41177C22(uParam0->f_33))
		{
			unk_0x51C8BEA2005931AB(&(uParam0->f_33));
		}
		if (uParam0->f_294)
		{
			if (unk_0x9CFFB7009B578840(uParam0->f_120))
			{
				unk_0x5301FEC6BB8F21DF(uParam0->f_120, 0);
			}
			if (unk_0x9CFFB7009B578840(uParam0->f_121))
			{
				unk_0x5301FEC6BB8F21DF(uParam0->f_121, 0);
			}
			if (unk_0x6F13318788EDDAD8())
			{
				unk_0xAE427DA16687F323();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_104[iVar0]))
			{
				unk_0x734A9F4537A31459(&(uParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_3), 2);
	}
}

int func_252(var uParam0)
{
	if (func_266(uParam0))
	{
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_female") && unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x80813AC549A1E8AE("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_male") && unk_0xE100DD4F82A51BDE("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_253(var uParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!BitTest(uParam0->f_3, 10))
	{
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_36))
			{
				uParam0->f_36 = unk_0xB1DBFEB95C0EFB88(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0, 0);
				unk_0xAAA71DD7E9059338(uParam0->f_36, 1);
				unk_0x935364B4448CD584(uParam0->f_36, 1);
				unk_0x4285E11B28063EE0(uParam0->f_36, false, 0);
				unk_0x3CEA1FD137ACE2D9(uParam0->f_36, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
				unk_0xD0F1DB0E50B367AD(uParam0->f_36, 1, 1, 1, 1, 1, 1, 1, 0);
				func_416(&(uParam0->f_123), 1, uParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_36))
		{
			return 0;
		}
		unk_0x55098D9E9AD58806(iVar0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 10);
	}
	return 1;
}

void func_254(var uParam0, float fParam1)
{
	func_241(uParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_255(var uParam0)
{
	int iVar0;
	
	unk_0x55098D9E9AD58806(func_269());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_270(uParam0, iVar0);
		iVar0++;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_91))
	{
		unk_0x734A9F4537A31459(&(uParam0->f_91));
	}
}

void func_256(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_263(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_167())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_262(1, iParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_263(0);
		unk_0xCCC82B30A1C53626();
		Global_63368 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_262(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_260(unk_0x259BE71D8A81D4FA())) && !func_258(unk_0x259BE71D8A81D4FA(), 0)) && !func_257()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_260(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_78556 = 0;
	}
}

bool func_257()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

bool func_258(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_259(-1, 0) == 8;
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

int func_259(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_260(int iParam0)
{
	if (func_258(iParam0, 0))
	{
		return 1;
	}
	if (func_261())
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

bool func_261()
{
	return BitTest(Global_2621446, 3);
}

int func_262(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_263(int iParam0)
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

void func_264(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_104[iVar0], 0))
		{
			unk_0xAF8337BF5A296283(uParam0->f_104[iVar0]);
			unk_0xF293D66D4452C854(uParam0->f_104[iVar0], func_265(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_266(var uParam0)
{
	if (uParam0->f_295)
	{
		return func_267();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_267()
{
	return func_268(unk_0x259BE71D8A81D4FA());
}

int func_268(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_269()
{
	return joaat("s_m_y_xmech_02");
}

void func_270(var uParam0, int iParam1)
{
	unk_0x55098D9E9AD58806(func_271(iParam1));
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[iParam1]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[iParam1], 0))
		{
		}
		unk_0xFB54FC989415871E(uParam0->f_49[iParam1]);
		unk_0x8C1F7D7A31B2A38E(&(uParam0->f_49[iParam1]));
	}
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_272()
{
	Global_1577869 = 0;
	if (unk_0xA0C7B98BCF1EEF9E(Global_1577867))
	{
		unk_0x88F483FBD433696A(Global_1577867, "SET_BIG_LOGO_VISIBLE");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(0);
		unk_0xE6B753D52F4CA222();
		unk_0xD314260005F064BF(&Global_1577867);
	}
}

void func_273(var uParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar1]))
		{
			uVar0 = uParam0->f_92[iVar1];
			unk_0x81A7F3CD719DD53B(&uVar0);
		}
		if (unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar1]))
		{
			uVar0 = uParam0->f_98[iVar1];
			unk_0x81A7F3CD719DD53B(&uVar0);
		}
		iVar1++;
	}
	unk_0x55098D9E9AD58806(joaat("cheetah"));
	unk_0x55098D9E9AD58806(joaat("monroe"));
	unk_0x55098D9E9AD58806(joaat("entityxf"));
	unk_0x55098D9E9AD58806(joaat("feltzer2"));
	unk_0x7821F942CAEEBEE1(100, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(101, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(102, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(103, "FM_Intro_uber");
	unk_0x7821F942CAEEBEE1(104, "FM_Intro_uber");
	unk_0x268BE77F77533D03("mp_intro_seq@");
}

void func_274(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[2]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[2], 0))
		{
			unk_0x53152C1272227778(uParam0->f_49[2]);
		}
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[4]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[4], 0))
		{
			unk_0x53152C1272227778(uParam0->f_49[4]);
		}
	}
}

void func_275(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_49[2]))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[2], 0))
		{
			unk_0x3E13A302AA0F06BF(uParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_276()
{
	if (unk_0xDCE42B3C644D1A4E())
	{
		return 0;
	}
	if (!unk_0xA0C7B98BCF1EEF9E(Global_1577867))
	{
		Global_1577867 = unk_0x8DE4F68A9728925E("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_277(var uParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param5)
{
	if (unk_0xFC8BFE4B41177C22(uParam3))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam3, 0))
		{
		}
		if (!unk_0x78411E34CF90EA8C(uParam0->f_8))
		{
			uParam0->f_8 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
		}
		uParam0->f_9 = -1;
		uParam0->f_9 = unk_0x2EC137C692A52458(Param4, Param5, 2);
		unk_0x2DCB8CA1FE6895AB(uParam0->f_9, iParam3, 0);
		unk_0xF9B66DAE101B699C(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
		unk_0x4CBC5D1BC117616B(uParam0->f_8, 1);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 1, 0);
	}
}

void func_278(var uParam0)
{
	if (!BitTest(uParam0->f_3, 3))
	{
		unk_0xC540300DE977409D("CONTRAILS");
		if (func_266(uParam0))
		{
			unk_0x046FF102DCE74A94("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			unk_0x046FF102DCE74A94("MP_INTRO_CONCAT", 31, 8);
		}
		if (unk_0xB3FA103AA6383C28())
		{
			if (uParam0->f_295)
			{
				if (func_266(uParam0))
				{
					unk_0x7901DE0AC779EB29("MP_Female_Character", 0, 1);
				}
				else
				{
					unk_0x7901DE0AC779EB29("MP_Male_Character", 0, 1);
				}
			}
			func_279();
		}
		if (unk_0x0DDDD9D153BCF51F())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 3);
		}
	}
}

void func_279()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		unk_0x7901DE0AC779EB29(func_265(iVar0), 0, 1);
		iVar0++;
	}
}

int func_280(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!BitTest(uParam0->f_3, 2))
	{
		unk_0xEC9DAA34BBB4658C(joaat("p_cs_mp_jet_01_s"));
		unk_0xEC9DAA34BBB4658C(joaat("mp_m_freemode_01"));
		unk_0xEC9DAA34BBB4658C(joaat("mp_f_freemode_01"));
		if (uParam0->f_294)
		{
			unk_0x8003D3C0115A1035();
		}
		if (((unk_0x6252BC0DD8A320DB(joaat("p_cs_mp_jet_01_s")) && unk_0x6252BC0DD8A320DB(joaat("mp_m_freemode_01"))) && unk_0x6252BC0DD8A320DB(joaat("mp_f_freemode_01"))) && (!uParam0->f_294 || unk_0x6F13318788EDDAD8()))
		{
			uParam0->f_33 = unk_0x4E55EAB577C13329(joaat("p_cs_mp_jet_01_s"), Var1, 0, 0, 0);
			unk_0xF88FC425EC7D675D(uParam0->f_33, 3000);
			unk_0x11C125313CB8ADA2(uParam0->f_33, 0);
			unk_0x4285E11B28063EE0(uParam0->f_33, false, 0);
			if (uParam0->f_294)
			{
				uParam0->f_120 = unk_0x62750FD2BDD8BD49("scr_mp_intro_plane_exhaust", uParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				uParam0->f_121 = unk_0x62750FD2BDD8BD49("scr_mp_intro_plane_exhaust", uParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (uParam0->f_295)
			{
				func_284(uParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_283(uParam0, iVar0))
				{
					uParam0->f_104[iVar0] = unk_0xB1DBFEB95C0EFB88(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				else
				{
					uParam0->f_104[iVar0] = unk_0xB1DBFEB95C0EFB88(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0, 0);
				}
				if (func_282(uParam0, iVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(unk_0xB23E0F9B63D009A8(uParam0->f_112[iVar0])), 0))
					{
					}
					unk_0x4E719C7F4406EC93(unk_0x56E414973C2A8C0E(unk_0xB23E0F9B63D009A8(uParam0->f_112[iVar0])), uParam0->f_104[iVar0]);
					unk_0xAF8337BF5A296283(uParam0->f_104[iVar0]);
				}
				else
				{
					func_281(uParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x55098D9E9AD58806(joaat("p_cs_mp_jet_01_s"));
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_281(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 21, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 9, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 9, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 4, 8, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 15, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 1:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 13, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 5, 4, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 10, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 10, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 11, 2, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 13, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 10, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 2:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 15, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 1, 4, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 0, 1, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 1, 7, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 2, 9, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 6, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 3:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 14, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 5, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 1, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 11, 5, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 3, 12, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 4:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 18, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 15, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 15, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 2, 5, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 4, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 4, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 4, 0, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 5:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 27, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 7, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 11, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 4, 8, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 13, 14, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 5, 3, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 2, 7, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 6:
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 0, 16, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 2, 15, 1, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 3, 3, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 4, 5, 6, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 6, 2, 8, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uParam0->f_104[iParam1], 11, 3, 7, 0);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 0, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 1, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 2, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 3, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 4, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 5, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 6, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 7, 1);
			unk_0x09397806857F5DFB(uParam0->f_104[iParam1], 8, 1);
			break;
	}
}

int func_282(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(unk_0xB23E0F9B63D009A8(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0, int iParam1)
{
	if (func_282(uParam0, iParam1))
	{
		return func_268(unk_0xB23E0F9B63D009A8(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_284(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 7)
	{
		uParam0->f_112[bVar1] = -1;
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (unk_0x259BE71D8A81D4FA() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_285(iVar0)] = bVar1;
					iVar0++;
				}
			}
		}
		bVar1++;
	}
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_286(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (BitTest(uParam0->f_3, 9))
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xEC9DAA34BBB4658C(iVar1);
	unk_0xD772E6694B8472A6(5, "FMINTRO");
	unk_0xD772E6694B8472A6(6, "FMINTRO");
	unk_0xD772E6694B8472A6(7, "FMINTRO");
	unk_0x80813AC549A1E8AE("mp_intro_seq@");
	if (((((unk_0x6252BC0DD8A320DB(iVar0) && unk_0x6252BC0DD8A320DB(iVar1)) && unk_0x266D9DB5FCE4003B(5, "FMINTRO")) && unk_0x266D9DB5FCE4003B(6, "FMINTRO")) && unk_0x266D9DB5FCE4003B(7, "FMINTRO")) && unk_0xE100DD4F82A51BDE("mp_intro_seq@"))
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_34))
		{
			unk_0x2094BC4B6731BA68(-1034.035f, -2730.485f, 19.0565f, 3f, 1, 0, 0, 0);
			uParam0->f_34 = unk_0x5779387E956077A6(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0, 0, 0);
			unk_0x05177DCE3DD6F271(uParam0->f_34, 1);
			unk_0x4DC72C4B884A6C59(uParam0->f_34, 0);
			unk_0xD0F1DB0E50B367AD(uParam0->f_34, 1, 1, 1, 1, 1, 1, 1, 0);
		}
		else if (!unk_0xFC8BFE4B41177C22(uParam0->f_35))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
			{
				uParam0->f_35 = unk_0xB1DBFEB95C0EFB88(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0, 0);
				unk_0xEBA229B2E0BB05E0(uParam0->f_35, uParam0->f_34, 20000, -1, 1f, 1048592, 0);
				unk_0xAAA71DD7E9059338(uParam0->f_35, 1);
				unk_0x935364B4448CD584(uParam0->f_34, 1);
				unk_0x935364B4448CD584(uParam0->f_35, 1);
				unk_0x3CEA1FD137ACE2D9(uParam0->f_35, unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D()));
				unk_0xD0F1DB0E50B367AD(uParam0->f_35, 1, 1, 1, 1, 1, 1, 1, 0);
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_34) || !unk_0xFC8BFE4B41177C22(uParam0->f_35))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(iVar0);
	unk_0x55098D9E9AD58806(iVar1);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 9);
	return 1;
}

void func_287(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_3, 0))
	{
		func_297();
		func_295();
		if (func_289(uParam0))
		{
			if (func_288(uParam0))
			{
				if (!unk_0x78411E34CF90EA8C(uParam0->f_7))
				{
					uParam0->f_7 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
				}
				unk_0xA3774254665BAA82(uParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					unk_0x55098D9E9AD58806(func_271(iVar0));
					iVar0++;
				}
				unk_0x55098D9E9AD58806(func_269());
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), false);
			}
		}
	}
}

int func_288(var uParam0)
{
	int iVar0;
	
	iVar0 = func_269();
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_91))
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_49[2]))
		{
			if (unk_0xE7D342E0F16AAA8F(iVar0))
			{
				if (unk_0x6252BC0DD8A320DB(iVar0))
				{
					if (unk_0xE100DD4F82A51BDE("MP_INTRO_SEQ@"))
					{
						if (!unk_0x1C2F771CDC87A3A5(uParam0->f_49[2], 0))
						{
							uParam0->f_10 = unk_0x2EC137C692A52458(0f, 0f, 0f, 0f, 0f, 0f, 2);
							unk_0x2DCB8CA1FE6895AB(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = unk_0xB1DBFEB95C0EFB88(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0, 0);
							unk_0xAAA71DD7E9059338(uParam0->f_91, 1);
							unk_0x3DA436E63AB0F541(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1148846080, 0);
							unk_0xBF3497E24DEAD835(uParam0->f_10, 1);
							unk_0x5D7CD709B34C90F0(uParam0->f_91, true);
							unk_0x44C48AC14D3C09ED(uParam0->f_91, false, 0);
							unk_0x4F07124B9C56ED6F(uParam0->f_91, joaat("gadget_parachute"));
							unk_0xD1C578C204015E1F(uParam0->f_91, 0, 1, 1, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 1, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 2, 0, 2, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 3, 0, 2, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 4, 1, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 5, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 6, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 7, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 8, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 9, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 10, 0, 0, 0);
							unk_0xD1C578C204015E1F(uParam0->f_91, 11, 0, 0, 0);
							unk_0x09397806857F5DFB(uParam0->f_91, 0, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 1, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 2, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 3, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 4, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 5, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 6, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 7, 1);
							unk_0x09397806857F5DFB(uParam0->f_91, 8, 1);
						}
					}
				}
			}
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_289(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	
	if (!BitTest(uParam0->f_2, 31))
	{
		func_297();
		bVar3 = false;
		while (bVar3 < 8)
		{
			func_294(bVar3, &Var1, &fVar2);
			if (!func_293(Var1, 0f, 0f, 0f, 0))
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_49[bVar3]))
				{
					iVar0 = func_271(bVar3);
					if (unk_0xE7D342E0F16AAA8F(iVar0))
					{
						if (unk_0x6252BC0DD8A320DB(iVar0))
						{
							uParam0->f_49[bVar3] = unk_0x5779387E956077A6(iVar0, Var1, fVar2, 0, 0, 0);
							unk_0x11C125313CB8ADA2(uParam0->f_49[bVar3], 1);
							unk_0x9452FE4900245259(uParam0->f_49[bVar3], 0f);
							unk_0x9BC299A7D57D7CAA(uParam0->f_49[bVar3], 0);
							if (bVar3 == 2)
							{
								unk_0xBFE60A5CC0C835D8(uParam0->f_49[bVar3], 4, 0, 1);
								unk_0x3E13A302AA0F06BF(uParam0->f_49[bVar3], 4, 0, 1f);
							}
							func_292(uParam0, bVar3);
							func_291(uParam0, bVar3);
							unk_0x55098D9E9AD58806(iVar0);
						}
					}
				}
			}
			bVar3++;
		}
		bVar3 = false;
		while (bVar3 < 8)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_49[bVar3]))
			{
				return 0;
			}
			if (!BitTest(uParam0->f_2, bVar3))
			{
				if (func_290(uParam0, bVar3))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2), bVar3);
				}
				else
				{
					return 0;
				}
			}
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bVar3], 0))
			{
				if (!unk_0xA7A8B7E924089F0A(uParam0->f_49[bVar3]))
				{
					return 0;
				}
			}
			bVar3++;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_290(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 0, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 2, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 3, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 5, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 7, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 10, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 12, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 4, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 11, 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 12, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 0, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 5, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 11, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 2, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 7, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 11, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 12, 2, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 13, 2, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 16, 4, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 5, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 5:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 0, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 2, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 3, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 6, 2, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 10, 3, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 7, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 15, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 5, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		case 6:
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_49[bParam1], 0))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_49[bParam1]) > 0)
				{
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 1, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 4, 1, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 8, 0, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 14, 7, 0);
					unk_0x8450270DC5896D39(uParam0->f_49[bParam1], 23, 0, 0);
					unk_0xF5501FF9869DAC7C(uParam0->f_49[bParam1], 22, 1);
					unk_0x439C904840715871(uParam0->f_49[bParam1], 0);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_291(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 0, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 2, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 3, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 5, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 7, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 10, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 0, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 2, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 7, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 0, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 2, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 3, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 6, 2);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 10, 3);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			unk_0xB5AD06DDA85E2E8F(uParam0->f_49[iParam1], 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 1, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 4, 1);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 8, 0);
			unk_0x714EDA9C467D9D0A(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_292(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 83, 134);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 0, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 49, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 0, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 43, 5);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 3, 3);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			unk_0xD133EF7430EDCD09(uParam0->f_49[iParam1], 35, 0);
			unk_0xBB361D7264AC4FD8(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_293(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_294(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_295()
{
	unk_0xEC9DAA34BBB4658C(func_269());
	unk_0x80813AC549A1E8AE(func_296());
}

char* func_296()
{
	return "MP_INTRO_SEQ@";
}

void func_297()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		unk_0xEC9DAA34BBB4658C(func_271(iVar0));
		iVar0++;
	}
}

void func_298(var uParam0, float fParam1, float fParam2)
{
	func_241(uParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_241(uParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_241(uParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_241(uParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_241(uParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_299(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	
	switch (iParam1)
	{
		case 14:
			func_300(uParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &uVar1, 1);
			func_300(uParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &uVar1, 1);
			break;
		
		case 15:
			func_300(uParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &uVar1, 1);
			func_300(uParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &uVar1, 1);
			func_300(uParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &uVar1, 1);
			func_300(uParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &uVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_300(uParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &uVar1, 1);
			func_300(uParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &uVar1, 1);
			func_300(uParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &uVar1, 1);
			func_300(uParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &uVar1, 1);
			func_300(uParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &uVar1, 1);
			func_300(uParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &uVar1, 1);
			break;
		
		case 18:
			func_300(uParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &uVar1, 1);
			func_300(uParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &uVar1, 1);
			func_300(uParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &uVar1, 1);
			func_300(uParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &uVar1, 1);
			break;
		
		case 19:
			func_300(uParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &uVar1, 1);
			func_300(uParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &uVar1, 1);
			func_300(uParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &uVar1, 1);
			func_300(uParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &uVar1, 1);
			func_300(uParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &uVar1, 1);
			func_300(uParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &uVar1, 1);
			func_300(uParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &uVar1, 1);
			func_300(uParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &uVar1, 1);
			func_300(uParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &uVar1, 1);
			func_300(uParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &uVar1, 1);
			break;
		
		case 33:
			func_300(uParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &uVar1, 0);
			func_300(uParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &uVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_300(uParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &uVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_300(uParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &uVar1, 0);
			func_300(uParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &uVar1, 0);
			func_300(uParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &uVar1, 0);
			func_300(uParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &uVar1, 0);
			func_300(uParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &uVar1, 0);
			func_300(uParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &uVar1, 0);
			func_300(uParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &uVar1, 0);
			func_300(uParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &uVar1, 0);
			func_300(uParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &uVar1, 0);
			func_300(uParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &uVar1, 0);
			func_300(uParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &uVar1, 0);
			func_300(uParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &uVar1, 0);
			func_300(uParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &uVar1, 0);
			func_300(uParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &uVar1, 0);
			func_300(uParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &uVar1, 0);
			break;
		
		case 39:
			func_300(uParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &uVar1, 0);
			func_300(uParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &uVar1, 0);
			break;
		
		case 40:
			func_300(uParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &uVar1, 0);
			func_300(uParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &uVar1, 0);
			func_300(uParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &uVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_300(uParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &uVar1, 0);
			func_300(uParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &uVar1, 0);
			func_300(uParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &uVar1, 0);
			break;
		
		case 44:
			func_300(uParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &uVar1, 0);
			func_300(uParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &uVar1, 0);
			func_300(uParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &uVar1, 0);
			break;
		
		case 45:
			func_300(uParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &uVar1, 0);
			func_300(uParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &uVar1, 0);
			func_300(uParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &uVar1, 0);
			func_300(uParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &uVar1, 0);
			func_300(uParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &uVar1, 0);
			func_300(uParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &uVar1, 0);
			func_300(uParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &uVar1, 0);
			func_300(uParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &uVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_300(uParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &uVar1, 0);
			func_300(uParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &uVar1, 0);
			func_300(uParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &uVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_300(uParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &uVar1, 0);
			func_300(uParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &uVar1, 0);
			func_300(uParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &uVar1, 0);
			func_300(uParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &uVar1, 0);
			func_300(uParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &uVar1, 0);
			func_300(uParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &uVar1, 0);
			func_300(uParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &uVar1, 0);
			func_300(uParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &uVar1, 0);
			break;
		
		case 50:
			break;
	}
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (!BitTest(uVar1, bVar0))
		{
			func_215(uParam0, bVar0);
		}
		bVar0++;
	}
}

void func_300(var uParam0, bool bParam1, struct<3> Param2, float fParam3, var uParam4, bool bParam5)
{
	if (unk_0xD9F5E1FEFD1329E4(uParam0->f_58[bParam1], 0) && !unk_0x4FAFF4BCB7633475(uParam0->f_74[bParam1]))
	{
		unk_0x5D7CD709B34C90F0(uParam0->f_58[bParam1], false);
		unk_0x44C48AC14D3C09ED(uParam0->f_58[bParam1], true, 0);
		unk_0xB2BD5837A8D3CEDA(uParam0->f_58[bParam1], Param2, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uParam0->f_58[bParam1], fParam3);
		unk_0x1DE99C193C7EC64B(uParam0->f_58[bParam1], 1084227584);
		unk_0xF698038C13845696(uParam0->f_58[bParam1]);
		if (bParam5)
		{
			unk_0xB3DA477F44309390(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 35f, 786603, 5f, 5f, 1);
			unk_0x93C337B66C95C99B(uParam0->f_58[bParam1], 30f);
		}
		else
		{
			unk_0xB3DA477F44309390(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 15f, 786603, 5f, 5f, 1);
			unk_0x93C337B66C95C99B(uParam0->f_58[bParam1], 10f);
		}
		unk_0x44FB298D6382876D(uParam0->f_74[bParam1], 1);
		unk_0x4285E11B28063EE0(uParam0->f_58[bParam1], true, 0);
		unk_0x4285E11B28063EE0(uParam0->f_74[bParam1], true, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, bParam1);
	}
}

void func_301(var uParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param4, float fParam5, int iParam6)
{
	if (!unk_0x78411E34CF90EA8C(uParam0->f_8))
	{
		uParam0->f_8 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 0);
	}
	uParam0->f_9 = -1;
	uParam0->f_9 = unk_0x2EC137C692A52458(Param3, Param4, 2);
	unk_0xF9B66DAE101B699C(uParam0->f_8, uParam0->f_9, sParam1, sParam2);
	unk_0x7BB893EF8F683419(uParam0->f_9, fParam5);
	unk_0x16B754A9C2FD8E74(uParam0->f_9, iParam6);
	unk_0x4CBC5D1BC117616B(uParam0->f_8, 1);
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 1, 0);
}

void func_302(var uParam0)
{
	unk_0x55098D9E9AD58806(joaat("frogger"));
	unk_0x7821F942CAEEBEE1(8, "FMIntro");
	if (unk_0xFC8BFE4B41177C22(uParam0->f_48))
	{
		unk_0x8C1F7D7A31B2A38E(&(uParam0->f_48));
	}
}

int func_303(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (BitTest(uParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_305();
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[0]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("cheetah")))
			{
				uParam0->f_92[0] = unk_0x5779387E956077A6(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[0], 0);
				unk_0x439C904840715871(uParam0->f_92[0], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[1]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("entityxf")))
			{
				uParam0->f_92[1] = unk_0x5779387E956077A6(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[1], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0x20DD46D27530FAC7(uParam0->f_92[1], 8);
				unk_0x439C904840715871(uParam0->f_92[1], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[2]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("monroe")))
			{
				uParam0->f_92[2] = unk_0x5779387E956077A6(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[2], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0x20DD46D27530FAC7(uParam0->f_92[2], 2);
				unk_0x439C904840715871(uParam0->f_92[2], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[3]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("cheetah")))
			{
				uParam0->f_92[3] = unk_0x5779387E956077A6(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[3], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0x20DD46D27530FAC7(uParam0->f_92[3], 15);
				unk_0x439C904840715871(uParam0->f_92[3], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_92[4]))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("feltzer2")))
			{
				uParam0->f_92[4] = unk_0x5779387E956077A6(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0, 0, 0);
				unk_0x4DC72C4B884A6C59(uParam0->f_92[4], 0);
				unk_0xF425E0B05426E088(uParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0xD133EF7430EDCD09(uParam0->f_92[4], 0, 0);
				unk_0xBB361D7264AC4FD8(uParam0->f_92[4], 0, 156);
				unk_0xB5AD06DDA85E2E8F(uParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[4], 0))
		{
			if (!BitTest(uParam0->f_3, 1))
			{
				if (unk_0x90E3EAFF8AAA1A42(uParam0->f_92[4]) > 0)
				{
					unk_0xF5501FF9869DAC7C(uParam0->f_92[4], 22, 1);
					unk_0x439C904840715871(uParam0->f_92[4], 0);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), true);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (unk_0x6252BC0DD8A320DB(func_249()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_98[iVar1]))
				{
					if (unk_0xFC8BFE4B41177C22(uParam0->f_92[iVar1]))
					{
						if (unk_0xD9F5E1FEFD1329E4(uParam0->f_92[iVar1], 0))
						{
							uParam0->f_98[iVar1] = unk_0x8728A378EF2B46B2(uParam0->f_92[iVar1], 4, func_249(), -1, 0, false);
							unk_0xAAA71DD7E9059338(uParam0->f_98[iVar1], 1);
							unk_0xC229299217554C78(uParam0->f_92[iVar1], 1, 1, 0);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			unk_0x55098D9E9AD58806(joaat("cheetah"));
			unk_0x55098D9E9AD58806(joaat("monroe"));
			unk_0x55098D9E9AD58806(joaat("entityxf"));
			unk_0x55098D9E9AD58806(joaat("feltzer2"));
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_304()
{
	func_305();
	if (unk_0x6252BC0DD8A320DB(func_249()))
	{
		if (unk_0x6252BC0DD8A320DB(joaat("cheetah")))
		{
			if (unk_0x6252BC0DD8A320DB(joaat("monroe")))
			{
				if (unk_0x6252BC0DD8A320DB(joaat("entityxf")))
				{
					if (unk_0x6252BC0DD8A320DB(joaat("feltzer2")))
					{
						if (unk_0x266D9DB5FCE4003B(100, "FM_Intro_uber"))
						{
							if (unk_0x266D9DB5FCE4003B(101, "FM_Intro_uber"))
							{
								if (unk_0x266D9DB5FCE4003B(102, "FM_Intro_uber"))
								{
									if (unk_0x266D9DB5FCE4003B(103, "FM_Intro_uber"))
									{
										if (unk_0x266D9DB5FCE4003B(104, "FM_Intro_uber"))
										{
											if (unk_0xE100DD4F82A51BDE("mp_intro_seq@"))
											{
												return 1;
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
	return 0;
}

void func_305()
{
	unk_0xEC9DAA34BBB4658C(joaat("cheetah"));
	unk_0xEC9DAA34BBB4658C(joaat("monroe"));
	unk_0xEC9DAA34BBB4658C(joaat("entityxf"));
	unk_0xEC9DAA34BBB4658C(joaat("feltzer2"));
	unk_0xEC9DAA34BBB4658C(func_249());
	unk_0xD772E6694B8472A6(100, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(101, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(102, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(103, "FM_Intro_uber");
	unk_0xD772E6694B8472A6(104, "FM_Intro_uber");
	unk_0x80813AC549A1E8AE("mp_intro_seq@");
}

int func_306(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (BitTest(uParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		unk_0xEC9DAA34BBB4658C(joaat("asterope"));
		unk_0xEC9DAA34BBB4658C(joaat("sentinel"));
		unk_0xEC9DAA34BBB4658C(func_249());
		if ((unk_0x6252BC0DD8A320DB(joaat("asterope")) && unk_0x6252BC0DD8A320DB(joaat("sentinel"))) && unk_0x6252BC0DD8A320DB(func_249()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!unk_0xFC8BFE4B41177C22(uParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_216(iVar0, &Var2, &fVar3);
					uParam0->f_58[iVar0] = unk_0x5779387E956077A6(iVar1, Var2, fVar3, 0, 0, 0);
					unk_0x20DD46D27530FAC7(uParam0->f_58[iVar0], iVar0);
					unk_0x935364B4448CD584(uParam0->f_58[iVar0], 1);
					unk_0xBA3C1A9AA7FD9616(uParam0->f_58[iVar0], 2);
					unk_0x5D7CD709B34C90F0(uParam0->f_58[iVar0], true);
				}
				if (unk_0xFC8BFE4B41177C22(uParam0->f_58[iVar0]))
				{
					if (!unk_0xFC8BFE4B41177C22(uParam0->f_74[iVar0]))
					{
						uParam0->f_74[iVar0] = unk_0x8728A378EF2B46B2(uParam0->f_58[iVar0], 4, func_249(), -1, 0, false);
						unk_0x935364B4448CD584(uParam0->f_74[iVar0], 1);
						unk_0xAAA71DD7E9059338(uParam0->f_74[iVar0], 1);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!unk_0xFC8BFE4B41177C22(uParam0->f_58[iVar0]) || !unk_0xFC8BFE4B41177C22(uParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		unk_0x55098D9E9AD58806(joaat("asterope"));
		unk_0x55098D9E9AD58806(joaat("sentinel"));
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_307(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_231(uParam0, iParam1, 0);
	if (uParam0->f_293)
	{
		if ((uParam0->f_13 + iVar0) + iParam2) <= unk_0x1DD05E817C89C737()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_239(uParam0)
	{
		return 1;
	}
	return 0;
}

int func_308(var uParam0)
{
	int iVar0;
	
	if (BitTest(uParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xD772E6694B8472A6(8, "FMIntro");
	if (unk_0x6252BC0DD8A320DB(iVar0) && unk_0x266D9DB5FCE4003B(8, "FMIntro"))
	{
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_48))
		{
			uParam0->f_48 = unk_0x5779387E956077A6(iVar0, unk_0x2A03585144C38A2A(8, 0f, "FMIntro"), 0f, 0, 0, 0);
			unk_0x88556DA0593A0748(uParam0->f_48, 8, "FMIntro", 1);
			unk_0x8BCD7C11D27FB9A1(uParam0->f_48, 5000f);
			unk_0x36D3AD4491CD32BA(uParam0->f_48);
			unk_0x4285E11B28063EE0(uParam0->f_48, false, 0);
			unk_0x55098D9E9AD58806(iVar0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0->f_48))
	{
		return 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 8);
	return 1;
}

void func_309(var uParam0, int iParam1)
{
	if (func_307(uParam0, iParam1, 0))
	{
		if (uParam0->f_293)
		{
			uParam0->f_13 = (unk_0x1DD05E817C89C737() - func_231(uParam0, iParam1, 0));
		}
		else
		{
			uParam0->f_291 = 1;
		}
	}
}

void func_310(var uParam0)
{
	uParam0->f_13 = unk_0x1DD05E817C89C737();
}

Vector3 func_311(struct<3> Param0)
{
	return (-sin(Param0.f_2) * cos(Param0.f_0)), (cos(Param0.f_2) * cos(Param0.f_0)), sin(Param0.f_0);
}

int func_312()
{
	return Global_1574993;
}

void func_313()
{
	unk_0x5E08BBBF87BC4886(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0, 0, 0);
	unk_0x5E08BBBF87BC4886(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0, 0, 0);
}

void func_314()
{
	func_222(0);
	func_221(1);
}

void func_315(bool bParam0, int iParam1, bool bParam2)
{
	func_319();
	func_317(1);
	unk_0x428C32CC68809A35(1);
	unk_0x406CBCEA35499884();
	func_256(1, 1, 1, 0, 0, 0, bParam2);
	func_316();
	func_208(12, 1, -1);
	func_209(0);
	unk_0xD7C0EA10993D3214(1, -1);
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_317(1);
	func_263(1);
	Global_2672505.f_3542 = 1;
	if (bParam0)
	{
		if (!unk_0x0721B5D4CF3ACD02())
		{
			unk_0x42B4970D598C8A72(1, iParam1);
		}
	}
}

void func_316()
{
	func_209(0);
	func_208(4, 1, -1);
	func_208(6, 1, -1);
	func_208(7, 1, -1);
	func_208(3, 1, -1);
	func_208(1, 1, -1);
	func_208(2, 1, -1);
	func_208(11, 1, -1);
	func_208(13, 1, -1);
	func_208(14, 1, -1);
	func_208(16, 1, -1);
}

void func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112300)
	{
		unk_0x665A7E873A6664BC(iVar0, iParam0);
		func_318(iVar0);
		iVar0++;
	}
}

void func_318(int iParam0)
{
	Global_112300[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112300[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112300[iParam0 /*28*/].f_4), "", 64);
	Global_112300[iParam0 /*28*/].f_23 = 0;
	Global_112300[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112300[iParam0 /*28*/].f_27 = 0;
	Global_112300[iParam0 /*28*/].f_20 = 0;
	Global_112300[iParam0 /*28*/].f_22 = 0;
}

void func_319()
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574747.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574747.f_1));
}

int func_320()
{
	if (unk_0x15CCE8886267624F())
	{
		func_322(0);
		unk_0xD2D97A8EA35312E0();
		return 1;
	}
	if (func_321() == 3)
	{
		func_322(2);
		unk_0xB63687B4F0E3E236(250f);
	}
	if (unk_0x6C91BB4DA2CAE9B1() >= 250f)
	{
		unk_0xB63687B4F0E3E236(250f);
	}
	if (unk_0xF2CF182F5FDA78DF() == 0)
	{
		unk_0xB63687B4F0E3E236(250f);
	}
	if (unk_0x6C91BB4DA2CAE9B1() <= 0f)
	{
		func_322(0);
		return 1;
	}
	return 0;
}

int func_321()
{
	return Global_1574632.f_19;
}

void func_322(int iParam0)
{
	if (Global_1574632.f_19 != iParam0)
	{
		Global_1574632.f_19 = iParam0;
	}
}

void func_323(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_327(iParam0, &iVar1);
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
				func_326(iParam0, 1);
				return;
			}
			iVar2 = unk_0x92EA98681B1610F2();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_326(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xE849FB3A0C73A0D9(iVar1))
			{
				return;
			}
			if (func_324(iParam0))
			{
				func_326(iParam0, 0);
			}
		}
		unk_0xD3EBDA853981B983(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_324(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_325(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38606[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_325(int iParam0)
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

void func_326(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_325(iParam0) };
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

var func_327(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_328(iParam0) };
	*iParam1 = unk_0x0556019E7EE8EC9A(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_328(int iParam0)
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
			Var1 = { func_329(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_329(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_329(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_329(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_329(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_329(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_329(7, 0) };
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
			Var1 = { func_329(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_329(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_329(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_329(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_329(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_329(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_329(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_329(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_329(43, 0) };
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
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_329(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_329(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_329(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_329(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_329(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_329(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_329(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_329(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_329(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_329(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_329(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_329(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_329(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_329(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_329(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_329(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_329(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_329(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_329(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_329(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_329(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_329(112, 1) };
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

struct<6> func_329(int iParam0, bool bParam1)
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

int func_330()
{
	return Global_2695823;
}

bool func_331()
{
	return Global_2694524;
}

void func_332(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x8744D2E3FC95740E(&(Global_1945454.f_1), 13);
		func_357(bParam0, 0);
	}
	func_355(0);
	func_333(66);
}

void func_333(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_312();
	if (Global_1575060)
	{
		sVar1 = func_354(iParam0);
		iVar2 = unk_0x70E57E9927B6BA58(sVar1);
		uVar3 = func_353(&Global_2696937, 1, 0);
		func_352(&Global_2696935, 1, 0);
		unk_0x350F7DB8B2765EC2(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_334();
	}
	Global_1574993 = iParam0;
}

void func_334()
{
	if (Global_2694449)
	{
		if (func_336())
		{
			unk_0x8F72AF14CE5AACE4(0);
			func_335();
		}
	}
}

void func_335()
{
	if (Global_2694446)
	{
		if (!Global_2694445)
		{
			Global_2694445 = 1;
			Global_2694454 = unk_0x1DD05E817C89C737();
			Global_2694453 = 1;
		}
	}
}

int func_336()
{
	int iVar0;
	
	if (Global_2684801.f_6618 && Global_2694446)
	{
		if (func_341(0))
		{
			if (func_339() && !unk_0x15CCE8886267624F())
			{
				if ((((Global_2684801.f_6640 == 122 || Global_2684801.f_6640 == 123) || Global_2684801.f_6640 == 124) || Global_2684801.f_6640 == 125) || Global_2684801.f_6640 == 154)
				{
					return 1;
				}
				if (Global_2684801.f_6640 > -1)
				{
					iVar0 = func_338(Global_2684801.f_6640);
					if (iVar0 == 24)
					{
						return 1;
					}
				}
				if (BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_73.f_2, 26))
				{
					return 1;
				}
				if (BitTest(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_73.f_2, 27))
				{
					return 1;
				}
				if (func_337())
				{
					return 1;
				}
				if (Global_1963026)
				{
					return 1;
				}
				if (BitTest(Global_4718592.f_37, 23))
				{
					if (!func_258(unk_0x259BE71D8A81D4FA(), 0) && !func_261())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_337()
{
	return Global_2683864.f_24;
}

int func_338(int iParam0)
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

int func_339()
{
	if (func_340() == 0)
	{
		return 1;
	}
	return 0;
}

int func_340()
{
	return Global_1574632.f_18;
}

int func_341(int iParam0)
{
	if (func_351(unk_0x259BE71D8A81D4FA()) && BitTest(Global_1950108.f_4, 22))
	{
		return 0;
	}
	if (Global_1577872)
	{
		return 0;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if ((Global_2694447 && func_349()) || Global_2694447 == 0)
	{
		return 1;
	}
	if (Global_2684801.f_6640 == 123 && Global_2694450)
	{
		return 1;
	}
	if (Global_2694448)
	{
		if (Global_2684801.f_6640 == 122)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		if (!func_258(unk_0x259BE71D8A81D4FA(), 0) && !func_261())
		{
			return 1;
		}
	}
	if (Global_2694451)
	{
		if (iParam0 == 0)
		{
			if ((Global_2684801.f_6640 == 123 || (Global_2684801.f_6640 == 124 && func_347() == 1)) || Global_2684801.f_6640 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2684801.f_6618 || func_345(-1046478848)) && Global_2694452)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		return 1;
	}
	if (func_342() || func_337())
	{
		return 1;
	}
	return 0;
}

var func_342()
{
	return func_343(unk_0x259BE71D8A81D4FA());
}

var func_343(int iParam0)
{
	return func_344(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_344(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_345(float fParam0)
{
	struct<3> Var0;
	
	Var0 = { func_346(unk_0x259BE71D8A81D4FA()) };
	if (Var0.f_2 < fParam0)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (!unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
				{
					return 1;
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

Vector3 func_346(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_347()
{
	return func_348(unk_0x259BE71D8A81D4FA());
}

var func_348(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

bool func_349()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_350()
{
	return BitTest(Global_2683864.f_2, 11);
}

int func_351(int iParam0)
{
	if (iParam0 != func_141())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_338(Global_2657589[iParam0 /*466*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

void func_352(var uParam0, bool bParam1, bool bParam2)
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

int func_353(var uParam0, bool bParam1, bool bParam2)
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

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 69:
			return "TRANSITION_STATE_SPAWN_INTO_PERSONAL_VEHICLE";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_355(int iParam0)
{
	var uVar0;
	
	uVar0 = func_356();
	Global_1574992 = iParam0;
}

var func_356()
{
	return Global_1574992;
}

void func_357(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_359(&Global_23051, bParam1);
	unk_0xF5AB6155B7363507(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0xF4DB2666A609235A();
			func_358(0);
			if (unk_0xFC8BFE4B41177C22(Global_1577842))
			{
				if (unk_0x7C9905528EE2C3AB(Global_1577842, 0))
				{
					if (!unk_0x110821AE6C63DD4F(Global_1577842))
					{
						unk_0xEE0BCDB1B5E36BCB(Global_1577842, 0, 0);
					}
					unk_0x734A9F4537A31459(&Global_1577842);
				}
			}
		}
	}
}

void func_358(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2696913 = 0;
	}
	Global_1574632.f_18 = iParam0;
}

void func_359(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x78411E34CF90EA8C(uParam0->f_9))
	{
		if (unk_0xBC886554B5888A64(uParam0->f_9))
		{
			func_360(0);
		}
		unk_0x85E6A1E36B5E2E4D(uParam0->f_9, 0);
	}
	if (!Global_44411)
	{
		unk_0x9AFEC71EEA2F7754(1);
		unk_0x9B669C0440D2AB57(0f);
		unk_0xC30B691CAD767629(0f);
	}
	Global_2635559.f_604 = 0f;
	if (!bParam1)
	{
		unk_0xE37AF9002E782BA0(0, 0, 0, 1, 0, 0);
	}
}

void func_360(int iParam0)
{
	Global_23129 = iParam0;
}

void func_361(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_366(1, 0, 1);
	}
	else
	{
		func_362(iParam1);
	}
}

void func_362(int iParam0)
{
	func_365();
	if (iParam0 == 0)
	{
		if (unk_0xA7D416B098808337())
		{
			return;
		}
	}
	if (func_364() == 0 || unk_0x4D9174D8796EA622())
	{
		func_363(1);
		unk_0xDD98B34A4A3AFA89(0);
		unk_0xDD98B34A4A3AFA89(0);
	}
}

void func_363(int iParam0)
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_364()
{
	return Global_1574632.f_20;
}

void func_365()
{
	Global_2696217 = 1;
}

void func_366(int iParam0, bool bParam1, bool bParam2)
{
	if (func_367())
	{
		return;
	}
	if ((func_364() == 1 || unk_0x4D9174D8796EA622()) || iParam0)
	{
		func_363(0);
		unk_0xDD98B34A4A3AFA89(1);
		if (!bParam1)
		{
			unk_0xDD98B34A4A3AFA89(1);
		}
		if (bParam2)
		{
			unk_0x063FC71162B675A0();
		}
	}
}

int func_367()
{
	if (func_368())
	{
		return Global_2694453;
	}
	return 0;
}

int func_368()
{
	if (Global_2694446)
	{
		return Global_2694445;
	}
	return 0;
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5A65DF56B098A5F1();
		unk_0xECDFDC2E8AC2D613(-1);
		unk_0x474491073FE815A8(1);
		unk_0xEFAF1ADDE0F583C3(1);
		unk_0xA0265306DFF63938(1f);
		unk_0x283C0970282AA5F3(3);
		unk_0xAD9B1C8FED6B4D96(3);
	}
	else
	{
		unk_0xA63572E348CC4CFB(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
		unk_0xECDFDC2E8AC2D613(0);
		unk_0x474491073FE815A8(0);
		unk_0xEFAF1ADDE0F583C3(0);
		unk_0xA0265306DFF63938(0f);
		unk_0x283C0970282AA5F3(0);
		unk_0xAD9B1C8FED6B4D96(0);
	}
}

void func_370(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_314();
	func_221(1);
	func_209(1);
	func_208(12, 1, -1);
	func_380();
	unk_0x938C85923AD6778A(0);
	if (bParam0)
	{
		unk_0xBD9FF88287E84727(unk_0x259BE71D8A81D4FA(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_371(unk_0x259BE71D8A81D4FA(), 0, iVar0, 0);
	if (bParam5)
	{
		if (unk_0xDC91B9320E14F119(unk_0x4A8C381C258A124D()))
		{
			unk_0xD0B00571D4BDDC97(unk_0x4A8C381C258A124D(), 0);
		}
	}
}

void func_371(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_379())
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
		if (!func_339())
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
				else if (bVar14 || (!func_258(unk_0x259BE71D8A81D4FA(), 0) && !func_261()))
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
					func_376(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_375(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					unk_0x5D7CD709B34C90F0(iVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(iVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(iVar27) && unk_0x69CD279BFCFE278E(iVar27))
				{
					unk_0xAF8337BF5A296283(iVar27);
				}
				unk_0x9FF00EA9A61211D2(iVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_374();
					func_373();
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
				if (!func_375(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
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
					if (func_372(Global_4718592.f_166301))
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

bool func_372(int iParam0)
{
	return iParam0 == 17;
}

void func_373()
{
	struct<3> Var0;
	
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_374()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_375(int iParam0)
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

void func_376(int iParam0, int iParam1, int iParam2)
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
				func_378();
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
		if (func_258(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_377(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_377(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_378()
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

int func_379()
{
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_380()
{
	Global_23131.f_5 = 1;
}

int func_381()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_382(int iParam0)
{
	unk_0x0FB8E752BCC547A9(unk_0x56E414973C2A8C0E(iParam0), 346, 1);
}

void func_383(var uParam0)
{
	if (!BitTest(uParam0->f_3, 12))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_3), 12);
	}
	else
	{
		if (uParam0->f_6 > 30)
		{
			if (!Global_1935678)
			{
				Global_1935678 = 1;
				Global_1935679 = 1;
			}
		}
		if (uParam0->f_6 > 31)
		{
			if (unk_0xA0C7B98BCF1EEF9E(Global_1935677))
			{
				if (uParam0->f_5 < 23)
				{
					switch (uParam0->f_5)
					{
						case 0:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 33)
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_388("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_388("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_387("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("artdir", "AARON GARBUT", 210f, "|", 1);
									func_385("artdir", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 33, -3390))
							{
								func_384("artdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 1:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_307(uParam0, 33, -2940))
								{
									func_388("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_387("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_385("techdir", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 33, -450))
							{
								func_384("techdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 2:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 35)
								{
									func_388("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_387("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_385("assartdir", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 35)
							{
								func_384("assartdir", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 3:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 36)
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_388("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_388("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_387("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_385("asstecdir", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 36, -4740))
							{
								func_384("asstecdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 4:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_307(uParam0, 36, -3810))
								{
									func_388("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_387("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_385("leadprog", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 36, -600))
							{
								func_384("leadprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 5:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 37)
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_388("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_388("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_387("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_385("senprog", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 37, -1350))
							{
								func_384("senprog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 6:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 38)
								{
									func_388("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_387("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_385("prog", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 38, -4320))
							{
								func_384("prog", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 7:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_307(uParam0, 38, -3240))
								{
									if (((unk_0x8608526719A575EE() == 9 || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 12)
									{
										func_388("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_388("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_387("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_385("socclub", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 38, -870))
							{
								func_384("socclub", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 8:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 39)
								{
									func_388("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_387("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_385("audio", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 39, -1620))
							{
								func_384("audio", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 9:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 40)
								{
									func_388("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_387("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_385("scrlead", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 40, -1470))
							{
								func_384("scrlead", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 10:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 41)
								{
									func_388("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_387("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_385("script1", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 41, -1200))
							{
								func_384("script1", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 11:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 42)
								{
									func_388("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_387("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_385("script2", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 42, -1320))
							{
								func_384("script2", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 12:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 43)
								{
									func_388("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_387("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_387("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_385("visdes", 0.05f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 43, -1320))
							{
								func_384("visdes", 0.05f);
								uParam0->f_5++;
							}
							break;
						
						case 13:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 44)
								{
									func_388("uides", 40f, 20f, "right", 0f, 0.3f);
									func_387("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_385("uides", 0f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 45, -1650))
							{
								func_384("uides", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 14:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 46)
								{
									func_388("concre", 0f, 20f, "left", 0f, 0.3f);
									func_387("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_386("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_385("concre", 0f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 46, -1950))
							{
								func_384("concre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 15:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 47)
								{
									func_388("devass", 0f, 400f, "right", 0f, 0f);
									func_387("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_385("devass", 0f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (uParam0->f_6 > 47)
							{
								func_384("devass", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 16:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 48)
								{
									func_388("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_387("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_387("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_385("qasup", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 48, -1320))
							{
								func_384("qasup", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 17:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (uParam0->f_6 >= 49)
								{
									func_388("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_387("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_385("senta", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 49, -5070))
							{
								func_384("senta", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 18:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_307(uParam0, 49, -3750))
								{
									func_388("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_387("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_385("asspro", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_307(uParam0, 49, -720))
							{
								func_384("asspro", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 19:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_266(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 2468)
									{
										func_388("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_387("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_386("animdir", "ROB NELSON", 200f, "|", 1);
										func_385("animdir", 0.16f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (uParam0->f_6 >= 50)
								{
									func_388("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_387("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_386("animdir", "ROB NELSON", 90f, "|", 1);
									func_385("animdir", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_266(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 6123)
								{
									func_384("animdir", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 1898)
							{
								func_384("animdir", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 20:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_266(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0xF1FEB57E542C41F1())
									{
										func_388("producer", 65f, 55f, "right", 0f, 0f);
										func_387("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_386("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_385("producer", 0f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 2452)
								{
									func_388("producer", 0f, 100f, "left", 0.3f, 0f);
									func_387("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_386("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_385("producer", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_266(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0xF1FEB57E542C41F1())
								{
									func_384("producer", 0f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0xF1FEB57E542C41F1())
							{
								func_384("producer", 0f);
								uParam0->f_5++;
							}
							break;
						
						case 21:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_266(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 13265)
									{
										func_388("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_387("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_386("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_385("vpcre", 0.16f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 6921)
								{
									func_388("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_387("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_386("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_385("vpcre", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_266(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 16955)
								{
									func_384("vpcre", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 10513)
							{
								func_384("vpcre", 0.16f);
								uParam0->f_5++;
							}
							break;
						
						case 22:
							if (!BitTest(uParam0->f_4, uParam0->f_5))
							{
								if (func_266(uParam0))
								{
									if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 18077)
									{
										Global_1935679 = 0;
										func_388("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_387("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_386("execpro", "SAM HOUSER", 165f, "|", 1);
										func_385("execpro", 0.16f);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
									}
								}
								else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 12358)
								{
									Global_1935679 = 0;
									func_388("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_387("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_386("execpro", "SAM HOUSER", 190f, "|", 1);
									func_385("execpro", 0.16f);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_4), uParam0->f_5);
								}
							}
							else if (func_266(uParam0))
							{
								if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 21785)
								{
									func_384("execpro", 0.16f);
									uParam0->f_5++;
								}
							}
							else if (unk_0xFD216000DC314A92() && unk_0x15EF8F22A719BE5E() > 15333)
							{
								func_384("execpro", 0.16f);
								uParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1935679)
				{
					unk_0xA91A4C18A2DB01BD(Global_1935677, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_384(char* sParam0, float fParam1)
{
	unk_0x88F483FBD433696A(Global_1935677, "HIDE");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam1);
	unk_0xE6B753D52F4CA222();
}

void func_385(char* sParam0, float fParam1)
{
	unk_0x88F483FBD433696A(Global_1935677, "SHOW_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam1);
	unk_0xE6B753D52F4CA222();
}

void func_386(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x88F483FBD433696A(Global_1935677, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam1);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam2);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam3);
	unk_0xCFAD3D478C87321A();
	unk_0x557F1E2300EF1A3E(iParam4);
	unk_0xE6B753D52F4CA222();
}

void func_387(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	unk_0x88F483FBD433696A(Global_1935677, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam1);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam2);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam3);
	unk_0xCFAD3D478C87321A();
	unk_0x557F1E2300EF1A3E(iParam4);
	unk_0xE6B753D52F4CA222();
}

void func_388(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x88F483FBD433696A(Global_1935677, "SETUP_CREDIT_BLOCK");
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam0);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam1);
	unk_0x74BF156C860580D4(fParam2);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(sParam3);
	unk_0xCFAD3D478C87321A();
	unk_0x74BF156C860580D4(fParam4);
	unk_0x74BF156C860580D4(fParam5);
	unk_0xE6B753D52F4CA222();
}

void func_389(var uParam0)
{
	if (uParam0->f_6 >= 33 && uParam0->f_6 < 51)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_34))
		{
			if (unk_0xD9F5E1FEFD1329E4(uParam0->f_34, 0))
			{
				unk_0x748651DF4DA0A890(unk_0x0D1381B6E0F3987D(uParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_390()
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_414.f_3))
	{
		switch (Local_414.f_2)
		{
			case 2:
				if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 1))
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (func_410(Local_414.f_3))
						{
							if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
								if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_enter_vehicle")) != 0)
								{
									unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_414.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
							{
								if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_414.f_3)))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4), 2);
									func_409(1);
								}
								else
								{
									unk_0x60040CDD28AA1BC3(-1031.788f, -2731.816f, 19.0546f, 50f, 0, 0, 0, 0, 0, 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_410(Local_414.f_3))
				{
					if (!func_408(Local_414.f_4))
					{
						if (BitTest(uLocal_582, 26))
						{
							if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_414.f_4), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_414.f_4), joaat("script_task_vehicle_mission")) != 0)
							{
								unk_0x30CCF17FEE4BDA53(unk_0xC35A3A4C05A4831B(Local_414.f_4), unk_0xE38610F405049F71(Local_414.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, 0);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_582, 27))
				{
					if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
					{
						if (!func_125())
						{
							if (!unk_0x4D9174D8796EA622())
							{
								unk_0x8F72AF14CE5AACE4(800);
							}
						}
					}
					else if (unk_0x15CCE8886267624F())
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 27);
					}
				}
				else if (!BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 4))
				{
					if (func_397(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						unk_0x60040CDD28AA1BC3(-649.4202f, -954.0247f, 20.5269f, 20f, 0, 0, 0, 0, 0, 0, 0);
						unk_0x59ABC1F373CE1F5B();
						unk_0x9136D50973A71229();
						unk_0x64BB72494B9DF6DC(0);
						unk_0xD815D4BD1AE9E85A(0, 1065353216);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_408(Local_414.f_4))
				{
					if (!BitTest(uLocal_582, 29))
					{
						if (func_410(Local_414.f_3))
						{
							unk_0x2D864CC37DDFA963(unk_0xC35A3A4C05A4831B(Local_414.f_4), unk_0xE38610F405049F71(Local_414.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, 1);
							unk_0x10B228D2FDB7AF16(800);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 29);
						}
					}
					else if (!BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 5))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_414.f_4), joaat("script_task_vehicle_park")) == 7)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle")) != 0)
						{
							unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
						}
					}
					else if (!BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 6))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3), 6);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_848), 4);
						unk_0x8744D2E3FC95740E(&(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4), 2);
						func_371(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
						func_396();
						func_409(0);
						func_34("HLP_TAXI", -1);
						if (func_57())
						{
							func_45(-1834046564, 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_393(-200, 0);
							unk_0x46B2ECD9DD5C325A(200, 0, 0, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_408(Local_414.f_4))
				{
					if (func_410(Local_414.f_3))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_414.f_4), joaat("script_task_vehicle_drive_wander")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_414.f_4), joaat("script_task_vehicle_drive_wander")) != 0)
						{
							unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_414.f_4), 1);
							unk_0x7C8E9DE09D4AD3FF(unk_0xC35A3A4C05A4831B(Local_414.f_4), unk_0xE38610F405049F71(Local_414.f_3), 12f, 786599);
							func_392(&(Local_414.f_3));
							func_392(&(Local_414.f_4));
						}
					}
				}
				break;
		}
		if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 1))
		{
			unk_0x693ACD1AA0BDB375(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!BitTest(uLocal_582, 26))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 26);
			}
		}
		if (!BitTest(uLocal_582, 28))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
			{
				if (!func_200(&uLocal_247))
				{
					func_220();
					func_22(&uLocal_247, 0, 0);
				}
				else if (func_199(&uLocal_247, 5000, 0))
				{
					if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 28);
					}
				}
			}
		}
		if (!BitTest(uLocal_582, 30))
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 5))
			{
				if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_582, 30);
				}
			}
		}
		if (!BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 6))
		{
			func_391();
		}
		if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_4, 2))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
				}
			}
		}
	}
}

void func_391()
{
	Global_2804741.f_258 = 1;
}

void func_392(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

void func_393(int iParam0, int iParam1)
{
	func_395(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_394(iParam0, 0);
	}
}

void func_394(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_395(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_4 = iVar1;
	Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_3 = (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_394(iVar1, 0);
	}
}

void func_396()
{
	unk_0xB211E45F1FE1ED2D(0, 22, 1);
	unk_0xB211E45F1FE1ED2D(0, 36, 1);
	unk_0xB211E45F1FE1ED2D(0, 32, 1);
	unk_0xB211E45F1FE1ED2D(0, 34, 1);
	unk_0xB211E45F1FE1ED2D(0, 35, 1);
	unk_0xB211E45F1FE1ED2D(0, 33, 1);
	unk_0xB211E45F1FE1ED2D(0, 31, 1);
	unk_0xB211E45F1FE1ED2D(0, 30, 1);
	unk_0xB211E45F1FE1ED2D(0, 44, 1);
	unk_0xB211E45F1FE1ED2D(0, 141, 1);
	unk_0xB211E45F1FE1ED2D(0, 140, 1);
	unk_0xB211E45F1FE1ED2D(0, 263, 1);
	unk_0xB211E45F1FE1ED2D(0, 264, 1);
	unk_0xB211E45F1FE1ED2D(0, 143, 1);
	unk_0xB211E45F1FE1ED2D(0, 24, 1);
	unk_0xB211E45F1FE1ED2D(0, 257, 1);
	unk_0xB211E45F1FE1ED2D(0, 263, 1);
	unk_0xB211E45F1FE1ED2D(0, 264, 1);
	unk_0xB211E45F1FE1ED2D(0, 143, 1);
	unk_0xB211E45F1FE1ED2D(0, 262, 1);
	unk_0xB211E45F1FE1ED2D(0, 261, 1);
	unk_0xB211E45F1FE1ED2D(0, 37, 1);
	unk_0xB211E45F1FE1ED2D(0, 25, 1);
	unk_0xB211E45F1FE1ED2D(0, 26, 1);
}

int func_397(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23131.f_6 = 1;
	if (Global_2672505.f_1024 && Global_2672505.f_1032)
	{
		func_405(0, bParam7);
		return 1;
	}
	if (unk_0x3555462DB47B7AB1() && !bParam7)
	{
		if (Global_2672505.f_1024)
		{
			func_405(0, bParam7);
		}
		return 0;
	}
	if ((unk_0x787F8EE1F6FBDC6D() && !bParam7) && !unk_0x705A7AB2D4BC0A9B())
	{
		return 0;
	}
	if (!func_404(0))
	{
		if (func_403(unk_0x259BE71D8A81D4FA(), 1, 0) && !(func_402() || func_401()))
		{
			if (((bParam7 && func_14(unk_0x259BE71D8A81D4FA(), 1, 0)) && unk_0x3555462DB47B7AB1()) && Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_232 == 1)
			{
			}
			else if (func_312() == 28)
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
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2672505.f_1030) < func_400(0))
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
				func_399(0);
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
				func_405(bParam4, bParam7);
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
			if (func_398(&(Global_2672505.f_1031), Param0, fParam1, iVar0))
			{
				func_405(bParam4, bParam7);
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
					func_405(bParam4, bParam7);
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
				func_405(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_398(var uParam0, struct<3> Param1, float fParam2, var uParam3)
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

void func_399(int iParam0)
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

int func_400(bool bParam0)
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

bool func_401()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 12)) && Global_1969891 == 8);
}

var func_402()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1969892, 0));
}

int func_403(int iParam0, bool bParam1, int iParam2)
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

bool func_404(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_405(bool bParam0, bool bParam1)
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
	func_373();
	if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_267.f_31, 14) && !func_407())
	{
		func_406();
	}
}

void func_406()
{
	Global_2802791.f_92 = 1;
}

int func_407()
{
	if (!unk_0x834C960822A4683F() && !func_404(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174409[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_408(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

void func_409(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 15))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 15);
		}
	}
	else if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 15))
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 15);
	}
}

int func_410(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_411(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_411(int iParam0)
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

void func_412(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_65(iParam0, 8, 0);
			func_413(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_63(iParam0, 8, 0);
		func_413(iParam0);
	}
}

void func_413(int iParam0)
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_414(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_100733.f_9[iParam0] = 1;
	}
	else
	{
		Global_100733.f_9[iParam0] = 0;
	}
}

void func_415(bool bParam0)
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
		func_413(iVar0);
		iVar0++;
	}
}

void func_416(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_417()
{
	return Local_414.f_0;
}

int func_418()
{
	return 1;
}

int func_419(int iParam0)
{
	return Local_581[iParam0 /*5*/];
}

int func_420(int iParam0)
{
	return Local_581[iParam0 /*5*/].f_2;
}

int func_421(bool bParam0)
{
	if (func_423())
	{
		if (bParam0)
		{
			if (!Global_1836591 && !func_422(unk_0x259BE71D8A81D4FA(), 2))
			{
				unk_0xDCAFFD08A08087EB("MinigameTransitionIn", 0, 1);
				func_361(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_422(int iParam0, int iParam1)
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

bool func_423()
{
	return Global_2672505.f_22;
}

void func_424(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (bLocal_588)
		{
			if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 2))
			{
				if (!BitTest(uLocal_582, 31))
				{
					func_32(119, 1, -1, 1);
					func_32(115, 1, -1, 1);
				}
				func_761(1);
				bVar0 = true;
			}
		}
		else if (BitTest(Local_581[unk_0xAE032CEDCF23C6D5() /*5*/].f_3, 1))
		{
			if (!BitTest(uLocal_582, 31))
			{
				func_32(119, 1, -1, 1);
				func_32(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_219(&Local_62, 0, bParam0);
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Global_2672505.f_3542)
		{
			func_754(0, 1, 0, 1);
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_409(0);
	}
	unk_0xD7B6A43ACC36D868(Local_62.f_122, 0);
	unk_0x2AF2D6F164BD6F5A(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	unk_0x2AF2D6F164BD6F5A(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	unk_0x8744D2E3FC95740E(&(Global_2793046.f_848), 4);
	func_98(0);
	func_61(0);
	func_753();
	func_752(iLocal_61, 0);
	func_198(&(Global_2672505.f_3792));
	Global_2672505.f_3790 = 0;
	Global_2672505.f_3789 = 0;
	Global_2672505.f_3791 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 1);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 1);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 1);
	}
	if (bVar0)
	{
		func_427(0, 0, 0, 0, 1);
	}
	else
	{
		unk_0x428C32CC68809A35(1);
		func_427(0, 0, 3, 1, 1);
	}
	unk_0x8744D2E3FC95740E(&(Global_2793046.f_848), false);
	func_415(0);
	func_414(4, 0);
	func_414(1, 0);
	func_414(0, 0);
	func_414(2, 0);
	func_414(3, 0);
	func_412(iLocal_61, 0);
	func_396();
	func_35();
	if (unk_0xC450B06E5AAA0985(Global_100733.f_263[iLocal_61]))
	{
		unk_0xBC64B805EE071A37(Global_100733.f_263[iLocal_61], 0);
	}
	if (unk_0xC450B06E5AAA0985(uLocal_585))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_585);
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_426(0);
		func_201(0);
	}
	func_425(Local_414.f_5);
}

void func_425(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Param0.f_0)) >= 1000)
		{
			unk_0x0A3E878F88F44843();
		}
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_426(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 5);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 5);
	}
}

void func_427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var9;
	int iVar10;
	char* sVar11;
	struct<2> Var12;
	bool bVar13;
	int iVar14;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	iVar1 = Global_1853910[iVar0 /*862*/];
	func_751();
	func_747();
	unk_0xF27E6847E6EE009E(0);
	func_746();
	Global_1057165 = 0;
	Global_1835455 = 0;
	func_745();
	unk_0x6E8BBCAC6E64214C(0);
	func_744();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836381 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	func_743(0);
	Global_1836370 = 0;
	Global_1836369 = 0;
	Global_1836394 = 0;
	Global_1836611 = 0;
	Global_1836617 = 0;
	Global_1836100 = 0;
	Global_1837312 = 1;
	Global_1836582 = 0;
	Global_1836382 = -1;
	func_742(0);
	unk_0x8744D2E3FC95740E(&(Global_2621446.f_1), 5);
	if (!func_741() && !func_739())
	{
		func_738();
	}
	func_737();
	func_736();
	func_735();
	func_734();
	func_733();
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_732();
		func_731();
	}
	if (func_730() || !func_729())
	{
		func_728();
		func_727(1, 1, 1);
		func_726();
		func_725();
		if (iVar0 != -1)
		{
			Global_1890444[iVar0 /*129*/].f_1 = 0;
			Global_1890444[iVar0 /*129*/].f_2 = 0;
			Global_1890444[iVar0 /*129*/] = 0;
		}
	}
	func_724();
	if ((((Global_4718592 != 6 && func_723(Global_4718592.f_113724) != 14) && func_723(Global_4718592.f_113724) != 15) && !func_349()) && !func_739())
	{
		if (func_14(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
			{
				unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 1);
			}
		}
	}
	Global_1835476 = 0;
	if (Global_1926705.f_9 == 4)
	{
		if (func_722(unk_0x259BE71D8A81D4FA()) || func_721(unk_0x259BE71D8A81D4FA()))
		{
			Global_1835476 = 1;
		}
	}
	func_719();
	if (func_718())
	{
		func_717();
	}
	func_716();
	Global_4718592.f_114281 = 0;
	Global_1926664.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !func_715())
	{
		if (BitTest(Global_4718592.f_14, 17))
		{
			unk_0xC4A38E060739AAF9(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xD8D822FF4C3DCD7D(1);
		}
		else
		{
			unk_0xC4A38E060739AAF9(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD8D822FF4C3DCD7D(0);
		}
	}
	StringCopy(&(Global_4718592.f_113716), "", 32);
	if (!func_739())
	{
		unk_0x0C9B2F8C2BD128C2();
		unk_0x4EB223432F8FA0A0(18);
		if ((bParam3 && !func_714()) && !func_713())
		{
			unk_0x43AE50D2A33F6E2A();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1889666[iVar3] = 0;
		Global_1889633[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2684801.f_6007), 3);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_2684801.f_6007), 3);
	}
	if (iVar0 != -1 && Global_2683864.f_669.f_10 != 0)
	{
		Global_1890444[unk_0x259BE71D8A81D4FA() /*129*/].f_2 = Global_2683864.f_669.f_10;
	}
	if (func_423() || (iVar0 != -1 && BitTest(Global_1853910[iVar0 /*862*/].f_861, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			func_711();
			Global_4718592 = 0;
		}
		else
		{
			func_711();
		}
		func_710();
		func_709(1, 1);
		func_727(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1890444[iVar0 /*129*/].f_1 = 0;
			Global_1890444[iVar0 /*129*/].f_2 = 0;
			Global_1890444[iVar0 /*129*/] = 0;
		}
		func_708(1);
		if (func_707())
		{
			func_706();
		}
		if (!func_17(unk_0x259BE71D8A81D4FA()))
		{
			func_704(4);
		}
		func_726();
		func_703(0);
		func_702();
		Global_1837304 = 0;
	}
	if (!func_701())
	{
		func_700();
		if (func_699())
		{
			if (func_698())
			{
				func_710();
			}
		}
		func_708(1);
		if (!func_697())
		{
			Global_2684801.f_6346 = 0;
			Global_2684801.f_6347 = 0;
			Global_2684801.f_6345 = 0;
			Global_2684801.f_6344 = 0;
			Global_2684801.f_6525 = 0;
		}
	}
	else
	{
		func_696(unk_0x259BE71D8A81D4FA(), 0);
	}
	func_695((Global_1926705.f_9 != 4 && !func_701()));
	func_694((Global_1926705.f_9 != 4 && !func_701()));
	func_693((Global_1926705.f_9 != 4 && !func_701()));
	func_692((Global_1926705.f_9 != 4 && !func_701()));
	func_691((Global_1926705.f_9 != 4 && !func_701()));
	if (func_697())
	{
		Global_2684801.f_6436 = 1;
	}
	else
	{
		Global_2684801.f_6436 = 0;
	}
	if (!func_701())
	{
		if (func_697())
		{
			Global_2684801.f_6437 = 1;
		}
		else
		{
			Global_2684801.f_6437 = 0;
		}
	}
	if (func_689())
	{
		if (func_688())
		{
			Global_2684801.f_6438 = 1;
		}
		else
		{
			Global_2684801.f_6438 = 0;
		}
	}
	if (!func_741())
	{
		Global_1926731.f_1345 = 0;
	}
	if (!func_701() && !func_741())
	{
		func_709(1, Global_1926705.f_9 != 4);
		func_727(1, 1, 0);
		func_687(0);
		func_686();
		Global_1837306 = 0;
		if (iVar0 != -1)
		{
			Global_1890444[iVar0 /*129*/].f_1 = 0;
			Global_1890444[iVar0 /*129*/].f_2 = 0;
			Global_1890444[iVar0 /*129*/] = 0;
		}
	}
	func_683(1, -1);
	if (func_682())
	{
		func_681();
	}
	if (unk_0x834C960822A4683F())
	{
		unk_0xDC5F81D7F618A8A6();
	}
	if ((!func_714() && !func_701()) && !func_713())
	{
		func_676();
	}
	Global_4718592.f_114277 = 0;
	func_675();
	Global_1836363 = -1;
	Global_1889715 = -1;
	Global_1889704 = -1;
	Global_1889707 = -1;
	Global_1836368 = 0;
	Global_1889705 = 0;
	Global_1836593 = 0;
	Global_1836585 = 0;
	Global_1889716 = 0;
	func_674(0);
	func_673();
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_861), 7);
	Global_1889702 = 0f;
	Global_1889703 = 0f;
	Global_1836595 = 0;
	Global_1836596 = -1;
	func_672(0);
	Global_1836583 = 0;
	Global_1836101 = 0;
	func_671();
	unk_0xCFBD89D2F1F18961("WantedMusicDisabled", 0);
	unk_0xCFBD89D2F1F18961("DisableFlightMusic", 0);
	func_670(1);
	if (func_669())
	{
		func_668();
	}
	if (func_667())
	{
		if (func_665(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xC259E614564DAB8F() < 2)
			{
				func_664();
				func_663(1);
			}
			else
			{
				func_662();
			}
			if (Global_1926705.f_9 != -1)
			{
				func_661();
			}
		}
		else if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 0)
		{
			if (Global_1926705.f_9 != -1)
			{
				func_661();
			}
		}
	}
	bVar4 = func_18(iVar0);
	Global_1853910[iVar0 /*862*/].f_194 = 0;
	if (bVar4 && !func_741())
	{
		func_660();
	}
	if (!bVar4)
	{
		func_659(0);
	}
	if ((func_658() != 40 && func_658() != 39) && !func_657())
	{
		Global_1835430 = { 0f, 0f, 0f };
	}
	if (func_656() && func_257())
	{
	}
	else
	{
		func_655();
	}
	func_654();
	func_663(0);
	iVar6 = 0;
	if (!bVar4)
	{
		if (Global_1926705.f_9 == 6)
		{
			iVar6 = 1;
		}
		if (!func_653())
		{
			func_652(0, iVar6);
		}
	}
	unk_0x725A501C189FDB29(0);
	if (unk_0x76CD105BCAC6EB9F())
	{
		switch (Global_1926705.f_9)
		{
			case 1:
				if (!func_651() && func_648(0) > 0)
				{
					Global_1945075[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_646();
					func_645();
				}
				break;
			
			case 6:
				Global_1837304 = 0;
				if (!bVar4)
				{
					func_646();
				}
				func_645();
				Global_1926705 = 0;
				Global_1926705.f_23 = { 0f, 0f, 0f };
				unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
				StringCopy(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_226), "", 24);
				Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_223 = { 0f, 0f, 0f };
				func_644(0);
				break;
			
			case 2:
				func_643(0);
				if (!func_642() || (func_642() && unk_0xD6F9DEE4765092A9(&(Global_2683864.f_33))))
				{
					func_641(Global_1926705.f_17);
					func_640(Global_1926705.f_17);
				}
				iVar5 = Global_1853910[iVar0 /*862*/].f_10;
				if (iVar5 != func_141())
				{
					if (unk_0x762604C40829DB72(iVar5))
					{
						Global_2684801.f_6008 = { func_78(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && func_642()) && unk_0x7F258099B06D4C7C() == 1)
				{
					Global_2684801.f_6008 = { func_639() };
				}
				if (((((Global_4718592.f_1200 > 1 && !func_631()) && !func_630(Global_4718592.f_113724)) && !func_629(Global_4718592.f_113724)) && Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_28 > -1) && Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_28 < 4)
				{
					func_628(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_28);
				}
				else
				{
					func_627();
				}
				break;
			
			case 3:
				func_643(0);
				iVar2 = 1;
				func_626();
				iVar5 = Global_1853910[iVar0 /*862*/].f_10;
				if (iVar5 != func_141())
				{
					if (unk_0x762604C40829DB72(iVar5))
					{
						Global_2684801.f_6008 = { func_78(iVar5) };
					}
				}
				if (((Global_4718592.f_1200 > 1 && !func_631()) && !func_630(Global_4718592.f_113724)) && !func_629(Global_4718592.f_113724))
				{
					func_628(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_28);
				}
				else
				{
					func_627();
				}
				break;
			
			case 4:
				func_643(0);
				iVar2 = 1;
				if (func_625())
				{
					func_624();
				}
				else if (func_623())
				{
				}
				else
				{
					if (!(func_622() || func_697()) || !func_621())
					{
						Global_2684801.f_6346 = 0;
						Global_2684801.f_6347 = 0;
					}
					if (!func_621())
					{
						Global_2684801.f_6345 = 0;
						Global_2684801.f_6344 = 0;
					}
				}
				if (func_722(unk_0x259BE71D8A81D4FA()) || func_721(unk_0x259BE71D8A81D4FA()))
				{
					Global_786435.f_34++;
				}
				else if (func_620())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_618())
				{
					Global_1948305.f_17++;
				}
				else if (func_337())
				{
					Global_1948392.f_18++;
				}
				else if ((func_617(Global_4718592.f_113724) || func_616(Global_4718592.f_113724)) || (func_614() && func_613(249)))
				{
					Global_1948525.f_18++;
				}
				if (func_612(Global_4718592.f_113724))
				{
					if (Global_1948225.f_14 == 0)
					{
						Global_1948225.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (func_611() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							func_610(Global_4718592.f_114178);
						}
						else
						{
							func_609(Global_4718592.f_162816, Global_4718592.f_162817);
						}
						if (Global_1926705.f_14 > -1)
						{
							unk_0xAFD3BC0F6EBB5474(Global_1926705.f_14, Global_1926705.f_15, 0);
						}
						else if (func_608() > -1)
						{
							func_606(func_608(), 0);
						}
					}
					else
					{
						unk_0xAFD3BC0F6EBB5474(func_611(), 0, 0);
					}
				}
				if (func_605())
				{
					Var8 = { func_604() };
					func_603(Var8);
					if (func_602() != -1)
					{
						Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_28 = func_602();
					}
					func_601();
					func_600();
				}
				else
				{
					func_626();
				}
				if (!func_258(unk_0x259BE71D8A81D4FA(), 0))
				{
					unk_0x3D203A4099538B41(0);
					func_376(0, 0, 1);
				}
				break;
			
			case 5:
				func_643(0);
				iVar2 = 1;
				func_626();
				break;
			
			case 8:
				if (!func_642())
				{
					func_641(Global_1926705.f_17);
				}
				break;
			
			case 9:
				func_643(0);
				iVar2 = 1;
				func_626();
				func_640(Global_4718592.f_114011);
				Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_226 = { Global_4718592.f_114011 };
				if (func_599())
				{
					func_598();
				}
				if (!func_258(unk_0x259BE71D8A81D4FA(), 0))
				{
					unk_0x3D203A4099538B41(0);
					func_376(0, 0, 1);
				}
				break;
			
			case 10:
				func_577(10, 0f, 0f, 0f, Var9);
				func_576();
				break;
		}
	}
	else
	{
		Global_1837304 = 0;
	}
	if (iVar2 || func_721(unk_0x259BE71D8A81D4FA()))
	{
		if ((func_575(unk_0x259BE71D8A81D4FA()) || func_722(unk_0x259BE71D8A81D4FA())) || func_721(unk_0x259BE71D8A81D4FA()))
		{
			if (Global_1935658 > 0)
			{
				Global_2684801.f_1.f_2828.f_13 = Global_1935658;
				Global_2684801.f_1.f_2828 = { Global_1935658.f_1 };
			}
		}
		else
		{
			func_574();
		}
	}
	Global_2684801.f_1.f_842 = 0;
	unk_0x8744D2E3FC95740E(&Global_1836105, false);
	func_573(0);
	Global_1836373 = 0;
	Global_1836578 = -1;
	Global_1889632 = 0;
	Global_1574602 = 0;
	Global_1926705.f_1 = 0;
	Global_1926705.f_2 = 0;
	if (func_572() == 0)
	{
		if (Global_1926705.f_9 == -1 && bVar4 == 0)
		{
			func_564(0);
		}
		else
		{
			Global_1926705.f_9 = -1;
		}
	}
	func_563();
	if (func_562())
	{
		func_561();
	}
	if (func_560())
	{
		func_559();
	}
	if (!unk_0x834C960822A4683F())
	{
		unk_0x56B77EAF3DD4C954(1);
	}
	if (func_572() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_558(Global_1853910[iVar0 /*862*/]) && !func_714()) && !bVar4) && !func_404(0)) && !func_701()) && !func_713())
			{
				func_557(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_556();
	Global_1926705.f_1 = 0;
	if (!func_667())
	{
		func_555();
	}
	if (Global_1853910[iVar0 /*862*/] != -1)
	{
		iParam2 = iParam2;
		if (func_554(Global_1853910[iVar0 /*862*/]))
		{
			if (unk_0x261E3728EE56B3AC())
			{
				iVar10 = func_529(0);
				func_526(1213, -1);
				func_521(joaat("mpply_mgame_cheat_end"), iVar10);
				if (iVar10 > 0)
				{
					func_521(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0x6F146BCF099DE910(unk_0x259BE71D8A81D4FA());
	}
	func_519();
	if (Global_1926705 == 0)
	{
		if (!bVar4)
		{
			Global_1853910[iVar0 /*862*/].f_10 = -1;
			unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_861), true);
		}
	}
	if (bVar4)
	{
		func_557(0);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[iVar0 /*862*/].f_861), true);
		Global_1853910[iVar0 /*862*/].f_10 = func_518(unk_0x259BE71D8A81D4FA());
		unk_0x3D203A4099538B41(0);
		func_376(0, 0, 1);
		if (func_517())
		{
			func_515();
		}
	}
	if ((Global_1853910[iVar0 /*862*/] < 10 && Global_1853910[iVar0 /*862*/] != -1) && !func_404(0))
	{
		if ((!unk_0xD6F9DEE4765092A9(&(Global_1853910[iVar0 /*862*/].f_144)) && Global_1853910[iVar0 /*862*/] != 5) && Global_1853910[iVar0 /*862*/] != 148)
		{
			func_512(&(Global_1853910[iVar0 /*862*/].f_144));
		}
	}
	if (Global_1853910[iVar0 /*862*/] != 6)
	{
		Global_1926651 = 1;
	}
	Global_1853910[iVar0 /*862*/] = -1;
	Global_1853910[iVar0 /*862*/].f_36.f_2 = -1;
	Global_1853910[iVar0 /*862*/].f_36.f_16 = -1;
	Global_1853910[iVar0 /*862*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar4)
	{
		func_511(0);
	}
	Global_1853910[iVar0 /*862*/].f_36.f_18 = 0;
	unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x383461852896D73D() /*862*/].f_795), false);
	unk_0x9A2CEA4E7EBB6D0C(0, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		unk_0xC138265FD0CDEA4E();
		Global_2695841 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1853910[iVar0 /*862*/].f_144), sVar11, 24);
		StringCopy(&(Global_1853910[iVar0 /*862*/].f_150), sVar11, 24);
		func_510();
	}
	StringCopy(&(Global_1881495[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_1853910[iVar0 /*862*/].f_164), sVar11, 64);
	Global_1890444[iVar0 /*129*/].f_31 = { Var12 };
	Global_1890444[iVar0 /*129*/].f_33 = { Var12 };
	Global_1836588 = 0;
	Global_1836589 = 0;
	Global_1836113 = -1;
	bVar13 = false;
	func_509();
	func_508();
	func_507();
	if (func_506())
	{
		func_505();
	}
	if (func_504() && unk_0x834C960822A4683F())
	{
		func_503();
		func_371(unk_0x259BE71D8A81D4FA(), 0, 57348, 0);
	}
	if (func_502())
	{
		func_501();
	}
	else if (func_500())
	{
		func_501();
	}
	else if (func_499())
	{
		func_501();
	}
	else if (func_498())
	{
		func_501();
	}
	else if (func_497())
	{
		func_501();
	}
	else if (func_572())
	{
		func_501();
	}
	else if (func_496() && func_495())
	{
		func_501();
	}
	else if (func_494())
	{
		func_501();
	}
	else
	{
		func_493();
		if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 1) && !func_741())
		{
			if (unk_0x834C960822A4683F())
			{
				if (func_517())
				{
					func_492();
				}
				else
				{
					if (!BitTest(Global_4718592.f_28, 10))
					{
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
						{
							Global_2684801.f_2846.f_198 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
						}
					}
					func_491();
					func_726();
					func_490(6);
					func_645();
					if (bVar4)
					{
						func_703(0);
					}
				}
				func_489();
				func_488();
				func_487();
				if (Global_2684801.f_2846.f_4 == 2)
				{
					Global_2684801.f_2846.f_4 = 1;
				}
				if (func_258(unk_0x259BE71D8A81D4FA(), 0))
				{
					func_486();
				}
				func_485();
				Global_2684801.f_2846 = 0;
			}
			else
			{
				func_484();
				func_501();
			}
		}
		else
		{
			if (!func_697() && !func_741())
			{
			}
			func_484();
			func_501();
		}
	}
	if ((((((((((!func_502() && !func_483()) && !func_495()) && !func_496()) && !func_499()) && !func_500()) && !func_482()) && !func_497()) && !func_572()) && !func_498()) && !func_481())
	{
		if (!func_480())
		{
			func_479();
			func_477();
			func_476();
			func_474(1);
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0xF859473E4AD09F30())
		{
			if (!unk_0x6457A0C458E98FFB())
			{
				if (!func_473())
				{
					if (!bVar13)
					{
						if (func_17(unk_0x259BE71D8A81D4FA()))
						{
							unk_0x5A80107016E75ABC();
							unk_0x2DB5A63C4A5800E5();
						}
					}
				}
			}
		}
	}
	if (!func_404(0))
	{
		StringCopy(&(Global_4718592.f_113731), "", 64);
	}
	if (func_472(116, &iVar14))
	{
		func_471(iVar14);
	}
	if (func_472(123, &iVar14))
	{
		func_471(iVar14);
	}
	if (!func_741())
	{
		func_463();
	}
	else if (func_462())
	{
		func_461();
	}
	func_460();
	if (!func_701() && !func_697())
	{
		func_459();
	}
	func_458();
	func_452();
	func_428(bParam3);
}

void func_428(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_667())
		{
		}
		else if ((((!func_701() && !func_697()) && !func_741()) && Global_1926705.f_9 != 9) && Global_1926705.f_9 != 4)
		{
			func_606(0, 1);
		}
	}
	unk_0x830C51B62E7CD5B2();
	if (!func_451(unk_0x259BE71D8A81D4FA()) && !BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 17))
	{
		func_450();
	}
	if (func_449())
	{
		func_448(1);
		func_447(1);
		func_446(1);
		func_445(1);
	}
	if ((((bParam0 && !func_444()) && !func_701()) && !Global_262145.f_4752) && !func_443())
	{
		unk_0x58A3B74F26D2B532();
	}
	unk_0xCC1C92F7E1A3CE9D(5, 1);
	unk_0xCC1C92F7E1A3CE9D(3, 1);
	func_435(&uVar0, -1);
	if ((func_19() == 0 && !func_125()) && !func_701())
	{
		if (func_434())
		{
			func_433();
		}
		else
		{
			func_430(1147932892, 28, 0);
		}
	}
	func_429(0);
}

void func_429(int iParam0)
{
	if (!Global_1935148 == iParam0)
	{
		Global_1935148 = iParam0;
	}
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_432(iParam1, iParam2))
	{
		iVar0 = func_431();
		Global_2694420[iVar0] = iParam1;
		Global_2694431[iVar0] = iParam0;
	}
}

int func_431()
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

int func_432(int iParam0, var uParam1)
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

void func_433()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1048576.f_10), 22);
}

bool func_434()
{
	return BitTest(Global_1048576.f_10, 21);
}

void func_435(var uParam0, int iParam1)
{
	func_441(uParam0, iParam1);
	func_436(iParam1);
}

void func_436(int iParam0)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	uVar0 = func_440(iParam0);
	uVar1 = unk_0x38640D2193CB547F(uVar0);
	if (func_437())
	{
		if (BitTest(uVar1, 1))
		{
			func_32(133, 1, -1, 1);
		}
	}
}

int func_437()
{
	if (func_439() && func_438(0))
	{
		return 1;
	}
	return 0;
}

var func_438(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_439()
{
	return func_438(func_29() + 1);
}

int func_440(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_441(var uParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	uVar1 = func_442(iParam1);
	uVar2 = unk_0x38640D2193CB547F(uVar1);
	if (BitTest(uVar2, 1))
	{
		func_526(1208, iParam1);
		func_521(joaat("mpply_dm_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, true);
		bVar0 = true;
	}
	if (BitTest(uVar2, 2))
	{
		func_526(1210, iParam1);
		func_521(joaat("mpply_race_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 2);
		bVar0 = true;
	}
	if (BitTest(uVar2, 3))
	{
		func_526(1119, iParam1);
		func_521(joaat("mpply_mc_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 3);
		bVar0 = true;
	}
	if (BitTest(uVar2, 4))
	{
		func_526(1212, iParam1);
		func_521(joaat("mpply_mgame_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 4);
		bVar0 = true;
	}
	if (BitTest(uVar2, 5))
	{
		func_526(1925, iParam1);
		func_521(joaat("mpply_cap_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 5);
		bVar0 = true;
	}
	if (BitTest(uVar2, 6))
	{
		func_526(1927, iParam1);
		func_521(joaat("mpply_sur_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 6);
		bVar0 = true;
	}
	if (BitTest(uVar2, 7))
	{
		func_526(1929, iParam1);
		func_521(joaat("mpply_lts_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 7);
		bVar0 = true;
	}
	if (BitTest(uVar2, 8))
	{
		func_526(1931, iParam1);
		func_521(joaat("mpply_para_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 8);
		bVar0 = true;
	}
	if (BitTest(uVar2, 9))
	{
		func_526(12045, iParam1);
		func_521(joaat("mpply_heist_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 9);
		bVar0 = true;
	}
	if (BitTest(uVar2, 26))
	{
		func_526(1933, iParam1);
		func_521(joaat("mpply_fmevn_cheat_start"), 2);
		func_521(joaat("mpply_activity_started"), 1);
		unk_0x8744D2E3FC95740E(&uVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		unk_0x91F6DFBE57E45538(uVar2, iParam1);
	}
}

int func_442(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
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

int func_443()
{
	if (func_722(unk_0x259BE71D8A81D4FA()) || func_721(unk_0x259BE71D8A81D4FA()))
	{
		if (func_622() || func_697())
		{
			return 1;
		}
	}
	return 0;
}

bool func_444()
{
	return Global_1836591;
}

void func_445(int iParam0)
{
	Global_2684801.f_6524 = iParam0;
}

void func_446(int iParam0)
{
	Global_2684801.f_6523 = iParam0;
}

void func_447(int iParam0)
{
	Global_2684801.f_6522 = iParam0;
}

void func_448(int iParam0)
{
	Global_2684801.f_6343 = iParam0;
}

int func_449()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!unk_0xD6F9DEE4765092A9(&(Global_4718592.f_114039[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_450()
{
	unk_0xDAE61414743C8D1D(6);
	unk_0x425BBE19F25A57AB(1f);
	unk_0xD682DD0578BF5392(1);
}

int func_451(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

void func_452()
{
	if (Global_1969817)
	{
		if (func_349())
		{
			if (func_457(Global_4718592.f_166301))
			{
				switch (Global_4718592.f_160097)
				{
					case 1:
						unk_0xC94AE68759E1B3BD(2947.73f, -3860.622f, 142.6144f, 5f, joaat("xs_combined_dyst_06_build_03"), 0);
						break;
				}
			}
			else if (func_456(Global_4718592.f_166301))
			{
				switch (Global_4718592.f_160097)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
				}
			}
			else if (func_455(Global_4718592.f_166301))
			{
				switch (Global_4718592.f_160097)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), 0);
						break;
				}
			}
			else if (func_454(Global_4718592.f_166301))
			{
				switch (Global_4718592.f_160097)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2944.726f, -3846.384f, 140f, 5f, joaat("xs_propint5_waste_09_ground_d"), 0);
						unk_0xC94AE68759E1B3BD(2948.589f, -3859.259f, 145.6578f, 5f, joaat("xs_propint5_waste_09_ground_cut"), 0);
						unk_0xC94AE68759E1B3BD(2950.465f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), 0);
						break;
				}
			}
			else if (func_453(Global_4718592.f_166301))
			{
				switch (Global_4718592.f_160097)
				{
					case 3:
						unk_0xC94AE68759E1B3BD(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), 0);
						break;
					}
				}
		}
		Global_1969817 = 0;
	}
}

bool func_453(int iParam0)
{
	return iParam0 == 76;
}

bool func_454(int iParam0)
{
	return iParam0 == 77;
}

bool func_455(int iParam0)
{
	return iParam0 == 83;
}

bool func_456(int iParam0)
{
	return iParam0 == 74;
}

bool func_457(int iParam0)
{
	return iParam0 == 78;
}

void func_458()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		Global_1968511[iVar0] = -1;
		Global_1968546[iVar0] = -1;
		Global_1968581[iVar0] = -1;
		iVar0++;
	}
}

void func_459()
{
	Global_2683864.f_43.f_41 = 0;
}

void func_460()
{
	Global_1926705.f_6 = 0;
}

void func_461()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_32), 5);
}

bool func_462()
{
	return BitTest(Global_2683864.f_3, 7);
}

void func_463()
{
	struct<3> Var0;
	struct<2> Var1;
	int iVar2;
	
	if (!func_469(func_470(), Var0))
	{
		Var1.f_0 = -1231113833;
		Var1.f_1 = unk_0x259BE71D8A81D4FA();
		iVar2 = func_468(1, 1);
		if (!iVar2 == 0)
		{
			func_465();
			func_464(0);
			unk_0x01F0B819E78A18A1(1, &Var1, 2, iVar2);
		}
	}
}

void func_464(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2672505.f_3537 = unk_0x7E3F74F641EE6B27();
	}
	Global_2672505.f_3421 = iParam0;
}

void func_465()
{
	func_467();
	func_466();
}

void func_466()
{
	struct<72> Var0;
	
	if (func_60(unk_0x259BE71D8A81D4FA()))
	{
		Var0.f_6 = 32;
		Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_126 = { Var0 };
	}
}

void func_467()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2672505.f_3421.f_79 };
	Var0.f_95 = { Global_2672505.f_3421.f_95 };
	Global_2672505.f_3421 = { Var0 };
}

var func_468(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_258(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_469(struct<3> Param0, struct<3> Param1)
{
	if ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_470()
{
	return Global_2656837[unk_0x259BE71D8A81D4FA() /*10*/];
}

void func_471(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2756017[iParam0 /*5*/].f_1 == -1 || Global_2756017[iParam0 /*5*/].f_2 == -1) || Global_2756017[iParam0 /*5*/].f_3 == -1) || Global_2756017[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0x2BC0725CAF2E0D6B(Global_2756017[iParam0 /*5*/], Global_2756017[iParam0 /*5*/].f_1, Global_2756017[iParam0 /*5*/].f_2, Global_2756017[iParam0 /*5*/].f_3, Global_2756017[iParam0 /*5*/].f_4);
	Global_2756017[iParam0 /*5*/] = -1;
	Global_2756017[iParam0 /*5*/].f_1 = -1;
	Global_2756017[iParam0 /*5*/].f_2 = -1;
	Global_2756017[iParam0 /*5*/].f_3 = -1;
	Global_2756017[iParam0 /*5*/].f_4 = -1;
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2756017[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_473()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 18);
}

void func_474(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar2;
	
	Global_2684801.f_1.f_2798 = 0;
	Global_2684801.f_1.f_2799 = 0;
	Global_2684801.f_1.f_2824 = 0;
	Global_2684801.f_1.f_2805 = 0;
	Global_2684801.f_1.f_2806 = 0;
	Global_2684801.f_1.f_2809 = 0;
	Global_2684801.f_1.f_2810 = 0;
	Global_2684801.f_1.f_2808 = -1;
	Global_2684801.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2684801.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2684801.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2684801.f_1.f_2822 = -1;
		Global_2684801.f_1.f_2823 = -1;
	}
	Global_2684801.f_1.f_2844 = 0;
	func_475();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Global_2684801.f_1.f_845[iVar2 /*57*/] = { Var1 };
		iVar2++;
	}
	Global_2680249.f_33 = -1;
	Global_2680249.f_34 = -1;
}

void func_475()
{
	Global_2680249.f_32 = 0;
}

void func_476()
{
	Global_2683864.f_691 = 0;
}

void func_477()
{
	Global_2683864.f_692 = 0;
	func_478();
}

void func_478()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (iVar0 >= 0)
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_96.f_32), 6);
	}
}

void func_479()
{
	Global_2683864 = 0;
	Global_2683864.f_2 = 0;
	Global_2683864.f_3 = 0;
}

bool func_480()
{
	return Global_2683864.f_691;
}

bool func_481()
{
	return Global_1935649;
}

bool func_482()
{
	return BitTest(Global_2683864, 1);
}

bool func_483()
{
	return BitTest(Global_2683864, 16);
}

void func_484()
{
	unk_0x8744D2E3FC95740E(&Global_2683864, 21);
}

void func_485()
{
	Global_2684801.f_2846.f_35 = 1;
}

void func_486()
{
	Global_2684801.f_1.f_2827 = 1;
}

void func_487()
{
	Global_2683864.f_827 = 1;
}

void func_488()
{
	Global_2684801.f_1.f_2826 = 1;
}

void func_489()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2683864, 21);
}

void func_490(int iParam0)
{
	Global_2684801.f_1.f_837 = iParam0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_222 = iParam0;
}

void func_491()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2680287 = { Var0 };
}

void func_492()
{
	Global_2684801.f_2846.f_1 = 1;
}

void func_493()
{
	Global_2684801.f_2846.f_1 = 0;
}

bool func_494()
{
	return Global_2683864.f_716;
}

bool func_495()
{
	return Global_2683864.f_706;
}

bool func_496()
{
	return Global_2683864.f_693;
}

bool func_497()
{
	return Global_2683864.f_702;
}

bool func_498()
{
	return BitTest(Global_2683864.f_2, 15);
}

bool func_499()
{
	return BitTest(Global_2683864, 20);
}

bool func_500()
{
	return BitTest(Global_2683864, 2);
}

void func_501()
{
	Global_2684801.f_2846.f_35 = 0;
}

bool func_502()
{
	return BitTest(Global_1048576.f_10, 8);
}

void func_503()
{
	Global_2683864.f_721 = 0;
}

var func_504()
{
	return Global_2683864.f_721;
}

void func_505()
{
	Global_2683864.f_752 = 0;
}

bool func_506()
{
	return Global_2683864.f_752;
}

void func_507()
{
	Global_2684801.f_1.f_838 = 0;
	Global_2684801.f_1.f_839 = 0;
	Global_2684801.f_1.f_841 = 0;
}

void func_508()
{
	unk_0x8744D2E3FC95740E(&Global_2683864, 4);
}

void func_509()
{
	unk_0x8744D2E3FC95740E(&Global_2683864, 28);
}

void func_510()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 4);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 5);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 7);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 8);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 9);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 10);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 11);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 12);
	unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_11.f_1), 13);
}

void func_511(int iParam0)
{
	unk_0x3D203A4099538B41(iParam0);
}

void func_512(var uParam0)
{
	var uVar0;
	
	if ((!func_514() && func_513(120, -1)) && !func_404(0))
	{
		unk_0xD41EE13851E1A5D7(uParam0, &uVar0, 13);
		if (unk_0xA8F635A578C0CE07(&uVar0, 13))
		{
			if (unk_0xEDD63461767A518C(&uVar0))
			{
			}
		}
	}
}

int func_513(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_28(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_514()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if ((Global_1853910[iVar0 /*862*/].f_36.f_2 == 63 || Global_1853910[iVar0 /*862*/].f_36.f_2 == 62) || Global_1853910[iVar0 /*862*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_515()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1048576.f_10), 8);
	func_516();
}

void func_516()
{
	Global_2683864.f_881 = 1;
}

bool func_517()
{
	return Global_2684801.f_2846.f_2;
}

var func_518(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_96.f_2;
}

void func_519()
{
	if (func_520())
	{
		unk_0x428C32CC68809A35(1);
	}
}

bool func_520()
{
	return func_197("FM_RETRY_INV");
}

void func_521(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_525(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_524(iParam0))
	{
		func_523(iParam0, iVar0);
	}
	else
	{
		func_522(iParam0, iVar0);
	}
}

void func_522(int iParam0, int iParam1)
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

void func_523(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

int func_524(int iParam0)
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

int func_525(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam1), 0);
	iVar0++;
	if (!func_528(iParam0))
	{
		func_64(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_527(iParam0, iVar0, iParam1, 1);
	}
}

void func_527(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2805029[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_28(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_28(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_28(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_28(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_28(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_28(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_28(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_28(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_28(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_28(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_28(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_28(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_28(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_28(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_28(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_28(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_28(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_28(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_28(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_28(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_28(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_28(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_28(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_28(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851325[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851325[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851325[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851325[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851504[func_28(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_28(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_28(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_28(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_28(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_28(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_28(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_28(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851413[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851413[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851413[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851413[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851413[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851507[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851507[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851507[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851507[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851507[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851523[0 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851523[1 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851523[2 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851523[3 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851523[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851413[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851325[4 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851539[func_28(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851548[func_28(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851542[func_28(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851551[func_28(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851545[func_28(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851554[func_28(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851557[func_28(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851413[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851325[5 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851413[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851325[6 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851413[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851325[7 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851413[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851325[8 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851413[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851325[9 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851413[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851325[10 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851413[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851325[11 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851413[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851325[12 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851413[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851325[13 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851413[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851325[14 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851413[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851325[15 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851413[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851325[16 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851325[17 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851325[18 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851325[19 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851325[20 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851560[func_28(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851563[func_28(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851566[func_28(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851569[func_28(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851572[func_28(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851575[func_28(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851578[func_28(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851581[func_28(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851584[func_28(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851587[func_28(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851590[func_28(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851593[func_28(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851596[func_28(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851599[func_28(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851325[21 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851413[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851325[22 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851413[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851325[23 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851325[24 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851325[25 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851413[27 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851325[26 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851413[28 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851325[27 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_528(int iParam0)
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

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_546();
	if (Global_2695719 == 0)
	{
		return 0;
	}
	if (func_545())
	{
		if (unk_0x834C960822A4683F() || (func_544() || func_540()))
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
	if (func_539(Global_112676.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2694469)
	{
		iVar0 = 1;
	}
	if (func_538(512))
	{
		iVar0 = 1;
	}
	if (func_537(128))
	{
		iVar0 = 1;
	}
	if (Global_1577910 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_404(0))
	{
		iVar0 = 0;
	}
	if (Global_2695024)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_535())
		{
			if (Global_4718592.f_114279 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_258(unk_0x259BE71D8A81D4FA(), 0))
	{
		iVar0 = 0;
	}
	if (func_534())
	{
		iVar0 = 0;
	}
	if ((Global_2694530 || Global_2694529) || Global_1577886)
	{
		if (func_540())
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
	func_532(&(Global_112676.f_1), 32);
	func_531(512);
	func_530(128);
	Global_1837315 = 0;
	return iVar0;
}

void func_530(int iParam0)
{
	Global_112733 = (Global_112733 - (Global_112733 && iParam0));
}

void func_531(int iParam0)
{
	Global_112734 = (Global_112734 - (Global_112734 && iParam0));
}

void func_532(var uParam0, int iParam1)
{
	func_533(uParam0, iParam1);
}

void func_533(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_534()
{
	if (((Global_1836615 || Global_1836584) || func_258(unk_0x259BE71D8A81D4FA(), 0)) || func_257())
	{
		return 1;
	}
	return 0;
}

int func_535()
{
	switch (func_536())
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

int func_536()
{
	return Global_2684801.f_1.f_2822;
}

bool func_537(int iParam0)
{
	return (Global_112733 && iParam0) != 0;
}

bool func_538(int iParam0)
{
	return (Global_112734 && iParam0) != 0;
}

bool func_539(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_540()
{
	if (func_543(Global_2696845))
	{
		return 0;
	}
	if (func_541(unk_0x259BE71D8A81D4FA(), 146))
	{
		return 1;
	}
	return 0;
}

int func_541(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/] == iParam1)
	{
		return func_542(iParam0);
	}
	return 0;
}

int func_542(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
	}
	return 0;
}

int func_543(int iParam0)
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

int func_544()
{
	if (func_543(Global_2696845))
	{
		return 0;
	}
	if (func_542(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

bool func_545()
{
	return BitTest(Global_1574589, 0);
}

int func_546()
{
	if (Global_1577910 == 1 && (func_614() || func_547()))
	{
		return 1;
	}
	return 0;
}

int func_547()
{
	if ((((func_337() || func_553()) || func_552()) || func_550(Global_4718592.f_113724)) || func_548(Global_4718592.f_113724))
	{
		return 1;
	}
	return 0;
}

int func_548(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iParam0 == func_549(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_549(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33703[iParam0];
	}
	return -1;
}

int func_550(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_551(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32850[iParam0];
	}
	return -1;
}

int func_552()
{
	return func_616(Global_4718592.f_113724);
}

int func_553()
{
	return func_617(Global_4718592.f_113724);
}

int func_554(int iParam0)
{
	switch (iParam0)
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

void func_555()
{
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MissionType"))
	{
		unk_0x97AC7D93ABD65D96(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MissionType");
	}
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MatchId"))
	{
		unk_0x97AC7D93ABD65D96(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "MatchId");
	}
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "TeamId"))
	{
		unk_0x97AC7D93ABD65D96(unk_0xE8466DBC1A7E794F(unk_0x259BE71D8A81D4FA()), "TeamId");
	}
}

void func_556()
{
	Global_2683864.f_697 = 0;
	unk_0x5AB2FA2EDFF61EB9();
}

void func_557(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), 2);
		}
	}
	else if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2))
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), 2);
	}
}

int func_558(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_559()
{
	Global_2683864.f_841 = 0;
}

bool func_560()
{
	return Global_2683864.f_841;
}

void func_561()
{
	Global_2683864.f_845 = 0;
}

bool func_562()
{
	return Global_2683864.f_845;
}

void func_563()
{
	unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_32), true);
}

int func_564(int iParam0)
{
	int iVar0;
	
	if (func_257())
	{
		return 1;
	}
	if (func_569())
	{
		return 1;
	}
	if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_114011)))
	{
		return 1;
	}
	if (func_568())
	{
		return 1;
	}
	func_567();
	unk_0x87BA8B7277ED162C(0);
	iVar0 = unk_0x6C99356A4D3C7B09(0);
	if (iParam0 == 0)
	{
		Global_1926664++;
		unk_0xCBF0312D1370143F(iVar0, "quit", Global_1926664);
		unk_0xCBF0312D1370143F(iVar0, "quitd", 1);
		unk_0xCBF0312D1370143F(iVar0, "ply", Global_1926664.f_2);
		unk_0xCBF0312D1370143F(iVar0, "lp", unk_0x39D1D336459711BE());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1926689.f_1++;
		unk_0xCBF0312D1370143F(iVar0, "quit", Global_1926689.f_1);
		unk_0xCBF0312D1370143F(iVar0, "quitd", 1);
		unk_0xCBF0312D1370143F(iVar0, "ply", Global_1926689.f_4);
		unk_0xCBF0312D1370143F(iVar0, "lp", unk_0x39D1D336459711BE());
	}
	if (iParam0 == 0)
	{
		if (unk_0x18EEF6291DBCAC51(&(Global_4718592.f_114011), 0f, func_566(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (unk_0x18EEF6291DBCAC51(&(Global_1048576.f_44), 0f, func_566(iParam0), 0))
		{
		}
	}
	func_565();
	func_567();
	unk_0xB7CBD1698172CFDD();
	return 1;
}

void func_565()
{
	Global_1926664 = 0;
	Global_1926664.f_2 = 0;
	Global_1926664.f_8 = 0;
	Global_1926664.f_3 = 0;
	Global_1926664.f_6 = 0;
}

char* func_566(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_567()
{
	if (unk_0x6C99356A4D3C7B09(0) != 0)
	{
		unk_0x27DEA4A6845A22BC(0);
	}
}

int func_568()
{
	if (unk_0xFA49944CF453C338())
	{
		return 1;
	}
	else if (unk_0x3076B63C4BC614DC())
	{
		return 1;
	}
	else if (unk_0x2DD9F4C2D128C690())
	{
		return 1;
	}
	return 0;
}

int func_569()
{
	if (!func_570())
	{
		return 1;
	}
	return 0;
}

int func_570()
{
	if (func_571())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_571()
{
	return Global_2695033;
}

bool func_572()
{
	return Global_2683864.f_734;
}

void func_573(bool bParam0)
{
	if (bParam0)
	{
		Global_1574615 = 1;
	}
	else
	{
		Global_1574615 = 0;
	}
}

void func_574()
{
	Global_2684801.f_1.f_2828.f_13 = 0;
	Global_2684801.f_1.f_2828 = 0;
	Global_2684801.f_1.f_2828.f_1 = 0;
	Global_2684801.f_1.f_2828.f_2 = 0;
	Global_2684801.f_1.f_2828.f_3 = 0;
	Global_2684801.f_1.f_2828.f_4 = 0;
	Global_2684801.f_1.f_2828.f_5 = 0;
	Global_2684801.f_1.f_2828.f_6 = 0;
	Global_2684801.f_1.f_2828.f_7 = 0;
	Global_2684801.f_1.f_2828.f_8 = 0;
	Global_2684801.f_1.f_2828.f_9 = 0;
	Global_2684801.f_1.f_2828.f_10 = 0;
	Global_2684801.f_1.f_2828.f_11 = 0;
	Global_2684801.f_1.f_2828.f_12 = 0;
}

bool func_575(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 1;
}

void func_576()
{
	Global_2683864.f_716 = 1;
}

void func_577(int iParam0, struct<3> Param1, struct<6> Param2)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_597();
	func_596();
	func_595();
	func_594();
	func_593();
	func_726();
	Global_1926705.f_9 = iParam0;
	switch (Global_1926705.f_9)
	{
		case 1:
			Global_1926705 = 0;
			Global_1926705.f_23 = { 0f, 0f, 0f };
			unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			func_590();
			break;
		
		case 2:
			Global_1926705 = 1;
			Global_1926705.f_23 = { Param1 };
			Global_1926705.f_17 = { Param2 };
			unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			break;
		
		case 3:
			if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 0 || Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 1)
			{
				func_589(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_28);
			}
			func_588();
			Global_1926705 = 1;
			Global_1926705.f_23 = { Param1 };
			if (func_587())
			{
				Global_1926705.f_17 = { Param2 };
			}
			unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			break;
		
		case 4:
			func_586();
			func_588();
			Global_1926705 = 1;
			if (func_721(unk_0x259BE71D8A81D4FA()) || func_722(unk_0x259BE71D8A81D4FA()))
			{
				func_585(1);
			}
			if ((func_584() || func_625()) && func_605())
			{
				Global_1926705.f_17 = { func_604() };
				Param2 = { Global_1926705.f_17 };
				Global_1926705.f_23 = { func_583() };
			}
			else if (func_584() || func_625())
			{
				if (func_582())
				{
					Global_1926705.f_23 = { func_581() };
				}
				else
				{
					Global_1926705.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1926705.f_23 = { Param1 };
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			break;
		
		case 5:
			func_586();
			func_580();
			func_588();
			if (func_721(unk_0x259BE71D8A81D4FA()) || func_722(unk_0x259BE71D8A81D4FA()))
			{
				func_585(1);
			}
			Global_1926705 = 1;
			Global_1926705.f_23 = { Param1 };
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			break;
		
		case 8:
			Global_1926705 = 0;
			Global_1926705.f_23 = { Param1 };
			Global_1926705.f_17 = { Param2 };
			unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			break;
		
		case 9:
			func_588();
			Global_1926705 = 1;
			Global_1926705.f_23 = { Param1 };
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			break;
		
		case 10:
			Global_1926705 = 0;
			Global_1926705.f_23 = { 0f, 0f, 0f };
			unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861), true);
			break;
	}
	func_579();
	func_578();
	func_490(Global_1926705.f_9);
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_223 = { Global_1926705.f_23 };
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_226 = { Param2 };
}

void func_578()
{
	unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18), 23);
}

void func_579()
{
	unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18), 12);
}

void func_580()
{
	Global_1926705.f_4 = 1;
}

Vector3 func_581()
{
	return Global_2683864.f_43.f_575;
}

int func_582()
{
	if ((Global_2683864.f_43.f_575 != 0f || Global_2683864.f_43.f_575.f_1 != 0f) || Global_2683864.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_583()
{
	return Global_2683864.f_43.f_578;
}

var func_584()
{
	return Global_2683864.f_43.f_57;
}

void func_585(int iParam0)
{
	Global_2684801.f_6342 = iParam0;
}

void func_586()
{
	Global_1926705.f_3 = 1;
}

bool func_587()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 24);
}

void func_588()
{
	Global_1926705.f_7 = 1;
}

void func_589(var uParam0)
{
	Global_1926705.f_10 = uParam0;
}

int func_590()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!unk_0xA8F635A578C0CE07(&(Global_2684801.f_6624), 13))
	{
		return 0;
	}
	iVar2 = unk_0x259BE71D8A81D4FA();
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar0 = unk_0xB23E0F9B63D009A8(bVar1);
		if (unk_0x762604C40829DB72(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_78(iVar0) };
			if (unk_0xD43ED7463CB7671C(&Var3, &(Global_2684801.f_6624)) && func_592(iVar0))
			{
				func_591();
				return 1;
			}
		}
		bVar1++;
	}
	return 0;
}

void func_591()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18), 9);
}

var func_592(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 9);
}

void func_593()
{
	Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_5 = 0;
}

void func_594()
{
	Global_1926705.f_10 = -1;
}

void func_595()
{
	Global_1926705.f_4 = 0;
}

void func_596()
{
	Global_1926705.f_3 = 0;
}

void func_597()
{
	Global_2684801.f_2846.f_2 = 1;
}

void func_598()
{
	Global_2683864.f_669.f_14 = 0;
}

bool func_599()
{
	return Global_2683864.f_669.f_14;
}

void func_600()
{
	Global_2683864.f_43.f_55 = 0;
}

void func_601()
{
	Global_2683864.f_43.f_43 = -1;
}

int func_602()
{
	return Global_2683864.f_43.f_43;
}

void func_603(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xD6F9DEE4765092A9(&uParam0))
	{
		return;
	}
	if (!Global_2629350)
	{
		return;
	}
	if (!unk_0x1B79E937E91F40C3(&uParam0, &(Global_2629350.f_1)))
	{
		return;
	}
	Global_2629416 = 1;
}

struct<6> func_604()
{
	return Global_2683864.f_43.f_12;
}

bool func_605()
{
	return Global_2683864.f_43.f_59;
}

void func_606(int iParam0, bool bParam1)
{
	if (func_715())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (unk_0x75193D36C5FA4721())
				{
					unk_0x99599AE2C0FDB2A1();
				}
			}
			break;
		
		case 1:
			unk_0xAFD3BC0F6EBB5474(6, 0, 0);
			break;
		
		case 2:
			unk_0xAFD3BC0F6EBB5474(12, 0, 0);
			break;
		
		case 3:
			if (func_607(Global_4718592.f_166301))
			{
				unk_0xAFD3BC0F6EBB5474(20, 50, 0);
			}
			else
			{
				unk_0xAFD3BC0F6EBB5474(21, 0, 0);
			}
			break;
		
		case 4:
			unk_0xAFD3BC0F6EBB5474(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_607(int iParam0)
{
	return iParam0 == 10;
}

int func_608()
{
	return Global_1926705.f_12;
}

void func_609(var uParam0, var uParam1)
{
	Global_1926705.f_14 = uParam0;
	Global_1926705.f_15 = uParam1;
}

void func_610(var uParam0)
{
	Global_1926705.f_12 = uParam0;
}

int func_611()
{
	return Global_1926705.f_13;
}

int func_612(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_613(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2684801.f_1.f_2813[iVar0], iVar1);
}

int func_614()
{
	return func_615(Global_4718592.f_113724);
}

int func_615(int iParam0)
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

int func_616(int iParam0)
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

int func_617(int iParam0)
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

bool func_618()
{
	if (unk_0x834C960822A4683F())
	{
		return func_621();
	}
	return func_619(Global_4718592.f_113724);
}

int func_619(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6087[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_620()
{
	return Global_2683864.f_19;
}

bool func_621()
{
	return Global_2683864.f_21;
}

var func_622()
{
	return BitTest(Global_1574942, 4);
}

bool func_623()
{
	return Global_2683864.f_17;
}

void func_624()
{
	Global_2683864.f_43.f_56 = 1;
}

bool func_625()
{
	return Global_2683864.f_43.f_55;
}

void func_626()
{
	if (unk_0xD6F9DEE4765092A9(&(Global_2621534.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xD6F9DEE4765092A9(&(Global_2628648.f_3)))
	{
		if (unk_0x1B79E937E91F40C3(&(Global_2628648.f_3), &(Global_2621534.f_4.f_3)))
		{
			Global_1573982 = 0;
		}
		else
		{
			Global_1573982 = 1;
		}
	}
	Global_1573983 = 0;
	Global_1573983.f_1 = { Global_2621534.f_4.f_3 };
}

void func_627()
{
	Global_1926705.f_5 = 0;
	Global_1926705.f_11 = -1;
}

void func_628(var uParam0)
{
	Global_1926705.f_5 = 1;
	Global_1926705.f_11 = uParam0;
}

int func_629(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_166301 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9642[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_630(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_166301 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9478[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_631()
{
	if (BitTest(Global_4718592.f_18, 0))
	{
		return 1;
	}
	return ((((((func_638(Global_4718592.f_113724, 1) || func_637(Global_4718592.f_113724)) || func_636(Global_4718592.f_113724)) || func_635(Global_4718592.f_113724)) || func_634(Global_4718592.f_166301)) || func_633(Global_4718592.f_166301)) || func_632(Global_4718592.f_166301));
}

bool func_632(int iParam0)
{
	return iParam0 == 65;
}

bool func_633(int iParam0)
{
	return iParam0 == 48;
}

bool func_634(int iParam0)
{
	return iParam0 == 8;
}

int func_635(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_166301 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9721[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_636(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_166301 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9664[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_637(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_166301 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9545[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_638(int iParam0, bool bParam1)
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

struct<13> func_639()
{
	struct<13> Var0;
	
	unk_0x677540FE33795D26(&Var0, 13);
	return Var0;
}

void func_640(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	
	if (unk_0xD6F9DEE4765092A9(&uParam0))
	{
		return;
	}
	if (!Global_4585348)
	{
		return;
	}
	uVar0 = unk_0x70E57E9927B6BA58(&uParam0);
	Global_4585350 = uVar0;
	Global_4585351 = (unk_0x1DD05E817C89C737() + 60000);
}

void func_641(struct<6> Param0)
{
	if (unk_0xD6F9DEE4765092A9(&Param0))
	{
		return;
	}
	Global_1573983 = 1;
	Global_1573983.f_1 = { Param0 };
}

bool func_642()
{
	return Global_2683864.f_14;
}

void func_643(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0x1D9E253CF963B125(iParam0);
		unk_0x26E61E347F8C2FB5(0);
	}
}

void func_644(int iParam0)
{
	if (Global_2764623 != iParam0)
	{
		Global_2764623 = iParam0;
	}
}

void func_645()
{
	Global_1057409 = -1;
}

void func_646()
{
	func_647(-1f);
}

void func_647(float fParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xF2EE6216DEB74ACC(0);
		unk_0x8D163415FF0DAFC3(0);
		unk_0x1D9E253CF963B125(fParam0);
		unk_0x26E61E347F8C2FB5(0);
	}
}

int func_648(int iParam0)
{
	int iVar0;
	
	if (Global_1945075[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_650(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_649(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945075[iParam0 /*8*/] = iVar0;
	}
	return Global_1945075[iParam0 /*8*/];
}

void func_649(int iParam0, int iParam1)
{
	Global_1945075[iParam0 /*8*/] = iParam1;
	func_64(func_650(iParam0), iParam1, -1, 1, 0);
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12386;
		
		default:
	}
	return 12386;
}

bool func_651()
{
	return Global_4718592.f_1 == 0;
}

void func_652(int iParam0, int iParam1)
{
	unk_0xF303C195C2A60638(iParam0);
	unk_0x690E83E7292EA12C(iParam0);
	if (unk_0x7242220B378B8CCF())
	{
		unk_0x82B8FC206B9F77F8(iParam1);
	}
}

bool func_653()
{
	return Global_2683864.f_743;
}

void func_654()
{
	if (BitTest(Global_2621446, 24))
	{
		unk_0x8744D2E3FC95740E(&Global_2621446, 24);
	}
}

void func_655()
{
	unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18), 14);
}

var func_656()
{
	return Global_2764623;
}

bool func_657()
{
	return Global_2683864.f_832;
}

int func_658()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192;
}

void func_659(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836374 == 0)
		{
			Global_1836374 = 1;
		}
	}
	else if (Global_1836374 == 1)
	{
		Global_1836374 = 0;
	}
}

void func_660()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2684801.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2684801.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_661()
{
	int iVar0;
	
	if (func_257())
	{
		return 1;
	}
	if (func_569())
	{
		return 1;
	}
	if (func_568())
	{
		return 1;
	}
	if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_114011)))
	{
		return 1;
	}
	func_567();
	unk_0x87BA8B7277ED162C(0);
	iVar0 = unk_0x6C99356A4D3C7B09(0);
	Global_1926664.f_2++;
	if (Global_1926664.f_2 < 1)
	{
		Global_1926664.f_2 = 1;
	}
	unk_0xCBF0312D1370143F(iVar0, "quit", Global_1926664);
	unk_0xCBF0312D1370143F(iVar0, "ply", Global_1926664.f_2);
	unk_0xCBF0312D1370143F(iVar0, "plyd", 1);
	unk_0xCBF0312D1370143F(iVar0, "lp", unk_0x39D1D336459711BE());
	if (unk_0x18EEF6291DBCAC51(&(Global_4718592.f_114011), -1f, func_566(0), 0))
	{
	}
	func_565();
	func_567();
	unk_0xB7CBD1698172CFDD();
	return 1;
}

void func_662()
{
	Global_2683864.f_844 = 1;
}

void func_663(bool bParam0)
{
	if (bParam0)
	{
		unk_0x9EABCC9DA69DEDC2();
	}
	else
	{
		unk_0x1E528DDB9C065FB7();
	}
}

void func_664()
{
	Global_2683864.f_843 = 1;
}

int func_665(int iParam0)
{
	switch (func_19())
	{
		case 0:
			if (!func_666(iParam0))
			{
				if (Global_1853910[iParam0 /*862*/] == 2 || Global_1853910[iParam0 /*862*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_666(int iParam0)
{
	return Global_1853910[iParam0 /*862*/].f_192 != 0;
}

bool func_667()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 2);
}

void func_668()
{
	Global_2683864.f_843 = 0;
}

bool func_669()
{
	return Global_2683864.f_843;
}

void func_670(int iParam0)
{
	unk_0xC897319696131088("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", iParam0);
	unk_0xC897319696131088("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", iParam0);
	unk_0xC897319696131088("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", iParam0);
}

void func_671()
{
	Global_1926705.f_12 = -1;
	Global_1926705.f_14 = -1;
	Global_1926705.f_15 = -1;
}

void func_672(int iParam0)
{
	Global_1057410 = iParam0;
}

void func_673()
{
	Global_1889709 = 0;
	Global_1836581 = 4;
}

void func_674(bool bParam0)
{
	if (bParam0)
	{
		Global_1836595 = 1;
	}
	else
	{
		Global_1836595 = 0;
	}
}

void func_675()
{
	Global_1889711 = -1;
	Global_1889712 = -1;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_464 = -1;
	Global_1889717 = 0;
}

void func_676()
{
	Global_2793046.f_287 = 0;
	func_680(3782, 0, -1);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_678())
		{
			unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 5, 0, 0, 0);
			func_677();
		}
	}
}

void func_677()
{
	Global_78530 = 0;
	Global_78531 = -1;
	Global_78532 = -1;
	Global_78533 = -1;
	Global_78534 = -1;
	Global_78538 = -1;
}

bool func_678()
{
	return func_679(unk_0x4A8C381C258A124D());
}

int func_679(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC0120BBCC298EA2F(uParam0, 5);
	iVar1 = -1;
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x94B8A32AA940A6B5(iParam0, 5, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 5));
			if (unk_0x304A39EB177D246B(iVar1, joaat("parachute"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = unk_0x94B8A32AA940A6B5(iParam0, 5, iVar0, unk_0xD6AED6BFCC58AF7F(iParam0, 5));
			if (unk_0x304A39EB177D246B(iVar1, joaat("parachute"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_680(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

void func_681()
{
	Global_2683864.f_844 = 0;
}

bool func_682()
{
	return Global_2683864.f_844;
}

void func_683(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_685(&iVar0, 0, iParam1))
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
		func_684(&(Global_23270.f_6103[iVar0 /*10*/]));
		Global_23270.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23270.f_6164[iVar0] = 0;
	}
}

void func_684(var uParam0)
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

int func_685(var uParam0, bool bParam1, int iParam2)
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

void func_686()
{
}

void func_687(int iParam0)
{
	struct<42> Var0;
	int iVar1;
	var uVar2;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2683864.f_669.f_9 == 0)
	{
		Global_1926731.f_1345 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		uVar2 = Global_1926731[iVar1 /*42*/].f_3;
		Global_1926731[iVar1 /*42*/] = { Var0 };
		if (func_741())
		{
			Global_1926731[iVar1 /*42*/].f_3 = uVar2;
		}
		Global_1926731[iVar1 /*42*/].f_1 = func_141();
		Global_1926731[iVar1 /*42*/] = -1;
		Global_1926731[iVar1 /*42*/].f_2 = -1;
		iVar1++;
	}
	if ((!func_741() && !func_701()) && iParam0)
	{
		Global_1926731.f_1347 = 0;
		Global_1926731.f_1348 = 0;
	}
}

int func_688()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1926731[iVar0 /*42*/].f_1 != func_141())
		{
			if (Global_1926731[iVar0 /*42*/].f_11 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_689()
{
	if (unk_0x834C960822A4683F())
	{
		return func_620();
	}
	return func_690(Global_4718592.f_113724);
}

int func_690(int iParam0)
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

void func_691(bool bParam0)
{
	struct<36> Var0;
	
	if (!bParam0)
	{
		Var0.f_18 = Global_1948592.f_18;
		Var0.f_29 = Global_1948592.f_29;
		Var0.f_30 = Global_1948592.f_30;
		Var0.f_35 = Global_1948592.f_35;
		Var0.f_27 = Global_1948592.f_27;
		Var0.f_0 = Global_1948592;
		Var0.f_1 = Global_1948592.f_1;
		Var0.f_2 = Global_1948592.f_2;
		Var0.f_3 = Global_1948592.f_3;
		Var0.f_4 = Global_1948592.f_4;
		Var0.f_5 = Global_1948592.f_5;
		Var0.f_6 = Global_1948592.f_6;
		Var0.f_32 = Global_1948592.f_32;
	}
	Global_1948592 = { Var0 };
}

void func_692(bool bParam0)
{
	struct<78> Var0;
	
	if (!bParam0)
	{
		Var0.f_37 = Global_1948392.f_37;
		Var0.f_33 = Global_1948392.f_33;
		Var0.f_30 = Global_1948392.f_30;
		Var0.f_39 = Global_1948392.f_39;
		Var0.f_20 = Global_1948392.f_20;
		Var0.f_15 = Global_1948392.f_15;
		Var0.f_35 = Global_1948392.f_35;
		Var0.f_36 = Global_1948392.f_36;
		Var0.f_31 = Global_1948392.f_31;
		Var0.f_34 = Global_1948392.f_34;
		Var0.f_27 = Global_1948392.f_27;
		Var0.f_28 = Global_1948392.f_28;
		Var0.f_32 = Global_1948392.f_32;
		Var0.f_29 = Global_1948392.f_29;
		Var0.f_77 = Global_1948392.f_77;
	}
	Global_1948392 = { Var0 };
}

void func_693(bool bParam0)
{
	struct<52> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1948305.f_2 };
		Var0.f_14 = Global_1948305.f_14;
		Var0.f_19 = Global_1948305.f_19;
		Var0.f_23 = Global_1948305.f_23;
		Var0.f_25 = Global_1948305.f_25;
		Var0.f_30 = Global_1948305.f_30;
		Var0.f_26 = Global_1948305.f_26;
		Var0.f_27 = Global_1948305.f_27;
		Var0.f_28 = Global_1948305.f_28;
		Var0.f_29 = Global_1948305.f_29;
		Var0.f_31 = Global_1948305.f_31;
		Var0.f_32 = Global_1948305.f_32;
		Var0.f_33 = Global_1948305.f_33;
		Var0.f_40 = Global_1948305.f_40;
		Var0.f_42 = Global_1948305.f_42;
		Var0.f_50 = Global_1948305.f_50;
		Var0.f_46 = Global_1948305.f_46;
		Var0.f_51 = Global_1948305.f_51;
	}
	Global_1948305 = { Var0 };
}

void func_694(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_697() && !func_625()) && Global_1926705.f_9 != 4) && !func_701())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_697() && !func_625()) && Global_1926705.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_695(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_696(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD130E7CDEE903624(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xE2F6FE9B61232165(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset");
	}
	unk_0x8744D2E3FC95740E(&iVar0, bParam1);
	unk_0xEE8559BBFC27701B(unk_0xE8466DBC1A7E794F(iParam0), "MPBitset", iVar0);
}

bool func_697()
{
	return Global_1926705.f_3;
}

bool func_698()
{
	return Global_2692735.f_7;
}

bool func_699()
{
	return BitTest(Global_2683864.f_43.f_4, 8);
}

void func_700()
{
	Global_2683864.f_43.f_57 = 0;
}

bool func_701()
{
	return BitTest(Global_2683864.f_43.f_4, 0);
}

void func_702()
{
	unk_0x8744D2E3FC95740E(&(Global_1048576.f_10), 8);
}

void func_703(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_11.f_1), false);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_11.f_1), false);
	}
}

void func_704(int iParam0)
{
	if ((unk_0x76CD105BCAC6EB9F() && !Global_1575035) && !Global_1575036)
	{
		if (((Global_2684801.f_3476 != 0 && Global_2684801.f_3476.f_1 != 0) && Global_2684801.f_3476.f_2 != 0) && Global_2684801.f_3476.f_3 != 0)
		{
			unk_0x7B6C12F588333BA9(Global_2684801.f_3476, Global_2684801.f_3476.f_1, Global_2684801.f_3476.f_2, Global_2684801.f_3476.f_3, iParam0);
		}
	}
	func_705();
}

void func_705()
{
	Global_2684801.f_3476 = 0;
	Global_2684801.f_3476.f_1 = 0;
	Global_2684801.f_3476.f_2 = 0;
	Global_2684801.f_3476.f_3 = 0;
}

void func_706()
{
	Global_2684801.f_1.f_2801 = 1;
}

bool func_707()
{
	return BitTest(Global_2684801.f_1.f_2809, 12);
}

void func_708(int iParam0)
{
	if (!func_701() || iParam0)
	{
		Global_1837303 = 0;
		Global_1837302 = 0;
	}
}

void func_709(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar1;
	
	Global_2683864.f_43 = -1;
	Global_2683864.f_43.f_139 = -1;
	Global_2683864.f_43.f_2 = -1;
	Global_2683864.f_43.f_5 = 0;
	Global_2683864.f_43.f_40 = 0;
	Global_2683864.f_43.f_3 = 0;
	Global_2683864.f_43.f_4 = 0;
	Global_2683864.f_43.f_42 = -1;
	Global_2683864.f_43.f_6 = { Var0 };
	Global_2683864.f_43.f_62 = 0;
	Global_2683864.f_43.f_137 = 0;
	Global_2683864.f_43.f_213 = 0;
	Global_2683864.f_43.f_428 = 0;
	Global_2683864.f_43.f_63 = 0;
	Global_2683864.f_43.f_138 = 0;
	Global_2683864.f_43.f_214 = 0;
	Global_2683864.f_43.f_429 = 0;
	Global_2683864.f_43.f_617 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2683864.f_43.f_560[iVar1] = 0;
		iVar1++;
	}
	Global_2683864.f_43.f_136 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2683864.f_43.f_140[iVar1] = 0;
		iVar1++;
	}
	Global_2683864.f_43.f_212 = 0;
	iVar1 = 0;
	while (iVar1 <= 29)
	{
		Global_2683864.f_43.f_215[iVar1] = 0;
		iVar1++;
	}
	Global_2683864.f_43.f_61 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2683864.f_43.f_64[iVar1] = 0;
		iVar1++;
	}
	Global_2683864.f_43.f_427 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2683864.f_43.f_430[iVar1] = 0;
		Global_2683864.f_43.f_445[iVar1] = 0;
		Global_2683864.f_43.f_475[iVar1 /*6*/] = { Var0 };
		Global_2683864.f_43.f_460[iVar1] = 0;
		iVar1++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_2683864.f_43.f_44[iVar1] = 0;
			iVar1++;
		}
		if (bParam1)
		{
			Global_2683864.f_43.f_581 = 0;
			Global_2683864.f_43.f_582 = 0;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				Global_2683864.f_43.f_589[iVar1] = -1;
				Global_2683864.f_43.f_595[iVar1] = -1;
				iVar1++;
			}
			Global_2683864.f_43.f_55 = 0;
			Global_2683864.f_43.f_12 = { Var0 };
			Global_2683864.f_43.f_59 = 0;
			Global_2683864.f_43.f_575 = { 0f, 0f, 0f };
			Global_2683864.f_43.f_578 = { 0f, 0f, 0f };
			Global_2683864.f_43.f_58 = 0;
			Global_2683864.f_43.f_57 = 0;
			Global_2683864.f_43.f_1 = -1;
			Global_2683864.f_43.f_601 = -1;
		}
	}
}

void func_710()
{
	Global_2692735.f_8 = 0;
	Global_2692735.f_7 = 0;
}

void func_711()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	uVar0 = unk_0x6AC5EDDD33D79407();
	iVar1 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(Global_1057161, unk_0x7E3F74F641EE6B27()));
	unk_0x41D32B3516729590(Global_4718592, &(Global_4718592.f_114011), uVar0, iVar1, Global_1057161.f_1);
	func_712();
}

void func_712()
{
	Global_1057161 = 0;
	Global_1057161.f_1 = 0;
}

bool func_713()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 148;
}

bool func_714()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] == 5;
}

int func_715()
{
	if (func_349() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

void func_716()
{
	Global_1935725.f_1774 = 0;
}

void func_717()
{
	Global_2683864.f_837 = 0;
}

bool func_718()
{
	return Global_2683864.f_837;
}

void func_719()
{
	Global_20591 = 0;
	func_720();
}

void func_720()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

bool func_721(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

bool func_722(int iParam0)
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

int func_723(int iParam0)
{
	if (iParam0 == Global_262145.f_5042[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5042[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5042[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5042[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5042[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5042[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5042[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5042[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5042[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5042[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5042[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5042[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5042[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5042[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5042[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5042[15])
	{
		return 15;
	}
	return -1;
}

void func_724()
{
	Global_2683864.f_700 = 0;
}

void func_725()
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_4 = -1;
	iVar1 = unk_0x259BE71D8A81D4FA();
	if (iVar1 != -1)
	{
		Global_1890444[iVar1 /*129*/] = { Var0 };
	}
}

void func_726()
{
	Global_1926705.f_7 = 0;
}

void func_727(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2683864.f_669.f_3 = { Var0 };
	Global_2683864.f_669 = 0;
	Global_2683864.f_669.f_1 = 0;
	Global_2683864.f_669.f_12 = 0;
	if (bParam0)
	{
		Global_2683864.f_669.f_2 = 0;
		Global_2683864.f_669.f_13 = 0;
		Global_2683864.f_669.f_14 = 0;
		Global_2625314 = 0;
		if (bParam1)
		{
			Global_2683864.f_669.f_9 = 0;
			Global_2683864.f_669.f_10 = 0;
			Global_2683864.f_669.f_11 = 0;
			Global_2683864.f_669.f_16 = -1;
		}
		if (iParam2 && !unk_0x834C960822A4683F())
		{
			Global_1926731.f_1347 = 0;
			Global_1926731.f_1348 = 0;
		}
		if (unk_0x259BE71D8A81D4FA() != -1)
		{
			Global_1890444[unk_0x259BE71D8A81D4FA() /*129*/].f_2 = 0;
			Global_1890444[unk_0x259BE71D8A81D4FA() /*129*/] = 0;
		}
	}
}

void func_728()
{
	Global_2683864.f_669.f_12 = 0;
}

bool func_729()
{
	return Global_2683864.f_669.f_9 > 0;
}

var func_730()
{
	return Global_2683864.f_669.f_12;
}

void func_731()
{
	unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_96.f_32), 11);
}

void func_732()
{
	unk_0x8744D2E3FC95740E(&(Global_1890444[unk_0x259BE71D8A81D4FA() /*129*/].f_29), 3);
}

void func_733()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1837317[iVar0] = 0;
		iVar0++;
	}
}

void func_734()
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	if (iVar0 != -1)
	{
		Global_1890444[iVar0 /*129*/].f_5 = 0;
	}
}

void func_735()
{
	Global_2694996 = 0;
	Global_2694997 = 0;
	Global_2694998 = 0;
	Global_2694999 = 0;
}

void func_736()
{
	Global_2683864.f_43.f_56 = 0;
}

void func_737()
{
	Global_2683864.f_43.f_58 = 0;
}

void func_738()
{
	if (unk_0xBCF87EE3DC296C2A(unk_0xBF03D0685ADC793B()) != Global_1665753)
	{
		if (unk_0xBF03D0685ADC793B() == 0 && Global_1665753 == 3)
		{
			Global_1665753 = unk_0xBCF87EE3DC296C2A(0);
		}
		unk_0x07938654FF332D78(unk_0xBF03D0685ADC793B(), Global_1665753);
	}
}

int func_739()
{
	if (func_740() != 2)
	{
		return 0;
	}
	if (!func_701() && !((Global_1943594 || Global_1574964) && func_584()))
	{
		return 0;
	}
	return 1;
}

int func_740()
{
	return Global_2683864.f_43.f_40;
}

bool func_741()
{
	return BitTest(Global_2683864.f_669.f_1, 0);
}

void func_742(int iParam0)
{
	if (unk_0x761778199FE1211C())
	{
		unk_0x5C381D09C558ACD0(iParam0);
	}
}

void func_743(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x383461852896D73D();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!BitTest(Global_1853910[iVar0 /*862*/].f_199, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[iVar0 /*862*/].f_199), false);
			}
		}
		else if (BitTest(Global_1853910[iVar0 /*862*/].f_199, 0))
		{
			unk_0x8744D2E3FC95740E(&(Global_1853910[iVar0 /*862*/].f_199), false);
		}
	}
}

void func_744()
{
	unk_0x8744D2E3FC95740E(&(Global_2683864.f_2), 31);
}

void func_745()
{
	Global_2672505.f_1685.f_816 = func_141();
}

void func_746()
{
	Global_2683864.f_885 = 0;
}

void func_747()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_750(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1944061.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_749();
	func_748();
	Global_1944061 = 0;
}

void func_748()
{
	Global_1944061.f_4 = 0;
}

void func_749()
{
	Global_1944061.f_3 = 0;
}

void func_750(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1944061.f_5[iParam0 /*53*/] = { Var0 };
}

void func_751()
{
	unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18), 20);
}

void func_752(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_65(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_63(iParam0, 18, 1);
	}
}

void func_753()
{
	unk_0x8744D2E3FC95740E(&(Global_2793046.f_848), 3);
}

void func_754(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_227();
	if (bParam0)
	{
		func_317(1);
		unk_0x428C32CC68809A35(1);
	}
	unk_0x406CBCEA35499884();
	func_220();
	unk_0x2F30818D75D66C5B(0);
	func_256(0, 1, 1, 0, 0, bParam2, 0);
	func_760();
	func_208(12, 0, -1);
	func_209(1);
	unk_0xD7C0EA10993D3214(0, -1);
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	func_759();
	unk_0x938C85923AD6778A(1);
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (bParam3)
		{
			if (unk_0x0721B5D4CF3ACD02())
			{
				unk_0x42B4970D598C8A72(0, 0);
			}
		}
	}
	func_263(0);
	if (((((func_125() == 0 && func_758() == 0) && iParam1) && !func_260(unk_0x259BE71D8A81D4FA())) && !unk_0x787F8EE1F6FBDC6D()) && func_339())
	{
		func_371(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
	}
	Global_2672505.f_3542 = 0;
	func_755();
}

void func_755()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x76CD105BCAC6EB9F() && func_200(&Global_2802590))
	{
		if (!func_199(&Global_2802590, 3500, 1) || unk_0xCF580EB76CEC15FD(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_757())
			{
				if (unk_0x15CCE8886267624F())
				{
					func_352(&Global_2802590, 1, 0);
				}
				else if (!func_258(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_parachute")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_parachute")) != 0)
					{
						unk_0xA6DFB7FC64F53E33(1);
						unk_0x8DDE9E4E8A102CD9(unk_0x259BE71D8A81D4FA(), 1);
					}
					unk_0xC1DAC4DA85BB166D(unk_0x4A8C381C258A124D(), 255, 0);
				}
			}
			else
			{
				func_352(&Global_2802590, 1, 0);
			}
		}
		else
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				unk_0xC14A2FED36D0EBB9(unk_0x4A8C381C258A124D());
			}
			func_198(&Global_2802590);
		}
	}
	if (Global_2802594 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2802594, bVar0))
			{
				bVar1 = unk_0xB23E0F9B63D009A8(bVar0);
				if (func_14(bVar1, 1, 1))
				{
					func_756(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_756(bool bParam0)
{
	if (BitTest(Global_2802594, bParam0) && unk_0x76CD105BCAC6EB9F())
	{
		if (!func_199(&(Global_2802595[bParam0 /*2*/]), 3500, 1) || unk_0xCF580EB76CEC15FD(bParam0))
		{
			if (!func_757())
			{
				if (unk_0x15CCE8886267624F())
				{
					func_352(&(Global_2802595[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_258(bParam0, 0))
				{
					unk_0x8DDE9E4E8A102CD9(bParam0, 1);
					if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(bParam0), 0))
					{
						unk_0xC1DAC4DA85BB166D(unk_0x56E414973C2A8C0E(bParam0), 255, 0);
					}
				}
			}
			else
			{
				func_352(&(Global_2802595[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(bParam0), 0))
			{
				unk_0xC14A2FED36D0EBB9(unk_0x56E414973C2A8C0E(bParam0));
			}
			func_198(&(Global_2802595[bParam0 /*2*/]));
			unk_0x8744D2E3FC95740E(&Global_2802594, bParam0);
		}
	}
}

int func_757()
{
	if (unk_0xFD216000DC314A92() || unk_0x0721B5D4CF3ACD02())
	{
		return 1;
	}
	return 0;
}

int func_758()
{
	return BitTest(Global_2683864, 7);
}

void func_759()
{
	Global_23131.f_5 = 0;
}

void func_760()
{
	func_209(1);
	func_208(4, 0, -1);
	func_208(6, 0, -1);
	func_208(7, 0, -1);
	func_208(3, 0, -1);
	func_208(1, 0, -1);
	func_208(2, 0, -1);
	func_208(11, 0, -1);
	func_208(13, 0, -1);
	func_208(14, 0, -1);
	func_208(16, 0, -1);
}

void func_761(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_799())
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				Global_1836844[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_797(unk_0x259BE71D8A81D4FA(), bParam0);
	iVar2 = func_795(iVar1, bParam0);
	if (!func_794(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1836844[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1836844[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 311)
	{
		iVar3 = func_793(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_791(iVar4))
			{
				func_781(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_780(1))
	{
		func_773(func_774(59, 0, 0), 0);
		func_771(func_774(135, 0, 0), 1);
		func_770(func_774(22, 0, 0), func_774(73, 0, 0));
	}
	else
	{
		func_770(0, 0);
	}
	if (func_769())
	{
		if (func_513(77, -1))
		{
			func_768(1);
			func_767(1);
		}
	}
	if (func_766() || func_765())
	{
		func_32(77, 1, -1, 1);
		if (unk_0x76CD105BCAC6EB9F())
		{
			func_762(28, 1, 0);
			func_762(29, 1, 0);
			func_762(30, 1, 0);
			func_762(31, 1, 0);
			func_762(32, 1, 0);
			func_762(33, 1, 0);
			func_762(34, 1, 0);
			func_762(35, 1, 0);
			func_762(36, 1, 0);
			func_762(37, 1, 0);
			func_762(38, 1, 0);
			func_762(58, 1, 0);
		}
	}
	if (func_774(21, 0, 0))
	{
		unk_0x28365F67ED751FCB(0);
	}
	Global_1057411 = 0;
}

void func_762(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_100733.f_18[iParam0])
			{
				if (func_764(iParam0) == 3 && !func_25(iParam0))
				{
					func_763(iParam0);
					func_65(iParam0, 0, 0);
					func_63(iParam0, 1, 0);
					func_413(iParam0);
				}
				else
				{
					func_65(iParam0, 1, 0);
					func_413(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0, 0);
				func_63(iParam0, 1, 0);
				func_413(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 1, 0);
			func_413(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_63(iParam0, 0, 0);
		func_63(iParam0, 1, 0);
		func_413(iParam0);
	}
}

void func_763(int iParam0)
{
	if (Global_100733.f_18[iParam0])
	{
		func_65(iParam0, 10, 1);
		func_65(iParam0, 19, 1);
	}
}

int func_764(int iParam0)
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

bool func_765()
{
	return Global_1575048;
}

bool func_766()
{
	return Global_1575050;
}

void func_767(bool bParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	func_762(28, bParam0, 0);
	func_762(30, bParam0, 0);
	func_762(31, bParam0, 0);
	func_762(33, bParam0, 0);
	func_762(34, bParam0, 0);
	func_762(38, bParam0, 0);
	func_762(58, bParam0, 0);
}

void func_768(bool bParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	func_762(29, bParam0, 0);
	func_762(32, bParam0, 0);
	func_762(36, bParam0, 0);
	func_762(35, bParam0, 0);
	func_762(37, bParam0, 0);
}

int func_769()
{
	if (!func_799())
	{
		return 0;
	}
	return 1;
}

void func_770(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_762(0, bParam0, 1);
	func_762(1, bParam0, 1);
	func_762(2, bParam0, 1);
	func_762(3, bParam0, 1);
	func_762(4, bParam0, 1);
	func_762(5, bParam0, 1);
	func_762(6, bParam0, 1);
	func_762(7, bParam0, bVar0);
	func_762(8, bParam0, 1);
	func_762(9, bParam0, 1);
	func_762(10, bParam0, 1);
	func_762(11, bParam0, 1);
	func_762(12, bParam0, bVar0);
	func_762(13, bParam0, 1);
	func_762(21, bParam0, 1);
	func_762(14, bParam0, 1);
	func_762(15, bParam0, 1);
	func_762(16, bParam0, 1);
	func_762(17, bParam0, 1);
	func_762(18, bParam0, 1);
	func_762(19, bParam0, 1);
	func_762(20, bParam0, 1);
	func_762(22, bParam0, 1);
	func_762(23, bParam0, 1);
	func_762(24, bParam0, 1);
	func_762(25, bParam0, 1);
	func_762(26, bParam0, 1);
	func_762(27, bParam0, 1);
	func_414(1, !bParam1);
	if (!bVar0)
	{
		func_763(12);
	}
}

void func_771(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	uVar0 = func_772(0);
	if (Global_262145.f_63 == 1 && func_774(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_762(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_763(44);
		}
	}
	if (bParam0)
	{
		if (func_648(0) > 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1828), 10);
		}
	}
}

int func_772(bool bParam0)
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2793046.f_1819, 26))
		{
			uVar0 = func_27(1192, -1, 0);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_513(122, -1);
}

void func_773(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	uVar0 = func_772(0);
	func_762(39, bParam0, 0);
	func_762(40, bParam0, 0);
	func_762(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_762(43, bParam0, 0);
		func_762(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_763(39);
		}
		if (!func_25(40))
		{
			func_763(40);
		}
		if (!func_25(41))
		{
			func_763(41);
		}
		if (!func_25(42))
		{
			func_763(42);
		}
		if (!func_25(43))
		{
			func_763(43);
		}
	}
}

int func_774(int iParam0, bool bParam1, bool bParam2)
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
		if (func_776(unk_0x259BE71D8A81D4FA(), 85))
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
	if (func_766() || func_765())
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
			if (func_775())
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

int func_775()
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
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	uVar0 = Global_1665626[func_28(-1)];
	if (BitTest(uVar0, 7))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1824), 23);
		return 1;
	}
	return 0;
}

int func_776(int iParam0, int iParam1)
{
	if (!func_769())
	{
		return 0;
	}
	if (func_779())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_777(&(Global_1853910[iParam0 /*862*/].f_792), func_778(iParam1));
}

var func_777(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_778(int iParam0)
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

bool func_779()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_143, 3);
}

int func_780(int iParam0)
{
	return 0;
}

void func_781(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_790(-1))
			{
				if (!func_799())
				{
					return;
				}
			}
			if (!func_790(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_789() && !func_788())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_787())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_790(-1))
				{
					if (!func_782())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1836844[iVar1]), bVar0);
	}
}

int func_782()
{
	var uVar0;
	
	if (func_786(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_28(-1)];
	if (BitTest(uVar0, 2))
	{
		func_783(1);
		return 1;
	}
	return 0;
}

void func_783(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 25))
		{
			func_784(unk_0x259BE71D8A81D4FA(), 12);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139, 25))
	{
		unk_0x8744D2E3FC95740E(&(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_139), 25);
	}
}

void func_784(int iParam0, int iParam1)
{
	func_785(&(Global_1853910[iParam0 /*862*/].f_792), func_778(iParam1));
}

int func_785(var uParam0, var uParam1)
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

int func_786(int iParam0)
{
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_139, 25);
}

int func_787()
{
	var uVar0;
	
	if (BitTest(Global_2793046.f_1824, 6))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_28(-1)];
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2793046.f_1824, 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1824), 6);
		}
		return 1;
	}
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	return 0;
}

bool func_788()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_143, 7);
}

int func_789()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	return func_513(121, -1);
}

bool func_790(int iParam0)
{
	return func_513(123, iParam0);
}

int func_791(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			uVar0 = func_27(func_792(iParam0), -1, 0);
			if (BitTest(uVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_792(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10353;
			break;
	}
	return 1201;
}

int func_793(int iParam0)
{
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_790(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_794(int iParam0)
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	return func_513(119, iParam0);
}

int func_795(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_796(iParam0, 0);
}

int func_796(int iParam0, int iParam1)
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

int func_797(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_798(iParam0);
}

int func_798(int iParam0)
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x259BE71D8A81D4FA())
			{
				return Global_1665638[func_28(-1)];
			}
			else if (func_60(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_28(-1)];
	}
	return 0;
}

int func_799()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_766())
	{
		return 1;
	}
	if (func_765())
	{
		return 1;
	}
	return func_513(120, -1);
}

int func_800()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_496())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_804())
	{
		return 1;
	}
	if (func_803(159))
	{
		if (!func_802())
		{
			return 1;
		}
	}
	if (func_803(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_801() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_801()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_801()
{
	switch (func_19())
	{
		case 0:
			return func_381();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_802()
{
	return Global_2683864.f_698;
}

int func_803(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_804()
{
	return Global_2694526;
}

void func_805()
{
	wait(0);
}

void func_806(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	var uVar0;
	
	unk_0xDB2434E51017FFCC(2, 0, Param0.f_16);
	func_811(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_414, 7, 0);
	unk_0x7B13DC83218D9AF5(&Local_581, 11, 0);
	Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] = 16;
	if (bLocal_590)
	{
		if (!unk_0x15CCE8886267624F() && !unk_0x78ABC1D11B34F324())
		{
			unk_0x8F72AF14CE5AACE4(800);
		}
		if (!unk_0xF859473E4AD09F30())
		{
			if (!unk_0x6457A0C458E98FFB())
			{
				uVar0 = unk_0x259BE71D8A81D4FA() + 32;
				unk_0x5147DD7078544AD1(1, uVar0);
				func_212(1);
			}
		}
	}
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	if (!func_810())
	{
		func_424(0);
	}
	unk_0xAECC5FA98C879D67(0);
	func_752(iLocal_61, 1);
	func_426(1);
	if (!bLocal_590)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			func_371(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
	}
	Global_2793046.f_1819 = 0;
	unk_0x5E08BBBF87BC4886(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0, 0, 0);
	func_809();
	func_807();
	Local_581[unk_0xAE032CEDCF23C6D5() /*5*/] = 0;
}

void func_807()
{
	unk_0xF303C195C2A60638(1);
	func_808(1, -1);
	unk_0x690E83E7292EA12C(1);
	if (func_513(133, -1))
	{
		func_32(133, 0, -1, 1);
	}
	Global_2683864.f_743 = 1;
}

void func_808(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	switch (bParam0)
	{
		case 0:
			unk_0x1A169A00A9C3A74E(0, iParam1);
			break;
		
		default:
			uVar1 = func_440(iParam1);
			iVar0 = unk_0x38640D2193CB547F(uVar1);
			if (BitTest(iVar0, bParam0))
			{
				unk_0x8744D2E3FC95740E(&iVar0, bParam0);
				unk_0x1A169A00A9C3A74E(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_32(120, 0, iParam1, 1);
			func_32(124, 0, iParam1, 1);
			func_32(115, 0, iParam1, 1);
			func_32(119, 0, iParam1, 1);
			break;
	}
}

void func_809()
{
	unk_0xB5396F1FB088FE38(&uLocal_584);
	unk_0x092B9247AF00F5CF(0, 0, 0);
	unk_0xCD76801E1106CABE(0, 17.0693f, -1115.935f, 28.7968f, 0);
	unk_0x93C0674FC00824D0(uLocal_584);
}

int func_810()
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
		if (func_496())
		{
			return 0;
		}
		if (func_803(157))
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

int func_811(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_812();
			}
			else
			{
				return 0;
			}
		}
		if (!func_404(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_812();
					}
					else
					{
						return 0;
					}
				}
				if (func_496())
				{
					if (!bParam2)
					{
						func_812();
					}
					else
					{
						return 0;
					}
				}
				if (func_803(157))
				{
					if (!bParam2)
					{
						func_812();
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
					func_812();
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
				func_812();
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
			func_812();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_812()
{
	unk_0xBBC29EBE6E1A48FA();
}
