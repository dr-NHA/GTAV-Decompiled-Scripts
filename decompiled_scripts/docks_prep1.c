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
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	char[] cLocal_51[8] = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<2> Local_53[4];
	struct<10> Local_54[8];
	struct<5> Local_55[4];
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<2> Local_57[9];
	struct<6> Local_58 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_59 = 0;
	var uLocal_60 = 1092616192;
	var uLocal_61 = 1101004800;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 3;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 16;
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
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
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
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	struct<3> Local_276 = { 0, 0, 0 } ;
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	float fLocal_280 = 0f;
	int iLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	float fLocal_283 = 0f;
	int iLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	float fLocal_286 = 0f;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	int iLocal_290 = 0;
	struct<3> Local_291 = { 0, 0, 0 } ;
	float fLocal_292 = 0f;
	var uLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 30;
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
	var uLocal_460 = 10;
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
	var uLocal_511 = 10;
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
	var uLocal_582 = 20;
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
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 20;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
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
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 30;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 5;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 7;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 5;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 3;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 22;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 10;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 5;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 5;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 8;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 12;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 12;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 12;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 9;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 9;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 12;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 12;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 12;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 9;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 9;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 12;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 12;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 12;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 9;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 9;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 12;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 12;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 12;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 9;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 9;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 12;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 12;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 12;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 9;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 9;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 12;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 12;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 12;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 9;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 9;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 12;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 12;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 12;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 9;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 9;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 12;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 12;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 12;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 9;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 9;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	int iLocal_1983 = 0;
	int iLocal_1984 = 0;
	int iLocal_1985 = 0;
	int iLocal_1986 = 0;
	int iLocal_1987 = 0;
	float fLocal_1988 = 0f;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
	int iLocal_1991 = 0;
	var uLocal_1992[2] = { 0, 0 };
	int iLocal_1993 = 0;
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
	uLocal_46 = unk_0x8CC13B3BF7A9890A();
	uLocal_47 = unk_0x2A3612A4B836469E();
	cLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_50 = "cellphone@str";
	cLocal_51 = "missheistdocksprep1ig_1";
	Local_52 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_261 = -1;
	Local_276 = { 327.263f, -2968.799f, -3f };
	fLocal_277 = 358.5f;
	iLocal_278 = joaat("prop_dock_crane_02_ld");
	Local_279 = { 305.053f, -2971.395f, 4.99f };
	fLocal_280 = 90f;
	iLocal_281 = joaat("prop_dock_crane_02_cab");
	Local_282 = { 0f, 0f, 19.907f };
	fLocal_283 = 0f;
	iLocal_284 = joaat("prop_dock_crane_02_hook");
	Local_285 = { -0.005f, -22.139f, -15f };
	fLocal_286 = 0f;
	Local_288 = { -0.005f, -22.139f, 32.825f };
	Local_289 = { 0f, 0f, 0.68f };
	Local_291 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_1988 = 3f;
	if (unk_0x96CFB880BAC634CE(3))
	{
		unk_0x86A2BC11844DEEB3("DHP1_FAIL");
		func_339();
		func_337();
		if (unk_0x0CB7695268A7F50F())
		{
			unk_0x1837D912F4EDCA95(0, 0, 0, 0);
		}
		func_334();
	}
	unk_0x925970A93719CADE(1);
	func_329();
	while (true)
	{
		unk_0xECF30459397D5190("M_ThePortOfLSHeistPrep1", 0);
		func_328(&uLocal_309);
		func_326(&uLocal_1324);
		func_325();
		func_298();
		if (!iLocal_1986)
		{
			func_282();
			func_1();
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_1982)
	{
		case 0:
			func_231();
			break;
		
		case 1:
			func_197();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_1983)
	{
		case 0:
			if (unk_0x15CCE8886267624F())
			{
				unk_0x10B228D2FDB7AF16(800);
			}
			unk_0x64BB72494B9DF6DC(180f);
			iLocal_1983++;
			break;
		
		case 1:
			if (unk_0x9390801B06EE998F())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_4(0, 0);
	func_334();
}

void func_4(bool bParam0, int iParam1)
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
		if ((func_7(0) && Global_78805.f_1 == 1) && func_6(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}
	if (Global_113648.f_9087 || func_7(0))
	{
		iVar0 = func_5();
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
		unk_0x0B0C9A0F9AAEB7F0(&Global_78807, 1);
		Global_78823 = uVar2;
		Global_78824 = unk_0x1DD05E817C89C737();
	}
}

int func_5()
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

int func_6(int iParam0)
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

int func_7(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_8()
{
	switch (iLocal_1983)
	{
		case 0:
			if (unk_0x15CCE8886267624F())
			{
				unk_0x10B228D2FDB7AF16(800);
			}
			func_108(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (func_107(Local_53[0 /*2*/]))
			{
				unk_0xD0F1DB0E50B367AD(Local_53[0 /*2*/], 0, 0, 0, 1, 0, 0, 0, 0);
			}
			unk_0x6BFFBDE3C98A828E(Local_53[0 /*2*/], 0);
			unk_0x6BFFBDE3C98A828E(Local_53[1 /*2*/], 0);
			unk_0xAD69CF046AA50E85(1);
			unk_0x4F30C4E212ACCAAA(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			unk_0xE59BDA10CE05FD35(Local_53[0 /*2*/], 0);
			unk_0xF04751F8E604D487(Local_53[0 /*2*/], 0);
			unk_0xA62957B100C8DE6D(0f, 10f, 4);
			iLocal_302 = 0;
			iLocal_303 = 0;
			iLocal_1983++;
			break;
		
		case 1:
			if (func_107(unk_0x4A8C381C258A124D()) && func_107(Local_53[0 /*2*/]))
			{
				if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1), 1) > 400f && !unk_0xCB5CAFF0A4A8B74B(Local_53[0 /*2*/]))
				{
					func_93(9);
				}
			}
			if (func_92(unk_0x4A8C381C258A124D(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				func_91(&(Local_57[7 /*2*/]), 0);
				func_91(&(Local_57[8 /*2*/]), 0);
				func_91(&(Local_57[6 /*2*/]), 0);
				func_89(&uLocal_309, joaat("prop_dock_crane_02_ld"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_cab"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_302 && func_92(unk_0x4A8C381C258A124D(), Local_52, 1) < 200f)
			{
				func_88(&uLocal_309, joaat("bison"));
				iLocal_303 = 1;
				iLocal_302 = 1;
			}
			else if (iLocal_302)
			{
				if (func_92(unk_0x4A8C381C258A124D(), Local_52, 1) > 220f)
				{
					func_89(&uLocal_309, joaat("bison"));
					iLocal_303 = 0;
					iLocal_302 = 0;
					if (unk_0xFC8BFE4B41177C22(Local_53[3 /*2*/]))
					{
						unk_0x8C1F7D7A31B2A38E(&(Local_53[3 /*2*/]));
					}
				}
				else if (func_92(unk_0x4A8C381C258A124D(), Local_52, 1) < 200f)
				{
					if (iLocal_303 && unk_0x6252BC0DD8A320DB(joaat("bison")))
					{
						if (!unk_0xFC8BFE4B41177C22(Local_53[3 /*2*/]))
						{
							Local_53[3 /*2*/] = unk_0x5779387E956077A6(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, 1, 1, 0);
							unk_0xF04751F8E604D487(Local_53[3 /*2*/], 0);
						}
						iLocal_303 = 0;
					}
				}
			}
			if (unk_0x21478251925DBFD7(Local_53[1 /*2*/], unk_0xDC8D5832207C2EAD()) || ((unk_0x5105BE70DEF1F5FB(Local_53[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(Local_54[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)) && unk_0x5105BE70DEF1F5FB(Local_53[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)))
			{
				if (func_107(Local_53[1 /*2*/]))
				{
					unk_0x82A7EF211E6B06C9(Local_53[1 /*2*/], 0.5f);
				}
				if (unk_0xC450B06E5AAA0985(Local_58.f_5))
				{
					unk_0xC4F090C2EC0D0FBF(Local_58.f_5, 1);
				}
				if (unk_0xC450B06E5AAA0985(uLocal_243))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_243);
				}
				if (iLocal_255)
				{
					unk_0x406CBCEA35499884();
					iLocal_255 = 0;
				}
				if (func_48(&Local_58, Local_52, 0.1f, 0.1f, 2f, 1, Local_54[3 /*10*/], 0, 0, unk_0xDC8D5832207C2EAD(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (unk_0xC450B06E5AAA0985(Local_58.f_5) && unk_0x5105BE70DEF1F5FB(unk_0xDC8D5832207C2EAD(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, 0, 1, 0)))
				{
					unk_0x830C51B62E7CD5B2();
					func_46(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 7f, -1, 1056964608, 0, 1, 0);
					unk_0xF04751F8E604D487(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0);
					unk_0xF04751F8E604D487(Local_53[0 /*2*/], 0);
					unk_0x0B74F181ADFC39BF(Local_53[0 /*2*/], 10);
					func_42(&Local_58, 1, 0);
					unk_0xAD69CF046AA50E85(0);
					unk_0x4F30C4E212ACCAAA(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_301 = unk_0x1DD05E817C89C737();
					iLocal_257 = 0;
					iLocal_1983++;
				}
			}
			else if (!unk_0x21478251925DBFD7(Local_53[1 /*2*/], unk_0xDC8D5832207C2EAD()))
			{
				func_41(&Local_58);
				if (!unk_0xC450B06E5AAA0985(uLocal_243))
				{
					uLocal_243 = func_38(Local_53[0 /*2*/], 0, 0);
				}
				if (!iLocal_255 && func_36())
				{
					func_35("DKP1_ATTACH", 7500, 1);
					iLocal_255 = 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (func_12(&uLocal_78, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					unk_0x44FB298D6382876D(Local_54[3 /*10*/], 1);
					unk_0xE67051907958B5EB(Local_54[3 /*10*/], unk_0x4A8C381C258A124D(), -1, 2048, 2);
					unk_0xD0557B139A542F12(&uLocal_244);
					unk_0xB5396F1FB088FE38(&uLocal_244);
					unk_0x092B9247AF00F5CF(0, 0, 0);
					unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), -1, 3f, 1f, 1073741824, 0);
					unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
					unk_0x93C0674FC00824D0(uLocal_244);
					unk_0x4BD42B0527065BB6(Local_54[3 /*10*/], uLocal_244);
					unk_0xD0557B139A542F12(&uLocal_244);
					iLocal_1983++;
				}
			}
			else if ((!iLocal_252 && func_36()) && (unk_0x1DD05E817C89C737() - iLocal_301) > 3000)
			{
				func_35("dkp1_EXIT", 7500, 1);
				unk_0xA62957B100C8DE6D(10f, 5f, 4);
				iLocal_252 = 1;
			}
			break;
		
		case 3:
			if (!func_11())
			{
				if (func_107(Local_53[3 /*2*/]))
				{
					unk_0x974022927CB47E68(Local_54[3 /*10*/]);
					unk_0xD0557B139A542F12(&uLocal_244);
					unk_0xB5396F1FB088FE38(&uLocal_244);
					unk_0xEBA229B2E0BB05E0(0, Local_53[3 /*2*/], -1, -1, 2f, 1, 0);
					unk_0x30CCF17FEE4BDA53(0, Local_53[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, 1);
					unk_0x13DE13EA38996410(0, Local_53[3 /*2*/], unk_0x4A8C381C258A124D(), 8, 30f, 786468, 1000f, 10f, 1);
					unk_0x93C0674FC00824D0(uLocal_244);
					unk_0x4BD42B0527065BB6(Local_54[3 /*10*/], uLocal_244);
					unk_0xD0557B139A542F12(&uLocal_244);
				}
				else
				{
					unk_0x974022927CB47E68(Local_54[3 /*10*/]);
					unk_0xFD251F92B546F389(Local_54[3 /*10*/], Local_52, 300f, -1, 0, 0);
				}
				iLocal_301 = unk_0x1DD05E817C89C737();
				iLocal_1983++;
			}
			break;
		
		case 4:
			if (func_10(Local_54[3 /*10*/], unk_0x4A8C381C258A124D(), 1) > 70f || (unk_0x1DD05E817C89C737() - iLocal_301) > 20000)
			{
				func_9(&(Local_54[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

void func_9(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xBEB96F1A510EE9AA(*uParam0);
			}
			unk_0x44FB298D6382876D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAA71DD7E9059338(*uParam0, 0);
			}
		}
		unk_0xF09E30AF1B8FB379(uParam0);
	}
}

float func_10(int iParam0, int iParam1, int iParam2)
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

int func_11()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
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
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_31();
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
				func_23();
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
				if (func_22())
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
			if (func_21())
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
			func_20();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_19();
		func_14();
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
		func_33();
	}
	return 0;
}

void func_14()
{
	if (!func_15())
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

int func_15()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_18())
	{
		return 0;
	}
	if (func_16(unk_0x259BE71D8A81D4FA()))
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

bool func_16(int iParam0)
{
	return func_17(iParam0, 20);
}

var func_17(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_18()
{
	return -1;
}

void func_19()
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

void func_20()
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

int func_21()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_22()
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

void func_23()
{
	if (func_30(14))
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
		Global_20383 = func_24();
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

int func_24()
{
	func_25();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_25()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_28(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_27(unk_0x4A8C381C258A124D());
			if (func_26(iVar0) && (!func_30(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_26(Global_113648.f_2365.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_30(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_31()
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

bool func_32(int iParam0, int iParam1)
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

void func_33()
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

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

int func_36()
{
	if (unk_0xFBA523E6F8ACE541())
	{
		return 0;
	}
	if (unk_0x5994A2F6D4FFFE4D())
	{
		if (func_11() && !func_37())
		{
			return 0;
		}
	}
	return 1;
}

int func_37()
{
	if (Global_22736 == 1)
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_39(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_40(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_40(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_40(unk_0x76CD105BCAC6EB9F(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0->f_5))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
	}
}

void func_42(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (BitTest(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_41(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
		}
		func_45(iVar0, uParam0);
		func_44(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), iVar0);
			unk_0x8744D2E3FC95740E(&(uParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[bVar0]))
		{
			unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[bVar0], 1);
			unk_0xD9757FAB956617BA(uParam0->f_17[bVar0], 1);
			if (bParam2)
			{
				unk_0x0428AFDCAA63B06E(uParam0->f_17[bVar0], 32, 1);
				unk_0x0428AFDCAA63B06E(uParam0->f_17[bVar0], 305, 0);
			}
			unk_0x0428AFDCAA63B06E(uParam0->f_17[bVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xD11A63E12F198FDB(uParam0->f_17[bVar0], func_43()) && uParam0->f_17[bVar0] != unk_0x4A8C381C258A124D())
				{
					unk_0x5C4B3034CCDA5270(uParam0->f_17[bVar0]);
				}
			}
			if (!BitTest(uParam0->f_13, 29))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[bVar0], 0, -1, 0);
			}
			uParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 1);
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (bParam2)
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_43()
{
	return unk_0xD59511AF30BE1934(unk_0xB6B621402486C3E4());
}

void func_44(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 19);
			break;
	}
}

void func_45(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(uParam1->f_13), 16);
			break;
	}
}

int func_46(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam5)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
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
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
	func_47(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_29) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_47(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

int func_48(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	return func_49(uParam0, Param1, Param2, func_87(), func_87(), iParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_49(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam7;
	uParam0->f_17[1] = iParam8;
	uParam0->f_17[2] = iParam9;
	uParam0->f_16 = iParam7;
	func_86(uParam0);
	func_85(uParam0);
	func_84();
	if (func_68(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, uParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_67(sParam12);
		func_67(sParam13);
		func_67(sParam14);
		func_67(sParam15);
		if (unk_0x9390801B06EE998F())
		{
			bVar1 = false;
			if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					if (BitTest(uParam0->f_13, 23))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 23);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_65(uParam0, iParam21))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
					if (!BitTest(uParam0->f_13, 9))
					{
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_67(sParam16);
				func_67(sParam19);
				func_67("MORE_SEATS");
				if (bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					if (unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						func_67(sParam11);
					}
					if (unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(uParam0);
					}
					if ((!func_63(uParam0, 1) && !func_62(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_59(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), false);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_63(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_59(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
						}
					}
					if (!unk_0xC450B06E5AAA0985(uParam0->f_5))
					{
						if (unk_0xC450B06E5AAA0985(*uParam0))
						{
							unk_0xFE54B8568B2ABD12(uParam0);
						}
						uParam0->f_5 = func_58(Var3, 0);
						if (!iParam23 == -1)
						{
							unk_0x4C905FB262965D5D(uParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_57(uParam0->f_5, uParam0);
						}
					}
					else if (!func_56(Var3, unk_0x3CF9D442F2C902BD(uParam0->f_5), 0.1f, 0))
					{
						unk_0xDABC73EF230B6665(uParam0->f_5, Var3);
						if (bParam27)
						{
							func_57(uParam0->f_5, uParam0);
						}
					}
					if (!func_63(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 2))
						{
							func_61(uParam0, sParam11, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(uParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					iVar4 = 0;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						iVar4 = 1;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5);
						if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Param3, Param4, fParam28, 0, iVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Param1, Param2, iParam5, iVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar2], func_43()) || !func_54(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_51(uParam0))
							{
								func_67(sParam11);
								func_67(sParam16);
								func_67(sParam12);
								func_67(sParam13);
								func_67(sParam14);
								func_67(sParam15);
								func_67("LOSE_WANTED");
								func_67("MORE_SEATS");
								func_67(sParam19);
								func_42(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xFC8BFE4B41177C22(iParam10))
			{
				if ((bParam18 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && (!BitTest(uParam0->f_13, 9) && !BitTest(uParam0->f_13, 22)))
				{
					func_67(sParam16);
					func_67(sParam19);
					if (unk_0xC450B06E5AAA0985(uParam0->f_5) || unk_0xC450B06E5AAA0985(*uParam0))
					{
						unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
						unk_0xFE54B8568B2ABD12(uParam0);
						func_67(sParam11);
					}
					if ((!func_63(uParam0, 1) && !func_62(uParam0)) && !BitTest(uParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_61(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_59(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 0);
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
					}
				}
				else
				{
					if (BitTest(uParam0->f_13, 0))
					{
						func_67("LOSE_WANTED");
						unk_0x8744D2E3FC95740E(&(uParam0->f_13), false);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 1);
					}
					if (BitTest(uParam0->f_13, 1))
					{
						if (!func_63(uParam0, 1))
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
							{
								func_59(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), true);
						}
					}
					if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xC450B06E5AAA0985(*uParam0))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_5))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
								func_67(sParam11);
							}
							*uParam0 = func_50(iParam10, 0, 0);
							unk_0xF55F62DA99DB0C2F(*uParam0, 2);
							if (!BitTest(uParam0->f_13, 4))
							{
								func_57(*uParam0, uParam0);
							}
						}
						if (!func_63(uParam0, 2))
						{
							if (!BitTest(uParam0->f_13, 3))
							{
								func_61(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (BitTest(uParam0->f_13, 9))
							{
								if (!unk_0xFF692AB7350A74D7(sParam19))
								{
									if (!BitTest(uParam0->f_13, 4))
									{
										func_61(uParam0, sParam19, 0);
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
									}
								}
								else if (!BitTest(uParam0->f_13, 4))
								{
									func_61(uParam0, sParam16, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
								if (!BitTest(uParam0->f_13, 23))
								{
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]))
									{
										func_59(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_5))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
					func_67(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_63(uParam0, 2))
						{
							if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
							{
								if (!BitTest(uParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0xC5935DFB3F39785A(0, iVar6);
									if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar7]))
									{
										func_59(uParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_61(uParam0, "MORE_SEATS", 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
								}
							}
							else if (!BitTest(uParam0->f_13, 3))
							{
								func_61(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
								unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								if (BitTest(uParam0->f_13, 9))
								{
									func_61(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_63(uParam0, 2))
					{
						if (!BitTest(uParam0->f_13, 3))
						{
							func_61(uParam0, sParam16, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 3);
							unk_0x8744D2E3FC95740E(&(uParam0->f_13), 4);
						}
						else if (BitTest(uParam0->f_13, 9))
						{
							if (!unk_0xFF692AB7350A74D7(sParam19))
							{
								if (!BitTest(uParam0->f_13, 4))
								{
									func_61(uParam0, sParam19, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
								}
							}
							else if (!BitTest(uParam0->f_13, 4))
							{
								func_61(uParam0, sParam16, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(uParam0->f_13, 0))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), false);
		}
		func_67(sParam11);
		func_67(sParam16);
		func_67(sParam19);
		func_67(sParam16);
		func_67("LOSE_WANTED");
		if (unk_0xC450B06E5AAA0985(uParam0->f_5))
		{
			unk_0xFE54B8568B2ABD12(&(uParam0->f_5));
		}
		if (unk_0xC450B06E5AAA0985(*uParam0))
		{
			unk_0xFE54B8568B2ABD12(uParam0);
		}
	}
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 11);
	unk_0x8744D2E3FC95740E(&(uParam0->f_13), 12);
	return 0;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_51(var uParam0)
{
	if (BitTest(uParam0->f_13, 12))
	{
		if (func_53(unk_0x4A8C381C258A124D()))
		{
			if (func_52(1, 0, 1) || BitTest(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_52(1, 0, 1) || BitTest(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94A7730DEC6E86C8())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			return 0;
		}
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (bParam0)
		{
			if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != unk_0x4A8C381C258A124D())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x032CEF99C0D59B73(iVar0) < 0.95f || unk_0x032CEF99C0D59B73(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!unk_0xF7C1BF3F9EB7C65E(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	float fVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && iParam1)
		{
			if (func_55(unk_0x4A8C381C258A124D(), iParam0))
			{
				unk_0x316802E03D8923D8(func_43(), 50f);
				return 1;
			}
		}
		else if (unk_0xD11A63E12F198FDB(iParam0, func_43()))
		{
			unk_0x316802E03D8923D8(func_43(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x27E68848F0E5D7D9(iParam0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iParam1))
				{
					if (unk_0xF4244288C3EF3306(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_56(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

void func_57(var uParam0, var uParam1)
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		if (unk_0xC450B06E5AAA0985(uParam1->f_6))
		{
			unk_0xBC64B805EE071A37(uParam1->f_6, 0);
		}
		unk_0x0F20DD0DCEB2959F(0);
		unk_0xC3C7C9791CD79114();
		uParam1->f_6 = uParam0;
		unk_0xBC64B805EE071A37(uParam0, 1);
	}
}

var func_58(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_40(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

void func_59(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)
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

void func_61(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xFF692AB7350A74D7(sParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

int func_62(var uParam0)
{
	if (!unk_0x4FAFF4BCB7633475(uParam0->f_16))
	{
		if (unk_0x912159A05BE6B52E(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x5994A2F6D4FFFE4D())
	{
		if (unk_0xFBA523E6F8ACE541())
		{
			return 1;
		}
		if (func_64(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x5994A2F6D4FFFE4D())
	{
		if (func_11() && !func_37())
		{
			return 1;
		}
	}
	return 0;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1DD05E817C89C737();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_66(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x2EEC0612337D20CE(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x22007BC82AF0074B(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x22007BC82AF0074B(iParam0, 1))
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

void func_67(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		unk_0x4E8E15513E171E54(sParam0);
	}
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<3> Var19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				unk_0x96A0632EBDD87FA3(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar14 = false;
		if (!unk_0xFC8BFE4B41177C22(uParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0xF0CA45A211FFDCD9(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 50f, 0, iVar16);
			if (unk_0xD9F5E1FEFD1329E4(iVar15, 0))
			{
				uParam0->f_21 = iVar15;
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(uParam0->f_21, 0))
		{
			if (vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0) || !bParam17)
					{
						if (func_66(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
								{
									unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
									if (unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle")) == 7 && !func_83(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
					}
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_43());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_80(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D())) && !unk_0xFC8BFE4B41177C22(iParam10))
		{
			iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_63(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0xC5935DFB3F39785A(0, iVar17);
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar18]))
						{
							func_59(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_61(uParam0, "MORE_SEATS", 0);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x8744D2E3FC95740E(&(uParam0->f_13), 13);
			func_67("MORE_SEATS");
		}
		if (!unk_0xFC8BFE4B41177C22(iParam10))
		{
			if ((!unk_0x4FAFF4BCB7633475(uParam0->f_17[0]) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[1])) || !unk_0x4FAFF4BCB7633475(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()) && !func_63(uParam0, 2))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (func_79(iVar10, uParam0))
						{
							func_61(uParam0, "CMN_VEHSUIT", 0);
							unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					unk_0x8744D2E3FC95740E(&(uParam0->f_13), 31);
					func_67("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
		{
			if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
			{
				if (unk_0x875A214D5EBCA509(0, 75))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x34A9A872D3C510BF(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
					{
						iVar10 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
						if (unk_0xD9F5E1FEFD1329E4(iVar10, 0))
						{
							if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
							{
								if (!func_80(uParam0) && unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
								{
									if (!func_78(uParam0->f_17[iVar0]))
									{
										unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x1C2F771CDC87A3A5(iVar10, 0))
						{
							if (unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iVar10))
							{
								if (unk_0x69799E0840A34AFB(iVar10) && !unk_0xD2A0543EC400E1A5(iVar10))
								{
									Var19 = { unk_0xD1A6A821F5AC81DB(iVar10, 1) };
									if (Var19.f_2 < -1f)
									{
										unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
					{
						if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
						{
							iVar10 = unk_0x6EF03BE64E058E2F(uParam0->f_17[iVar0], 0);
							if (!unk_0x1C2F771CDC87A3A5(iVar10, 0))
							{
								if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar10))
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
									{
										iVar20 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
									}
									if (unk_0xD9F5E1FEFD1329E4(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0xDF93B3CFAC96698F(iVar10) > 5f)
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x23EB5FC236231892(uParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
					{
						iVar21 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						if (unk_0xFC8BFE4B41177C22(iVar21))
						{
							if (func_66(iVar21, uParam0, 0))
							{
								if (func_77(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], iVar0);
									func_44(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_77(iVar0, uParam0))
							{
								if (unk_0x4B423FAA24E8ABF0(iVar21) == joaat("sentinel2"))
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x412B9F2CF0E60079(uParam0->f_17[iVar0], 2);
								}
								func_76(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()) && !func_75(uParam0->f_17[iVar0], iParam10)) && !func_74(uParam0->f_17[iVar0], iParam10))
					{
						if (func_81(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
							{
								if (((!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0]))
								{
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7)
									{
										unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
									}
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_43());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x1DD05E817C89C737();
								uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
								unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_57(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
					{
						if (((func_54(uParam0->f_17[iVar0], 1) || func_75(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xD9F5E1FEFD1329E4(iParam10, 0) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
						{
							if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
							{
								unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
								func_67(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_57(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xD9F5E1FEFD1329E4(iParam10, 0))
					{
						if (!unk_0xF4244288C3EF3306(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) && !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0)))
							{
								if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
								{
									if (!unk_0xCECDBB848D53DEB2(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_54(uParam0->f_17[iVar0], 1))
										{
											if (func_53(uParam0->f_17[iVar0]))
											{
												iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
												if (iVar11 == 7)
												{
													unk_0x092B9247AF00F5CF(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
									{
										if ((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x9D6DF8F3584AAC2B(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
										}
									}
									iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
									if (iVar11 == 7 && !func_83(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE7895DBF72C7F282(uParam0->f_17[iVar0]) && !unk_0xE7895DBF72C7F282(unk_0x4A8C381C258A124D())) && !func_73(uParam0->f_17[iVar0], 2f)) && !unk_0x8BF5256C439DF778(uParam0->f_17[iVar0])) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0])) && !unk_0x5B702A5D1F2635BE(iParam10))
										{
											unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 1);
											if (BitTest(uParam0->f_13, 10))
											{
												unk_0x4190C67D524CD0DC(uParam0->f_17[iVar0], 1f);
											}
											unk_0xEBA229B2E0BB05E0(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_50(uParam0->f_17[iVar0], 0, 0);
										unk_0xF55F62DA99DB0C2F(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
							{
								if (func_81(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x8BF5256C439DF778(uParam0->f_17[iVar0]) && !unk_0x0B3FC0E7676E79BF(uParam0->f_17[iVar0]))
									{
										iVar11 = unk_0x9B5C1660CCDF7189(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
										if (iVar11 == 7)
										{
											unk_0x974022927CB47E68(uParam0->f_17[iVar0]);
										}
										unk_0xAAA71DD7E9059338(uParam0->f_17[iVar0], 0);
										unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_43());
									}
								}
							}
						}
						else if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iParam10))
						{
							if (!unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									unk_0x03AB73582A77DBD3(uParam0->f_17[iVar0], func_43());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xD11A63E12F198FDB(uParam0->f_17[iVar0], func_43()) && !unk_0x5B702A5D1F2635BE(iParam10))
						{
							unk_0x5C4B3034CCDA5270(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_67(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_63(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
						{
							if (func_78(uParam0->f_17[iVar0]) || unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
					{
						if (!unk_0xFAA48325A90263BE(uParam0->f_17[iVar0], unk_0x4A8C381C258A124D(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_78(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1DD05E817C89C737();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_61(uParam0, sParam7, 0);
								unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_72(iVar0, uParam0))
									{
										if (!unk_0xFF692AB7350A74D7(uVar13[iVar0]))
										{
											if (!unk_0x1B79E937E91F40C3(uVar13[iVar0], ""))
											{
												func_70(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_69(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_72(iVar0, uParam0))
										{
											func_61(uParam0, uVar12[iVar0], 0);
											func_69(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x8744D2E3FC95740E(&(uParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xC450B06E5AAA0985(uParam0->f_1[iVar0]))
				{
					unk_0xFE54B8568B2ABD12(&(uParam0->f_1[iVar0]));
					func_67(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_67("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 16);
			break;
	}
}

void func_70(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xFF692AB7350A74D7(sParam1))
		{
			if (!unk_0x1B79E937E91F40C3(sParam1, ""))
			{
				func_71(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x1DD05E817C89C737();
}

void func_71(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x0A3136AD174470CC(iParam2, 1);
}

int func_72(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_73(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0xDF93B3CFAC96698F(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (!unk_0xD11A63E12F198FDB(iParam0, func_43()))
		{
			iVar0 = unk_0x31945A289F1359A1(iParam0);
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xFAA48325A90263BE(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
			{
				if (unk_0xF4244288C3EF3306(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_13), 19);
			break;
	}
}

int func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			if (!unk_0x4FAFF4BCB7633475(iParam0))
			{
				iVar1 = unk_0xCDA725BC2F170795(iParam0);
				if (unk_0xD9F5E1FEFD1329E4(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xFAA48325A90263BE(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_79(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("bus") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x4FAFF4BCB7633475(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xFD5C5BBD1FE92BB7(iParam0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xFD5C5BBD1FE92BB7(iParam0, 1, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xFD5C5BBD1FE92BB7(iParam0, 2, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_80(var uParam0)
{
	int iVar0;
	
	if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_66(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam1))
	{
		if (unk_0x27E68848F0E5D7D9(iParam1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(iParam1, 0);
			if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
			{
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iVar0))
					{
						if (func_80(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (func_66(iVar0, uParam0, 0))
					{
						if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
						{
							if (func_82(iVar0))
							{
								return 1;
							}
						}
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
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	float fVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		fVar0 = unk_0xDF93B3CFAC96698F(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
		{
			iVar0 = unk_0xCDA725BC2F170795(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		iVar0 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
		if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
		{
			iVar1 = unk_0xFD5C5BBD1FE92BB7(iVar0, 0, 0);
			if (!unk_0x4FAFF4BCB7633475(iVar1))
			{
				if (iVar1 != unk_0x4A8C381C258A124D())
				{
					if (unk_0x110821AE6C63DD4F(iVar1))
					{
						if (!unk_0x2E0309EF5F2EBDB1(iVar1, unk_0x4A8C381C258A124D()))
						{
							unk_0xE67051907958B5EB(iVar1, unk_0x4A8C381C258A124D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_85(var uParam0)
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
			{
				if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
				{
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 32, 0);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 305, 1);
					unk_0x0428AFDCAA63B06E(uParam0->f_17[iVar0], 268, 1);
					unk_0x379E96D5D36B27DC(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_13), 25);
	}
}

void func_86(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_17[iVar0]))
		{
			if (!unk_0x4FAFF4BCB7633475(uParam0->f_17[iVar0]))
			{
				if (unk_0x27E68848F0E5D7D9(uParam0->f_17[iVar0]))
				{
					unk_0xC1BC1B8A5AA67C6B(uParam0->f_17[iVar0], 0);
					unk_0xD9757FAB956617BA(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				unk_0xC1BC1B8A5AA67C6B(unk_0x4A8C381C258A124D(), 0);
				unk_0xD9757FAB956617BA(unk_0x4A8C381C258A124D(), 0);
			}
		}
	}
}

Vector3 func_87()
{
	struct<3> Var0;
	
	return Var0;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xEC9DAA34BBB4658C(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x1DD05E817C89C737();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

void func_89(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x55098D9E9AD58806(iParam1);
					func_90(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_1012 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_91(var uParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
		{
			unk_0x837D67618BF89034(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB3B56385ECA230B4(uParam0);
		}
		else
		{
			unk_0xC942CD0D37369DC4(*uParam0);
		}
	}
}

float func_92(int iParam0, struct<3> Param1, int iParam2)
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

void func_93(int iParam0)
{
	char* sVar0;
	
	unk_0x86A2BC11844DEEB3("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		
		case 6:
			sVar0 = "cmn_tdied";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_98(sVar0);
	while (!func_97())
	{
		wait(0);
	}
	if (func_96())
	{
		func_339();
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, 0, 0, 0))
	{
		func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_334();
	unk_0xBBC29EBE6E1A48FA();
}

void func_94(struct<3> Param0, float fParam1)
{
	if (func_95(Global_78799, 0f, 0f, 0f, 0))
	{
		Global_78799 = { Param0 };
		Global_78802 = fParam1;
	}
}

bool func_95(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_96()
{
	if (Global_100681 == 7)
	{
		return 1;
	}
	return 0;
}

int func_97()
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

void func_98(char* sParam0)
{
	func_106(sParam0);
	func_99(0);
}

void func_99(int iParam0)
{
	int iVar0;
	
	if (Global_113648.f_9087 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_100(iVar0))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_91433[iVar0 /*5*/].f_1), 5);
		Global_100717 = iParam0;
	}
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_105();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_91433[iParam0 /*5*/];
	iVar1 = Global_78828.f_109[iVar0 /*4*/];
	func_104(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_101(&(Global_113648.f_2365.f_539), iVar1);
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

void func_101(var uParam0, int iParam1)
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
			if (!func_103(Global_113648.f_18535[iVar0], &Var2, &fVar3))
			{
				Global_113648.f_18535[iVar0] = 318;
				func_102(&(uParam0->f_2296[iVar0]));
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

void func_102(var uParam0)
{
	*uParam0 = -15;
}

int func_103(int iParam0, var uParam1, float fParam2)
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
			return func_103(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_103(8, uParam1, fParam2);
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

void func_104(int iParam0, bool bParam1)
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

void func_105()
{
	Global_100716 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_78791))
		{
			switch (func_24())
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
			switch (func_24())
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

void func_106(char* sParam0)
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

int func_107(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0xBD545F8729E9F413(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_196(1);
		if (iParam0 <= Global_100718)
		{
		}
		iVar1 = func_194(unk_0x1AF90EB93E0012D6(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113648.f_9087.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_192(iVar1);
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
			iVar4 = func_187(unk_0x1AF90EB93E0012D6(), 1);
			if (iVar4 != -1)
			{
				Global_113648.f_18576[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_186(iVar4)}, 4);
				unk_0x375B1B37EF136A49(&uVar5, 0, Global_100718, iParam0);
			}
			else
			{
				iVar6 = func_185(&(Global_100681.f_3));
				if (iVar6 > -1)
				{
					Global_113648.f_24988.f_4[iVar6] = 0;
				}
			}
		}
		Global_94859 = iParam2;
		Global_100718 = iParam0;
		func_109(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x1B79E937E91F40C3(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100718)
	{
	}
}

void func_109(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_110(&Global_107196, unk_0x1AF90EB93E0012D6(), iParam0, uParam1, iParam3, iParam2);
}

void func_110(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_24();
	uParam0->f_1 = func_174();
	unk_0x239D73A1DE006629(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		func_145(&(uParam0->f_2884), 0);
		func_144(unk_0x4A8C381C258A124D());
		func_137(unk_0x4A8C381C258A124D(), 0);
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
		if (iVar1 == func_136())
		{
			func_129(unk_0x4A8C381C258A124D(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		func_112(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_111(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_111(var uParam0)
{
	*uParam0 = Global_96530;
	uParam0->f_1 = Global_96531;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_112(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x4A8C381C258A124D();
	}
	if (unk_0xFC8BFE4B41177C22(iParam2))
	{
		uParam1->f_5 = func_27(iParam2);
	}
	if (func_126(iParam2, &iVar0, iParam3, iParam5))
	{
		func_113(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFC8BFE4B41177C22(iVar0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (unk_0x2E6A27037F1DC473(iVar0, joaat("skylift")) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
			{
				func_113(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_113(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam2, 0))
	{
		func_115(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_114(iParam2))
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

int func_114(int iParam0)
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

void func_115(var uParam0, int iParam1, int iParam2)
{
	func_121(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_118(iParam1, 145, 0);
	uParam0->f_11 = func_117(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_116(iParam1);
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

int func_116(int iParam0)
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

int func_117(int iParam0)
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

int func_118(int iParam0, int iParam1, int iParam2)
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
					if (iParam2 == 0 || unk_0x4B423FAA24E8ABF0(iParam0) == func_119(iParam1, iParam2))
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

int func_119(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_26(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_120(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_120(int iParam0, var uParam1, int iParam2)
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

void func_121(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_125(uParam1);
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
		if (uParam1->f_65 == -1 && !func_124(uParam1->f_66))
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
		func_123(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_122(iVar0 + 1));
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

int func_122(int iParam0)
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

int func_123(int iParam0, var uParam1, var uParam2)
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

int func_124(int iParam0)
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

void func_125(var uParam0)
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

int func_126(int iParam0, var uParam1, int iParam2, int iParam3)
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
						if (func_127(*uParam1, func_24(), 1))
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

int func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_128(iParam1, iVar0, &sVar1, &iVar2))
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

int func_128(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_129(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		iVar0 = func_27(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_135(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_134(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_26(iVar0))
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
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(753, iParam3, 0);
			}
			uParam1->f_60 = func_130(754, iParam3, 0);
			uParam1->f_61 = func_130(755, iParam3, 0);
		}
		if (unk_0x76CD105BCAC6EB9F() && iParam0 == unk_0x4A8C381C258A124D())
		{
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(753, iParam3, 0);
			}
		}
	}
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_131(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_132();
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

var func_132()
{
	return Global_1574918;
}

int func_133(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2848282[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
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

void func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
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

int func_136()
{
	func_25();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam0 == unk_0x4A8C381C258A124D())
		{
			func_138(iParam0, &(Global_113648.f_2365.f_539.f_298[iVar0 /*477*/]));
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

void func_138(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
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
			iVar3 = func_143(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBCEDAE6CA2B2046E(iParam0, func_143(iVar0));
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
					iVar1 = 0;
					iVar2 = func_141(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, iVar2))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_141(Var4.f_0, iVar1);
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
			if ((unk_0xA40B513DA7201333(iVar5, &Var7) && !func_140(Var7.f_1)) && iVar9 < 51)
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
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x0A334014DFD4952C(iVar5))
					{
						if (unk_0x38A1582CAC3F4E95(iVar5, iVar1, &Var8))
						{
							if (!func_139(Var8.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
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

int func_139(int iParam0)
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

int func_140(int iParam0)
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

int func_141(int iParam0, int iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
			switch (iParam1)
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
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_139(Var5.f_3))
							{
								if (iVar3 == iParam1)
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

int func_142(int iParam0, var uParam1)
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

int func_143(int iParam0)
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

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !unk_0x4FAFF4BCB7633475(iParam0))
	{
		Global_113648.f_2365.f_539.f_294[iVar0] = unk_0xE5E6F6EFCE07789A(iParam0);
	}
}

void func_145(var uParam0, int iParam1)
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
		if (func_148(&iVar0))
		{
			if (func_147(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar3 = func_24();
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
		else if (func_146(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_146(struct<3> Param0, char* sParam1, struct<3> Param2)
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

bool func_147(int iParam0, var uParam1, var uParam2)
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
	return !func_95(*uParam1, 0f, 0f, 0f, 0);
}

int func_148(var uParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_173())
		{
			*uParam0 = func_154(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 6, -1, 0, 1, -1);
			if (func_153(*uParam0) && !func_149(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_149(int iParam0)
{
	return func_150(iParam0, 0, 1);
}

int func_150(int iParam0, int iParam1, bool bParam2)
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
		if (func_152() == 0)
		{
			return BitTest(func_130(func_151(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_151(int iParam0)
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

int func_152()
{
	return Global_32163;
}

int func_153(int iParam0)
{
	return func_150(iParam0, 5, 1);
}

int func_154(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
		if (iParam1 == 6 || iParam1 == func_172(iVar0))
		{
			if (!bParam3 || func_171(iVar0))
			{
				fVar1 = unk_0xED977E2AE2CB16EE(Param0, func_155(iVar0, 0), 1);
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

Vector3 func_155(int iParam0, bool bParam1)
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
			return func_168(Global_102825);
			break;
		
		case 46:
			if (Global_1853747 != func_18())
			{
				if (func_167(Global_1853747))
				{
					return func_160(2, 2);
				}
				else if (func_159(Global_1853747))
				{
					return func_160(45, 3);
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
			return func_156();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_156()
{
	if (!func_158(Global_1956117))
	{
		return Global_1956117;
	}
	switch (func_157())
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

int func_157()
{
	return Global_2652258.f_2650;
}

int func_158(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_160(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853747 != func_18())
	{
		if (iParam1 == 3)
		{
			if (func_161(iParam0, 1, &Var0, 0, 0))
			{
				Var1 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
			{
				if (func_161(iParam0, 1, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
			else if (BitTest(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
			{
				if (func_161(iParam0, 2, &Var0, 0, 0))
				{
					Var1 = { Var0 };
				}
			}
		}
	}
	return Var1;
}

int func_161(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var1;
	struct<4> Var2;
	struct<3> Var3;
	
	if (!func_166(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_166(iParam1, &Var1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_164(iParam0) };
	}
	else
	{
		Var2 = { func_163(iParam0) };
	}
	Var3 = { Var2 - Var0 };
	Var3 = { func_162(Var3, -Var0.f_3.f_2) };
	Var3 = { func_162(Var3, Var1.f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(Var1, 0f, Var3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_162(struct<3> Param0, float fParam1)
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

struct<6> func_163(int iParam0)
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

struct<6> func_164(int iParam0)
{
	return func_165(iParam0);
}

struct<6> func_165(int iParam0)
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

int func_166(int iParam0, var uParam1)
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

int func_167(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || BitTest(Global_1853910[iParam0 /*862*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_168(int iParam0)
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
			if (func_169() == 0)
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

int func_169()
{
	return func_170(unk_0x259BE71D8A81D4FA());
}

var func_170(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_171(int iParam0)
{
	return func_150(iParam0, 0, 0);
}

int func_172(int iParam0)
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

bool func_173()
{
	return Global_100733.f_387 > 0;
}

var func_174()
{
	var uVar0;
	
	func_184(&uVar0, unk_0x4BA5A16068183C5E());
	func_183(&uVar0, unk_0x18E502A71E28968C());
	func_182(&uVar0, unk_0x5295501D0862870D());
	func_177(&uVar0, unk_0xB12880C92EA6EE15());
	func_176(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_175(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_175(var uParam0, int iParam1)
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

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_177(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_181(*uParam0);
	iVar1 = func_179(*uParam0);
	if (iParam1 < 1 || iParam1 > func_178(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_178(int iParam0, int iParam1)
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

var func_179(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_180(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_180(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_181(var uParam0)
{
	return uParam0 & 15;
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_185(char* sParam0)
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

struct<2> func_186(int iParam0)
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

int func_187(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x70E57E9927B6BA58(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_188(iVar0, &uVar1);
		if (unk_0x70E57E9927B6BA58(uVar1) == iVar2)
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

void func_188(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_189(uParam1, "Abigail1", func_191(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 1:
			func_189(uParam1, "Abigail2", func_191(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 2:
			func_189(uParam1, "Barry1", func_191(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 3:
			func_189(uParam1, "Barry2", func_191(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 4:
			func_189(uParam1, "Barry3", func_191(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 5:
			func_189(uParam1, "Barry3A", func_191(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 6:
			func_189(uParam1, "Barry3C", func_191(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 7:
			func_189(uParam1, "Barry4", func_191(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_190(iParam0), 0, 0);
			break;
		
		case 8:
			func_189(uParam1, "Dreyfuss1", func_191(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 9:
			func_189(uParam1, "Epsilon1", func_191(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 10:
			func_189(uParam1, "Epsilon2", func_191(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 11:
			func_189(uParam1, "Epsilon3", func_191(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 12:
			func_189(uParam1, "Epsilon4", func_191(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 13:
			func_189(uParam1, "Epsilon5", func_191(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 14:
			func_189(uParam1, "Epsilon6", func_191(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 15:
			func_189(uParam1, "Epsilon7", func_191(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 16:
			func_189(uParam1, "Epsilon8", func_191(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 17:
			func_189(uParam1, "Extreme1", func_191(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 18:
			func_189(uParam1, "Extreme2", func_191(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 19:
			func_189(uParam1, "Extreme3", func_191(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 20:
			func_189(uParam1, "Extreme4", func_191(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 21:
			func_189(uParam1, "Fanatic1", func_191(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_190(iParam0), 1, 0);
			break;
		
		case 22:
			func_189(uParam1, "Fanatic2", func_191(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_190(iParam0), 1, 0);
			break;
		
		case 23:
			func_189(uParam1, "Fanatic3", func_191(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_190(iParam0), 0, 1);
			break;
		
		case 24:
			func_189(uParam1, "Hao1", func_191(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_190(iParam0), 0, 1);
			break;
		
		case 25:
			func_189(uParam1, "Hunting1", func_191(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 26:
			func_189(uParam1, "Hunting2", func_191(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 27:
			func_189(uParam1, "Josh1", func_191(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 28:
			func_189(uParam1, "Josh2", func_191(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 29:
			func_189(uParam1, "Josh3", func_191(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 30:
			func_189(uParam1, "Josh4", func_191(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 31:
			func_189(uParam1, "Maude1", func_191(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 32:
			func_189(uParam1, "Minute1", func_191(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 33:
			func_189(uParam1, "Minute2", func_191(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 34:
			func_189(uParam1, "Minute3", func_191(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 35:
			func_189(uParam1, "MrsPhilips1", func_191(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 36:
			func_189(uParam1, "MrsPhilips2", func_191(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 37:
			func_189(uParam1, "Nigel1", func_191(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 38:
			func_189(uParam1, "Nigel1A", func_191(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 39:
			func_189(uParam1, "Nigel1B", func_191(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
			break;
		
		case 40:
			func_189(uParam1, "Nigel1C", func_191(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
			break;
		
		case 41:
			func_189(uParam1, "Nigel1D", func_191(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
			break;
		
		case 42:
			func_189(uParam1, "Nigel2", func_191(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 43:
			func_189(uParam1, "Nigel3", func_191(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
			break;
		
		case 44:
			func_189(uParam1, "Omega1", func_191(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 45:
			func_189(uParam1, "Omega2", func_191(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 46:
			func_189(uParam1, "Paparazzo1", func_191(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 47:
			func_189(uParam1, "Paparazzo2", func_191(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 48:
			func_189(uParam1, "Paparazzo3", func_191(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 49:
			func_189(uParam1, "Paparazzo3A", func_191(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 50:
			func_189(uParam1, "Paparazzo3B", func_191(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 51:
			func_189(uParam1, "Paparazzo4", func_191(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 52:
			func_189(uParam1, "Rampage1", func_191(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 54:
			func_189(uParam1, "Rampage3", func_191(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 55:
			func_189(uParam1, "Rampage4", func_191(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 56:
			func_189(uParam1, "Rampage5", func_191(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
			break;
		
		case 53:
			func_189(uParam1, "Rampage2", func_191(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
			break;
		
		case 57:
			func_189(uParam1, "TheLastOne", func_191(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 58:
			func_189(uParam1, "Tonya1", func_191(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 59:
			func_189(uParam1, "Tonya2", func_191(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 60:
			func_189(uParam1, "Tonya3", func_191(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 61:
			func_189(uParam1, "Tonya4", func_191(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		case 62:
			func_189(uParam1, "Tonya5", func_191(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_189(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_190(int iParam0)
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

struct<2> func_191(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_186(iParam0) };
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

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_193(Global_113648.f_9087.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_193(Global_113648.f_9087.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_193(Global_113648.f_9087.f_99.f_205[11]);
			break;
		
		case 90:
			return func_193(Global_113648.f_9087.f_99.f_205[7]);
			break;
		
		case 93:
			return func_193(Global_113648.f_9087.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_193(int iParam0)
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

int func_194(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x70E57E9927B6BA58(sParam0);
	iVar1 = func_195(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_195(int iParam0, bool bParam1)
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

void func_196(bool bParam0)
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

void func_197()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1983)
	{
		case 0:
			func_230(&uLocal_309, "PORT_OF_LS_PREP_1");
			if (unk_0x15CCE8886267624F())
			{
				unk_0x10B228D2FDB7AF16(800);
			}
			func_228(&Local_58, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (unk_0x6252BC0DD8A320DB(joaat("packer")) && unk_0x6252BC0DD8A320DB(joaat("armytrailer")))
			{
				func_108(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				func_227(587, 0);
				func_226(&uLocal_78, 1, 0, "FLOYD", 0, 1);
				func_225(6, 0);
				Local_53[2 /*2*/] = unk_0x5779387E956077A6(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, 1, 1, 0);
				unk_0xF04751F8E604D487(Local_53[2 /*2*/], 0);
				unk_0x5FE0938FDE9B0958(Local_53[2 /*2*/], 1);
				unk_0x20DD46D27530FAC7(Local_53[2 /*2*/], 0);
				unk_0x439C904840715871(Local_53[2 /*2*/], 0);
				Local_53[1 /*2*/] = unk_0x5779387E956077A6(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, 1, 1, 0);
				unk_0xF89624E52FCBE454(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
				unk_0x632030977D1CE430(Local_53[1 /*2*/]);
				unk_0x439C904840715871(Local_53[1 /*2*/], 0);
				unk_0x5FE0938FDE9B0958(Local_53[1 /*2*/], 1);
				iLocal_248 = 0;
				unk_0xA7B0B03284E7503C(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, 0, 1, 1, 1);
				iLocal_257 = 1;
				unk_0xCFBD89D2F1F18961("OnlyAllowScriptTriggerPoliceScanner", 0);
				iLocal_1983++;
			}
			break;
		
		case 1:
			if (func_224())
			{
				func_223(&uLocal_309, cLocal_49);
				func_223(&uLocal_309, cLocal_50);
				iLocal_261 = -1;
				iLocal_262 = 0;
				iLocal_1983++;
			}
			break;
		
		case 2:
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], 0))
			{
				switch (iLocal_262)
				{
					case 0:
						if (!unk_0x4C705AAF75363287())
						{
							if (iLocal_261 == -1)
							{
								iLocal_261 = unk_0x1DD05E817C89C737() + 5000;
							}
							if (unk_0x1DD05E817C89C737() > iLocal_261)
							{
								func_222("DKP1_SUBTURN", -1);
								iLocal_262++;
							}
						}
						break;
					
					case 1:
						if (!unk_0x4C705AAF75363287())
						{
							func_222("SUB_HELP", -1);
							iLocal_262++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_262 == 0)
				{
					iLocal_261 = -1;
				}
				if (unk_0x4C705AAF75363287())
				{
					if (func_221("DKP1_SUBTURN") || func_221("SUB_HELP"))
					{
						unk_0x428C32CC68809A35(1);
					}
				}
			}
			if (unk_0xA24B9FF9863A909D(Local_53[0 /*2*/], 3, 10000))
			{
				func_93(1);
			}
			if (func_92(unk_0x4A8C381C258A124D(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (unk_0xB3157976738FC0C0("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_306 = true;
				}
				func_91(&(Local_57[2 /*2*/]), 0);
				func_89(&uLocal_309, joaat("prop_sub_release"));
			}
			else
			{
				unk_0x22A76EDE2316E9A1();
				bLocal_306 = false;
			}
			if (func_107(Local_54[6 /*10*/]))
			{
				if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xCA038E64C65D1F9D(Local_54[6 /*10*/])) || func_10(unk_0x4A8C381C258A124D(), Local_54[6 /*10*/], 1) > 100f)
				{
					unk_0x974022927CB47E68(Local_54[6 /*10*/]);
					func_9(&(Local_54[6 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[7 /*10*/]))
			{
				if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xCA038E64C65D1F9D(Local_54[7 /*10*/])) || func_10(unk_0x4A8C381C258A124D(), Local_54[7 /*10*/], 1) > 100f)
				{
					unk_0x974022927CB47E68(Local_54[7 /*10*/]);
					func_9(&(Local_54[7 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xCA038E64C65D1F9D(Local_54[4 /*10*/])) || func_10(unk_0x4A8C381C258A124D(), Local_54[4 /*10*/], 1) > 100f)
				{
					unk_0x974022927CB47E68(Local_54[4 /*10*/]);
					func_9(&(Local_54[4 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_54[5 /*10*/]))
			{
				if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || unk_0xCA038E64C65D1F9D(Local_54[5 /*10*/])) || func_10(unk_0x4A8C381C258A124D(), Local_54[5 /*10*/], 1) > 100f)
				{
					unk_0x974022927CB47E68(Local_54[5 /*10*/]);
					func_9(&(Local_54[5 /*10*/]), 1, 0, 1);
				}
			}
			if (func_228(&Local_58, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((unk_0xC450B06E5AAA0985(Local_58.f_5) && unk_0x5105BE70DEF1F5FB(Local_53[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, 0, 1, 0)) && func_220(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/])))
			{
				if (func_107(Local_53[2 /*2*/]) && func_107(Local_53[1 /*2*/]))
				{
					func_219(&Local_58, 0);
					func_218(6, 0);
					unk_0x86A2BC11844DEEB3("DHP1_STOP");
					func_217(0, -1);
					unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 256);
					iLocal_301 = unk_0x1DD05E817C89C737();
					iLocal_1983++;
				}
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0 && unk_0xC450B06E5AAA0985(Local_58.f_5))
			{
				unk_0x7E763410A91A972B(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, 0, 0, 2, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			if (func_82(Local_53[0 /*2*/]) || (unk_0x1DD05E817C89C737() - iLocal_301) > 3500)
			{
				uLocal_293 = unk_0x96A32328480B485C(26379945, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, 0, 2);
				unk_0x4CBC5D1BC117616B(uLocal_293, 1);
				unk_0x2A09425009DAD0F5(uLocal_293, "HAND_SHAKE", 0.4f);
				unk_0xA3774254665BAA82(uLocal_293, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_211(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				func_88(&uLocal_309, joaat("prop_tarp_strap"));
				unk_0xB2BD5837A8D3CEDA(Local_53[0 /*2*/], Local_276, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(Local_53[0 /*2*/], fLocal_277);
				iLocal_301 = unk_0x1DD05E817C89C737();
				iLocal_275 = 0;
				unk_0xA62957B100C8DE6D(8f, 0f, 4);
				iLocal_1983++;
			}
			else
			{
				func_46(Local_53[0 /*2*/], 7f, 1, 1056964608, 0, 1, 0);
			}
			break;
		
		case 4:
			if (func_202())
			{
				iLocal_1983++;
			}
			break;
		
		case 5:
			if (unk_0x0DDDD9D153BCF51F() && unk_0x6252BC0DD8A320DB(joaat("prop_tarp_strap")))
			{
				unk_0xF293D66D4452C854(Local_53[2 /*2*/], "DockHeist_truck", 0, 0, 0);
				unk_0xF293D66D4452C854(Local_53[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				unk_0xF293D66D4452C854(Local_53[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				unk_0xF293D66D4452C854(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				unk_0xF293D66D4452C854(0, "Floyd", 2, joaat("ig_floyd"), 0);
				unk_0x2F19C4305F0B8DA7("Trevor", unk_0x4A8C381C258A124D(), 0);
				unk_0xBA3C1A9AA7FD9616(Local_53[2 /*2*/], 1);
				unk_0xF04751F8E604D487(Local_53[2 /*2*/], 1);
				func_201(0);
				unk_0xB9784D6C7219851B(4);
				unk_0x1837D912F4EDCA95(0, 0, 1, 0);
				unk_0xED65412F8B26ED99(0);
				iLocal_1983++;
			}
			break;
		
		case 6:
			if (unk_0xFD216000DC314A92())
			{
				if (unk_0x5AEB336317DC4151("PO1_08_sub_waterplane"))
				{
					unk_0x5373E9377066509E("PO1_08_sub_waterplane");
				}
			}
			if (unk_0x2B60F53D06BC6971(0))
			{
				unk_0x64BB72494B9DF6DC(0f);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x37B894853929BF1A(1);
				unk_0x747786364137DC63(1);
				unk_0x3B327805C3CAF8DC();
			}
			if (!unk_0xFC8BFE4B41177C22(Local_54[3 /*10*/]))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("Floyd", 0)))
				{
					Local_54[3 /*10*/] = unk_0xBD545F8729E9F413(unk_0x4240B5D04F91480C("Floyd", 0));
					func_226(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					unk_0x3CEA1FD137ACE2D9(Local_54[3 /*10*/], iLocal_259);
				}
			}
			if (unk_0xD8FC13DA1BA1DBA2("Trevor", 0))
			{
				iLocal_295 = 1;
			}
			if (unk_0xD8FC13DA1BA1DBA2("Floyd", 0))
			{
				iLocal_296 = 1;
			}
			if (unk_0xD8FC13DA1BA1DBA2("DockHeist_truck", 0))
			{
				unk_0xD735FEDB86CA06C6(Local_53[2 /*2*/], 1, 0, 0);
				unk_0xC3680B85B2D7086A(Local_53[2 /*2*/], 1);
				iLocal_297 = 1;
			}
			if (unk_0xD8FC13DA1BA1DBA2("DockHeist_trailer", 0))
			{
				unk_0xD735FEDB86CA06C6(Local_53[1 /*2*/], 1, 0, 0);
				iLocal_300 = 1;
			}
			if (unk_0xD8FC13DA1BA1DBA2("submarine", 0))
			{
				iLocal_298 = 1;
			}
			if (unk_0xD8FC13DA1BA1DBA2("sub_cover", 0))
			{
				iLocal_299 = 1;
			}
			else if (!unk_0xFC8BFE4B41177C22(Local_57[4 /*2*/]))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x4240B5D04F91480C("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_57[4 /*2*/] = unk_0x0646D07BB2D516CD(unk_0x4240B5D04F91480C("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (unk_0x9FFEA38DBCE391EC(Local_53[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (unk_0x15EF8F22A719BE5E() >= 14200)
					{
						unk_0xBA3C1A9AA7FD9616(Local_53[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_295 && iLocal_296) && iLocal_297) && iLocal_298) && iLocal_299) && iLocal_300)
			{
				if (unk_0x9390801B06EE998F() || unk_0x69CD279BFCFE278E(Local_54[3 /*10*/]))
				{
					unk_0x73CAFD2038E812B3(Local_54[3 /*10*/], Local_53[2 /*2*/], 0);
					unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_53[2 /*2*/], -1);
					unk_0x9E132DB7E05C6EAB(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					unk_0xF04751F8E604D487(Local_53[0 /*2*/], 0);
					unk_0xC3680B85B2D7086A(Local_53[0 /*2*/], 1);
					unk_0x0B74F181ADFC39BF(Local_53[0 /*2*/], 10);
					unk_0xC229299217554C78(Local_53[0 /*2*/], 0, 1, 0);
					unk_0xBA3C1A9AA7FD9616(Local_53[0 /*2*/], 1);
					unk_0x4DC72C4B884A6C59(Local_53[0 /*2*/], 0);
					unk_0x4D306DD94DD6FDBA(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					Local_57[5 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
					unk_0x4D306DD94DD6FDBA(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					func_200(1, 0, 0, 3000, 0);
					func_199(&uLocal_309);
					iLocal_1983++;
				}
			}
			break;
		
		case 7:
			func_198(2);
			iLocal_1983 = 0;
			break;
	}
	if (unk_0xC450B06E5AAA0985(Local_58.f_5))
	{
		unk_0xBC64B805EE071A37(Local_58.f_5, 0);
	}
	if (func_107(unk_0x4A8C381C258A124D()) && func_107(Local_53[0 /*2*/]))
	{
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 324.7653f, -2974.495f, -1f, 1) > 2500f)
		{
			func_93(9);
		}
	}
}

int func_198(int iParam0)
{
	if (iLocal_1981 == 0)
	{
		iLocal_1984 = iParam0;
		iLocal_1981 = 1;
		return 1;
	}
	return 0;
}

void func_199(var uParam0)
{
	if (uParam0->f_890)
	{
		if (uParam0->f_890.f_1)
		{
			unk_0xAE427DA16687F323();
			func_90(&(uParam0->f_890));
		}
		else
		{
			uParam0->f_890.f_2 = 1;
			uParam0->f_1012 = 1;
		}
	}
}

void func_200(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), iParam0, iParam4);
	unk_0xE37AF9002E782BA0(bParam1, iParam2, iParam3, 1, 0, 0);
	if (!bParam1)
	{
		unk_0x3AA8CFEBC938A945(0);
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x4DC72C4B884A6C59(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1);
	}
}

void func_201(int iParam0)
{
	iLocal_295 = iParam0;
	iLocal_296 = iParam0;
	iLocal_297 = iParam0;
	iLocal_299 = iParam0;
	iLocal_298 = iParam0;
	iLocal_300 = iParam0;
}

int func_202()
{
	float fVar0;
	
	switch (iLocal_275)
	{
		case 0:
			func_210();
			unk_0xB2BD5837A8D3CEDA(Local_53[0 /*2*/], Local_276, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(Local_53[0 /*2*/], fLocal_277);
			unk_0x5D7CD709B34C90F0(Local_53[0 /*2*/], 1);
			uLocal_245 = unk_0x62750FD2BDD8BD49("scr_pls_sub_water_drips", Local_53[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			unk_0xABAD28B5A427340D(uLocal_245, "flow", 1f, 0);
			unk_0x839AD252B0708F35("dhp1_mcs_1", 8);
			if (bLocal_306)
			{
				unk_0x64B3EF30EAA9FBA3();
			}
			if (unk_0x5295501D0862870D() >= 20 || unk_0x5295501D0862870D() <= 7)
			{
				unk_0xECFC57F5F11BCD83("PO1_08_sub_waterplane");
			}
			func_209(&uLocal_309, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_275++;
			break;
		
		case 1:
			Local_287 = { unk_0xD1A6A821F5AC81DB(Local_57[8 /*2*/], 1) };
			if (Local_287.f_2 <= 1f)
			{
				unk_0x5D7CD709B34C90F0(Local_53[0 /*2*/], 0);
				unk_0xA3774254665BAA82(uLocal_293, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uLocal_293, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				unk_0x4D306DD94DD6FDBA(Local_53[0 /*2*/], Local_57[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1, 0);
				iLocal_275++;
			}
			else
			{
				func_208(1, 2f);
			}
			break;
		
		case 2:
			Local_287 = { unk_0xD1A6A821F5AC81DB(Local_57[8 /*2*/], 1) };
			if (Local_287.f_2 >= 12.5f)
			{
				unk_0xA3774254665BAA82(uLocal_293, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uLocal_293, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_292 = unk_0x97410F245819ED32(uLocal_293);
				unk_0x3AAB5D3F3D4028CC(uLocal_293, 1.8f);
				iLocal_275++;
			}
			else
			{
				func_208(0, 1f);
			}
			break;
		
		case 3:
			if (fLocal_283 >= 40f)
			{
				unk_0xA3774254665BAA82(uLocal_293, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uLocal_293, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				unk_0x3AAB5D3F3D4028CC(uLocal_293, fLocal_292);
				fLocal_283 = 80f;
				unk_0x837D67618BF89034(Local_57[7 /*2*/], 1, 1);
				unk_0x4D306DD94DD6FDBA(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1, 0);
				unk_0x62C438C53BB57AFD(Local_57[8 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[7 /*2*/], Local_285), 0, 0, 1);
				iLocal_1989 = unk_0x1DD05E817C89C737();
				iLocal_275++;
			}
			else
			{
				func_207(1, 5.5f);
			}
			break;
		
		case 4:
			if (fLocal_283 >= 108f)
			{
				unk_0xF8A2800C0B863DB1(1f);
				unk_0xA3774254665BAA82(uLocal_293, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uLocal_293, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				unk_0x17F06E9D89A05855(uLocal_293, 0.25f);
				unk_0x837D67618BF89034(Local_57[7 /*2*/], 1, 1);
				unk_0x4D306DD94DD6FDBA(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1, 0);
				unk_0x62C438C53BB57AFD(Local_57[8 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[7 /*2*/], Local_285), 0, 0, 1);
				if (unk_0x9CFFB7009B578840(uLocal_245))
				{
					unk_0x182120534CCF9023(uLocal_245, 0);
				}
				iLocal_275++;
			}
			else
			{
				fVar0 = (1f - func_206((to_float((unk_0x1DD05E817C89C737() - iLocal_1989 + 1500)) / 3000f), 0f, 1f));
				unk_0xABAD28B5A427340D(uLocal_245, "flow", fVar0, 0);
				func_207(1, 5.5f);
			}
			break;
		
		case 5:
			unk_0xF8A2800C0B863DB1(1f);
			Local_287 = { unk_0xD1A6A821F5AC81DB(Local_57[8 /*2*/], 1) };
			if (Local_287.f_2 <= 11f)
			{
				unk_0x837D67618BF89034(Local_53[0 /*2*/], 1, 1);
				iLocal_275++;
			}
			else
			{
				func_208(1, 1f);
			}
			break;
		
		case 6:
			if (unk_0x14E25ED5E75102C8(Local_53[0 /*2*/]))
			{
				iLocal_1989 = unk_0x1DD05E817C89C737() + 1000;
				iLocal_275++;
			}
			break;
		
		case 7:
			if (unk_0x1DD05E817C89C737() > iLocal_1989)
			{
				unk_0x5D7CD709B34C90F0(Local_57[8 /*2*/], 1);
				iLocal_275++;
			}
			else
			{
				func_207(0, 4f);
				func_208(0, 1f);
			}
			break;
		
		case 8:
			func_205(&uLocal_309);
			return 1;
			break;
	}
	if (unk_0x9390801B06EE998F())
	{
		if (iLocal_275 > 0 && iLocal_275 < 5)
		{
			if (func_203(1000))
			{
				unk_0x8F72AF14CE5AACE4(800);
			}
		}
	}
	else if (unk_0x15CCE8886267624F())
	{
		if (unk_0x9CFFB7009B578840(uLocal_245))
		{
			unk_0x182120534CCF9023(uLocal_245, 0);
		}
		unk_0xA69DCC67B2B61AD1(unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1), 30f);
		iLocal_1987 = 2;
		iLocal_1986 = 1;
	}
	return 0;
}

int func_203(int iParam0)
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
			if (func_204())
			{
				Global_27 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
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

void func_205(var uParam0)
{
	if (unk_0x787F8EE1F6FBDC6D())
	{
		unk_0x6981C3213B841071();
		func_90(&(uParam0->f_898));
	}
}

float func_206(float fParam0, float fParam1, float fParam2)
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

void func_207(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		fLocal_283 = (fLocal_283 + (fParam1 * timestep()));
	}
	else
	{
		fLocal_283 = (fLocal_283 - (fParam1 * timestep()));
	}
	unk_0x837D67618BF89034(Local_57[7 /*2*/], 1, 1);
	unk_0x4D306DD94DD6FDBA(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1, 0);
	unk_0x62C438C53BB57AFD(Local_57[8 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[7 /*2*/], Local_285), 0, 0, 1);
}

void func_208(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		Local_285.f_2 = (Local_285.f_2 - (fParam1 * timestep()));
	}
	else
	{
		Local_285.f_2 = (Local_285.f_2 + (fParam1 * timestep()));
	}
	unk_0x62C438C53BB57AFD(Local_57[8 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[7 /*2*/], Local_285), 0, 0, 1);
}

int func_209(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_158(Param1) || func_158(Param2))
	{
		return 0;
	}
	if (uParam0->f_898)
	{
		if ((func_95(uParam0->f_898.f_4, Param1, 0) && func_95(uParam0->f_898.f_7, Param2, 0)) && uParam0->f_898.f_10 == fParam3)
		{
			uParam0->f_898.f_2 = 0;
			if (!uParam0->f_898.f_1)
			{
				uParam0->f_1012 = 1;
				return 1;
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
	else
	{
		unk_0xAC48F8E2BF2BEBF7(Param1, Param2, fParam3, iParam4);
		uParam0->f_898 = 1;
		uParam0->f_898.f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_898.f_4 = { Param1 };
		uParam0->f_898.f_7 = { Param2 };
		uParam0->f_898.f_10 = fParam3;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

void func_210()
{
	if (iLocal_248)
	{
		unk_0x51EC3CEC568ABB81(&(Local_55[0 /*5*/]));
		unk_0x51EC3CEC568ABB81(&(Local_55[1 /*5*/]));
		unk_0x51EC3CEC568ABB81(&(Local_55[2 /*5*/]));
		unk_0x51EC3CEC568ABB81(&(Local_55[3 /*5*/]));
		iLocal_248 = 0;
	}
}

void func_211(int iParam0, struct<3> Param1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), iParam0, iParam6);
	unk_0x406CBCEA35499884();
	unk_0x428C32CC68809A35(1);
	unk_0xE37AF9002E782BA0(iParam2, iParam3, iParam5, 1, 0, 0);
	if (bParam4)
	{
		unk_0xEC73DFE5CE55E19C(Param1, 500f, 0);
	}
	unk_0xD7ABE01242C5B8E3(Param1, 300f);
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x4DC72C4B884A6C59(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0);
	}
	if (bParam7)
	{
		func_212(0);
	}
}

void func_212(int iParam0)
{
	if (func_216())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_215())
		{
			func_213(1, 1);
		}
		else
		{
			func_213(0, 0);
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
	if (!func_21())
	{
		Global_20383.f_1 = 3;
	}
}

void func_213(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_214(0))
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

int func_214(int iParam0)
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

bool func_215()
{
	return BitTest(Global_1962996, 5);
}

bool func_216()
{
	return BitTest(Global_1962996, 19);
}

void func_217(bool bParam0, int iParam1)
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

void func_218(bool bParam0, bool bParam1)
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

void func_219(var uParam0, bool bParam1)
{
	func_42(uParam0, bParam1, 0);
}

int func_220(int iParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xFC8BFE4B41177C22(iParam1) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (unk_0xF4244288C3EF3306(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_221(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_222(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_223(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (!unk_0xD6F9DEE4765092A9(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_273)
		{
			if (uParam0->f_273[iVar0 /*5*/])
			{
				if (unk_0x1B79E937E91F40C3(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_273[iVar0 /*5*/].f_1)
					{
						unk_0x268BE77F77533D03(sParam1);
						func_90(&(uParam0->f_273[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_273[iVar0 /*5*/].f_2 = 1;
						uParam0->f_1012 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_224()
{
	if (!unk_0xFC8BFE4B41177C22(Local_57[6 /*2*/]))
	{
		Local_57[6 /*2*/] = unk_0x4E55EAB577C13329(iLocal_278, Local_279, 1, 1, 0);
		unk_0xB2BD5837A8D3CEDA(Local_57[6 /*2*/], Local_279, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(Local_57[6 /*2*/], fLocal_280);
		unk_0x5D7CD709B34C90F0(Local_57[6 /*2*/], 1);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[7 /*2*/]))
	{
		Local_57[7 /*2*/] = unk_0x4E55EAB577C13329(iLocal_281, unk_0x0D1381B6E0F3987D(Local_57[6 /*2*/], Local_282), 1, 1, 0);
	}
	if (!unk_0x21478251925DBFD7(Local_57[7 /*2*/], Local_57[6 /*2*/]))
	{
		unk_0x4D306DD94DD6FDBA(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, 0, 0, 0, 0, 2, 1, 0);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[8 /*2*/]))
	{
		Local_57[8 /*2*/] = unk_0x4E55EAB577C13329(iLocal_284, unk_0x0D1381B6E0F3987D(Local_57[7 /*2*/], Local_285), 1, 1, 0);
		unk_0x11C125313CB8ADA2(Local_57[8 /*2*/], 0);
		unk_0x4D306DD94DD6FDBA(Local_57[8 /*2*/], Local_57[7 /*2*/], -1, Local_285, 0f, 0f, fLocal_286, 0, 0, 0, 0, 2, 1, 0);
		unk_0x837D67618BF89034(Local_57[8 /*2*/], 1, 0);
		unk_0x5D7CD709B34C90F0(Local_57[8 /*2*/], 1);
	}
	if (!iLocal_249)
	{
		if (unk_0x4DBCC7D5D01D67FA(Local_57[7 /*2*/]) && unk_0x4DBCC7D5D01D67FA(Local_57[8 /*2*/]))
		{
			iLocal_290 = unk_0x0689621FADCB043F(unk_0x0D1381B6E0F3987D(Local_57[7 /*2*/], Local_288), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, 0, 0, 1, 1f, 0, 0);
			unk_0x39073821D1E47645(iLocal_290, 1);
			unk_0x0BE3274CCADBCC99(iLocal_290, 2);
			unk_0x673A321A632EAD3B(&iLocal_290, 0);
			unk_0x3640C9BF5BF56ED8(iLocal_290, Local_57[7 /*2*/], Local_57[8 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[7 /*2*/], Local_288), unk_0x0D1381B6E0F3987D(Local_57[8 /*2*/], Local_289), 70f, 0, 0, 0, 0);
			iLocal_249 = 1;
			return 1;
		}
		if (!unk_0x4DBCC7D5D01D67FA(Local_57[7 /*2*/]))
		{
		}
		if (!unk_0x4DBCC7D5D01D67FA(Local_57[8 /*2*/]))
		{
		}
	}
	return 0;
}

void func_225(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_32323, iParam0);
	StringCopy(&(Global_32324[iParam0 /*6*/]), unk_0x1AF90EB93E0012D6(), 24);
	Global_32379[iParam0] = iParam1;
}

void func_226(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_227(int iParam0, bool bParam1)
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

int func_228(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_49(uParam0, Param1, Param2, func_87(), func_87(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_229(), func_229(), func_229(), func_229(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

var func_229()
{
	var uVar0;
	
	return uVar0;
}

void func_230(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x1B79E937E91F40C3(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_737[iVar0 /*5*/].f_1)
				{
					unk_0x48FA483FE4F18CFE(sParam1);
					func_90(&(uParam0->f_737[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_737[iVar0 /*5*/].f_2 = 1;
					uParam0->f_1012 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_231()
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_1983)
	{
		case 0:
			if (unk_0x15CCE8886267624F())
			{
				unk_0x10B228D2FDB7AF16(800);
			}
			if (func_107(Local_53[0 /*2*/]))
			{
				if (!unk_0xC450B06E5AAA0985(Local_53[0 /*2*/].f_1))
				{
					Local_53[0 /*2*/].f_1 = func_38(Local_53[0 /*2*/], 0, 0);
				}
				Local_56 = { unk_0x30E2D00B68214AB1(Local_53[0 /*2*/]) };
			}
			if (unk_0xFC8BFE4B41177C22(Local_57[2 /*2*/]) && !unk_0xC450B06E5AAA0985(uLocal_243))
			{
				uLocal_243 = func_281(Local_57[2 /*2*/]);
			}
			unk_0x594D5D0D7071B0DE(uLocal_243, "SUBBTN_LABEL");
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				unk_0x86A2BC11844DEEB3("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				unk_0x86A2BC11844DEEB3("DHP1_START");
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				unk_0xAAA71DD7E9059338(Local_54[4 /*10*/], 1);
				unk_0x176A19E4589CC2C6(Local_54[4 /*10*/], 0);
			}
			func_280(&uLocal_309, cLocal_51);
			func_280(&uLocal_309, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_279(&uLocal_309, "PORT_OF_LS_PREP_1");
			func_35("dkp1_sub", 7500, 1);
			iLocal_264 = 0;
			iLocal_265 = 0;
			iLocal_266 = 0;
			iLocal_268 = unk_0x1DD05E817C89C737();
			iLocal_269 = 0;
			iLocal_253 = 0;
			iLocal_263 = 0;
			if (uLocal_1992[0] == -1)
			{
				uLocal_1992[0] = unk_0xCA369FBC0DE29517();
			}
			if (uLocal_1992[1] == -1)
			{
				uLocal_1992[1] = unk_0xCA369FBC0DE29517();
			}
			iLocal_1983++;
			break;
		
		case 1:
			if (iLocal_248)
			{
				if (((!unk_0xB9DDE5F54A275DFF(&(Local_55[0 /*5*/])) && !unk_0xB9DDE5F54A275DFF(&(Local_55[1 /*5*/]))) && !unk_0xB9DDE5F54A275DFF(&(Local_55[2 /*5*/]))) && !unk_0xB9DDE5F54A275DFF(&(Local_55[3 /*5*/])))
				{
					unk_0x3C3B85A84C954686(Local_57[0 /*2*/]);
					unk_0x3C3B85A84C954686(Local_57[1 /*2*/]);
					if (func_107(Local_53[0 /*2*/]))
					{
						unk_0x8462CDB3E1DA954A(Local_53[0 /*2*/], Local_56);
					}
					if (unk_0xC450B06E5AAA0985(uLocal_243))
					{
						unk_0xFE54B8568B2ABD12(&uLocal_243);
					}
					func_275(1);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_280(&uLocal_309, cLocal_49);
					unk_0x86A2BC11844DEEB3("DHP1_RELEASED");
					unk_0x428C32CC68809A35(1);
					iLocal_301 = unk_0x1DD05E817C89C737();
					iLocal_1983 = 4;
				}
				func_274();
				if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, 0, 1, 0) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) && !func_214(0))
				{
					if (unk_0x875A214D5EBCA509(2, 51))
					{
						uLocal_293 = unk_0x96A32328480B485C(26379945, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, 1, 2);
						unk_0xA3774254665BAA82(uLocal_293, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						unk_0x2A09425009DAD0F5(uLocal_293, "hand_shake", 0.3f);
						func_211(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
						unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
						uLocal_246 = unk_0x2EC137C692A52458(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (unk_0xC2BF1F6F84E31EB2(unk_0x4A8C381C258A124D()))
						{
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uLocal_246, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), uLocal_246, cLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
						unk_0x428C32CC68809A35(1);
						iVar0 = unk_0xF0CA45A211FFDCD9(1249.787f, -3008.016f, 8.52751f, 5f, 0, 4);
						if (func_107(iVar0))
						{
							unk_0xB2BD5837A8D3CEDA(iVar0, 1250.333f, -3010.219f, 8.3191f, 1, 0, 0, 1);
							unk_0x5C96CEA06531AB03(iVar0, 85.8086f);
							unk_0x1DE99C193C7EC64B(iVar0, 1084227584);
						}
						unk_0xA62957B100C8DE6D(4f, 0f, 4);
						unk_0xB9784D6C7219851B(4);
						iLocal_294 = 1;
						iLocal_1983++;
					}
					else if (!func_221("DKP1_BTN"))
					{
						func_273("DKP1_BTN");
					}
				}
				else if (func_221("DKP1_BTN"))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x5266F1D2AEF6F73A(uLocal_246) || unk_0xBD3B265153D3BA2D(uLocal_246) == 1f)
			{
				unk_0x3B327805C3CAF8DC();
				unk_0xF37CDE164C892195(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0, 0);
				unk_0xA3774254665BAA82(uLocal_293, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				unk_0xA3774254665BAA82(uLocal_293, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				unk_0x17F06E9D89A05855(uLocal_293, 0.1f);
				unk_0x6DE0DFF01BAFA2BC(Local_55[0 /*5*/], Local_53[0 /*2*/]);
				unk_0x6DE0DFF01BAFA2BC(Local_55[1 /*5*/], Local_53[0 /*2*/]);
				unk_0x6DE0DFF01BAFA2BC(Local_55[2 /*5*/], Local_53[0 /*2*/]);
				unk_0x6DE0DFF01BAFA2BC(Local_55[3 /*5*/], Local_53[0 /*2*/]);
				unk_0x3C3B85A84C954686(Local_57[0 /*2*/]);
				unk_0x3C3B85A84C954686(Local_57[1 /*2*/]);
				if (func_107(Local_53[0 /*2*/]))
				{
					unk_0x8462CDB3E1DA954A(Local_53[0 /*2*/], Local_56);
					unk_0x79B52EC5A9AB6229(Local_53[0 /*2*/]);
				}
				iLocal_301 = unk_0x1DD05E817C89C737();
				unk_0x86A2BC11844DEEB3("DHP1_RELEASED");
				unk_0x428C32CC68809A35(1);
				iLocal_294 = 1;
				iLocal_1983++;
			}
			else if (unk_0x5266F1D2AEF6F73A(uLocal_246) && unk_0xBD3B265153D3BA2D(uLocal_246) >= 0.7f)
			{
				if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_follow_nav_mesh_to_coord")) != 1)
				{
					unk_0xA966E518B752B92A(unk_0x4A8C381C258A124D(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - iLocal_301) > 1500)
			{
				if (iLocal_294)
				{
					unk_0xA3774254665BAA82(uLocal_293, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					unk_0xA3774254665BAA82(uLocal_293, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_294 = 0;
				}
				if ((unk_0x1DD05E817C89C737() - iLocal_301) > 5000 || unk_0x875A214D5EBCA509(2, 201))
				{
					if (unk_0xC450B06E5AAA0985(uLocal_243))
					{
						unk_0xFE54B8568B2ABD12(&uLocal_243);
					}
					func_275(1);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_280(&uLocal_309, cLocal_49);
					unk_0x64BB72494B9DF6DC(0f);
					unk_0xD815D4BD1AE9E85A(0f, 1065353216);
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					func_200(1, 0, 0, 3000, 0);
					iLocal_301 = unk_0x1DD05E817C89C737();
					iLocal_1983++;
				}
			}
			break;
		
		case 4:
			if (!func_272())
			{
				if (func_24() == 2)
				{
					if (!func_269(func_270(0), 0) && !func_269(func_270(1), 0))
					{
						func_268(12);
						iLocal_1983++;
					}
					else if (func_269(func_270(0), 0) && !func_269(func_270(1), 0))
					{
						func_226(&uLocal_78, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
						func_226(&uLocal_78, 1, func_270(0), "MICHAEL", 0, 1);
						if (func_265(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							func_268(12);
							iLocal_1983++;
						}
					}
					else if (!func_269(func_270(0), 0) && func_269(func_270(1), 0))
					{
						func_226(&uLocal_78, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
						func_226(&uLocal_78, 2, func_270(1), "FRANKLIN", 0, 1);
						if (func_265(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							func_268(12);
							iLocal_1983++;
						}
					}
					else
					{
						func_226(&uLocal_78, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
						func_226(&uLocal_78, 1, func_270(0), "MICHAEL", 0, 1);
						func_226(&uLocal_78, 2, func_270(1), "FRANKLIN", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							func_268(12);
							iLocal_1983++;
						}
					}
				}
				else if (func_36())
				{
					func_35("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		
		case 5:
			Var1 = { unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1) };
			if (unk_0x837FF265C016E3B7(Local_53[0 /*2*/]) > 0f || Var1.f_2 < -0.5f)
			{
				unk_0x6FC03AECD995B8CC(Local_55[0 /*5*/]);
				unk_0x6FC03AECD995B8CC(Local_55[1 /*5*/]);
				unk_0x6FC03AECD995B8CC(Local_55[2 /*5*/]);
				unk_0x6FC03AECD995B8CC(Local_55[3 /*5*/]);
				if (uLocal_1992[0] != -1)
				{
					unk_0x8E4825CCACA34B58(uLocal_1992[0]);
				}
				if (uLocal_1992[1] != -1)
				{
					unk_0x8E4825CCACA34B58(uLocal_1992[1]);
				}
			}
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], 0))
			{
				func_232(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
				{
					Local_54[6 /*10*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					unk_0xB41DEC3AAC1AA107(Local_54[6 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					unk_0x0428AFDCAA63B06E(Local_54[6 /*10*/], 330, 1);
					unk_0x91B8DEBF573007DE(Local_54[6 /*10*/], 1);
					unk_0xD0557B139A542F12(&uLocal_244);
					unk_0xB5396F1FB088FE38(&uLocal_244);
					unk_0xA966E518B752B92A(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
					unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
					unk_0x93C0674FC00824D0(uLocal_244);
					unk_0x4BD42B0527065BB6(Local_54[6 /*10*/], uLocal_244);
					unk_0xD0557B139A542F12(&uLocal_244);
					Local_54[7 /*10*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					unk_0x0428AFDCAA63B06E(Local_54[7 /*10*/], 330, 1);
					unk_0xB41DEC3AAC1AA107(Local_54[7 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					unk_0x91B8DEBF573007DE(Local_54[7 /*10*/], 1);
					unk_0xD0557B139A542F12(&uLocal_244);
					unk_0xB5396F1FB088FE38(&uLocal_244);
					unk_0xA966E518B752B92A(0, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
					unk_0x62A5310368A20EFA(0, unk_0x4A8C381C258A124D(), 0, 16);
					unk_0x93C0674FC00824D0(uLocal_244);
					unk_0x4BD42B0527065BB6(Local_54[7 /*10*/], uLocal_244);
					unk_0xD0557B139A542F12(&uLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_54[5 /*10*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, 1, 1);
					unk_0xAAA71DD7E9059338(Local_54[5 /*10*/], 1);
					unk_0xD0557B139A542F12(&uLocal_244);
					unk_0xB5396F1FB088FE38(&uLocal_244);
					unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2096, 2);
					unk_0xA966E518B752B92A(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					unk_0x10425721983AE158(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0x10425721983AE158(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					unk_0xFD251F92B546F389(0, 1252.876f, -3014.035f, 8.31909f, 300f, -1, 0, 0);
					unk_0x93C0674FC00824D0(uLocal_244);
					unk_0x4BD42B0527065BB6(Local_54[5 /*10*/], uLocal_244);
					unk_0xD0557B139A542F12(&uLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				if (func_107(Local_54[4 /*10*/]))
				{
					unk_0x974022927CB47E68(Local_54[4 /*10*/]);
					unk_0xB2BD5837A8D3CEDA(Local_54[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, 1, 0, 0, 1);
				}
				else
				{
					Local_54[4 /*10*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, 1, 1);
				}
				unk_0xAAA71DD7E9059338(Local_54[4 /*10*/], 1);
				unk_0xFD61BB3B8F1CDB6D(Local_54[4 /*10*/], 1);
				unk_0xD0557B139A542F12(&uLocal_244);
				unk_0xB5396F1FB088FE38(&uLocal_244);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2096, 2);
				unk_0xA966E518B752B92A(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 0.25f, 0, 40000f);
				unk_0x10425721983AE158(0, cLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x10425721983AE158(0, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0xFD251F92B546F389(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_244);
				unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
				unk_0xD0557B139A542F12(&uLocal_244);
				iLocal_305 = unk_0x1DD05E817C89C737();
				iLocal_308 = 0;
				iLocal_307 = 0;
				unk_0x428C32CC68809A35(1);
				unk_0x86A2BC11844DEEB3("DHP1_SUB");
				if (unk_0xC450B06E5AAA0985(Local_53[0 /*2*/].f_1))
				{
					unk_0xFE54B8568B2ABD12(&(Local_53[0 /*2*/].f_1));
				}
				unk_0xB3B56385ECA230B4(&(Local_57[3 /*2*/]));
				unk_0xB3B56385ECA230B4(&(Local_57[0 /*2*/]));
				unk_0xB3B56385ECA230B4(&(Local_57[1 /*2*/]));
				func_89(&uLocal_309, joaat("p_amb_phone_01"));
				func_89(&uLocal_309, joaat("s_m_m_dockwork_01"));
				func_89(&uLocal_309, joaat("prop_ld_test_01"));
				func_89(&uLocal_309, joaat("prop_sub_release"));
				func_223(&uLocal_309, cLocal_51);
				unk_0x8943BF9E0F15EDA0("docksprep1");
				unk_0xA62957B100C8DE6D(15f, 10f, 4);
				func_198(1);
				iLocal_1983 = 0;
			}
			else if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1), 1) < 5f && !iLocal_253)
			{
				func_222("DKP1_CLIMB", -1);
				iLocal_253 = 1;
			}
			break;
	}
	if ((!iLocal_263 && func_107(Local_53[0 /*2*/])) && unk_0x69799E0840A34AFB(Local_53[0 /*2*/]))
	{
		unk_0xBD618A73193F9982(-1, "SUB_SPLASH", Local_53[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0);
		iLocal_263 = 1;
	}
	if (((!iLocal_248 && unk_0xFC8BFE4B41177C22(Local_57[0 /*2*/])) && unk_0xFC8BFE4B41177C22(Local_57[1 /*2*/])) && func_107(Local_53[0 /*2*/]))
	{
		if (unk_0x4DBCC7D5D01D67FA(Local_57[0 /*2*/]) && unk_0x4DBCC7D5D01D67FA(Local_57[1 /*2*/]))
		{
			unk_0xE2B3F860B1A40B7B(Local_53[0 /*2*/]);
			Local_55[0 /*5*/] = unk_0x0689621FADCB043F(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1988, 1, fLocal_1988, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x3640C9BF5BF56ED8(Local_55[0 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[0 /*2*/], 0f, 0f, 0f), unk_0x0D1381B6E0F3987D(Local_53[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_1988, 0, 0, 0, 0);
			Local_55[1 /*5*/] = unk_0x0689621FADCB043F(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1988, 1, fLocal_1988, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x3640C9BF5BF56ED8(Local_55[1 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[0 /*2*/], 0f, 0f, 0f), unk_0x0D1381B6E0F3987D(Local_53[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_1988, 0, 0, 0, 0);
			Local_55[2 /*5*/] = unk_0x0689621FADCB043F(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1988, 1, fLocal_1988, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x3640C9BF5BF56ED8(Local_55[2 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[1 /*2*/], 0f, 0f, 0f), unk_0x0D1381B6E0F3987D(Local_53[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_1988, 0, 0, 0, 0);
			Local_55[3 /*5*/] = unk_0x0689621FADCB043F(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_1988, 1, fLocal_1988, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			unk_0x3640C9BF5BF56ED8(Local_55[3 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], unk_0x0D1381B6E0F3987D(Local_57[1 /*2*/], 0f, 0f, 0f), unk_0x0D1381B6E0F3987D(Local_53[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_1988, 0, 0, 0, 0);
			iLocal_248 = 1;
			iLocal_250 = 0;
			unk_0x79B52EC5A9AB6229(Local_53[0 /*2*/]);
			unk_0x96CCECDBC57DA984(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
		}
	}
	else if (func_107(Local_53[0 /*2*/]))
	{
		if (!iLocal_250)
		{
			unk_0x79B52EC5A9AB6229(Local_53[0 /*2*/]);
			iLocal_250 = 1;
		}
		unk_0x5D7CD709B34C90F0(Local_53[0 /*2*/], 0);
		unk_0x96CCECDBC57DA984(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
	}
	if (!iLocal_251)
	{
		if (unk_0xFC8BFE4B41177C22(Local_57[3 /*2*/]))
		{
			if (unk_0x4DBCC7D5D01D67FA(Local_57[3 /*2*/]))
			{
				unk_0x4D306DD94DD6FDBA(Local_57[3 /*2*/], Local_54[4 /*10*/], unk_0x72F7E39FB49FC0BA(Local_54[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				iLocal_251 = 1;
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(Local_57[3 /*2*/]) && ((func_107(Local_54[4 /*10*/]) && unk_0xCA038E64C65D1F9D(Local_54[4 /*10*/])) || !func_107(Local_54[4 /*10*/])))
	{
		if (func_107(Local_54[4 /*10*/]) && unk_0x13CCB1AD131C1082(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
		{
			unk_0x08D8528BA8E43641(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", -1056964608);
		}
		if (unk_0x5B9219522937741D(Local_57[3 /*2*/]))
		{
			unk_0x837D67618BF89034(Local_57[3 /*2*/], 1, 1);
		}
	}
	if (func_24() == 2)
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			unk_0xF04751F8E604D487(Local_53[0 /*2*/], 1);
		}
	}
	else if (func_107(Local_53[0 /*2*/]))
	{
		unk_0xF04751F8E604D487(Local_53[0 /*2*/], 0);
	}
}

void func_232(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0xFC8BFE4B41177C22(Global_104212.f_4))
	{
		if (unk_0xD9F5E1FEFD1329E4(Global_104212.f_4, 0))
		{
			if (func_264(24) != Global_104212.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_261(unk_0xD1A6A821F5AC81DB(Global_104212.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_233(Global_104212.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_233(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)
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
		func_260(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_121(iParam0, &Var0);
		if (func_95(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
			uParam2 = unk_0xCFC0C995455A6204(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) != joaat("vehicle_gen_controller"))
			{
				Global_78336 = unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6());
			}
		}
		func_254(iParam3, &Var0, Param1, uParam2, func_117(iParam0));
		func_234(iParam3, iParam0, 0);
	}
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_253(&(Global_77348.f_555[0 /*21*/]), iParam0))
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
				Global_113648.f_32751.f_4801 = func_174();
			}
			if (iParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_264(iParam0);
					if ((unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0)) && iParam1 != iVar0)
					{
						func_235(iVar0, 145);
					}
				}
				Global_78254 = iParam1;
				Global_78255 = iParam0;
				Global_78256 = iParam2;
			}
		}
	}
}

void func_235(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_236(iParam0))
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
	func_121(iParam0, &(Global_113648.f_32751.f_5510));
}

int func_236(int iParam0)
{
	if ((((((((((!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0)) || func_127(iParam0, 0, 0)) || func_127(iParam0, 1, 0)) || func_127(iParam0, 2, 0)) || func_117(iParam0) != 145) || func_252(iParam0)) || func_251(iParam0)) || func_250(iParam0)) || func_249(iParam0)) || !func_237(unk_0x4B423FAA24E8ABF0(iParam0)))
	{
		if (func_251(iParam0))
		{
		}
		if (func_251(iParam0))
		{
		}
		if (func_127(iParam0, 0, 0))
		{
		}
		if (func_127(iParam0, 1, 0))
		{
		}
		if (func_127(iParam0, 2, 0))
		{
		}
		if (func_117(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_237(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_238(iParam0, 0, -1))
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

int func_238(int iParam0, bool bParam1, int iParam2)
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
		if (!func_248())
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
		if ((((!func_247() && !func_246()) && !func_245()) && !func_244()) && !func_248())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_243() || unk_0x761778199FE1211C()) || func_242())
		{
		}
		else if (!func_245())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_241(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_239(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_239(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_240())
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

int func_240()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_241(int iParam0, int iParam1)
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

var func_242()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

var func_243()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_244()
{
	return 0;
}

int func_245()
{
	return 1;
}

int func_246()
{
	return 1;
}

int func_247()
{
	if (unk_0x087611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_248()
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
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, 0);
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

int func_249(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	sVar1 = unk_0xCA7159F2C5FF745A(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x1B79E937E91F40C3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_238(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)
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

int func_251(int iParam0)
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

int func_252(int iParam0)
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

int func_253(var uParam0, int iParam1)
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
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 19);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 20);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_119(2, 1);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
			if (func_248())
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 23);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_248())
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 1);
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
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_9), 0);
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
		if (!func_95(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_95(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_95(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_254(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_253(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_259(iParam0);
			func_258(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 11))
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = uParam3;
			}
			else
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_255(iParam0, 1);
		}
	}
}

void func_255(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_257(iParam0, 0))
		{
			func_256(iParam0, 1, 0);
			func_256(iParam0, 2, 0);
			func_256(iParam0, 3, 0);
			func_256(iParam0, 4, 0);
			func_256(iParam0, 0, 1);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_256(iParam0, 0, 0);
	}
}

void func_256(int iParam0, bool bParam1, bool bParam2)
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

int func_257(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_32751[iParam0], iParam1);
}

void func_258(var uParam0, var uParam1)
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

void func_259(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_253(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_77348.f_139[iParam0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_77348.f_139[iParam0], 1, 1);
			unk_0x68298CA6191CDFDB(&(Global_77348.f_139[iParam0]));
			Global_77348.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			func_255(iParam0, 0);
		}
	}
}

void func_260(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_259(iParam0);
	func_255(iParam0, 0);
}

int func_261(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_262(Param0, iParam1, 1);
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

int func_262(struct<3> Param0, int iParam1, int iParam2)
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
				if (func_263(iVar0) || iParam2 == 0)
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

var func_263(int iParam0)
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_264(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77348.f_139[iParam0];
}

bool func_265(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_34(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_267(2, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_266(&uVar0, &uVar1, iParam6, 0);
}

int func_266(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam2 > Global_21727)
			{
				if (bParam3 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
				}
				else
				{
					func_33();
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
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_31();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22721 = Global_22722;
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21344.f_370 = Global_22714;
		Global_21721 = Global_21722;
		Global_21723 = Global_21724;
		if (Global_21983 == 0)
		{
			Global_21879[0 /*6*/] = { Global_21905[0 /*6*/] };
			Global_21879[1 /*6*/] = { Global_21905[1 /*6*/] };
			Global_21931[0 /*6*/] = { Global_21957[0 /*6*/] };
			Global_21931[1 /*6*/] = { Global_21957[1 /*6*/] };
			Global_21892[0 /*6*/] = { Global_21918[0 /*6*/] };
			Global_21892[1 /*6*/] = { Global_21918[1 /*6*/] };
			Global_21944[0 /*6*/] = { Global_21970[0 /*6*/] };
			Global_21944[1 /*6*/] = { Global_21970[1 /*6*/] };
		}
		if (Global_21731)
		{
			unk_0x8744D2E3FC95740E(&Global_8253, 20);
			unk_0x8744D2E3FC95740E(&Global_8254, 17);
			unk_0x8744D2E3FC95740E(&Global_8255, false);
			if (bParam3)
			{
				func_23();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_22())
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
					if (Global_21983 == 0)
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
			}
			if (func_21())
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
			}
			func_20();
			Global_21735 = bParam3;
		}
		Global_21727 = iParam2;
		if (Global_21721 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21721)
			{
				StringCopy(&(Global_21344.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21344.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20591 = 0;
		func_19();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21727 || iParam2 == Global_21727)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_33();
	}
	return 0;
}

void func_267(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_21722 = iParam0;
	Global_21732 = 0;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_268(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_96536, iParam0);
}

int func_269(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_27(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_270(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				return 0;
			}
		}
		if (BitTest(Global_96534, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_24())
	{
		return unk_0x4A8C381C258A124D();
	}
	return Global_98159[func_271(iParam0)];
}

int func_271(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_272()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98159.f_44 == 1;
	}
	return 0;
}

void func_273(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

void func_274()
{
	int iVar0;
	bool bVar1;
	
	iLocal_247 = 0;
	while (iLocal_247 < Local_55.f_0)
	{
		if (!unk_0xB9DDE5F54A275DFF(&(Local_55[iLocal_247 /*5*/])))
		{
			if (!Local_55[iLocal_247 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_247++;
	}
	if (bVar1)
	{
		if (((((!unk_0xB9DDE5F54A275DFF(&(Local_55[0 /*5*/])) && !unk_0xB9DDE5F54A275DFF(&(Local_55[1 /*5*/]))) && (!Local_55[0 /*5*/].f_4 || !Local_55[1 /*5*/].f_4)) || ((!unk_0xB9DDE5F54A275DFF(&(Local_55[2 /*5*/])) && !unk_0xB9DDE5F54A275DFF(&(Local_55[3 /*5*/]))) && (!Local_55[2 /*5*/].f_4 || !Local_55[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_1993 > 0)
			{
				if (uLocal_1992[(iLocal_1993 - 1)] != -1)
				{
					unk_0x8E4825CCACA34B58(uLocal_1992[(iLocal_1993 - 1)]);
				}
			}
			if (uLocal_1992[iLocal_1993] != -1)
			{
				unk_0xF37CDE164C892195(uLocal_1992[iLocal_1993], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				iLocal_1993++;
			}
		}
		else if (iVar0 <= 2)
		{
			unk_0xF37CDE164C892195(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
		}
		iLocal_247 = 0;
		while (iLocal_247 < Local_55.f_0)
		{
			if (!unk_0xB9DDE5F54A275DFF(&(Local_55[iLocal_247 /*5*/])))
			{
				if (!Local_55[iLocal_247 /*5*/].f_4)
				{
					unk_0xF37CDE164C892195(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				}
				Local_55[iLocal_247 /*5*/].f_4 = 1;
			}
			iLocal_247++;
		}
		if (iVar0 >= 4)
		{
			if (uLocal_1992[0] != -1)
			{
				unk_0x8E4825CCACA34B58(uLocal_1992[0]);
			}
			if (uLocal_1992[1] != -1)
			{
				unk_0x8E4825CCACA34B58(uLocal_1992[1]);
			}
		}
	}
}

void func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("prop_ld_test_01"));
			func_88(&uLocal_309, joaat("prop_sub_release"));
			func_88(&uLocal_309, joaat("s_m_m_dockwork_01"));
			func_280(&uLocal_309, cLocal_50);
			func_280(&uLocal_309, cLocal_51);
			func_278(&uLocal_309, "docksprep1");
			func_88(&uLocal_309, joaat("p_amb_phone_01"));
			func_277(&uLocal_309);
			func_279(&uLocal_309, "PORT_OF_LS_PREP_1");
			break;
		
		case 1:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, iLocal_278);
			func_88(&uLocal_309, iLocal_281);
			func_88(&uLocal_309, iLocal_284);
			func_276(&uLocal_309);
			func_277(&uLocal_309);
			break;
		
		case 2:
		case 3:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, joaat("prop_sub_cover_01"));
			func_88(&uLocal_309, joaat("prop_tarp_strap"));
			break;
	}
}

void func_276(var uParam0)
{
	uParam0->f_890.f_2 = 0;
	if (!uParam0->f_890.f_1)
	{
		if (!uParam0->f_890)
		{
			unk_0x8003D3C0115A1035();
			uParam0->f_890 = 1;
		}
		uParam0->f_1012 = 1;
	}
}

void func_277(var uParam0)
{
	uParam0->f_894.f_2 = 0;
	if (!uParam0->f_894.f_1)
	{
		if (!uParam0->f_894)
		{
			unk_0x162DAE7141F06640();
			uParam0->f_894 = 1;
		}
		uParam0->f_1012 = 1;
	}
}

int func_278(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x1B79E937E91F40C3(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xD04A772C411165F2(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_279(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x1B79E937E91F40C3(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xD7E1DF759CD0FFF2(sParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_280(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD6F9DEE4765092A9(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x1B79E937E91F40C3(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_1012 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x80813AC549A1E8AE(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x1DD05E817C89C737();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_1012 = 1;
		return 1;
	}
	return 0;
}

int func_281(int iParam0)
{
	return func_39(iParam0, 1, 0);
}

void func_282()
{
	int iVar0;
	
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_54[iLocal_247 /*10*/]))
		{
			if (Local_54[iLocal_247 /*10*/] != Local_54[3 /*10*/])
			{
				if (iLocal_1982 == 0)
				{
					func_297(Local_54[iLocal_247 /*10*/], &(Local_54[iLocal_247 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
				}
				else if (unk_0xC450B06E5AAA0985(Local_54[iLocal_247 /*10*/].f_2))
				{
					unk_0xFE54B8568B2ABD12(&(Local_54[iLocal_247 /*10*/].f_2));
				}
			}
			if (unk_0x4FAFF4BCB7633475(Local_54[iLocal_247 /*10*/]))
			{
				if (Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
				{
					func_93(7);
				}
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_1982 == 2 && Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
			{
				if (func_10(Local_54[3 /*10*/], unk_0x4A8C381C258A124D(), 1) > 300f)
				{
					func_93(11);
				}
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_53[iLocal_247 /*2*/]))
		{
			if (!unk_0xD9F5E1FEFD1329E4(Local_53[iLocal_247 /*2*/], 0))
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					func_93(1);
				}
				else if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					func_93(2);
				}
				else if (iLocal_247 == 3)
				{
					func_93(8);
				}
				func_296(&(Local_53[iLocal_247 /*2*/]));
			}
			else if (iLocal_257)
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (iLocal_1982 == 2)
					{
						if (unk_0x837FF265C016E3B7(Local_53[iLocal_247 /*2*/]) > 0.5f)
						{
							func_93(5);
						}
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (func_295(&(Local_53[iLocal_247 /*2*/])))
					{
						func_93(3);
						func_296(&(Local_53[iLocal_247 /*2*/]));
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					if (iLocal_1982 == 1 && iLocal_1983 < 3)
					{
						if (func_295(&(Local_53[iLocal_247 /*2*/])))
						{
							func_93(4);
							func_296(&(Local_53[iLocal_247 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_247++;
	}
	if (func_107(Local_53[0 /*2*/]) && func_107(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1), 1) > 750f)
		{
			func_93(10);
		}
		else if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1), 1) > 700f)
		{
			if (!iLocal_254 && func_36())
			{
				func_35("DKP1_ABSUB", 7500, 1);
				iLocal_254 = 1;
			}
		}
		else
		{
			iLocal_254 = 0;
		}
	}
	if (func_107(unk_0x4A8C381C258A124D()))
	{
		func_288();
	}
	if (iLocal_1982 == 0 && iLocal_1983 > 0)
	{
		func_285();
	}
	if (iLocal_1982 == 0 || iLocal_1982 == 1)
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			if (!iLocal_1990)
			{
				func_284(Local_53[0 /*2*/], 588);
				iLocal_1990 = 1;
			}
		}
		else if (iLocal_1990)
		{
			func_284(0, 588);
			iLocal_1990 = 0;
		}
	}
	else if (iLocal_1982 == 2)
	{
		if (func_107(Local_53[2 /*2*/]))
		{
			if (!iLocal_1991)
			{
				func_284(Local_53[2 /*2*/], 590);
				iLocal_1991 = 1;
			}
		}
		else if (iLocal_1991)
		{
			func_284(0, 590);
			iLocal_1991 = 0;
		}
	}
	if ((((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, 0, 1, 0))
	{
		unk_0xF42A811582CF3AE1(unk_0x70E57E9927B6BA58("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 1);
		}
		else
		{
			iVar0 = unk_0x4A8C381C258A124D();
		}
		if ((!unk_0x3F18810075C77D41(iVar0) && !unk_0x69799E0840A34AFB(iVar0)) && (!unk_0xFC8BFE4B41177C22(Local_53[0 /*2*/]) || !unk_0x685171EED42BC4DF(iVar0, Local_53[0 /*2*/])))
		{
			if (!iLocal_256)
			{
				func_283(593);
				iLocal_256 = 1;
			}
		}
	}
	if (!iLocal_258)
	{
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0xCFBD89D2F1F18961("OnlyAllowScriptTriggerPoliceScanner", 1);
			unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_258 = 1;
		}
	}
	if (unk_0x196704C916969409())
	{
		unk_0xFE751F9213345C58(Local_53[0 /*2*/]);
	}
}

void func_283(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_63363 = 0;
	if (!Global_63587[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75457)
	{
		if (Global_75458[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75458[iVar1 /*9*/].f_1 = 1;
			Global_75458[iVar1 /*9*/].f_2 = 0f;
			if (Global_75458[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_284(int iParam0, int iParam1)
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

void func_285()
{
	switch (iLocal_264)
	{
		case 0:
			if (func_107(Local_54[4 /*10*/]))
			{
				if (iLocal_269)
				{
					unk_0x10425721983AE158(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
					if (unk_0xA08EEC7306CF6198("docksprep1"))
					{
						unk_0x7FD62C74ABB26599(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						unk_0xD04A772C411165F2("docksprep1");
					}
				}
			}
			iLocal_270 = 0;
			iLocal_264 = 1;
			break;
		
		case 1:
			if (!iLocal_269)
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_268) > 2000 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_54[4 /*10*/], 1), 1) < 10f)
				{
					iLocal_269 = 1;
					iLocal_264 = 0;
				}
			}
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0))
			{
				if (func_107(Local_54[4 /*10*/]))
				{
					if (unk_0x7E54CB377175F94E(Local_54[4 /*10*/], unk_0x4A8C381C258A124D()))
					{
						unk_0x974022927CB47E68(Local_54[4 /*10*/]);
						unk_0xDCD95AE65EFC28CE(Local_54[4 /*10*/]);
						func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 2;
					}
					else if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_54[4 /*10*/], 1), 1) < 12f && unk_0x5F93A870D439E8B4(unk_0x259BE71D8A81D4FA()) > 8.5f)
					{
						unk_0xDCD95AE65EFC28CE(Local_54[4 /*10*/]);
						if (!func_287(Local_54[4 /*10*/], joaat("script_task_turn_ped_to_face_coord"), 1))
						{
							unk_0xCD76801E1106CABE(Local_54[4 /*10*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 4000);
							unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_54[4 /*10*/], 1), 1) < 12f && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (!func_287(Local_54[4 /*10*/], joaat("script_task_turn_ped_to_face_coord"), 1))
						{
							unk_0xCD76801E1106CABE(Local_54[4 /*10*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 4000);
							unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (((unk_0x9E333ABC0077FDAB(unk_0x4A8C381C258A124D()) && (unk_0x5295501D0862870D() >= 19 || unk_0x5295501D0862870D() < 6)) && func_10(unk_0x4A8C381C258A124D(), Local_54[4 /*10*/], 1) < 25f) && (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_54[4 /*10*/]) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), Local_54[4 /*10*/])))
					{
						if (!func_287(Local_54[4 /*10*/], joaat("script_task_turn_ped_to_face_coord"), 1))
						{
							unk_0xCD76801E1106CABE(Local_54[4 /*10*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 4000);
							unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(Local_54[4 /*10*/], 1), 1) < 12f && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (!func_287(Local_54[4 /*10*/], joaat("script_task_turn_ped_to_face_coord"), 1))
						{
							unk_0xCD76801E1106CABE(Local_54[4 /*10*/], unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 4000);
							unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
				}
				if (iLocal_1983 > 1)
				{
					if (func_107(Local_54[4 /*10*/]))
					{
						if (unk_0x300A997AE991C0A8(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							unk_0xDCD95AE65EFC28CE(Local_54[4 /*10*/]);
							func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_264 = 3;
							iLocal_266 = 3;
							unk_0x19626F992DC71FB9(Local_54[4 /*10*/]);
							unk_0xA966E518B752B92A(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, 0, -122.93f);
							iLocal_268 = unk_0x1DD05E817C89C737();
							iLocal_269 = 0;
						}
					}
				}
			}
			if (func_107(Local_54[4 /*10*/]))
			{
				if (!unk_0xBD08B11F7404F5CD(Local_54[4 /*10*/]))
				{
					if (iLocal_269)
					{
						if ((unk_0x9B5C1660CCDF7189(Local_54[4 /*10*/], joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(Local_54[4 /*10*/], joaat("script_task_follow_nav_mesh_to_coord")) != 1) && unk_0x9B5C1660CCDF7189(Local_54[4 /*10*/], joaat("script_task_turn_ped_to_face_coord")) != 1)
						{
							if (!unk_0x13CCB1AD131C1082(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
							{
								unk_0x10425721983AE158(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							if (unk_0x65FFA94B82A71741(Local_54[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, 0, 1, 0))
							{
								if (unk_0xA08EEC7306CF6198("docksprep1"))
								{
									unk_0x7FD62C74ABB26599(Local_54[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (unk_0xA08EEC7306CF6198("docksprep1"))
							{
								unk_0x7FD62C74ABB26599(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((unk_0x1DD05E817C89C737() - iLocal_272) > 10000)
					{
						if (!unk_0xD6C64BE35FD4ED11(Local_54[4 /*10*/]))
						{
							if (unk_0x65FFA94B82A71741(Local_54[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								unk_0x27EC70BAD907B76B(Local_54[4 /*10*/], 0, 0);
							}
							else if (unk_0x65FFA94B82A71741(Local_54[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								unk_0x27EC70BAD907B76B(Local_54[4 /*10*/], 0, 0);
							}
						}
						else
						{
							iLocal_272 = unk_0x1DD05E817C89C737();
							unk_0xFFD8D929BFEA2C66(Local_54[4 /*10*/], 1, -1, 3000);
						}
					}
					if (!unk_0x912159A05BE6B52E(Local_54[4 /*10*/]) && (unk_0x1DD05E817C89C737() - iLocal_273) > 4000)
					{
						func_286(Local_54[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_273 = unk_0x1DD05E817C89C737();
					}
				}
				if (((unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 124) || unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 125)) || unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 126)) || unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 118))
				{
					unk_0xDCD95AE65EFC28CE(Local_54[4 /*10*/]);
					func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0x0B1A40D00F279307(Local_54[4 /*10*/], -1, unk_0x4A8C381C258A124D(), -1, 1);
				}
				else if (unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 23))
				{
					unk_0xDCD95AE65EFC28CE(Local_54[4 /*10*/]);
					func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					unk_0x974022927CB47E68(Local_54[4 /*10*/]);
					unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0xAFC7A89C990C4339(Local_54[4 /*10*/], -1);
				}
				else if (unk_0x9B3D4335E0EDB0BE(Local_54[4 /*10*/], unk_0x4A8C381C258A124D(), 1))
				{
					unk_0xDCD95AE65EFC28CE(Local_54[4 /*10*/]);
					unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 2:
			if (func_107(Local_54[4 /*10*/]))
			{
				if (!unk_0x9E437CA2E2CAD79D(Local_54[4 /*10*/], unk_0x4A8C381C258A124D()))
				{
					unk_0xE67051907958B5EB(Local_54[4 /*10*/], unk_0x4A8C381C258A124D(), -1, 3104, 2);
				}
			}
			switch (iLocal_265)
			{
				case 0:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							unk_0xB5396F1FB088FE38(&uLocal_244);
							unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), -1, 4f, 1073741824, 1073741824, 0);
							unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
							unk_0x93C0674FC00824D0(uLocal_244);
							unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
							unk_0xD0557B139A542F12(&uLocal_244);
							unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
							iLocal_267 = unk_0x1DD05E817C89C737();
							iLocal_265 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x1DD05E817C89C737() - iLocal_267) > 4000)
					{
						if (func_107(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								unk_0xB5396F1FB088FE38(&uLocal_244);
								unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), -1, 3f, 1f, 1073741824, 0);
								unk_0x0E95B96CFEFE7B61(0, unk_0x4A8C381C258A124D(), -1);
								unk_0x93C0674FC00824D0(uLocal_244);
								unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
								unk_0xD0557B139A542F12(&uLocal_244);
								unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								iLocal_267 = unk_0x1DD05E817C89C737();
								iLocal_265 = 2;
							}
						}
					}
					break;
				
				case 2:
					if ((unk_0x1DD05E817C89C737() - iLocal_267) > 8000)
					{
						if (func_107(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_267 = unk_0x1DD05E817C89C737();
								iLocal_266 = 4;
								iLocal_264 = 3;
							}
						}
					}
					break;
			}
			if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || !func_107(Local_54[4 /*10*/]))
			{
				iLocal_264 = 0;
			}
			unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iLocal_271, 1);
			if (func_107(Local_54[4 /*10*/]))
			{
				if ((unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 124) || unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 125)) || unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 126))
				{
					func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					unk_0x0B1A40D00F279307(Local_54[4 /*10*/], -1, unk_0x4A8C381C258A124D(), -1, 1);
					unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), Local_54[4 /*10*/]) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_54[4 /*10*/]))
				{
					if (unk_0x6CC7A2E68E8A565A(iLocal_271) != joaat("GROUP_MELEE") && iLocal_271 != joaat("weapon_unarmed"))
					{
						func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 3;
						iLocal_266 = 1;
						unk_0x19626F992DC71FB9(Local_54[4 /*10*/]);
						unk_0x0B1A40D00F279307(Local_54[4 /*10*/], -1, unk_0x4A8C381C258A124D(), -1, 0);
					}
				}
				else if (unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 23))
				{
					func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					unk_0xAFC7A89C990C4339(Local_54[4 /*10*/], -1);
					unk_0x10425721983AE158(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (unk_0x9B3D4335E0EDB0BE(Local_54[4 /*10*/], unk_0x4A8C381C258A124D(), 1))
				{
					func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		
		case 3:
			switch (iLocal_266)
			{
				case 1:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 2:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 3:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (unk_0x65FFA94B82A71741(Local_54[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_270 = 1;
								iLocal_266 = 4;
							}
						}
						if (!unk_0x2E0309EF5F2EBDB1(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							unk_0xE67051907958B5EB(Local_54[4 /*10*/], Local_53[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 4:
					if (func_107(Local_54[4 /*10*/]))
					{
						if (!unk_0x8BF5256C439DF778(Local_54[4 /*10*/]) && !unk_0x0B3FC0E7676E79BF(Local_54[4 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								unk_0x974022927CB47E68(Local_54[4 /*10*/]);
								unk_0xB5396F1FB088FE38(&uLocal_244);
								unk_0x10425721983AE158(0, cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
								if (iLocal_270)
								{
									unk_0xA966E518B752B92A(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
								}
								else
								{
									unk_0xA966E518B752B92A(0, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 0.25f, 0, 40000f);
									unk_0xE092C8C5A5EA5F57(0, 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
								}
								unk_0x93C0674FC00824D0(uLocal_244);
								unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
								unk_0xD0557B139A542F12(&uLocal_244);
								iLocal_267 = unk_0x1DD05E817C89C737();
								unk_0x86A2BC11844DEEB3("DHP1_ATTACKED");
								iLocal_274 = 0;
								iLocal_266 = 5;
							}
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				
				case 5:
					if ((unk_0x1DD05E817C89C737() - iLocal_267) > 8000)
					{
						if (!iLocal_274)
						{
							if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 1)
							{
								unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
								unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
								iLocal_274 = 1;
							}
						}
						if (func_107(Local_54[4 /*10*/]))
						{
							if (iLocal_270)
							{
								if (!unk_0xCA038E64C65D1F9D(Local_54[4 /*10*/]))
								{
									unk_0xD844F5E50DAB6FF7(Local_54[4 /*10*/], unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
								}
							}
							else if (unk_0x9B5C1660CCDF7189(Local_54[4 /*10*/], joaat("script_task_wander_in_area")) != 1)
							{
								unk_0xE092C8C5A5EA5F57(Local_54[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
							}
						}
					}
					if (!iLocal_270)
					{
						unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iLocal_271, 1);
						if (func_107(Local_54[4 /*10*/]))
						{
							if ((unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 124) || unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 125)) || unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 126))
							{
								func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									unk_0x974022927CB47E68(Local_54[4 /*10*/]);
									unk_0xB5396F1FB088FE38(&uLocal_244);
									unk_0x0B1A40D00F279307(0, 3000, unk_0x4A8C381C258A124D(), -1, 0);
									unk_0xA966E518B752B92A(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
									unk_0x93C0674FC00824D0(uLocal_244);
									unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
									unk_0xD0557B139A542F12(&uLocal_244);
									iLocal_267 = unk_0x1DD05E817C89C737();
									iLocal_270 = 1;
								}
							}
							else if ((unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), Local_54[4 /*10*/]) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), Local_54[4 /*10*/])) && unk_0x3644984C9D7B57EF(Local_54[4 /*10*/], unk_0x4A8C381C258A124D(), 160f))
							{
								if (unk_0x6CC7A2E68E8A565A(iLocal_271) != joaat("GROUP_MELEE") && iLocal_271 != joaat("weapon_unarmed"))
								{
									func_226(&uLocal_78, 4, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										unk_0x974022927CB47E68(Local_54[4 /*10*/]);
										unk_0xB5396F1FB088FE38(&uLocal_244);
										unk_0x0B1A40D00F279307(0, 3000, unk_0x4A8C381C258A124D(), -1, 0);
										unk_0xA966E518B752B92A(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
										unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
										unk_0x93C0674FC00824D0(uLocal_244);
										unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
										unk_0xD0557B139A542F12(&uLocal_244);
										iLocal_270 = 1;
										iLocal_267 = unk_0x1DD05E817C89C737();
									}
								}
							}
							else if (unk_0x613F3705BEA060B4(Local_54[4 /*10*/], 23))
							{
								func_226(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									unk_0x974022927CB47E68(Local_54[4 /*10*/]);
									unk_0xB5396F1FB088FE38(&uLocal_244);
									unk_0xAFC7A89C990C4339(0, -1);
									unk_0xA966E518B752B92A(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
									unk_0x93C0674FC00824D0(uLocal_244);
									unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
									unk_0xD0557B139A542F12(&uLocal_244);
									iLocal_270 = 1;
								}
							}
							else if (unk_0x9B3D4335E0EDB0BE(Local_54[4 /*10*/], unk_0x4A8C381C258A124D(), 1))
							{
								unk_0x974022927CB47E68(Local_54[4 /*10*/]);
								unk_0xB5396F1FB088FE38(&uLocal_244);
								unk_0xA966E518B752B92A(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
								unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
								unk_0x93C0674FC00824D0(uLocal_244);
								unk_0x4BD42B0527065BB6(Local_54[4 /*10*/], uLocal_244);
								unk_0xD0557B139A542F12(&uLocal_244);
								iLocal_270 = 1;
								iLocal_267 = unk_0x1DD05E817C89C737();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_286(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, sParam2, func_60(iParam3), 0);
}

int func_287(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x9B5C1660CCDF7189(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_288()
{
	switch (iLocal_308)
	{
		case 0:
			switch (iLocal_307)
			{
				case 0:
					if (func_107(Local_53[0 /*2*/]))
					{
						if ((!unk_0xFBA523E6F8ACE541() && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], 0)) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
						{
							func_293();
							iLocal_305 = unk_0x1DD05E817C89C737();
							iLocal_307 = 1;
						}
					}
					break;
				
				case 1:
					if ((unk_0x1DD05E817C89C737() - iLocal_305) > 6000 && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], 0))
					{
						func_226(&uLocal_78, 1, 0, "FLOYD", 0, 1);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					break;
				
				case 2:
					if (func_11())
					{
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], 0))
						{
							if (func_37())
							{
								func_292(0);
							}
						}
						else if (!func_37())
						{
							func_292(1);
						}
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 2;
					iLocal_307 = 0;
					iLocal_305 = unk_0x1DD05E817C89C737();
					break;
			}
			break;
		
		case 2:
			switch (iLocal_307)
			{
				case 0:
					if ((!unk_0xFBA523E6F8ACE541() && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], 0)) && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 324.7653f, -2974.495f, -1f, 1) < 110f)
					{
						func_293();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					if (func_12(&uLocal_78, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (func_11())
					{
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 3;
					iLocal_307 = 0;
					iLocal_305 = unk_0x1DD05E817C89C737();
					break;
			}
			break;
		
		case 3:
			if (func_107(Local_53[2 /*2*/]) && func_107(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[2 /*2*/], 0) && unk_0xCECDBB848D53DEB2(Local_54[3 /*10*/], Local_53[2 /*2*/], 0))
						{
							if (func_11())
							{
								func_293();
							}
							else
							{
								iLocal_307 = 1;
							}
						}
						break;
					
					case 1:
						func_286(Local_54[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_307 = 2;
						break;
					
					case 2:
						if (!unk_0x912159A05BE6B52E(Local_54[3 /*10*/]))
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 4;
						iLocal_307 = 0;
						iLocal_305 = unk_0x1DD05E817C89C737();
						break;
					}
			}
			break;
		
		case 4:
			if (func_107(Local_53[2 /*2*/]) && func_107(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xCECDBB848D53DEB2(Local_54[3 /*10*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0)) && unk_0x21478251925DBFD7(Local_53[1 /*2*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))) && !unk_0xFBA523E6F8ACE541())
						{
							func_293();
							iLocal_305 = unk_0x1DD05E817C89C737();
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x1DD05E817C89C737() - iLocal_305) > 2000)
						{
							func_226(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
							if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_307 = 2;
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if ((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xCECDBB848D53DEB2(Local_54[3 /*10*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0)) && unk_0x21478251925DBFD7(Local_53[1 /*2*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
							{
								if (func_37())
								{
									func_292(0);
								}
							}
							else if (!func_37())
							{
								func_292(1);
							}
						}
						else
						{
							iLocal_307 = 3;
						}
						break;
					
					case 3:
						iLocal_308 = 5;
						iLocal_307 = 0;
						iLocal_305 = unk_0x1DD05E817C89C737();
						break;
				}
				if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 60f)
				{
					func_291();
					iLocal_307 = 3;
				}
			}
			break;
		
		case 5:
			switch (iLocal_307)
			{
				case 0:
					if ((((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xCECDBB848D53DEB2(Local_54[3 /*10*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0)) && unk_0x21478251925DBFD7(Local_53[1 /*2*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))) && !unk_0xFBA523E6F8ACE541()) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, 0, 1, 0))
					{
						func_293();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_290();
					func_226(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_289(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_289(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					iLocal_308 = 6;
					iLocal_307 = 0;
					iLocal_305 = unk_0x1DD05E817C89C737();
					break;
			}
			break;
		
		case 6:
			switch (iLocal_307)
			{
				case 0:
					if ((((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xCECDBB848D53DEB2(Local_54[3 /*10*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0)) && unk_0x21478251925DBFD7(Local_53[1 /*2*/], unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))) && !unk_0xFBA523E6F8ACE541()) && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 40f)
					{
						func_293();
						iLocal_307 = 1;
					}
					break;
				
				case 1:
					bLocal_304 = func_290();
					func_226(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (func_289(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (func_289(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				
				case 2:
					if (!func_11())
					{
						iLocal_307 = 3;
					}
					break;
				
				case 3:
					break;
			}
			break;
	}
}

bool func_289(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_13(sParam2, iParam4, 0);
}

int func_290()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_291()
{
	Global_20591 = 0;
	func_33();
}

void func_292(int iParam0)
{
	Global_22736 = iParam0;
}

void func_293()
{
	Global_20591 = 0;
	func_294();
}

void func_294()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_22736 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}
}

int func_295(var uParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		if (((unk_0xA24B9FF9863A909D(*uParam0, 0, 7000) || unk_0xA24B9FF9863A909D(*uParam0, 3, 30000)) || unk_0xA24B9FF9863A909D(*uParam0, 2, 30000)) || unk_0xA24B9FF9863A909D(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_296(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0x1C2F771CDC87A3A5(*uParam0, 0);
		if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
		{
			unk_0x68298CA6191CDFDB(uParam0);
		}
	}
}

int func_297(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
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
			if (unk_0x1F7A48429F9F64CE(iParam0) && iParam11)
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
		unk_0xB070F32F5FE88A2A(iParam0, iParam4);
		unk_0x2A253D5DC7CA1CEC(iParam0, iParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(iParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(iParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(iParam7);
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
					if (!unk_0xD6F9DEE4765092A9(iParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(iParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(iParam7);
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

void func_298()
{
	struct<3> Var0;
	var uVar1;
	
	if (iLocal_1986 == 1)
	{
		if (iLocal_1981 == 0)
		{
			if (!unk_0x15CCE8886267624F())
			{
				if (!unk_0x78ABC1D11B34F324())
				{
					unk_0x8F72AF14CE5AACE4(800);
				}
			}
			else
			{
				func_198(iLocal_1987);
			}
		}
		else if (iLocal_1981 == 3)
		{
			unk_0xE37AF9002E782BA0(false, 0, 3000, 1, 0, 0);
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			func_316();
			if (unk_0x0CB7695268A7F50F())
			{
				unk_0xDD291722ADDCBD60();
			}
			func_315(&uLocal_309);
			if (!func_314())
			{
				func_313(iLocal_1987, &Var0, &uVar1);
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uVar1);
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
				func_312(&uLocal_309, Var0, 50f, 0);
			}
			func_275(iLocal_1982);
			while (!func_310(&uLocal_309))
			{
				wait(0);
			}
			switch (iLocal_1982)
			{
				case 0:
					func_308();
					break;
				
				case 1:
					func_307();
					break;
				
				case 2:
					func_303();
					break;
				
				case 3:
					func_299();
					break;
			}
			unk_0x64BB72494B9DF6DC(0f);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			unk_0x86A2BC11844DEEB3("DHP1_START");
			iLocal_1986 = 0;
			if (!func_314())
			{
				func_205(&uLocal_309);
			}
		}
	}
}

void func_299()
{
	if (!func_107(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x5779387E956077A6(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, 1, 1, 0);
		unk_0xF04751F8E604D487(Local_53[0 /*2*/], 0);
		unk_0xC229299217554C78(Local_53[0 /*2*/], 0, 1, 0);
		unk_0xBA3C1A9AA7FD9616(Local_53[0 /*2*/], 1);
		unk_0x4DC72C4B884A6C59(Local_53[0 /*2*/], 1);
		unk_0xE59BDA10CE05FD35(Local_53[0 /*2*/], 0);
	}
	if (!func_107(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = unk_0x5779387E956077A6(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, 1, 1, 0);
		unk_0xF04751F8E604D487(Local_53[2 /*2*/], 0);
		unk_0x20DD46D27530FAC7(Local_53[2 /*2*/], 0);
		unk_0x439C904840715871(Local_53[2 /*2*/], 0);
		unk_0x5FE0938FDE9B0958(Local_53[2 /*2*/], 1);
	}
	if (!func_107(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = unk_0x5779387E956077A6(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, 1, 1, 0);
		unk_0x5FE0938FDE9B0958(Local_53[1 /*2*/], 1);
	}
	unk_0xF89624E52FCBE454(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	unk_0x632030977D1CE430(Local_53[1 /*2*/]);
	unk_0x9E132DB7E05C6EAB(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0xFC8BFE4B41177C22(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		unk_0x4D306DD94DD6FDBA(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		unk_0x4D306DD94DD6FDBA(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	}
	if (func_314())
	{
		func_300(0, -1, 1);
	}
	else
	{
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
	}
}

void func_300(int iParam0, int iParam1, int iParam2)
{
	if (func_302() && func_314())
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
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
		unk_0x7919995BD2B8745C();
		func_301(0);
	}
}

void func_301(int iParam0)
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

int func_302()
{
	if (Global_100681 == 10 || Global_100681 == 9)
	{
		return 1;
	}
	return 0;
}

void func_303()
{
	if (!func_107(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x5779387E956077A6(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, 1, 1, 0);
		unk_0x6BFFBDE3C98A828E(Local_53[0 /*2*/], 0);
		unk_0xC229299217554C78(Local_53[0 /*2*/], 0, 1, 0);
		unk_0xBA3C1A9AA7FD9616(Local_53[0 /*2*/], 1);
		unk_0x4DC72C4B884A6C59(Local_53[0 /*2*/], 1);
		unk_0xE59BDA10CE05FD35(Local_53[0 /*2*/], 0);
	}
	if (!func_107(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = unk_0x5779387E956077A6(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, 1, 1, 0);
		unk_0x20DD46D27530FAC7(Local_53[2 /*2*/], 0);
		unk_0x439C904840715871(Local_53[2 /*2*/], 0);
		unk_0x5FE0938FDE9B0958(Local_53[2 /*2*/], 1);
	}
	if (!func_107(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = unk_0x5779387E956077A6(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, 1, 1, 0);
		unk_0x6BFFBDE3C98A828E(Local_53[1 /*2*/], 0);
		unk_0x5FE0938FDE9B0958(Local_53[1 /*2*/], 1);
	}
	unk_0xF89624E52FCBE454(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	unk_0x632030977D1CE430(Local_53[1 /*2*/]);
	unk_0x9E132DB7E05C6EAB(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0xFC8BFE4B41177C22(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		unk_0x4D306DD94DD6FDBA(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		unk_0x4D306DD94DD6FDBA(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
	}
	while (!func_304(&(Local_54[3 /*10*/]), 32, Local_53[2 /*2*/], 0, 1))
	{
		wait(0);
	}
	if (func_314())
	{
		func_300(Local_53[2 /*2*/], -1, 1);
	}
	else
	{
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
		unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_53[2 /*2*/], -1);
	}
	unk_0x3CEA1FD137ACE2D9(Local_54[3 /*10*/], iLocal_259);
	unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 100f, 1, 0, 0, 0);
	iLocal_308 = 3;
	iLocal_307 = 0;
}

int func_304(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_26(iParam1))
	{
		iVar0 = func_306(iParam1);
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				unk_0x734A9F4537A31459(uParam0);
			}
			if (unk_0xFC8BFE4B41177C22(iParam2) && unk_0xD9F5E1FEFD1329E4(iParam2, 0))
			{
				*uParam0 = unk_0x8728A378EF2B46B2(iParam2, 26, iVar0, iParam3, 0, 0);
				unk_0x77EFA99E6A8FFC43(*uParam0);
				func_305(*uParam0, iParam1);
				if (bParam4)
				{
					unk_0x55098D9E9AD58806(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_305(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96515[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_306(int iParam0)
{
	if (!func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_307()
{
	if (!unk_0xFC8BFE4B41177C22(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x5779387E956077A6(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, 1, 1, 0);
		unk_0x4DC72C4B884A6C59(Local_53[0 /*2*/], 1);
	}
	if (func_314())
	{
		func_300(Local_53[0 /*2*/], -1, 1);
	}
	else
	{
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
		unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], -1);
	}
	unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 100f, 1, 0, 0, 0);
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_308()
{
	if (!unk_0xFC8BFE4B41177C22(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = unk_0x5779387E956077A6(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, 1, 1, 0);
		func_309(Local_53[0 /*2*/], 0);
		unk_0x5D7CD709B34C90F0(Local_53[0 /*2*/], 1);
		unk_0x788F35D395511DFE(Local_53[0 /*2*/], 1, 1);
		unk_0x11C125313CB8ADA2(Local_53[0 /*2*/], 0);
		unk_0x4DC72C4B884A6C59(Local_53[0 /*2*/], 1);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_54[4 /*10*/]))
	{
		Local_54[4 /*10*/] = unk_0xB1DBFEB95C0EFB88(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 1, 1);
		unk_0x10425721983AE158(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
		unk_0x1CA08719184AFC6F(Local_54[4 /*10*/], 512, 0);
		unk_0xBE8796DB2B90A437(Local_54[4 /*10*/], 17, 1);
		unk_0x3CEA1FD137ACE2D9(Local_54[4 /*10*/], iLocal_260);
		unk_0xAAA71DD7E9059338(Local_54[4 /*10*/], 1);
		unk_0xA6102F762BBA9BC9(Local_54[4 /*10*/], 45f);
		unk_0xC8DEC2468E748263(Local_54[4 /*10*/], 50f);
		unk_0x3C7306C2CE967C57(Local_54[4 /*10*/], -50f);
		unk_0xFD61BB3B8F1CDB6D(Local_54[4 /*10*/], 1);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[0 /*2*/]))
	{
		Local_57[0 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, 1, 1, 0);
		unk_0x5D7CD709B34C90F0(Local_57[0 /*2*/], 1);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[1 /*2*/]))
	{
		Local_57[1 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, 1, 1, 0);
		unk_0x5D7CD709B34C90F0(Local_57[1 /*2*/], 1);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[2 /*2*/]))
	{
		Local_57[2 /*2*/] = unk_0x4E55EAB577C13329(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, 1, 1, 0);
		unk_0xCF39804E8C88080E(Local_57[2 /*2*/], 0f, 0f, 90f, 2, 1);
		unk_0x5D7CD709B34C90F0(Local_57[2 /*2*/], 1);
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[3 /*2*/]))
	{
		Local_57[3 /*2*/] = unk_0x4E55EAB577C13329(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, 1, 1, 0);
	}
	iLocal_248 = 0;
	unk_0xD04A772C411165F2("docksprep1");
	while (!unk_0xA08EEC7306CF6198("docksprep1"))
	{
		wait(0);
	}
	unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 100f, 1, 0, 0, 0);
	if (func_314())
	{
		func_300(0, -1, 1);
	}
	else
	{
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
	}
	iLocal_268 = unk_0x1DD05E817C89C737();
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_309(var uParam0, int iParam1)
{
	Global_100681.f_22[iParam1] = uParam0;
}

int func_310(var uParam0)
{
	if (func_311(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_311(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_1012)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x6252BC0DD8A320DB((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x55098D9E9AD58806((uParam0[iVar1 /*5*/])->f_4);
						func_90(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0xE100DD4F82A51BDE(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0x268BE77F77533D03(uParam0->f_273[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0xA08EEC7306CF6198(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x8943BF9E0F15EDA0(uParam0->f_374[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0xA0C7B98BCF1EEF9E(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0xD314260005F064BF(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_90(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x266D9DB5FCE4003B(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x7821F942CAEEBEE1(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_90(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x92A65766A892EFC6(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0xCF56BDC3BD787B97(uParam0->f_202[iVar1 /*7*/].f_4);
						func_90(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0x16CFE70936BA84C7(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0xCE41CD0179F8640B(uParam0->f_151[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0xD7E1DF759CD0FFF2(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x48FA483FE4F18CFE(uParam0->f_737[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0xD0B0D1BD29678350(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xBBB6D0F765409642(uParam0->f_763[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xD6F9DEE4765092A9(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x097EC9C4BC1C0F2E(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_90(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xE76A989290862FBF(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0xD0B0D1BD29678350(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x60E2ADCDDFECC019(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x1DD05E817C89C737();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0xE76A989290862FBF(uParam0->f_687[iVar1 /*7*/].f_5);
							func_90(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_90(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_909[iVar1 /*5*/])
			{
				if (!uParam0->f_909[iVar1 /*5*/].f_1)
				{
					if (unk_0x6C9A2A441E73E5E6(uParam0->f_909[iVar1 /*5*/].f_4))
					{
						uParam0->f_909[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_909[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_909[iVar1 /*5*/].f_1)
					{
						unk_0xA332714024BC3F0C(uParam0->f_909[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_909[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_960[iVar1 /*5*/])
			{
				if (!uParam0->f_960[iVar1 /*5*/].f_1)
				{
					if (unk_0x0C876A2D0F41B79C(uParam0->f_960[iVar1 /*5*/].f_4))
					{
						uParam0->f_960[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_960[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_960[iVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_960[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0xDCB78A15E5F495DC(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0xA790E8E6FD7393AC(iVar1, 1);
						func_90(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_890)
		{
			if (!uParam0->f_890.f_1)
			{
				if (unk_0x6F13318788EDDAD8())
				{
					uParam0->f_890.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_890.f_2)
			{
				if (uParam0->f_890.f_1)
				{
					unk_0xAE427DA16687F323();
					func_90(&(uParam0->f_890));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_894)
		{
			if (!uParam0->f_894.f_1)
			{
				if (unk_0xC54A9DA207D0D713())
				{
					uParam0->f_894.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_894.f_2)
			{
				if (uParam0->f_894.f_1)
				{
					unk_0xEBB9FF9FD0CF4CB2();
					func_90(&(uParam0->f_894));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_898 && unk_0x787F8EE1F6FBDC6D())
		{
			if (!uParam0->f_898.f_1)
			{
				if (unk_0x9E2D35FA908F57B4())
				{
					uParam0->f_898.f_1 = 1;
					if (uParam0->f_1013)
					{
						unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
						func_205(uParam0);
						uParam0->f_1013 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_898.f_2)
			{
				unk_0x6981C3213B841071();
				func_90(&(uParam0->f_898));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_986[iVar1 /*5*/])
			{
				if (!uParam0->f_986[iVar1 /*5*/].f_1)
				{
					if (unk_0x38D063D8CF6D1967(uParam0->f_986[iVar1 /*5*/].f_4))
					{
						uParam0->f_986[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_986[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_986[iVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_986[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_1012 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_312(var uParam0, struct<3> Param1, float fParam2, int iParam3)
{
	if (func_158(Param1) || fParam2 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_898)
	{
		if (func_95(uParam0->f_898.f_4, Param1, 0) && uParam0->f_898.f_10 == fParam2)
		{
			uParam0->f_898.f_2 = 0;
			if (!uParam0->f_898.f_1)
			{
				uParam0->f_1012 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x4A3280817398D754(Param1, fParam2, iParam3);
	uParam0->f_898 = 1;
	uParam0->f_898.f_3 = unk_0x1DD05E817C89C737();
	uParam0->f_898.f_4 = { Param1 };
	uParam0->f_898.f_7 = { 0f, 0f, 0f };
	uParam0->f_898.f_10 = fParam2;
	uParam0->f_1012 = 1;
	return 1;
}

void func_313(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		
		case 1:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		
		case 2:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		
		case 3:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}

bool func_314()
{
	return BitTest(Global_100681.f_20, 13);
}

void func_315(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_909[iVar0 /*5*/])
		{
			uParam0->f_909[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_960[iVar0 /*5*/])
		{
			uParam0->f_960[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_898)
	{
		uParam0->f_898.f_2 = 1;
	}
	if (uParam0->f_890)
	{
		uParam0->f_890.f_2 = 1;
	}
	if (uParam0->f_894)
	{
		uParam0->f_894.f_2 = 1;
	}
}

void func_316()
{
	if (unk_0x0CB7695268A7F50F())
	{
		unk_0xA7E4AA8D29D3DAC1();
		unk_0xDD291722ADDCBD60();
		while (unk_0x0CB7695268A7F50F())
		{
			wait(0);
		}
	}
	func_210();
	if (func_107(Local_53[0 /*2*/]))
	{
		unk_0x8462CDB3E1DA954A(Local_53[0 /*2*/], Local_56);
	}
	Global_97178.f_357 = 0;
	if (iLocal_249)
	{
		unk_0x51EC3CEC568ABB81(&iLocal_290);
		iLocal_249 = 0;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		func_324(&(Local_54[iLocal_247 /*10*/].f_2));
		if (unk_0xFC8BFE4B41177C22(Local_54[iLocal_247 /*10*/]) && !unk_0x4FAFF4BCB7633475(Local_54[iLocal_247 /*10*/]))
		{
			if (unk_0x7F420695E3F776FB(Local_54[iLocal_247 /*10*/], 0))
			{
				unk_0xCE2DE9BE961A9AF1(Local_54[iLocal_247 /*10*/], unk_0xD1A6A821F5AC81DB(unk_0x6EF03BE64E058E2F(Local_54[iLocal_247 /*10*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			func_323(&(Local_54[iLocal_247 /*10*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_53[iLocal_247 /*2*/]))
		{
			func_322(Local_53[iLocal_247 /*2*/]);
			func_319(&(Local_53[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_57[iLocal_247 /*2*/]))
		{
			func_318(&(Local_57[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	if (unk_0x9CFFB7009B578840(uLocal_245))
	{
		unk_0x182120534CCF9023(uLocal_245, 0);
	}
	func_291();
	func_42(&Local_58, 1, 0);
	func_317(72);
	func_200(1, 0, 0, 3000, 0);
	unk_0x425BBE19F25A57AB(1f);
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 300f, 1, 0, 0, 0);
	}
	unk_0x2094BC4B6731BA68(1219.186f, -2977.9f, 4.8653f, 300f, 1, 0, 0, 0);
	iLocal_268 = unk_0x1DD05E817C89C737();
	iLocal_251 = 0;
	iLocal_269 = 0;
	iLocal_264 = 0;
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_307 = 0;
	iLocal_252 = 0;
	func_218(6, 0);
	if (unk_0x5AEB336317DC4151("PO1_08_sub_waterplane"))
	{
		func_205(&uLocal_309);
		unk_0x5373E9377066509E("PO1_08_sub_waterplane");
	}
	unk_0x22A76EDE2316E9A1();
}

void func_317(int iParam0)
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

void func_318(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
		{
			unk_0x837D67618BF89034(*uParam0, 1, 1);
		}
		unk_0x51C8BEA2005931AB(uParam0);
	}
}

void func_319(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		if (func_321(*uParam0))
		{
			if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
			{
				if (func_320(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
					{
						unk_0x68298CA6191CDFDB(uParam0);
						return;
					}
				}
				unk_0x8C1F7D7A31B2A38E(uParam0);
			}
		}
		else
		{
			if (func_320(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
				{
					unk_0x68298CA6191CDFDB(uParam0);
					return;
				}
			}
			unk_0x8C1F7D7A31B2A38E(uParam0);
		}
	}
}

int func_320(int iParam0)
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

int func_321(int iParam0)
{
	if (func_320(iParam0))
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

void func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				if (!unk_0x4FAFF4BCB7633475(iVar0))
				{
					unk_0x19626F992DC71FB9(iVar0);
				}
				else
				{
					unk_0x734A9F4537A31459(&iVar0);
				}
			}
			iVar2 = unk_0x2EEC0612337D20CE(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!unk_0xC39AE5D390581AD5(iParam0, iVar1, 0))
				{
					iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, iVar1, 0);
					if (unk_0xFC8BFE4B41177C22(iVar0))
					{
						if (!unk_0x4FAFF4BCB7633475(iVar0))
						{
							unk_0x19626F992DC71FB9(iVar0);
						}
						else
						{
							unk_0x734A9F4537A31459(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_323(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
		}
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		unk_0x734A9F4537A31459(uParam0);
	}
}

void func_324(var uParam0)
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

void func_325()
{
	switch (iLocal_1981)
	{
		case 1:
			iLocal_1981 = 2;
			iLocal_1983 = -1;
			break;
		
		case 2:
			iLocal_1981 = 3;
			iLocal_1983 = 0;
			iLocal_1982 = iLocal_1984;
			break;
		
		case 3:
			iLocal_1984 = -1;
			iLocal_1981 = 0;
			break;
		
		case 0:
			if ((unk_0x1DD05E817C89C737() - iLocal_1985) > 2500)
			{
				iLocal_1985 = unk_0x1DD05E817C89C737();
			}
			break;
	}
}

void func_326(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x0CB7695268A7F50F())
	{
		if (unk_0xB3FA103AA6383C28())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xD6F9DEE4765092A9(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0;
					while (iVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] != -1 && (uParam0[iVar0 /*82*/])->f_17[iVar1] != -1)
						{
							unk_0xFE61105198EA3496(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_17.f_13[iVar1], (uParam0[iVar0 /*82*/])->f_17[iVar1], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
							(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
						}
						iVar1++;
					}
					iVar2 = 0;
					while (iVar2 < 9)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] != -1 && (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] != -1)
						{
							unk_0x60A0A4CD710160D5(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_17.f_39[iVar2], (uParam0[iVar0 /*82*/])->f_17.f_49[iVar2], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_39[iVar2] = -1;
							(uParam0[iVar0 /*82*/])->f_17.f_49[iVar2] = -1;
						}
						iVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_16 = 0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_327(uParam0);
	}
}

void func_327(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xD6F9DEE4765092A9(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_16 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_328(var uParam0)
{
	func_311(uParam0);
}

void func_329()
{
	struct<3> Var0;
	var uVar1;
	
	if (func_302() || func_7(0))
	{
		if (func_302())
		{
			iLocal_1987 = func_333();
			if (Global_94858)
			{
				iLocal_1987++;
			}
			if (iLocal_1987 >= 3)
			{
				iLocal_1987 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1987 = 0;
		}
		if (func_302())
		{
			func_313(iLocal_1987, &Var0, &uVar1);
			func_332(Var0, uVar1, 1, 0);
		}
		settimera(0);
		iLocal_1986 = 1;
	}
	else
	{
		func_108(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_1982 = 0;
		func_275(0);
	}
	iLocal_1983 = 0;
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	}
	unk_0xFD5A87843250F1B3("EXTRASUNNY");
	unk_0x5D0510F58106E4FF(unk_0x259BE71D8A81D4FA(), 0);
	unk_0x2B1BDC32466B40A9(iLocal_259);
	unk_0x2B1BDC32466B40A9(iLocal_260);
	unk_0x06CD913C241C765E("REL_BUDDY", &iLocal_259);
	unk_0x06CD913C241C765E("rel_dock", &iLocal_260);
	unk_0xD414C47AFF81382A(5, iLocal_260, joaat("player"));
	unk_0xD414C47AFF81382A(1, joaat("player"), iLocal_259);
	unk_0xD414C47AFF81382A(1, iLocal_259, joaat("player"));
	unk_0xD414C47AFF81382A(1, iLocal_260, iLocal_260);
	if (!unk_0xFC8BFE4B41177C22(Local_53[0 /*2*/]))
	{
		if (unk_0xFC8BFE4B41177C22(Global_97178[0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_97178[0], 1, 1);
			Local_53[0 /*2*/] = Global_97178[0];
			func_309(Local_53[0 /*2*/], 0);
			unk_0x4DC72C4B884A6C59(Local_53[0 /*2*/], 1);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(Local_54[4 /*10*/]))
	{
		if (unk_0xFC8BFE4B41177C22(Global_97178.f_9[0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_97178.f_9[0], 1, 1);
			Local_54[4 /*10*/] = Global_97178.f_9[0];
			unk_0x3CEA1FD137ACE2D9(Local_54[4 /*10*/], iLocal_260);
			unk_0x0428AFDCAA63B06E(Local_54[4 /*10*/], 208, 1);
			unk_0xA6102F762BBA9BC9(Local_54[4 /*10*/], 45f);
			unk_0xC8DEC2468E748263(Local_54[4 /*10*/], 50f);
			unk_0x3C7306C2CE967C57(Local_54[4 /*10*/], -50f);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[0 /*2*/]))
	{
		if (unk_0xFC8BFE4B41177C22(Global_97178.f_28[0]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_97178.f_28[0], 1, 1);
			Local_57[0 /*2*/] = Global_97178.f_28[0];
		}
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[1 /*2*/]))
	{
		if (unk_0xFC8BFE4B41177C22(Global_97178.f_28[1]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_97178.f_28[1], 1, 1);
			Local_57[1 /*2*/] = Global_97178.f_28[1];
		}
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[2 /*2*/]))
	{
		if (unk_0xFC8BFE4B41177C22(Global_97178.f_28[2]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_97178.f_28[2], 1, 1);
			Local_57[2 /*2*/] = Global_97178.f_28[2];
		}
	}
	if (!unk_0xFC8BFE4B41177C22(Local_57[3 /*2*/]))
	{
		if (unk_0xFC8BFE4B41177C22(Global_97178.f_28[3]))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_97178.f_28[3], 1, 1);
			Local_57[3 /*2*/] = Global_97178.f_28[3];
		}
	}
	if (Global_97178.f_357)
	{
		if (unk_0x3E2705A53B1D4A09(&(Global_97178.f_37[0])))
		{
			unk_0x7A7B42D5C86E7EDF(Global_97178.f_37[0], 1, 1);
			Local_55[0 /*5*/] = Global_97178.f_37[0];
			Global_97178.f_37[0] = 0;
		}
		if (unk_0x3E2705A53B1D4A09(&(Global_97178.f_37[1])))
		{
			unk_0x7A7B42D5C86E7EDF(Global_97178.f_37[1], 1, 1);
			Local_55[1 /*5*/] = Global_97178.f_37[1];
			Global_97178.f_37[1] = 0;
		}
		if (unk_0x3E2705A53B1D4A09(&(Global_97178.f_37[2])))
		{
			unk_0x7A7B42D5C86E7EDF(Global_97178.f_37[2], 1, 1);
			Local_55[2 /*5*/] = Global_97178.f_37[2];
			Global_97178.f_37[2] = 0;
		}
		if (unk_0x3E2705A53B1D4A09(&(Global_97178.f_37[3])))
		{
			unk_0x7A7B42D5C86E7EDF(Global_97178.f_37[3], 1, 1);
			Local_55[3 /*5*/] = Global_97178.f_37[3];
			Global_97178.f_37[3] = 0;
		}
		iLocal_248 = 1;
	}
	else
	{
		iLocal_248 = 0;
	}
	unk_0xF2CB0224D3BE0B42("DOCKP1", 0);
	while (!unk_0xDCB78A15E5F495DC(0))
	{
		wait(0);
	}
	if (func_107(unk_0x4A8C381C258A124D()))
	{
		func_226(&uLocal_78, 0, unk_0x4A8C381C258A124D(), "TREVOR", 0, 1);
	}
	func_331(1);
	unk_0xDAE61414743C8D1D(2);
	unk_0x425BBE19F25A57AB(0.5f);
	func_330(72);
}

void func_330(int iParam0)
{
	Global_96536 = 0;
	switch (iParam0)
	{
		case 72:
			func_268(2);
			func_268(4);
			break;
		
		case 73:
			func_268(0);
			func_268(1);
			func_268(7);
			break;
		
		case 92:
			func_268(10);
			func_268(9);
			func_268(13);
			func_268(6);
			break;
		
		case 68:
			func_268(11);
			break;
		
		case 78:
			func_268(14);
			break;
		
		case 79:
			func_268(3);
			break;
		
		default:
			break;
	}
}

void func_331(bool bParam0)
{
	if (bParam0)
	{
		Global_21781 = 1;
	}
	else
	{
		Global_21781 = 0;
	}
}

void func_332(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (func_302())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_100681.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		Global_100677 = { Param0 };
		Global_100680 = uParam1;
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
		func_301(1);
	}
}

int func_333()
{
	if (!Global_100681 == 10 && !Global_100681 == 9)
	{
		return 0;
	}
	return Global_100681.f_2;
}

void func_334()
{
	if (unk_0x0CB7695268A7F50F())
	{
		unk_0xA7E4AA8D29D3DAC1();
		unk_0xDD291722ADDCBD60();
	}
	if (func_107(unk_0x4A8C381C258A124D()))
	{
		if (func_107(Local_53[0 /*2*/]))
		{
			if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_53[0 /*2*/], 0))
			{
				unk_0xCE2DE9BE961A9AF1(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(Local_53[0 /*2*/], 1) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_210();
	if (func_107(Local_53[0 /*2*/]))
	{
		unk_0x8462CDB3E1DA954A(Local_53[0 /*2*/], Local_56);
	}
	Global_97178.f_357 = 0;
	if (iLocal_249)
	{
		unk_0x51EC3CEC568ABB81(&iLocal_290);
		iLocal_249 = 0;
	}
	if (unk_0x9CFFB7009B578840(uLocal_245))
	{
		unk_0x182120534CCF9023(uLocal_245, 0);
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (func_107(Local_54[iLocal_247 /*10*/]))
		{
			func_324(&(Local_54[iLocal_247 /*10*/].f_2));
			if (unk_0xC450B06E5AAA0985(Local_54[iLocal_247 /*10*/].f_1))
			{
				unk_0xFE54B8568B2ABD12(&(Local_54[iLocal_247 /*10*/].f_1));
			}
			if (unk_0x133460AD0F183CC9(Local_54[iLocal_247 /*10*/]))
			{
				unk_0x5C4B3034CCDA5270(Local_54[iLocal_247 /*10*/]);
			}
			if (Local_54[iLocal_247 /*10*/] != unk_0x4A8C381C258A124D())
			{
				func_9(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (unk_0xC450B06E5AAA0985(Local_53[iLocal_247 /*2*/].f_1))
		{
			unk_0xFE54B8568B2ABD12(&(Local_53[iLocal_247 /*2*/].f_1));
		}
		if (func_107(Local_53[iLocal_247 /*2*/]))
		{
			if (iLocal_247 != 0)
			{
				func_296(&(Local_53[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	func_336(0);
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (unk_0xFC8BFE4B41177C22(Local_57[iLocal_247 /*2*/]))
		{
			if (Local_57[iLocal_247 /*2*/] == Local_57[4 /*2*/] || Local_57[iLocal_247 /*2*/] == Local_57[5 /*2*/])
			{
				func_91(&(Local_57[iLocal_247 /*2*/]), 1);
			}
			else
			{
				func_318(&(Local_57[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	}
	unk_0x5D0510F58106E4FF(unk_0x259BE71D8A81D4FA(), 1);
	unk_0xA21EFB60FCA3D0F6();
	unk_0x425BBE19F25A57AB(1f);
	unk_0xDAE61414743C8D1D(5);
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	func_331(0);
	func_219(&Local_58, 0);
	func_335();
	if (unk_0x5AEB336317DC4151("PO1_08_sub_waterplane"))
	{
		unk_0x5373E9377066509E("PO1_08_sub_waterplane");
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_335()
{
	Global_96536 = 0;
}

void func_336(bool bParam0)
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

void func_337()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113648.f_9087 || func_7(0))
	{
		if (!func_338())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_100(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_91433[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_105();
		}
	}
}

int func_338()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

void func_339()
{
	func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
}
