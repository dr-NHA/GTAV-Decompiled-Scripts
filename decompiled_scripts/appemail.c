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
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_56 = -1;
	iLocal_57 = -1;
	fLocal_66 = 0f;
	iLocal_67 = 1;
	if (Global_78558)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	unk_0x51CC1333A10C4E09();
	iLocal_51 = func_79();
	unk_0xF2CB0224D3BE0B42("email", 1);
	while (!unk_0xDCB78A15E5F495DC(1))
	{
		wait(0);
	}
	Global_22758 = 0;
	Global_22759 = 0;
	Global_20383.f_1 = 8;
	Global_22759 = 1;
	Global_44455 = 1;
	if (Global_20365)
	{
		func_78(0);
		func_77(1);
		func_75(0);
	}
	settimerb(0);
	Local_47 = { Global_20336[Global_20328 /*3*/] };
	Local_48 = { Local_47 };
	Local_48.f_0 = (Local_48.f_0 - 10f);
	Local_48.f_1 = (Local_48.f_1 + 20f);
	while (true)
	{
		wait(0);
		if (Global_20383.f_1 != 9)
		{
			if (Global_22759 && !Global_22758)
			{
				func_73();
			}
			else if (Global_22758)
			{
				func_68();
			}
			if (!iLocal_52)
			{
				iLocal_52 = 1;
			}
			else if (Global_20365)
			{
				if (!iLocal_53)
				{
					iLocal_53 = 1;
					func_66(Global_20364, iLocal_51);
					func_65(Global_20364, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_64(Global_20364, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_44456)
					{
						Global_44456 = 0;
						iLocal_54 = 1;
					}
					if (iLocal_54)
					{
						settimera(0);
						settimerb(0);
						if (iLocal_56 == -1)
						{
							if (iLocal_67)
							{
								iLocal_67 = 0;
								fLocal_66 = 0f;
							}
							func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_66(Global_20364, iLocal_51);
							func_65(Global_20364, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_55 = 0;
							if (iVar0 > 0)
							{
								func_78(1);
							}
							else
							{
								func_78(0);
							}
							func_77(1);
							func_75(0);
							func_64(Global_20364, "DISPLAY_VIEW", 8f, fLocal_66, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							wait(0);
							func_64(Global_20364, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							wait(0);
							func_77(1);
							func_63();
							if (iLocal_57 == -1)
							{
								func_61(iLocal_51, iLocal_56);
								func_56(Global_20364, iLocal_51, iLocal_56);
								Global_22785 = 0;
								iLocal_64 = func_54(iLocal_51, iLocal_56);
								if (iLocal_64)
								{
									sLocal_65 = func_51(iLocal_51, iLocal_56);
									if (!func_50(37))
									{
										switch (func_48("AM_H_FLINK"))
										{
											case 2:
												func_45("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_44(37);
												break;
										}
									}
									else if (unk_0x761778199FE1211C())
									{
										if (!BitTest(Global_4542297, 17))
										{
											unk_0x0B0C9A0F9AAEB7F0(&Global_4542297, 17);
											func_43("AM_H_FLINK", -1);
										}
									}
									func_75(1);
								}
								else
								{
									if (!func_50(38))
									{
										switch (func_48("AM_H_SCROLL"))
										{
											case 2:
												func_45("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_44(38);
												break;
											}
									}
									func_75(0);
								}
								func_64(Global_20364, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								wait(0);
								func_64(Global_20364, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								wait(0);
								func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_40(Global_20364, iLocal_51, iLocal_56);
								func_64(Global_20364, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_54 = 0;
					}
					else
					{
						func_17();
					}
				}
			}
			if (!iLocal_51 == func_79())
			{
				Global_44455 = 0;
				func_4();
			}
		}
		if (func_3())
		{
			Global_22758 = 0;
			Global_22759 = 0;
			Global_44455 = 0;
			func_1(0);
			unk_0xBBC29EBE6E1A48FA();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0xF3D5C578ED6C7528(1);
		}
		else if (Global_20383.f_1 > 3)
		{
			unk_0xF3D5C578ED6C7528(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4542575 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 3) || Global_20383.f_1 == 0) || Global_20327 == 1)
	{
		Global_20370 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (Global_53764 != -1)
	{
		unk_0x633E3833FB96BCCB(func_16(Global_53764));
		Global_53764 = -1;
	}
	Global_44455 = 0;
	if (Global_20383.f_1 > 4)
	{
		Global_20383.f_1 = 6;
		func_5();
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_5()
{
	struct<3> Var0;
	
	if (Global_20366 == 1)
	{
		return;
	}
	if (Global_20383.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA0C7B98BCF1EEF9E(Global_20364))
	{
		if (Global_78558)
		{
			return;
		}
		wait(0);
	}
	switch (Global_20383.f_1)
	{
		case 6:
			func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_8858);
			if (Global_8858 == 1)
			{
				func_64(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_64(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
			if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20586 == 0)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
				{
					if (Global_20371)
					{
						func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
			}
			if (Global_78558)
			{
				func_11();
				unk_0x8744D2E3FC95740E(&Global_8255, 9);
				func_64(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_64(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20382 == 1)
			{
				func_10();
				func_64(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21738)
				{
					unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_21740);
					unk_0xCFAD3D478C87321A();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xE6B753D52F4CA222();
				}
				else if (func_8(Global_7568, Global_20383) == 0)
				{
					func_13(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_64(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_64(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21738)
				{
					unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_21740);
					unk_0xCFAD3D478C87321A();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					if (Global_21983)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_8(Global_7568, Global_20383) == 0)
					{
						func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_64(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &Var0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
				func_64(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20364))
	{
		func_7();
		if (Global_20382 == 1)
		{
			if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21772)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8253, 20))
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
		}
		else
		{
			func_13(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7()
{
	if (Global_78558)
	{
		func_13(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8253, 17);
	}
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_9(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_10()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20383 == 0)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 1)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 2)
		{
			switch (Global_113648.f_14053[Global_20383 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20383 == 3)
		{
			switch (Global_4542573)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()
{
	if (Global_78558)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_13(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_14(int iParam0)
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
		if (func_15(14))
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
								func_9(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2694521)
							{
								if (iVar1 == 14)
								{
									func_13(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_13(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20364, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8260[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_9(&(Global_8260[iVar1 /*15*/]));
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
								func_9(&(Global_8260[iVar1 /*15*/]));
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
								func_9(&(Global_8260[iVar1 /*15*/]));
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
								func_9(&(Global_8260[iVar1 /*15*/]));
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
								func_9(&(Global_8260[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8260[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890001.f_1;
								func_13(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_15(int iParam0)
{
	return Global_43257 == iParam0;
}

char* func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		
		case 1:
			return "Epsilon_Cars";
		
		case 2:
			return "Epsilon_Cars";
		
		case 3:
			return "Epsilon_Cars";
		
		case 4:
			return "Epsilon_Cars";
		
		case 5:
			return "Epsilon_Cars";
		
		case 6:
			return "Epsilon_Cars";
		
		case 12:
			return "Assassinations";
		
		case 13:
			return "Assassinations";
		
		case 14:
			return "Assassinations";
		
		case 15:
			return "Assassinations";
		
		case 64:
			return "BSPBadHacker";
		
		case 65:
			return "BPDGoodHacker";
		
		case 66:
			return "BPSMedHacker";
		
		case 75:
			return "email_quarry_bail_bond";
		
		case 76:
			return "email_abandonedfarm_bail_bond";
		
		case 77:
			return "email_mountain_bail_bond";
		
		case 78:
			return "email_hobocamp_bail_bond";
		
		case 80:
			return "email_quarry_bail_bond";
		
		case 81:
			return "email_abandonedfarm_bail_bond";
		
		case 82:
			return "email_mountain_bail_bond";
		
		case 83:
			return "email_hobocamp_bail_bond";
		
		case 205:
			return "hush_foxymama21";
		
		case 209:
			return "hush_alterego";
		
		case 212:
			return "hush_michael";
		
		case 238:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_17()
{
	bool bVar0;
	
	if (Global_22785)
	{
		iLocal_56 = 0;
		fLocal_66 = to_float(iLocal_56);
		if (func_39(iLocal_51) == 0)
		{
			iLocal_56 = -1;
		}
		if (!iLocal_56 == -1)
		{
			Global_20383.f_1 = 8;
			iLocal_54 = 1;
			settimerb(0);
			func_37();
		}
		return;
	}
	if (func_36())
	{
		return;
	}
	if (Global_22758)
	{
		return;
	}
	if (!iLocal_60)
	{
		if (unk_0x875A214D5EBCA509(2, 172) || unk_0x875A214D5EBCA509(2, 181))
		{
			iLocal_60 = 1;
			unk_0x88F483FBD433696A(Global_20364, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(1);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
			settimera(0);
			iLocal_67 = 1;
		}
	}
	else if (unk_0x6D05C5731A838CB3(2, 172) || unk_0x6D05C5731A838CB3(2, 181))
	{
		if (timera() > 100 && iLocal_56 != -1)
		{
			unk_0x88F483FBD433696A(Global_20364, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(1);
			unk_0xE6B753D52F4CA222();
			settimera(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_60 = 0;
	}
	if (!iLocal_61)
	{
		if (unk_0x875A214D5EBCA509(2, 173) || unk_0x875A214D5EBCA509(2, 180))
		{
			iLocal_61 = 1;
			unk_0x88F483FBD433696A(Global_20364, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(3);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
			settimerb(0);
			iLocal_67 = 1;
		}
	}
	else if (unk_0x6D05C5731A838CB3(2, 173) || unk_0x6D05C5731A838CB3(2, 180))
	{
		if (timerb() > 100 && iLocal_56 != -1)
		{
			unk_0x88F483FBD433696A(Global_20364, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(3);
			unk_0xE6B753D52F4CA222();
			settimerb(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_61 = 0;
	}
	if (!iLocal_62)
	{
		if (unk_0x6D05C5731A838CB3(2, 174))
		{
			iLocal_62 = 1;
			unk_0x88F483FBD433696A(Global_20364, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(4);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 174))
	{
		iLocal_62 = 0;
	}
	if (!iLocal_63)
	{
		if (unk_0x6D05C5731A838CB3(2, 175))
		{
			iLocal_63 = 1;
			unk_0x88F483FBD433696A(Global_20364, "SET_INPUT_EVENT");
			unk_0x330108B080A2132F(2);
			unk_0xE6B753D52F4CA222();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 175))
	{
		iLocal_63 = 0;
	}
	if (!iLocal_59)
	{
		if (unk_0x6D05C5731A838CB3(2, 176) && timerb() > 100)
		{
			if (iLocal_56 == -1)
			{
				unk_0x88F483FBD433696A(Global_20364, "GET_CURRENT_SELECTION");
				uLocal_49 = unk_0x6CA3F2B87712B6A4();
				while (!unk_0xA6F779AA284EB20E(uLocal_49))
				{
					wait(0);
				}
				iLocal_50 = unk_0x5DEF122A58D4F685(uLocal_49);
				iLocal_56 = iLocal_50;
				if (func_39(iLocal_51) == 0)
				{
					iLocal_56 = -1;
				}
				if (!iLocal_56 == -1)
				{
					if (iLocal_67 == 1)
					{
						fLocal_66 = to_float(iLocal_56);
						iLocal_67 = 0;
					}
					Global_20383.f_1 = 8;
					iLocal_54 = 1;
					settimerb(0);
					func_37();
				}
			}
			else if (iLocal_57 == -1)
			{
				if (func_34(iLocal_51, iLocal_56) && !iLocal_55)
				{
					iLocal_57 = 0;
					iLocal_54 = 1;
					settimerb(0);
					func_37();
				}
			}
			else
			{
				iLocal_57 = 0;
				func_22(iLocal_51, iLocal_56, iLocal_57);
				iLocal_55 = 1;
				iLocal_57 = -1;
				iLocal_54 = 1;
				func_37();
				settimerb(0);
			}
			iLocal_59 = 1;
		}
	}
	else
	{
		iLocal_59 = 0;
	}
	if (timerb() > 100)
	{
		if (unk_0x6D05C5731A838CB3(2, 177))
		{
			bVar0 = false;
			if (iLocal_58 == 0)
			{
				if (!iLocal_56 == -1)
				{
					if (iLocal_57 == -1)
					{
						iLocal_56 = round(fLocal_66);
						iLocal_64 = 0;
						settimerb(0);
						bVar0 = true;
						func_21();
					}
					else
					{
						settimerb(0);
						iLocal_57 = -1;
						func_21();
					}
					iLocal_54 = 1;
				}
				else
				{
					if (func_48("AM_H_FLINK") == 0)
					{
						func_44(37);
					}
					if (func_48("AM_H_SCROLL") == 0)
					{
						func_44(38);
					}
					if (Global_22759 == 0 && !Global_22758)
					{
						func_21();
						Global_22758 = 1;
						Global_44455 = 0;
					}
				}
				iLocal_58 = 1;
			}
			if (bVar0)
			{
				iLocal_56 = -1;
			}
		}
		else
		{
			iLocal_58 = 0;
		}
	}
	if (unk_0x6D05C5731A838CB3(2, 179))
	{
		if (iLocal_64)
		{
			if (func_48("AM_H_FLINK") == 0)
			{
				func_44(37);
			}
			if (func_48("AM_H_SCROLL") == 0)
			{
				func_44(38);
			}
			StringCopy(&Global_75676, sLocal_65, 64);
			func_18(7, 0, 0);
			iLocal_64 = 0;
			func_37();
		}
	}
}

int func_18(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_75806 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_75806)
	{
		case 3:
			Global_75804 = 0;
			break;
		
		case 4:
			Global_75804 = 3;
			break;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appbikerbusiness")) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appimportexport")) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_78558 && func_20())
	{
		return 0;
	}
	if (!Global_78558 && func_19())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0xA6E4F7A73ABC4A76("appSecuroServ"))
		{
			unk_0x97A5024CE91641F1("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xA6E4F7A73ABC4A76("appSecuroServ"))
		{
			wait(0);
		}
		start_new_script("appSecuroServ", 4592);
		unk_0xFD49725F3FE7EE13("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0xA6E4F7A73ABC4A76("appBikerBusiness"))
		{
			unk_0x97A5024CE91641F1("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xA6E4F7A73ABC4A76("appBikerBusiness"))
		{
			wait(0);
		}
		start_new_script("appBikerBusiness", 4592);
		unk_0xFD49725F3FE7EE13("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0xA6E4F7A73ABC4A76("appImportExport"))
		{
			unk_0x97A5024CE91641F1("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xA6E4F7A73ABC4A76("appImportExport"))
		{
			wait(0);
		}
		start_new_script("appImportExport", 4592);
		unk_0xFD49725F3FE7EE13("appImportExport");
		return 1;
	}
	if (!unk_0xA6E4F7A73ABC4A76("appInternet"))
	{
		unk_0x97A5024CE91641F1("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0xA6E4F7A73ABC4A76("appInternet"))
	{
		wait(0);
	}
	start_new_script("appInternet", 4592);
	unk_0xFD49725F3FE7EE13("appInternet");
	return 1;
}

var func_19()
{
	return Global_75694;
}

var func_20()
{
	return Global_1935689;
}

void func_21()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20372, 1);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
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
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_53403[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_53403[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_53403[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	iVar5 = Global_47790[iVar3 /*46*/].f_32[iVar4];
	if (Global_44465[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_53403[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_53403[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_23(iVar3, iParam2);
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_47790[iParam0 /*46*/].f_42 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_47790[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_44465[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_44465[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_47790[iParam0 /*46*/].f_31 < (Global_47790[iParam0 /*46*/].f_30 - 1))
	{
		iVar4 = Global_47790[iParam0 /*46*/].f_8[Global_47790[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_33(iParam0, iVar2);
			iVar5 = Global_47790[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_44465[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_27(Global_47790[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_44465[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_24(Global_44465[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_44465[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_47790[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_47790[iParam0 /*46*/].f_45 = Global_44465[iVar2 /*12*/].f_10;
		Global_47790[iParam0 /*46*/].f_43 = Global_44465[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_47790[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_47790[iParam0 /*46*/].f_43 < 30000)
	{
		Global_47790[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_24(int iParam0, bool bParam1)
{
	Global_44456 = 1;
	if (!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1)
	{
		Global_47790[iParam0 /*46*/] = 1;
		func_26(iParam0, bParam1);
	}
	else
	{
		func_25(iParam0);
		func_24(iParam0, bParam1);
	}
}

void func_25(int iParam0)
{
	Global_47790[iParam0 /*46*/] = 0;
	Global_47790[iParam0 /*46*/].f_31 = 0;
	Global_47790[iParam0 /*46*/].f_42 = 0;
	Global_47790[iParam0 /*46*/].f_45 = 0;
	Global_47790[iParam0 /*46*/].f_43 = 0;
	Global_47790[iParam0 /*46*/].f_1 = 0;
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_47790[iParam0 /*46*/].f_31 == Global_47790[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_47790[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_44465[Global_47790[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_47790[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_47790[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_47790[iParam0 /*46*/].f_8[Global_47790[iParam0 /*46*/].f_31];
	Global_47790[iParam0 /*46*/].f_31++;
	func_33(iParam0, iVar1);
	Global_47790[iParam0 /*46*/].f_45 = Global_44465[iVar1 /*12*/].f_10;
	Global_47790[iParam0 /*46*/].f_43 = Global_44465[iVar1 /*12*/].f_11;
	iVar2 = Global_47790[iParam0 /*46*/].f_2;
	func_27(Global_44465[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_47790[iParam0 /*46*/].f_3[iVar3] != Global_44465[iVar1 /*12*/].f_2 && Global_47790[iParam0 /*46*/].f_3[iVar3] != Global_44465[iVar1 /*12*/].f_3)
		{
			func_27(Global_47790[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_47790[iParam0 /*46*/].f_31 == Global_47790[iParam0 /*46*/].f_30)
	{
		if (Global_44465[Global_47790[iParam0 /*46*/].f_32[(Global_47790[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_47790[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_27(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_47790[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_47790[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_32(Global_44465[iVar5 /*12*/].f_1) };
		if (Global_44465[iVar5 /*12*/].f_2 == iParam0 && !Global_44465[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44465[iVar5 /*12*/].f_2;
		iVar0 = Global_53403[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = (Global_44457 - 1);
						if (Global_44457 < 0)
						{
							Global_44457 = 0;
						}
						break;
					
					case 1:
						Global_44458 = (Global_44458 - 1);
						if (Global_44458 < 0)
						{
							Global_44458 = 0;
						}
						break;
					
					case 2:
						Global_44459 = (Global_44459 - 1);
						if (Global_44459 < 0)
						{
							Global_44459 = 0;
						}
						break;
					}
				}
		}
		Global_53403[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53403[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_53403[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53403[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53403[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_53403[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44457 = (Global_44457 - 1);
						if (Global_44457 < 0)
						{
							Global_44457 = 0;
						}
						break;
					
					case 1:
						Global_44458 = (Global_44458 - 1);
						if (Global_44458 < 0)
						{
							Global_44458 = 0;
						}
						break;
					
					case 2:
						Global_44459 = (Global_44459 - 1);
						if (Global_44459 < 0)
						{
							Global_44459 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_53765[iVar9 /*203*/].f_1 == iParam1 && Global_53765[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_53403[iParam0 /*120*/].f_18[iVar0] = Global_53765[iVar8 /*203*/].f_1;
		Global_53403[iParam0 /*120*/].f_1[iVar0] = (Global_53765[iVar8 /*203*/].f_9 - 1);
		Global_53403[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53403[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53403[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53403[iParam0 /*120*/]++;
		iVar10 = Global_53403[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_53765[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_44465[iVar11 /*12*/].f_2;
		if (Global_53765[iVar8 /*203*/].f_10[(Global_53765[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53765[iVar8 /*203*/].f_10[(Global_53765[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_32(Global_44465[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53403[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_28(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_28(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_28(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_28(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_28(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xFD216000DC314A92())
	{
		return;
	}
	iVar0 = func_79();
	bVar1 = false;
	StringCopy(&cVar2, func_31(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xCCDB0041859B85A6("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xCCDB0041859B85A6(sParam3);
				if (!unk_0xD6F9DEE4765092A9(sParam4))
				{
					unk_0xACF853FB3F6EA7D4(sParam4);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam5))
				{
					unk_0xACF853FB3F6EA7D4(sParam5);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam6))
				{
					unk_0xACF853FB3F6EA7D4(sParam6);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam7))
				{
					unk_0xACF853FB3F6EA7D4(sParam7);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam8))
				{
					unk_0xACF853FB3F6EA7D4(sParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam9))
				{
					unk_0xACF853FB3F6EA7D4(sParam9);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam10))
				{
					unk_0xACF853FB3F6EA7D4(sParam10);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam11))
				{
					unk_0xACF853FB3F6EA7D4(sParam11);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam12))
				{
					unk_0xACF853FB3F6EA7D4(sParam12);
				}
				if (!unk_0xD6F9DEE4765092A9(sParam13))
				{
					unk_0xACF853FB3F6EA7D4(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_29(unk_0x5C7E2225D7451992(&cVar2, &cVar2, 0, 2, unk_0xFACCDE46E24AD056(func_30(iParam1)), 0));
		}
		else
		{
			func_29(unk_0x5C7E2225D7451992("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFACCDE46E24AD056(func_30(iParam1)), 0));
		}
		switch (Global_20383)
		{
			case 0:
				StringCopy(&Global_20372, "Phone_SoundSet_Michael", 24);
				Global_44457++;
				if (Global_44457 > 16)
				{
					Global_44457 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20372, "Phone_SoundSet_Trevor", 24);
				Global_44459++;
				if (Global_44459 > 16)
				{
					Global_44459 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20372, "Phone_SoundSet_Franklin", 24);
				Global_44458++;
				if (Global_44458 > 16)
				{
					Global_44458 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20372, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xBF3D28CA44F3BE2D(-1, "Notification", &Global_20372, 1);
	}
}

void func_29(var uParam0)
{
	Global_44460[Global_44464] = uParam0;
	Global_22783 = 1;
	Global_22782 = uParam0;
	Global_44464++;
	if (Global_44464 == 3)
	{
		Global_44464 = 0;
	}
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_31(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFACCDE46E24AD056(&(Global_2028[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFACCDE46E24AD056(&(Global_2028[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFACCDE46E24AD056(&(Global_2028[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFACCDE46E24AD056(&(Global_2028[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFACCDE46E24AD056(&(Global_2028[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFACCDE46E24AD056(&(Global_2028[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFACCDE46E24AD056(&(Global_2028[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFACCDE46E24AD056(&(Global_2028[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFACCDE46E24AD056(&(Global_2028[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFACCDE46E24AD056(&(Global_2028[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xFACCDE46E24AD056(&(Global_2028[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFACCDE46E24AD056(&(Global_2028[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFACCDE46E24AD056(&(Global_2028[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFACCDE46E24AD056(&(Global_2028[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFACCDE46E24AD056(&(Global_2028[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFACCDE46E24AD056(&(Global_2028[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFACCDE46E24AD056(&(Global_2028[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFACCDE46E24AD056(&(Global_2028[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFACCDE46E24AD056("CELL_E_381");
		
		case 38:
			return unk_0xFACCDE46E24AD056(&(Global_2028[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xFACCDE46E24AD056(&(Global_2028[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFACCDE46E24AD056(&(Global_2028[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFACCDE46E24AD056(&(Global_2028[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFACCDE46E24AD056(&(Global_2028[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFACCDE46E24AD056(&(Global_2028[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFACCDE46E24AD056(&(Global_2028[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFACCDE46E24AD056(&(Global_2028[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFACCDE46E24AD056(&(Global_2028[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFACCDE46E24AD056(&(Global_2028[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFACCDE46E24AD056(&(Global_2028[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFACCDE46E24AD056(&(Global_2028[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFACCDE46E24AD056(&(Global_2028[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFACCDE46E24AD056(&(Global_2028[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFACCDE46E24AD056(&(Global_2028[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFACCDE46E24AD056(&(Global_2028[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_32(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_47790[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_47790[iParam0 /*46*/].f_32[Global_47790[iParam0 /*46*/].f_42] = iParam1;
	Global_47790[iParam0 /*46*/].f_42++;
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
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
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = ((Global_53403[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_53403[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_53403[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_53403[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_47790[iVar3 /*46*/].f_32[iVar4];
		if (Global_44465[iVar5 /*12*/].f_4 == 0)
		{
			return 0;
		}
		if (Global_53403[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return 0;
		}
		if (!func_35(iVar0, iVar2))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iParam0 < 3)
	{
		return 0;
	}
	iVar0 = Global_53403[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_53403[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_47790[iVar1 /*46*/] && !Global_47790[iVar1 /*46*/].f_1))
	{
		return 0;
	}
	if (!iVar0 == (Global_47790[iVar1 /*46*/].f_42 - 1))
	{
		return 0;
	}
	iVar2 = Global_47790[iVar1 /*46*/].f_32[(Global_47790[iVar1 /*46*/].f_42 - 1)];
	if (Global_44465[iVar2 /*12*/].f_4 > 0)
	{
		return 1;
	}
	return 0;
}

bool func_36()
{
	return Global_75693;
}

void func_37()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20372, 1);
		func_38();
	}
}

void func_38()
{
	if (func_2())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
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
	return Global_53403[iVar0 /*120*/];
}

void func_40(var uParam0, int iParam1, int iParam2)
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
	struct<16> Var9;
	struct<16> Var10;
	
	iVar0 = -1;
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
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_53403[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_53403[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_53403[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_53403[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_47790[iVar3 /*46*/].f_32[iVar4];
		if (Global_44465[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_44465[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_44465[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { func_32(Global_44465[iVar8 /*12*/].f_1) };
			Var10 = { func_32(Global_44465[iVar8 /*12*/].f_1) };
			unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(9);
			unk_0x330108B080A2132F(0);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW");
			func_9(&Var10);
			func_9(func_42(Global_44465[iVar8 /*12*/].f_2));
			func_41(iVar8, Global_44465[iVar8 /*12*/].f_2);
			unk_0xE6B753D52F4CA222();
			iVar6++;
		}
	}
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			unk_0x3585BEBEDC67FCC7("EmailAds_Elitas_Travel");
			unk_0x557F1E2300EF1A3E(1);
			return;
		
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			unk_0x3585BEBEDC67FCC7("EmailAds_Dock_Tease");
			unk_0x557F1E2300EF1A3E(1);
			return;
		
		case 34:
		case 35:
		case 36:
			unk_0x3585BEBEDC67FCC7("EmailAds_Warstock");
			unk_0x557F1E2300EF1A3E(1);
			return;
		
		case 31:
		case 32:
		case 33:
			unk_0x3585BEBEDC67FCC7("EmailAds_Legendary_Motorsport");
			unk_0x557F1E2300EF1A3E(1);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 13:
			unk_0x3585BEBEDC67FCC7("EmailAds_Warstock");
			unk_0x557F1E2300EF1A3E(1);
			return;
		
		case 15:
			unk_0x3585BEBEDC67FCC7("EmailAds_LS_Customs");
			unk_0x557F1E2300EF1A3E(1);
			return;
		
		case 19:
			unk_0x3585BEBEDC67FCC7("EmailAds_LS_Tourist_Info");
			unk_0x557F1E2300EF1A3E(1);
			return;
		
		default:
	}
}

char* func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2";
		
		case 3:
			return "EMSTR_5";
		
		case 1:
			return "EMSTR_8";
		
		case 2:
			return "EMSTR_11";
		
		case 4:
			return "EMSTR_14";
		
		case 5:
			return "EMSTR_31";
		
		case 6:
			return "EMSTR_38";
		
		case 7:
			return "EMSTR_41";
		
		case 8:
			return "EMSTR_54";
		
		case 9:
			return "EMSTR_57";
		
		case 10:
			return "EMSTR_60";
		
		case 11:
			return "EMSTR_80";
		
		case 12:
			return "EMSTR_83";
		
		case 13:
			return "EMSTR_86";
		
		case 14:
			return "EMSTR_89";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_116";
		
		case 17:
			return "EMSTR_144";
		
		case 18:
			return "EMSTR_147";
		
		case 19:
			return "EMSTR_154";
		
		case 20:
			return "EMSTR_159";
		
		case 21:
			return "EMSTR_165";
		
		case 22:
			return "EMSTR_184";
		
		case 23:
			return "EMSTR_189";
		
		case 24:
			return "EMSTR_192";
		
		case 25:
			return "EMSTR_208";
		
		case 26:
			return "EMSTR_221";
		
		case 27:
			return "EMSTR_228";
		
		case 28:
			return "EMSTR_235";
		
		case 29:
			return "EMSTR_244";
		
		case 30:
			return "EMSTR_251";
		
		case 31:
			return "EMSTR_264";
		
		case 32:
			return "EMSTR_271";
		
		case 33:
			return "EMSTR_321";
		
		case 34:
			return "EMSTR_342";
		
		case 35:
			return "EMSTR_350";
		
		case 36:
			return "EMSTR_354";
		
		case 37:
			return "EMSTR_359";
		
		case 38:
			return "EMSTR_362";
		
		case 39:
			return "EMSTR_371";
		
		case 40:
			return "EMSTR_378";
		
		case 41:
			return "EMSTR_381";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_386";
		
		case 44:
			return "EMSTR_389";
		
		case 45:
			return "EMSTR_392";
		
		case 46:
			return "EMSTR_395";
		
		case 47:
			return "EMSTR_398";
		
		case 48:
			return "EMSTR_401";
		
		case 49:
			return "EMSTR_404";
		
		case 50:
			return "EMSTR_407";
		
		case 51:
			return "EMSTR_410";
		
		case 52:
			return "EMSTR_413";
		
		case 53:
			return "EMSTR_416";
		
		case 54:
			return "EMSTR_467";
		
		case 55:
			return "EMSTR_470";
		
		case 56:
			return "EMSTR_491";
		
		case 57:
			return "EMSTR_494";
		
		case 58:
			return "EMSTR_497";
		
		case 59:
			return "EMSTR_500";
		
		case 60:
			return "EMSTR_503";
		
		case 61:
			return "EMSTR_506";
		
		case 62:
			return "EMSTR_509";
		
		case 63:
			return "EMSTR_642";
		
		case 64:
			return "EMSTR_645";
		
		case 65:
			return "EMSTR_654";
		
		default:
	}
	return "NULL";
}

void func_43(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_44(int iParam0)
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
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113648.f_20412.f_150[iVar1]), iVar0);
	}
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_47();
	}
}

void func_47()
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

int func_48(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(sParam0, &Global_112291))
	{
		return 1;
	}
	if (func_49(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_49(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113648.f_20412.f_145)
	{
		if (unk_0x1B79E937E91F40C3(uParam0, &(Global_113648.f_20412[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)
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

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
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
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_53(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_53403[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_47790[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53765[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_53765[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_52(iVar5);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		
		case 18:
			return "WWW_FLEECA_COM";
		
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 24:
			return "WWW_FLEECA_COM";
		
		case 25:
			return "WWW_FLEECA_COM";
		
		case 26:
			return "WWW_FLEECA_COM";
		
		case 27:
			return "WWW_FLEECA_COM";
		
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 47:
			return "WWW_AMMUNATION_NET";
		
		case 48:
			return "WWW_AMMUNATION_NET";
		
		case 49:
			return "WWW_AMMUNATION_NET";
		
		case 50:
			return "WWW_AMMUNATION_NET";
		
		case 51:
			return "WWW_AMMUNATION_NET";
		
		case 52:
			return "WWW_AMMUNATION_NET";
		
		case 53:
			return "WWW_AMMUNATION_NET";
		
		case 54:
			return "WWW_AMMUNATION_NET";
		
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		
		case 56:
			return "WWW_DOCKTEASE_COM";
		
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		
		case 60:
			return "WWW_DOCKTEASE_COM";
		
		case 61:
			return "WWW_DOCKTEASE_COM";
		
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		
		case 68:
			return "WWW_AMMUNATION_NET";
		
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 194:
			return "WWW_HUSHSMUSH_COM";
		
		case 195:
			return "WWW_HUSHSMUSH_COM";
		
		case 196:
			return "WWW_HUSHSMUSH_COM";
		
		case 197:
			return "WWW_HUSHSMUSH_COM";
		
		case 198:
			return "WWW_HUSHSMUSH_COM";
		
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 270:
			return "WWW_AMMUNATION_NET";
		
		case 271:
			return "WWW_AMMUNATION_NET";
		
		case 272:
			return "WWW_AMMUNATION_NET";
		
		case 273:
			return "WWW_AMMUNATION_NET";
		
		case 274:
			return "WWW_AMMUNATION_NET";
		
		case 275:
			return "WWW_AMMUNATION_NET";
		
		case 276:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ((Global_53403[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*uParam2 = Global_53403[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_53403[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_53403[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
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
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_53(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_53403[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_47790[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53765[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_53765[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_55(iVar5);
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
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
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<16> Var17;
	struct<16> Var18;
	bool bVar19;
	int iVar20;
	
	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x330108B080A2132F(9);
	unk_0xE6B753D52F4CA222();
	iVar0 = -1;
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
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_53(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_53403[iVar0 /*120*/].f_86[iVar4];
	if (!Global_53403[iVar0 /*120*/].f_69[iVar4])
	{
		func_60(-1);
	}
	Global_53403[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_47790[iVar2 /*46*/].f_32[iVar3];
		Var7 = { func_32(Global_44465[iVar6 /*12*/]) };
		Var8 = { func_32(Global_44465[iVar6 /*12*/].f_1) };
		unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
		unk_0x330108B080A2132F(9);
		unk_0x330108B080A2132F(0);
		func_9(func_59(Global_44465[iVar6 /*12*/].f_3));
		func_9(func_59(Global_44465[iVar6 /*12*/].f_2));
		func_9(&Var7);
		func_9(&Var8);
		func_9(func_42(Global_44465[iVar6 /*12*/].f_2));
		func_41(iVar6, Global_44465[iVar6 /*12*/].f_2);
		unk_0xE6B753D52F4CA222();
		if (Global_44465[iVar6 /*12*/].f_4 == 0)
		{
			func_78(0);
		}
		else if (bVar1 || !func_35(iVar0, iVar4))
		{
			func_78(0);
		}
		else
		{
			func_78(1);
		}
		if (Global_47790[iVar2 /*46*/].f_42 > 1)
		{
			iVar9 = iVar3;
			iVar10 = (iVar3 - 1);
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < iVar9)
			{
				iVar6 = Global_47790[iVar2 /*46*/].f_32[iVar10];
				Var7 = { func_32(Global_44465[iVar6 /*12*/]) };
				Var8 = { func_32(Global_44465[iVar6 /*12*/].f_1) };
				iVar12 = func_58(iParam1, Global_44465[iVar6 /*12*/].f_3);
				unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(9);
				unk_0x330108B080A2132F(iVar11 + 1);
				func_9(func_59(iVar12));
				func_9(func_59(Global_44465[iVar6 /*12*/].f_2));
				func_9(&Var7);
				func_9(&Var8);
				func_9(func_42(Global_44465[iVar6 /*12*/].f_2));
				func_41(iVar6, Global_44465[iVar6 /*12*/].f_2);
				unk_0xE6B753D52F4CA222();
				iVar10 = (iVar10 - 1);
				iVar11++;
			}
		}
	}
	else
	{
		iVar13 = -1;
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 7)
		{
			if (Global_53765[iVar14 /*203*/].f_1 == iVar2)
			{
				iVar13 = iVar14;
			}
			iVar14++;
		}
		if (iVar13 == -1)
		{
			return;
		}
		else
		{
			iVar15 = Global_53765[iVar13 /*203*/].f_10[iVar3 /*48*/];
			iVar16 = Global_53765[iVar13 /*203*/].f_10[iVar3 /*48*/];
			Var17 = { func_32(Global_44465[iVar15 /*12*/]) };
			Var18 = { func_32(Global_44465[iVar15 /*12*/].f_1) };
			if (Global_53765[iVar13 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var18, {Global_53765[iVar13 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_44465[iVar15 /*12*/].f_4 == 0)
			{
				func_78(0);
			}
			else if (bVar1)
			{
				func_78(0);
			}
			else
			{
				func_78(1);
			}
			bVar19 = false;
			bVar19 = func_57(uParam0, Global_53765[iVar13 /*203*/].f_1, iVar3, iVar16);
			if (!bVar19)
			{
				unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(9);
				unk_0x330108B080A2132F(0);
				func_9(func_59(Global_44465[iVar15 /*12*/].f_3));
				func_9(func_59(Global_44465[iVar15 /*12*/].f_2));
				func_9(&Var17);
				if (Global_53765[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					unk_0x882AEFD55B8D51FB(&Var18);
					iVar20 = 0;
					iVar20 = 0;
					while (iVar20 < Global_53765[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_53765[iVar13 /*203*/].f_10[iVar3 /*48*/].f_7[iVar20 /*4*/]));
						iVar20++;
					}
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					func_9(&Var18);
				}
				func_9(func_42(Global_44465[iVar15 /*12*/].f_2));
				func_41(iVar15, Global_44465[iVar15 /*12*/].f_2);
				unk_0xE6B753D52F4CA222();
			}
		}
	}
}

int func_57(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0xE6B753D52F4CA222();
	Var3 = { func_32(Global_44465[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var4, "PROPR_INCEMAIL1", 64);
			break;
		
		case 73:
			StringCopy(&Var4, "PROPR_INCEMAIL3", 64);
			break;
		
		case 74:
			StringCopy(&Var4, "PROPR_INCEMAIL2", 64);
			break;
	}
	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(9);
	unk_0x330108B080A2132F(iVar2);
	func_9(func_59(Global_44465[iParam3 /*12*/].f_3));
	func_9(func_59(Global_44465[iParam3 /*12*/].f_2));
	func_9(&Var3);
	func_9(&Var4);
	func_9(func_42(Global_44465[iParam3 /*12*/].f_2));
	func_9("");
	unk_0x330108B080A2132F(0);
	unk_0x557F1E2300EF1A3E(1);
	unk_0xE6B753D52F4CA222();
	iVar2++;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		iVar6 = iVar5;
		bVar7 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_113648.f_24906[iVar6 /*4*/] == 0)
				{
					bVar7 = true;
				}
				break;
			
			case 73:
				if (Global_113648.f_24906[iVar6 /*4*/] == 1)
				{
					bVar7 = true;
				}
				break;
			
			case 74:
				if (Global_113648.f_24906[iVar6 /*4*/] == 2)
				{
					bVar7 = true;
				}
				break;
		}
		if (bVar7)
		{
			switch (iVar6)
			{
				case 0:
					sVar8 = "ACCNA_TOWING";
					break;
				
				case 1:
					sVar8 = "ACCNA_TAXI_LOT";
					break;
				
				case 2:
					sVar8 = "ACCNA_ARMS";
					break;
				
				case 3:
					sVar8 = "ACCNA_SONAR";
					break;
				
				case 4:
					sVar8 = "ACCNA_CARMOD";
					break;
				
				case 5:
					sVar8 = "ACCNA_VCINEMA";
					break;
				
				case 6:
					sVar8 = "ACCNA_DCINEMA";
					break;
				
				case 7:
					sVar8 = "ACCNA_MCINEMA";
					break;
				
				case 8:
					sVar8 = "ACCNA_GOLF";
					break;
				
				case 9:
					sVar8 = "ACCNA_CSCRAP";
					break;
				
				case 10:
					sVar8 = "ACCNA_SMOKE";
					break;
				
				case 11:
					sVar8 = "ACCNA_TEQUILA";
					break;
				
				case 12:
					sVar8 = "ACCNA_PITCHERS";
					break;
				
				case 13:
					sVar8 = "ACCNA_HEN";
					break;
				
				case 14:
					sVar8 = "ACCNA_HOOKIES";
					break;
				
				case 15:
					sVar8 = "ACCNA_STRP";
					break;
			}
			unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(9);
			unk_0x330108B080A2132F(iVar2);
			unk_0x882AEFD55B8D51FB("PROPR_INCEMAIL4");
			unk_0xACF853FB3F6EA7D4(sVar8);
			unk_0x511D14ED2DA887E1(Global_113648.f_24906[iVar6 /*4*/].f_3);
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			iVar2++;
			iVar0 = 1;
		}
		iVar5++;
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1";
		
		case 3:
			return "EMSTR_4";
		
		case 1:
			return "EMSTR_7";
		
		case 2:
			return "EMSTR_10";
		
		case 4:
			return "EMSTR_13";
		
		case 5:
			return "EMSTR_30";
		
		case 6:
			return "EMSTR_37";
		
		case 7:
			return "EMSTR_40";
		
		case 8:
			return "EMSTR_53";
		
		case 9:
			return "EMSTR_56";
		
		case 10:
			return "EMSTR_59";
		
		case 11:
			return "EMSTR_79";
		
		case 12:
			return "EMSTR_82";
		
		case 13:
			return "EMSTR_85";
		
		case 14:
			return "EMSTR_88";
		
		case 15:
			return "EMSTR_107";
		
		case 16:
			return "EMSTR_115";
		
		case 17:
			return "EMSTR_143";
		
		case 18:
			return "EMSTR_146";
		
		case 19:
			return "EMSTR_153";
		
		case 20:
			return "EMSTR_158";
		
		case 21:
			return "EMSTR_164";
		
		case 22:
			return "EMSTR_183";
		
		case 23:
			return "EMSTR_188";
		
		case 24:
			return "EMSTR_191";
		
		case 25:
			return "EMSTR_207";
		
		case 26:
			return "EMSTR_220";
		
		case 27:
			return "EMSTR_227";
		
		case 28:
			return "EMSTR_234";
		
		case 29:
			return "EMSTR_243";
		
		case 30:
			return "EMSTR_250";
		
		case 31:
			return "EMSTR_263";
		
		case 32:
			return "EMSTR_270";
		
		case 33:
			return "EMSTR_320";
		
		case 34:
			return "EMSTR_341";
		
		case 35:
			return "EMSTR_349";
		
		case 36:
			return "EMSTR_353";
		
		case 37:
			return "EMSTR_358";
		
		case 38:
			return "EMSTR_361";
		
		case 39:
			return "EMSTR_370";
		
		case 40:
			return "EMSTR_377";
		
		case 41:
			return "EMSTR_380";
		
		case 42:
			return "EMSTR_383";
		
		case 43:
			return "EMSTR_385";
		
		case 44:
			return "EMSTR_388";
		
		case 45:
			return "EMSTR_391";
		
		case 46:
			return "EMSTR_394";
		
		case 47:
			return "EMSTR_397";
		
		case 48:
			return "EMSTR_400";
		
		case 49:
			return "EMSTR_403";
		
		case 50:
			return "EMSTR_406";
		
		case 51:
			return "EMSTR_409";
		
		case 52:
			return "EMSTR_412";
		
		case 53:
			return "EMSTR_415";
		
		case 54:
			return "EMSTR_466";
		
		case 55:
			return "EMSTR_469";
		
		case 56:
			return "EMSTR_490";
		
		case 57:
			return "EMSTR_493";
		
		case 58:
			return "EMSTR_496";
		
		case 59:
			return "EMSTR_499";
		
		case 60:
			return "EMSTR_502";
		
		case 61:
			return "EMSTR_505";
		
		case 62:
			return "EMSTR_508";
		
		case 63:
			return "EMSTR_641";
		
		case 64:
			return "EMSTR_644";
		
		case 65:
			return "EMSTR_653";
		
		default:
	}
	return "NULL";
}

void func_60(int iParam0)
{
	switch (func_79())
	{
		case 0:
			Global_44457 = (Global_44457 + iParam0);
			if (Global_44457 < 0)
			{
				Global_44457 = 0;
			}
			break;
		
		case 2:
			Global_44459 = (Global_44459 + iParam0);
			if (Global_44459 < 0)
			{
				Global_44459 = 0;
			}
			break;
		
		case 1:
			Global_44458 = (Global_44458 + iParam0);
			if (Global_44458 < 0)
			{
				Global_44458 = 0;
			}
			break;
		
		default:
			break;
	}
}

void func_61(int iParam0, int iParam1)
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
	
	iVar0 = -1;
	switch (iParam0)
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
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_53403[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_53403[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_53403[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_53403[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_47790[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53765[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_53765[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_62(iVar5))
	{
		return;
	}
	if (Global_53764 != -1)
	{
		unk_0x633E3833FB96BCCB(func_16(Global_53764));
	}
	Global_53764 = iVar5;
	unk_0xD0D00ED689D6CA81(func_16(iVar5), 0);
	while (!unk_0x38D063D8CF6D1967(func_16(iVar5)))
	{
		wait(100);
	}
}

int func_62(int iParam0)
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return 1;
		
		default:
	}
	return 0;
}

void func_63()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_44460[iVar0] != -1)
		{
			unk_0xFE3A52C5B7AE3101(Global_44460[iVar0]);
			Global_44460[iVar0] = -1;
		}
		iVar0++;
	}
	Global_44464 = 0;
}

void func_64(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xE6B753D52F4CA222();
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<16> Var15;
	
	func_67(iParam1);
	iVar0 = -1;
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
	if (iVar0 == -1)
	{
		return 0;
	}
	unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x330108B080A2132F(8);
	unk_0xE6B753D52F4CA222();
	if (Global_53403[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_53403[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_53403[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!Global_53403[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_53403[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_53403[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_47790[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
			if (Global_53403[iVar0 /*120*/].f_69[iVar1])
			{
				iVar7 = 1;
			}
			if (iVar7 == 1)
			{
				if (Global_44465[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_53403[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {func_32(Global_44465[iVar6 /*12*/])}, 4);
			unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(8);
			unk_0x330108B080A2132F(iVar3);
			unk_0x330108B080A2132F(iVar7);
			unk_0x330108B080A2132F(0);
			func_9(func_59(Global_44465[iVar6 /*12*/].f_2));
			func_9(&sVar8);
			unk_0xE6B753D52F4CA222();
		}
		else
		{
			iVar9 = Global_53403[iVar0 /*120*/].f_18[iVar1];
			iVar10 = -1;
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < 7)
			{
				if (Global_53765[iVar11 /*203*/].f_1 == iVar9)
				{
					iVar10 = iVar11;
				}
				iVar11++;
			}
			if (iVar10 == -1)
			{
				return 1;
			}
			else
			{
				iVar12 = Global_53403[iVar0 /*120*/].f_1[iVar1];
				iVar13 = 0;
				if (Global_53403[iVar0 /*120*/].f_69[iVar1])
				{
					iVar13 = 1;
				}
				iVar14 = Global_53765[iVar10 /*203*/].f_10[iVar12 /*48*/];
				if (iVar13 == 1)
				{
					if (Global_44465[iVar14 /*12*/].f_4 > 0)
					{
						if (Global_53403[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							iVar13 = 2;
						}
					}
				}
				Var15 = { func_32(Global_44465[iVar14 /*12*/]) };
				unk_0x88F483FBD433696A(uParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(8);
				unk_0x330108B080A2132F(iVar3);
				unk_0x330108B080A2132F(iVar13);
				unk_0x330108B080A2132F(0);
				func_9(func_59(Global_44465[iVar14 /*12*/].f_2));
				func_9(&Var15);
				unk_0xE6B753D52F4CA222();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = -1;
	switch (iParam0)
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
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_53403[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_53403[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_53403[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		bVar6 = true;
		if (Global_53403[iVar0 /*120*/].f_103[iVar3])
		{
			bVar6 = false;
		}
		if (Global_53403[iVar0 /*120*/].f_86[iVar3])
		{
			iVar7 = Global_53403[iVar0 /*120*/].f_18[iVar3];
			iVar8 = -1;
			iVar9 = 0;
			iVar9 = 0;
			while (iVar9 < 7)
			{
				if (Global_53765[iVar9 /*203*/].f_1 == iVar7)
				{
					iVar8 = iVar9;
				}
				iVar9++;
			}
			if (iVar8 == -1)
			{
				bVar6 = false;
			}
		}
		if (bVar6)
		{
			iVar10 = Var4.f_0;
			Var4.f_1[iVar10] = Global_53403[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar10] = Global_53403[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar10] = Global_53403[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar10] = Global_53403[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar10] = Global_53403[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar10] = Global_53403[iVar0 /*120*/].f_86[iVar3];
			Var4.f_0++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar5++;
	}
	Global_53403[iVar0 /*120*/] = Var4.f_0;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Global_53403[iVar0 /*120*/].f_103[iVar5] = 0;
		Global_53403[iVar0 /*120*/].f_1[iVar5] = Var4.f_1[iVar5];
		Global_53403[iVar0 /*120*/].f_18[iVar5] = Var4.f_18[iVar5];
		Global_53403[iVar0 /*120*/].f_35[iVar5] = Var4.f_35[iVar5];
		Global_53403[iVar0 /*120*/].f_52[iVar5] = Var4.f_52[iVar5];
		Global_53403[iVar0 /*120*/].f_69[iVar5] = Var4.f_69[iVar5];
		Global_53403[iVar0 /*120*/].f_86[iVar5] = Var4.f_86[iVar5];
		iVar5++;
	}
}

void func_68()
{
	float fVar0;
	
	fVar0 = func_69(Local_48, Local_47, -90f, 0f, 90f, Global_20343, 350f, 0);
	if (Global_9057 == 0)
	{
		unk_0xBA290C9390813C9F((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_22758 = 0;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}
}

float func_69(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4542576 == 0)
	{
		if (BitTest(Global_8253, 14) && Global_20383.f_1 < 4)
		{
			unk_0x78C4EBB0251847E2(&Var0);
			if (Global_20336[Global_20328 /*3*/].f_1 == Var0.f_1)
			{
				Global_4542576 = 1;
			}
		}
	}
	if (func_72() && Global_4542576 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x1DD05E817C89C737();
	}
	fVar1 = func_71((to_float((unk_0x1DD05E817C89C737() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_20311 = { func_70(Param0, Param1, fVar2) };
		Global_20314 = { func_70(Param2, Param3, fVar2) };
	}
	else
	{
		Global_20311 = { Param1 };
		Global_20314 = { Param3 };
	}
	unk_0x6B7EA0158D00C600(Global_20311);
	unk_0xA0382000AA987093(Global_20314, 0);
	return fVar1;
}

Vector3 func_70(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_71(float fParam0, float fParam1, float fParam2)
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

int func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			if (Global_20326 == 0)
			{
				if (Global_7568 != 128)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (Global_21725 != 2)
						{
						}
					}
				}
			}
		}
		if (func_15(14))
		{
			return 0;
		}
		if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x9CA0AFAD60564183())
			{
				if (unk_0x69799E0840A34AFB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D())) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || (unk_0xC3174723CF144560(unk_0x4A8C381C258A124D()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x834C960822A4683F() || Global_1926632))))
		{
			return 0;
		}
		if (Global_112696)
		{
			return 0;
		}
	}
	if (Global_78558)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x9CA0AFAD60564183()))
	{
		iVar2 = 1;
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if ((((((((unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(uVar3)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(uVar3))) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(uVar3))) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("seashark")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("seashark2")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("rhino")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("submersible")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("submersible2")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4542575 || iVar2 == 1)
	{
		if (unk_0x486FF5D06E9659F1(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)
		{
			if (unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_73()
{
	float fVar0;
	
	fVar0 = func_69(Local_47, Local_48, Global_20343, -90f, 0f, 90f, 350f, 0);
	if (Global_9057 == 0)
	{
		if (unk_0x761778199FE1211C())
		{
			if (!func_74())
			{
				unk_0xBA290C9390813C9F((500f + (75f * fVar0)));
			}
		}
		else
		{
			unk_0xBA290C9390813C9F((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_22759 = 0;
		iLocal_18 = 0;
	}
}

int func_74()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x1226C55CA7D2269A() || func_76())
	{
		unk_0xA306E6FD2A6558E6(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xA306E6FD2A6558E6(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x88F483FBD433696A(Global_20364, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(1);
		unk_0x330108B080A2132F(16);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(Global_20364, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(1);
		unk_0x557F1E2300EF1A3E(0);
		unk_0x330108B080A2132F(16);
		unk_0xE6B753D52F4CA222();
	}
}

var func_76()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

void func_77(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x1226C55CA7D2269A() || func_76())
	{
		unk_0xA306E6FD2A6558E6(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xA306E6FD2A6558E6(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x88F483FBD433696A(Global_20364, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(3);
		unk_0x557F1E2300EF1A3E(1);
		unk_0x330108B080A2132F(4);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(Global_20364, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(3);
		unk_0x557F1E2300EF1A3E(0);
		unk_0x330108B080A2132F(4);
		unk_0xE6B753D52F4CA222();
	}
}

void func_78(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x1226C55CA7D2269A() || func_76())
	{
		unk_0xA306E6FD2A6558E6(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xA306E6FD2A6558E6(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x88F483FBD433696A(Global_20364, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(2);
		unk_0x557F1E2300EF1A3E(1);
		unk_0x330108B080A2132F(2);
		unk_0xE6B753D52F4CA222();
	}
	else
	{
		unk_0x88F483FBD433696A(Global_20364, "SET_SOFT_KEYS");
		unk_0x330108B080A2132F(2);
		unk_0x557F1E2300EF1A3E(0);
		unk_0x330108B080A2132F(2);
		unk_0xE6B753D52F4CA222();
	}
}

int func_79()
{
	func_80();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_80()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_83(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_82(unk_0x4A8C381C258A124D());
			if (func_81(iVar0) && (!func_15(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_81(Global_113648.f_2365.f_539.f_4321))
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

bool func_81(int iParam0)
{
	return iParam0 < 3;
}

int func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_83(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_83(int iParam0)
{
	if (func_81(iParam0))
	{
		return func_84(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_84(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}
