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
	struct<22> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	struct<3> Local_64[32];
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 12;
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
	var uLocal_683 = 0;
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
	var uLocal_771 = 1065353216;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	struct<3> Local_774 = { 0, 0, 0 } ;
	var uLocal_775 = 0;
	var uLocal_776 = 16;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
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
	int iLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	int iLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	float fLocal_947 = 0f;
	float fLocal_948 = 0f;
	float fLocal_949 = 0f;
	float fLocal_950 = 0f;
	struct<21> Local_951 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_944 = 15000;
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_150(ScriptParam_951))
		{
			func_145();
		}
	}
	while (true)
	{
		func_144();
		if (func_136())
		{
			func_145();
		}
		if (unk_0xF859473E4AD09F30() != iLocal_941)
		{
			func_145();
		}
		switch (func_135(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_134() == 1)
				{
					func_133();
					func_132();
					Local_64[unk_0xAE032CEDCF23C6D5() /*3*/] = 1;
				}
				else if (func_134() == 4)
				{
					Local_64[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_100();
				if (func_134() == 1)
				{
					func_74();
				}
				else if (func_134() == 4)
				{
					Local_64[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				if (func_72(Local_63.f_2))
				{
					if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_63.f_2), 1), 200f, 200f, 200f, 0, 1, 0))
					{
						Local_64[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_71(&(Local_63.f_18));
				if (func_70(&(Local_63.f_18)))
				{
					Local_64[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_64[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
			
			case 4:
				func_145();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_134())
			{
				case 0:
					if (func_68(&(Local_63.f_16), 10000, 0))
					{
						if (!BitTest(Local_63.f_0, 12))
						{
							Local_63.f_4 = unk_0x259BE71D8A81D4FA();
							Local_63.f_5 = func_67();
							Local_63.f_10 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) + Vector(0f, 5f, 0f) };
							Local_63.f_7 = { func_65(Local_63.f_5) };
							unk_0x0B0C9A0F9AAEB7F0(&Local_63, 12);
						}
						if (func_38())
						{
							func_133();
							Local_63.f_1 = 1;
						}
					}
					func_34();
					break;
				
				case 1:
					func_33();
					func_32();
					func_30();
					func_34();
					if (func_1())
					{
						Local_63.f_1 = 4;
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
	var uVar0;
	var uVar1;
	
	if (func_29())
	{
		if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
		{
			func_6(func_23(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
	{
		if (unk_0x2FC2FDC413532977(Local_63.f_2))
		{
			if (!func_72(Local_63.f_2))
			{
				if (unk_0x7B8DC32252146679(Local_63.f_2, &uVar0) == unk_0x259BE71D8A81D4FA())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (unk_0x2FC2FDC413532977(Local_63.f_3))
		{
			if (func_4(Local_63.f_3))
			{
				if (unk_0x7B8DC32252146679(Local_63.f_3, &uVar1) == unk_0x259BE71D8A81D4FA())
				{
					func_5(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0, bool bParam1, bool bParam2)
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

int func_4(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(uParam0));
	}
	return 1;
}

void func_5(bool bParam0, int iParam1)
{
	if (Global_2672505.f_3686[bParam0] < iParam1)
	{
		Global_2672505.f_3686[bParam0] = iParam1;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2672505.f_3685), bParam0);
}

void func_6(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_22(iParam1), 16);
	StringCopy(&Var1, func_21(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_20())
	{
		func_7(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4535172[iVar3 /*85*/].f_14.f_40 = { Var0 };
		Global_4535172[iVar3 /*85*/].f_14.f_44 = { Var1 };
	}
	else
	{
		unk_0x9CBD6E7B088910A1(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_7(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_20())
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_8(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_8(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_19()) || unk_0x34F31012FED51A0F())
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
			*uParam0 = func_15(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_14(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_9(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_126.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_20())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_13(iParam0))
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
		func_11(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_11(var uParam0)
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
	func_12(&(uParam0->f_14));
	func_12(&(uParam0->f_14.f_13));
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

void func_12(var uParam0)
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

int func_13(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_14(int iParam0, var uParam1)
{
	Global_2697015 = uParam1;
	Global_2697014 = iParam0;
}

int func_15(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_20())
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
				func_16(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_16(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_18(Var0.f_1);
	if ((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_17();
		unk_0x01F0B819E78A18A1(1, &Var0, 36, iVar1);
	}
}

void func_17()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_18(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, bParam0);
	}
	return uVar0;
}

int func_19()
{
	return Global_1574918;
}

int func_20()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

int func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_28(iParam0) >= 0)
	{
		iVar0 = func_28(iParam0);
	}
	else
	{
		iVar0 = func_24(iParam0);
	}
	return iVar0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_25())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return 200;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return 400;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return 600;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return 800;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_25()
{
	return BitTest(func_26(6427, -1, 0), 19);
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_27(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7105;
			break;
		
		case 10:
			return Global_262145.f_4128;
			break;
		
		case 11:
			return Global_262145.f_4129;
			break;
		
		case 8:
			return Global_262145.f_4126;
			break;
		
		case 0:
			return Global_262145.f_4112;
			break;
		
		case 9:
			return Global_262145.f_4127;
			break;
		
		case 13:
			return Global_262145.f_4131;
			break;
		
		case 12:
			return Global_262145.f_4130;
			break;
		
		case 2:
			return Global_262145.f_4122;
			break;
		
		case 14:
			return Global_262145.f_4132;
			break;
		
		case 20:
			if (func_25())
			{
				return 0;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 1)
			{
				return Global_262145.f_7112;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 2)
			{
				return Global_262145.f_7113;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 3)
			{
				return Global_262145.f_7114;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 4)
			{
				return Global_262145.f_7115;
			}
			else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 5)
			{
				return Global_262145.f_7116;
			}
			break;
		
		case 6:
			return Global_262145.f_4125;
			break;
		
		case 22:
			return Global_262145.f_4138;
			break;
		
		case 23:
			return Global_262145.f_4139;
			break;
		
		case 24:
			return Global_262145.f_4140;
			break;
		
		case 25:
			return Global_262145.f_4141;
			break;
		
		case 26:
			return Global_262145.f_4142;
			break;
		
		case 35:
			return Global_262145.f_7681;
			break;
		
		case 15:
			return Global_262145.f_7106;
			break;
		
		case 17:
			return Global_262145.f_7106;
			break;
		
		case 18:
			return Global_262145.f_7106;
			break;
		
		case 19:
			return Global_262145.f_7106;
			break;
		
		case 21:
			return Global_262145.f_7106;
			break;
		
		case 36:
			return Global_262145.f_8148;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13359;
			break;
		
		case 41:
			return Global_262145.f_13360;
			break;
		
		case 42:
			return Global_262145.f_13361;
			break;
		
		case 43:
			return Global_262145.f_15888;
			break;
		
		case 44:
			return Global_262145.f_15890;
			break;
		
		case 57:
			return Global_262145.f_4140;
			break;
		
		case 58:
			return Global_262145.f_25788;
			break;
		
		case 62:
			return Global_262145.f_25789;
			break;
		
		case 63:
			return Global_262145.f_29259;
			break;
		
		case 64:
			return Global_262145.f_7106;
			break;
		
		case 72:
			return Global_262145.f_25789;
			break;
		
		case 73:
			return Global_262145.f_31774;
			break;
		
		case 74:
			return Global_262145.f_31776;
			break;
		
		case 75:
			return Global_262145.f_31778;
			break;
	}
	return 0;
}

bool func_29()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

void func_30()
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	if (Local_63.f_20 != 7)
	{
		if (func_4(Local_63.f_3) || !func_72(Local_63.f_2))
		{
			Local_63.f_20 = 7;
		}
		else if (!unk_0xCECDBB848D53DEB2(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0xE38610F405049F71(Local_63.f_2), 0))
		{
			Local_63.f_20 = 7;
		}
	}
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (Local_63.f_20 != 1)
		{
			if (unk_0x8D91ADE44AC79BC9(unk_0xE38610F405049F71(Local_63.f_2)) <= 600 || unk_0x8D91ADE44AC79BC9(unk_0xC35A3A4C05A4831B(Local_63.f_3)) <= 150)
			{
				Local_63.f_20 = 1;
			}
		}
		switch (Local_63.f_20)
		{
			case 2:
				if (Local_63.f_21 == 3)
				{
					Local_63.f_20 = 4;
				}
				else if (Local_63.f_21 == 5)
				{
					Local_63.f_20 = 7;
				}
				else if (!BitTest(Local_63.f_0, 7) && unk_0xFAA48325A90263BE(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 10f, 10f, 10f, 0, 1, 0))
				{
					Local_63.f_20 = 3;
				}
				break;
			
			case 4:
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 8);
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) <= 0)
				{
					Local_63.f_20 = 3;
					unk_0x8744D2E3FC95740E(&uLocal_65, 8);
				}
				else if (!BitTest(Local_63.f_0, 7) && unk_0x65FFA94B82A71741(unk_0xC35A3A4C05A4831B(Local_63.f_3), Local_63.f_7, 10f, 10f, 10f, 0, 1, 0))
				{
					Local_63.f_20 = 5;
				}
				break;
			
			case 5:
				if ((unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) <= 0 && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2))) && func_31(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_20 = 6;
				}
				break;
			
			case 3:
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) >= 1)
				{
					Local_63.f_20 = 4;
				}
				break;
			
			case 6:
				if ((unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) <= 0 && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2))) && func_31(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 1) >= 10f)
				{
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_perform_sequence")) == 1)
					{
						Local_63.f_20 = 7;
					}
				}
				break;
			
			case 1:
				if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_perform_sequence")) == 1 && func_31(unk_0x4A8C381C258A124D(), unk_0xC35A3A4C05A4831B(Local_63.f_3), 1) >= 10f)
				{
					Local_63.f_20 = 7;
				}
				break;
			
			case 7:
				break;
			}
	}
}

float func_31(int iParam0, int iParam1, int iParam2)
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

void func_32()
{
	switch (Local_63.f_21)
	{
		case 0:
			if (BitTest(Local_63.f_0, 8) || unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) > 0)
			{
				Local_63.f_21 = 1;
			}
			break;
		
		case 1:
			if (unk_0x2FC2FDC413532977(Local_63.f_2))
			{
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) > 0)
				{
					Local_63.f_21 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) > 0)
			{
				Local_63.f_21 = 3;
			}
			else if (BitTest(Local_63.f_0, 10))
			{
				Local_63.f_21 = 4;
			}
			break;
		
		case 3:
			if (unk_0x2FC2FDC413532977(Local_63.f_2))
			{
				if (unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) <= 0)
				{
					Local_63.f_21 = 1;
				}
				else if (BitTest(Local_63.f_0, 10))
				{
					Local_63.f_21 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x2FC2FDC413532977(Local_63.f_2))
			{
				if ((unk_0xDE3B10768F6103AD(unk_0xE38610F405049F71(Local_63.f_2), 0, 1) <= 0 && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2))) && func_31(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_21 = 5;
				}
			}
			break;
		
		case 5:
			break;
	}
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	unk_0x8744D2E3FC95740E(&Local_63, 9);
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
			if (func_3(iVar1, 1, 1))
			{
				if (func_72(Local_63.f_2))
				{
					if (!BitTest(Local_63.f_0, 8))
					{
						if (unk_0x65FFA94B82A71741(unk_0xE38610F405049F71(Local_63.f_2), Local_63.f_10, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Local_63, 8);
						}
					}
					if (!BitTest(Local_63.f_0, 7) || BitTest(Local_63.f_0, 11))
					{
						if (!BitTest(Local_63.f_0, 10))
						{
							if (unk_0x65FFA94B82A71741(unk_0xE38610F405049F71(Local_63.f_2), Local_63.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), 0, 1, 0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&Local_63, 10);
							}
						}
					}
					if (!BitTest(Local_63.f_0, 9))
					{
						if (BitTest(Local_64[iVar0 /*3*/].f_1, 6))
						{
							unk_0x0B0C9A0F9AAEB7F0(&Local_63, 9);
							unk_0x8744D2E3FC95740E(&(Local_64[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_63.f_20 != 3)
					{
						if (BitTest(Local_64[iVar0 /*3*/].f_1, 5))
						{
							Local_63.f_20 = 3;
							unk_0x8744D2E3FC95740E(&(Local_64[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_34()
{
	struct<3> Var0;
	var uVar1;
	
	if ((Local_63.f_21 <= 2 || Local_63.f_20 == 2) || Local_63.f_20 == 3)
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		if ((!unk_0x7CF3DDFB660E9328(Var0, &uVar1) || func_36()) || func_35())
		{
			Local_63.f_1 = 4;
		}
	}
}

int func_35()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2631.833f, 4526.624f, -10f, -380.1435f, 3906.702f, 78.484f, 1200f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 1731.902f, -123.8468f, 137.2596f, 2079.203f, 798.3421f, 249.3267f, 600f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 252.5025f, 855.094f, 148.1213f, -393.3539f, 695.785f, 272.1867f, 500f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), func_37(iVar0), 50f, 50f, 50f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.78f, 0f;
		
		case 1:
			return 1551.805f, 6686.052f, 0f;
		
		case 2:
			return 3260.507f, 5309.454f, 0f;
		
		case 3:
			return 3788.334f, 3812.693f, 0f;
		
		case 4:
			return 2945.665f, 1773.192f, 0f;
		
		case 5:
			return 2866.816f, -658.5848f, 0f;
		
		case 6:
			return 2342.881f, -2167.953f, 0f;
		
		case 7:
			return 1215.167f, -2728.054f, 0f;
		
		case 8:
			return 1305.229f, -3364.572f, 0f;
		
		case 9:
			return 293.8953f, -3361.616f, 0f;
		
		case 10:
			return -484.948f, -2940.643f, 0f;
		
		case 11:
			return -1387.61f, -1704.374f, 0f;
		
		case 12:
			return -1566.04f, -1312.232f, 0f;
		
		case 13:
			return -1920.23f, -849.6466f, 0f;
		
		case 14:
			return -2876.76f, -74.3269f, 0f;
		
		case 15:
			return -3133.45f, 604.7179f, 0f;
		
		case 16:
			return -3286.57f, 1285.372f, 0f;
		
		case 17:
			return -3205.53f, 3285.199f, 0f;
		
		case 18:
			return -2520.42f, 4240.671f, 0f;
		
		case 19:
			return -909.632f, 5830.909f, 0f;
		
		case 20:
			return -325.109f, 6584.622f, 0f;
		
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

int func_38()
{
	if (unk_0x4D64DFA5BE3B2871(1, 1, 0, 0))
	{
		if (func_64(joaat("dinghy2")) && func_64(joaat("s_m_y_blackops_01")))
		{
			if (func_41() && func_39())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_39()
{
	if ((!unk_0x2FC2FDC413532977(Local_63.f_3) && func_64(joaat("s_m_y_blackops_01"))) && unk_0x2FC2FDC413532977(Local_63.f_2))
	{
		if (func_72(Local_63.f_2))
		{
			if (func_40(&(Local_63.f_3), Local_63.f_2, 22, joaat("s_m_y_blackops_01"), -1, 1, 1, 1))
			{
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 0, 0, 1, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 2, 1, 0, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 3, 0, 1, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 4, 0, 2, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 8, 1, 0, 0);
				unk_0xD1C578C204015E1F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 9, 0, 0, 0);
				if (Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/] != 0)
				{
					unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_63.f_3), Global_1837208);
				}
				else
				{
					unk_0x3CEA1FD137ACE2D9(unk_0xC35A3A4C05A4831B(Local_63.f_3), Global_1836891[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_63.f_3), 1);
				unk_0xAAA71DD7E9059338(unk_0xC35A3A4C05A4831B(Local_63.f_3), 1);
				unk_0xD25E9BDC14A0B649(unk_0xC35A3A4C05A4831B(Local_63.f_3), round((200f * Global_262145.f_165)), 0);
				unk_0x1537AF7B62B52EB1(unk_0xC35A3A4C05A4831B(Local_63.f_3), 0);
				unk_0x0428AFDCAA63B06E(unk_0xC35A3A4C05A4831B(Local_63.f_3), 255, 1);
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_63.f_3))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(joaat("s_m_y_blackops_01"));
	return 1;
}

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_41()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	
	if (!unk_0x2FC2FDC413532977(Local_63.f_2))
	{
		if (func_64(joaat("dinghy2")))
		{
			if (!BitTest(uLocal_65, 10))
			{
				func_61(&Local_774, &uLocal_775);
				if (unk_0x1EF8801C2AC1FE34(Local_774 + Vector(2f, 0f, 0f), Local_774 - Vector(10f, 0f, 0f), &Local_774))
				{
					if (func_45(Local_774, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						Var2 = { Local_774 + Vector(12f, 0f, 0f) };
						iLocal_772 = unk_0xA86260972774CF88(Var2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_772 == 0)
						{
							return 0;
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 10);
						}
					}
				}
			}
			else if (unk_0x0E7DD1EBCA8D2DE3(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_772 = 0;
				if (iLocal_773 == 0)
				{
					if (func_42(&(Local_63.f_2), joaat("dinghy2"), Local_774, uLocal_775, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x0B1BCFB3741AF8B2(unk_0xE38610F405049F71(Local_63.f_2), 1);
						unk_0xC229299217554C78(unk_0xE38610F405049F71(Local_63.f_2), 1, 1, 0);
						unk_0x93C337B66C95C99B(unk_0xE38610F405049F71(Local_63.f_2), 12f);
						unk_0xA80E7D11DB73C8BA(unk_0xE38610F405049F71(Local_63.f_2), 1);
						unk_0x11C125313CB8ADA2(unk_0xE38610F405049F71(Local_63.f_2), 0);
					}
				}
				else
				{
					iLocal_773 = 0;
					unk_0x8744D2E3FC95740E(&uLocal_65, 10);
				}
			}
			else if (unk_0x0E7DD1EBCA8D2DE3(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_772 = 0;
				unk_0x8744D2E3FC95740E(&uLocal_65, 10);
			}
		}
	}
	if (!unk_0x2FC2FDC413532977(Local_63.f_2))
	{
		return 0;
	}
	unk_0x55098D9E9AD58806(joaat("dinghy2"));
	return 1;
}

int func_42(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_43(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_43(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_44(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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

int func_44(int iParam0, struct<3> Param1, int iParam2)
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

int func_45(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_54(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635559.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_46(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635559.f_2++;
	return 1;
}

int func_46(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_50(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		iVar1 = iVar0;
		if (func_3(iVar1, 1, 1))
		{
			if (!func_48(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_47(iVar1) || !bParam8) && !Global_2657589[iVar1 /*466*/].f_270)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_50(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam6 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_50(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
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

int func_47(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657589[iParam0 /*466*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_49(-1, 0) == 8;
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

int func_49(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

Vector3 func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1853910[iVar0 /*862*/].f_832) && !func_52(Global_1853910[iVar0 /*862*/].f_833))
	{
		return Global_1853910[iVar0 /*862*/].f_833;
	}
	return func_51(iParam0);
}

Vector3 func_51(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_52(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_53()
{
	return Global_2683864.f_19;
}

int func_54(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_3(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_47(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_55(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_51(iVar1), Param0, 1) < fParam1)
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

int func_55(int iParam0)
{
	if (func_60(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2764203 = { func_59(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2764203))
	{
		return 1;
	}
	if (func_56(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_57();
}

struct<13> func_59(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_60(int iParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2764203 = { func_59(iParam0) };
		Global_2764216 = { func_59(uParam1) };
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

void func_61(var uParam0, var uParam1)
{
	*uParam0 = { func_62(Local_63.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = unk_0x97BC40FFA2FFCCD2((Local_63.f_10 - *uParam0), (Local_63.f_10.f_1 - uParam0->f_1));
}

Vector3 func_62(struct<3> Param0, float fParam1, float fParam2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { func_63(Var0, unk_0xD2AA6F822D3A55D2(fParam1, fParam2)) };
	Var0.f_2 = unk_0xD2AA6F822D3A55D2(-fVar1, fVar1);
	return Param0 + Var0;
}

Vector3 func_63(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_64(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

Vector3 func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, 8000f, 0f };
			return Var2;
			break;
		
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { 5000f, Local_63.f_10.f_1, 0f };
			return Var2;
			break;
		
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, -5000f, 0f };
			return Var2;
			break;
		
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = unk_0xED977E2AE2CB16EE(Local_63.f_10, func_37(iVar0), 1);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { func_37(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { -5000f, Local_63.f_10.f_1, 0f };
			return Var2;
			break;
	}
	return -1392.428f, -1661.61f, 0f;
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		
		case 1:
			return 186.4808f;
		
		case 2:
			return 65.4787f;
		
		case 3:
			return 56.421f;
		
		case 4:
			return 76.4749f;
		
		case 5:
			return 79.1503f;
		
		case 6:
			return 24.8224f;
		
		case 7:
			return 27.7851f;
		
		case 8:
			return 32.1401f;
		
		case 9:
			return 329.6803f;
		
		case 10:
			return 328.7837f;
		
		case 11:
			return 283.9666f;
		
		case 12:
			return 295.5786f;
		
		case 13:
			return 314.4354f;
		
		case 14:
			return 0.4088f;
		
		case 15:
			return 287.0804f;
		
		case 16:
			return 249.5385f;
		
		case 17:
			return 270.7522f;
		
		case 18:
			return 260.8947f;
		
		case 19:
			return 248.4225f;
		
		case 20:
			return 233.6563f;
		
		default:
	}
	return 228.6098f;
}

int func_67()
{
	struct<3> Var0;
	
	Var0 = { func_51(unk_0x259BE71D8A81D4FA()) };
	if (Var0.f_1 >= 0f && Var0.f_0 >= 0f)
	{
		return 0;
	}
	else if (Var0.f_1 < 0f && Var0.f_0 >= 0f)
	{
		return 1;
	}
	else if (Var0.f_1 < 0f && Var0.f_0 < 0f)
	{
		return 2;
	}
	else if (Var0.f_1 >= 0f && Var0.f_0 < 0f)
	{
		return 3;
	}
	return -1;
}

int func_68(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_69(uParam0, bParam2, 0);
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

void func_69(var uParam0, bool bParam1, bool bParam2)
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

int func_70(var uParam0)
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

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_69(uParam0, 0, 0);
		}
	}
}

int func_72(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_73(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_73(int iParam0)
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

void func_74()
{
	if (func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (Local_63.f_21 == 5)
		{
			Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 5;
		}
		switch (Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2)
		{
			case 0:
				func_97();
				if (Local_63.f_21 > 0)
				{
					Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
				}
				break;
			
			case 1:
				if (func_72(Local_63.f_2))
				{
					func_132();
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 0))
					{
						func_96();
						Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 3;
						unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
						unk_0x8744D2E3FC95740E(&(Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 0);
					}
				}
				break;
			
			case 2:
				if (func_72(Local_63.f_2))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 0))
					{
						Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 3;
						unk_0x8744D2E3FC95740E(&(Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 5);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 6);
						if (Local_63.f_21 >= 4)
						{
							Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_72(Local_63.f_2))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 0))
					{
						if (Local_63.f_21 >= 4)
						{
							Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 4;
						}
						func_95();
					}
					else
					{
						Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
					}
				}
				break;
			
			case 4:
				if (func_72(Local_63.f_2))
				{
					if (!BitTest(uLocal_65, 3))
					{
						if (unk_0xDF93B3CFAC96698F(unk_0xE38610F405049F71(Local_63.f_2)) < 3f)
						{
							unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 3);
						}
					}
					if ((!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 0) && !unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2))) && func_31(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 1) >= 10f)
					{
						Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 5;
					}
				}
				break;
			
			case 5:
				func_145();
				break;
		}
		func_75();
	}
}

void func_75()
{
	int iVar0;
	struct<9> Var1;
	
	if (unk_0xA0C7B98BCF1EEF9E(uLocal_71))
	{
		if (func_90(1, 1))
		{
			if (((Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 1 || Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 2) || Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 3) || Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { func_89() };
				func_87(&uLocal_72);
				if (Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 1)
				{
					if (func_72(Local_63.f_2))
					{
						if ((unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 10f, 10f, 3f, 0, 1, 0) && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) && !func_86(unk_0xE38610F405049F71(Local_63.f_2), 0))
						{
							func_85(unk_0xE934399D6F2C3AC5(2, 23, 1), "BTX_ENTER", &uLocal_72, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					func_95();
					func_84(1);
					func_76(&uLocal_71, &Var1, &uLocal_72, func_83(&uLocal_72));
				}
			}
		}
	}
	else
	{
		uLocal_71 = unk_0x8DE4F68A9728925E("instructional_buttons");
	}
}

void func_76(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
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
		func_82(uParam2);
	}
	if (Global_1577898 < 2)
	{
		func_81(1);
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
						func_80(unk_0xE934399D6F2C3AC5(iVar1, iVar2, 1));
						if (iVar3 < 363)
						{
							func_80(unk_0xE934399D6F2C3AC5(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_80(unk_0xF761D79754BC3043(uVar4, uVar5, 1));
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
						func_79(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
					func_80(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_80(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
						func_79(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
		func_78(*uParam0, uParam1);
	}
	func_77();
}

void func_77()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_78(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_79(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_80(char* sParam0)
{
	unk_0xCE3E870AC37B4253(sParam0);
}

void func_81(int iParam0)
{
	Global_1577898 = iParam0;
}

void func_82(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_83(var uParam0)
{
	return uParam0->f_692;
}

void func_84(int iParam0)
{
	Global_1655472.f_1163 = iParam0;
}

void func_85(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

int func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar1 = unk_0x2EEC0612337D20CE(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0xC39AE5D390581AD5(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0xFD5C5BBD1FE92BB7(iParam0, (iVar0 - 1), 0);
				if (unk_0x4FAFF4BCB7633475(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_87(var uParam0)
{
	func_88(uParam0);
	uParam0->f_692 = 1;
}

void func_88(var uParam0)
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

struct<9> func_89()
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

int func_90(int iParam0, int iParam1)
{
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_94())
		{
			return 0;
		}
	}
	if (func_29())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_93(0))
		{
			return 0;
		}
	}
	if (func_92(8, -1))
	{
		return 0;
	}
	if (unk_0xEF37E704F02B50F3())
	{
		return 0;
	}
	if (func_91())
	{
		return 0;
	}
	if (Global_60543)
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (unk_0xB11671B812399BA2())
	{
		return 0;
	}
	if (Global_1574964)
	{
		return 0;
	}
	if (Global_1836374)
	{
		return 0;
	}
	return 1;
}

bool func_91()
{
	return Global_1575060;
}

bool func_92(int iParam0, int iParam1)
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

int func_93(int iParam0)
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

bool func_94()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

void func_95()
{
	Global_2804741.f_258 = 1;
}

void func_96()
{
	if (unk_0xC450B06E5AAA0985(uLocal_67))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_67);
	}
}

void func_97()
{
	var uVar0;
	
	if (!unk_0x4C705AAF75363287())
	{
		uVar0 = func_26(1191, -1, 0);
		if (!BitTest(uVar0, 15))
		{
			func_99("BTX_HELP1", -1);
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 15);
			func_98(1191, uVar0, -1, 1, 0);
		}
	}
}

void func_98(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_27(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
	}
}

void func_99(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_100()
{
	if (!func_4(Local_63.f_3) && func_72(Local_63.f_2))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_63.f_3) || (!unk_0xB0AB1F334666E337(Local_63.f_3) && unk_0x93E08E0F531E2C35()))
		{
			func_130();
			func_104();
			if (func_103(Local_63.f_3))
			{
				unk_0x0FB8E752BCC547A9(unk_0xC35A3A4C05A4831B(Local_63.f_3), 323, 1);
			}
			switch (Local_63.f_20)
			{
				case 0:
					break;
				
				case 2:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_vehicle_mission")) != 0)
					{
						unk_0xDD216642D7E1AD6B(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0xE38610F405049F71(Local_63.f_2), 0, unk_0x4A8C381C258A124D(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				
				case 4:
					func_102(unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_63.f_2), 0), Local_63.f_7);
					unk_0x693ACD1AA0BDB375(fLocal_947, fLocal_949, fLocal_948, fLocal_950);
					if (unk_0xFFEB5F24B372DFF6(fLocal_947, fLocal_949, fLocal_948, fLocal_950))
					{
						if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_perform_sequence")) != 0)
						{
							unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_63.f_3), uLocal_70);
						}
					}
					break;
				
				case 5:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_vehicle_mission")) != 0)
					{
						unk_0x30CCF17FEE4BDA53(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0xE38610F405049F71(Local_63.f_2), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_63.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 3:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_vehicle_mission")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_vehicle_mission")) != 0)
					{
						unk_0x30CCF17FEE4BDA53(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0xE38610F405049F71(Local_63.f_2), unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_63.f_2), 1), 5, 5f, 1076625579, 2f, 1f, 1);
					}
					break;
				
				case 1:
					if (!BitTest(Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_1, 7))
					{
						if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), 0) || unk_0x6A89FD77560DE959(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2)))
						{
							unk_0x34A9A872D3C510BF(unk_0xC35A3A4C05A4831B(Local_63.f_3), 0);
							unk_0x3FF406EF0BE27DA3(unk_0xC35A3A4C05A4831B(Local_63.f_3), 0);
							unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 2, 0);
							unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_63.f_3), uLocal_68);
						}
						else
						{
							unk_0x34A9A872D3C510BF(unk_0xC35A3A4C05A4831B(Local_63.f_3), 0);
							unk_0x3FF406EF0BE27DA3(unk_0xC35A3A4C05A4831B(Local_63.f_3), 0);
							unk_0x1CA08719184AFC6F(unk_0xC35A3A4C05A4831B(Local_63.f_3), 2, 1);
							unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_63.f_3), uLocal_69);
						}
						unk_0x0B0C9A0F9AAEB7F0(&(Local_64[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 7);
					}
					break;
				
				case 6:
					if (unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_perform_sequence")) != 1 && unk_0x9B5C1660CCDF7189(unk_0xC35A3A4C05A4831B(Local_63.f_3), joaat("script_task_perform_sequence")) != 0)
					{
						unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_63.f_3), uLocal_69);
					}
					break;
				
				case 7:
					if (unk_0x2FC2FDC413532977(Local_63.f_2))
					{
						func_101(&(Local_63.f_2));
					}
					if (unk_0x2FC2FDC413532977(Local_63.f_3))
					{
						unk_0x44FB298D6382876D(unk_0xC35A3A4C05A4831B(Local_63.f_3), 1);
						func_101(&(Local_63.f_3));
					}
					break;
				}
			}
	}
}

void func_101(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

void func_102(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)
{
	if (Param0.f_0 < Param2.f_0)
	{
		fLocal_947 = (Param0.f_0 - 25f);
		fLocal_948 = (Param2.f_0 + 25f);
	}
	else if (Param0.f_0 > Param2.f_0)
	{
		fLocal_947 = (Param2.f_0 - 25f);
		fLocal_948 = (Param0.f_0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_949 = (Param0.f_1 - 25f);
		fLocal_950 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_949 = (Param2.f_1 - 25f);
		fLocal_950 = (Param0.f_1 + 25f);
	}
}

int func_103(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

void func_104()
{
	bool bVar0;
	struct<2> Var1;
	
	if (!BitTest(uLocal_65, 4))
	{
		if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), unk_0xC35A3A4C05A4831B(Local_63.f_3), 15f, 15f, 15f, 0, 1, 0))
		{
			func_129(&uLocal_776, 8, unk_0xC35A3A4C05A4831B(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 4);
			}
		}
	}
	if (!BitTest(uLocal_65, 6))
	{
		if (Local_63.f_20 == 4)
		{
			func_129(&uLocal_776, 8, unk_0xC35A3A4C05A4831B(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 6);
			}
		}
	}
	if (!BitTest(uLocal_65, 5))
	{
		if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_63.f_7, (10f * 2f), (10f * 2f), (10f * 2f), 0, 1, 0))
		{
			func_129(&uLocal_776, 8, unk_0xC35A3A4C05A4831B(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 5);
			}
		}
	}
	if (!BitTest(uLocal_65, 7))
	{
		if (Local_63.f_20 == 5)
		{
			func_129(&uLocal_776, 8, unk_0xC35A3A4C05A4831B(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 7);
			}
		}
	}
	if (!BitTest(uLocal_65, 8))
	{
		func_129(&uLocal_776, 8, unk_0xC35A3A4C05A4831B(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 8);
		}
	}
	if (Local_63.f_20 == 3)
	{
		if (func_68(&uLocal_942, 30000, 0))
		{
			func_129(&uLocal_776, 8, unk_0xC35A3A4C05A4831B(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (func_108(&uLocal_776, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
				func_107(&uLocal_942, 0, 0);
			}
		}
	}
	if (Local_63.f_20 == 4)
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) <= 0)
		{
			if (func_68(&uLocal_945, iLocal_944, 0))
			{
				bVar0 = unk_0xC5935DFB3F39785A(0, 17);
				StringCopy(&Var1, "", 16);
				if (!BitTest(uLocal_66, bVar0))
				{
					switch (bVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!unk_0xD6F9DEE4765092A9(&Var1))
					{
						func_129(&uLocal_776, 8, unk_0xC35A3A4C05A4831B(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (func_108(&uLocal_776, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							func_107(&uLocal_945, 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&uLocal_66, bVar0);
							unk_0xE67051907958B5EB(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 5000, 0, 2);
							iLocal_944 = (unk_0xC5935DFB3F39785A(20000, 30001) + bVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!func_4(Local_63.f_3))
	{
		if (func_72(Local_63.f_2))
		{
			if (!unk_0x912159A05BE6B52E(unk_0xC35A3A4C05A4831B(Local_63.f_3)) && !unk_0xAD0D2187C5FE447D(unk_0xC35A3A4C05A4831B(Local_63.f_3)))
			{
				if (unk_0x9B3D4335E0EDB0BE(unk_0xE38610F405049F71(Local_63.f_2), unk_0x4A8C381C258A124D(), 1) || unk_0x9B3D4335E0EDB0BE(unk_0xC35A3A4C05A4831B(Local_63.f_3), unk_0x4A8C381C258A124D(), 1))
				{
					switch (unk_0xC5935DFB3F39785A(0, 6))
					{
						case 0:
							func_105(unk_0xC35A3A4C05A4831B(Local_63.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						
						case 1:
							func_105(unk_0xC35A3A4C05A4831B(Local_63.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						
						case 2:
							func_105(unk_0xC35A3A4C05A4831B(Local_63.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						
						case 3:
							func_105(unk_0xC35A3A4C05A4831B(Local_63.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						
						case 4:
							func_105(unk_0xC35A3A4C05A4831B(Local_63.f_3), "GENERIC_CURSE_MED", 3);
							break;
						
						case 5:
							func_105(unk_0xC35A3A4C05A4831B(Local_63.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					unk_0xE4DC7B3DD712372B(unk_0xE38610F405049F71(Local_63.f_2));
					unk_0xE4DC7B3DD712372B(unk_0xC35A3A4C05A4831B(Local_63.f_3));
				}
			}
			else
			{
				unk_0xE4DC7B3DD712372B(unk_0xE38610F405049F71(Local_63.f_2));
				unk_0xE4DC7B3DD712372B(unk_0xC35A3A4C05A4831B(Local_63.f_3));
			}
		}
	}
}

void func_105(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_106(iParam2), 1);
}

int func_106(int iParam0)
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

void func_107(var uParam0, bool bParam1, bool bParam2)
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

bool func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_128(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 1;
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
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
					func_127();
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
		if (func_92(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_126();
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
			unk_0x8744D2E3FC95740E(&Global_8255, 0);
			if (bParam2)
			{
				func_118();
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
				if (func_117())
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
			if (func_116())
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
			func_115();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_114();
		func_110();
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
		func_127();
	}
	return 0;
}

void func_110()
{
	if (!func_111())
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

int func_111()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_57())
	{
		return 0;
	}
	if (func_112(unk_0x259BE71D8A81D4FA()))
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

bool func_112(int iParam0)
{
	return func_113(iParam0, 20);
}

var func_113(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

void func_114()
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

void func_115()
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

int func_116()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_117()
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

void func_118()
{
	if (func_125(14))
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
		Global_20383 = func_119();
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

var func_119()
{
	func_120();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_120()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_123(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_122(unk_0x4A8C381C258A124D());
			if (func_121(iVar0) && (!func_125(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_121(Global_113648.f_2365.f_539.f_4321))
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

bool func_121(int iParam0)
{
	return iParam0 < 3;
}

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_123(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_123(int iParam0)
{
	if (func_121(iParam0))
	{
		return func_124(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_124(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_125(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_126()
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

void func_127()
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

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
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

void func_129(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
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

void func_130()
{
	unk_0xCFBD89D2F1F18961("MobileRadioInGame", 0);
	if (func_3(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2)) && !func_131(unk_0x4A8C381C258A124D(), unk_0xE38610F405049F71(Local_63.f_2), -1))
		{
			unk_0xCFBD89D2F1F18961("MobileRadioInGame", 1);
		}
	}
}

int func_131(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		if (unk_0xF4244288C3EF3306(iParam0, iParam1))
		{
			if (unk_0xFD5C5BBD1FE92BB7(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_132()
{
	if (!unk_0xC450B06E5AAA0985(uLocal_67))
	{
		if (func_72(Local_63.f_2))
		{
			uLocal_67 = unk_0x18E23E031A9B798F(unk_0xE38610F405049F71(Local_63.f_2));
			unk_0x4C905FB262965D5D(uLocal_67, 356);
			unk_0x594D5D0D7071B0DE(uLocal_67, "BTX_BLIP");
			unk_0x861AC9C2D48CEA7F(uLocal_67, 1);
			unk_0x084D9FE4DB5714CF(uLocal_67, 6);
		}
	}
}

void func_133()
{
	if (func_72(Local_63.f_2))
	{
		unk_0xB5396F1FB088FE38(&uLocal_70);
		unk_0xDD216642D7E1AD6B(0, unk_0xE38610F405049F71(Local_63.f_2), 0, 0, Local_63.f_7, 4, 12f, 786469, 10f, 1071);
		unk_0x93C0674FC00824D0(uLocal_70);
		unk_0xB5396F1FB088FE38(&uLocal_69);
		unk_0x30CCF17FEE4BDA53(0, unk_0xE38610F405049F71(Local_63.f_2), Local_63.f_13, 4, 12f, 786469, 0f, 0f, 1);
		unk_0x7C8E9DE09D4AD3FF(0, unk_0xE38610F405049F71(Local_63.f_2), 12f, 786469);
		unk_0x93C0674FC00824D0(uLocal_69);
		unk_0xB5396F1FB088FE38(&uLocal_68);
		unk_0x092B9247AF00F5CF(0, 0, 64);
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x761F56E633460973(0, 1193033728, 0);
		}
		unk_0x93C0674FC00824D0(uLocal_68);
	}
}

int func_134()
{
	return Local_63.f_1;
}

int func_135(int iParam0)
{
	return Local_64[iParam0 /*3*/];
}

int func_136()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_142())
	{
		return 1;
	}
	if (func_141(159))
	{
		if (!func_140())
		{
			return 1;
		}
	}
	if (func_141(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_137() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_137()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_137()
{
	switch (func_139())
	{
		case 0:
			return func_138();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_138()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_139()
{
	return Global_32163;
}

bool func_140()
{
	return Global_2683864.f_698;
}

int func_141(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return Global_2694526;
}

bool func_143()
{
	return Global_2683864.f_693;
}

void func_144()
{
	wait(0);
}

void func_145()
{
	func_96();
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Local_63.f_20 == 7)
		{
			if (func_72(Local_63.f_2) && !func_4(Local_63.f_3))
			{
				unk_0x4BD42B0527065BB6(unk_0xC35A3A4C05A4831B(Local_63.f_3), uLocal_69);
			}
			if (unk_0x2FC2FDC413532977(Local_63.f_2))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_63.f_2))
				{
					func_101(&(Local_63.f_2));
				}
			}
			if (unk_0x2FC2FDC413532977(Local_63.f_3))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_63.f_3))
				{
					func_101(&(Local_63.f_3));
				}
			}
		}
	}
	func_148(func_149(1, 1), 9, func_57());
	func_147();
	unk_0xD314260005F064BF(&uLocal_71);
	func_146();
}

void func_146()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_147()
{
	unk_0xD0557B139A542F12(&uLocal_68);
	unk_0xD0557B139A542F12(&uLocal_69);
	unk_0xD0557B139A542F12(&uLocal_70);
}

void func_148(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -379103418;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x01F0B819E78A18A1(1, &Var0, 6, iParam0);
	}
}

int func_149(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_3(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_48(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_150(struct<21> Param0)
{
	func_154(32, Param0);
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	func_152(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_63, 22, 0);
	unk_0x7B13DC83218D9AF5(&Local_64, 97, 0);
	if (!func_151())
	{
		return 0;
	}
	unk_0xAECC5FA98C879D67(0);
	if (unk_0x93E08E0F531E2C35())
	{
		Local_63.f_4 = unk_0x259BE71D8A81D4FA();
		Local_63.f_5 = func_67();
		Local_63.f_10 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) + Vector(0f, 5f, 0f) };
		Local_63.f_7 = { func_65(Local_63.f_5) };
	}
	unk_0x0B0C9A0F9AAEB7F0(&uLocal_65, 8);
	iLocal_941 = unk_0xF859473E4AD09F30();
	Local_64[unk_0xAE032CEDCF23C6D5() /*3*/] = 0;
	return 1;
}

int func_151()
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
		if (func_143())
		{
			return 0;
		}
		if (func_141(157))
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

int func_152(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_146();
			}
			else
			{
				return 0;
			}
		}
		if (!func_153(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_146();
					}
					else
					{
						return 0;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_146();
					}
					else
					{
						return 0;
					}
				}
				if (func_141(157))
				{
					if (!bParam2)
					{
						func_146();
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
					func_146();
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
				func_146();
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
			func_146();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_153(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_154(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_146();
	}
	unk_0xDB2434E51017FFCC(iParam0, 0, Param1.f_16);
}
