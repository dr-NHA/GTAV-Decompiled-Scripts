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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	char cLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	char cLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	char cLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	char cLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	var uLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0x51CC1333A10C4E09();
	while (true)
	{
		wait(0);
		if (BitTest(Global_8254, 1))
		{
			if (!BitTest(Global_8253, 20))
			{
				if (unk_0xE87F28FD4128D063())
				{
					if (Global_20371)
					{
						func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_20326)
						{
							func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x8744D2E3FC95740E(&Global_8254, 1);
				}
			}
		}
		if (BitTest(Global_20591, 0))
		{
			if (!func_120())
			{
				if (!BitTest(Global_20591, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_20591, 1);
					if (unk_0x76CD105BCAC6EB9F())
					{
						uLocal_89 = unk_0x7E3F74F641EE6B27();
					}
					else
					{
						iLocal_85 = unk_0x1DD05E817C89C737();
					}
				}
				if (unk_0x76CD105BCAC6EB9F())
				{
					iLocal_91 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_89);
				}
				else
				{
					iLocal_86 = unk_0x1DD05E817C89C737();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_113(&Global_21179, &Global_21795, &Global_21715, Global_21728, Global_22710, Global_22711, 0))
					{
						Global_20591 = 0;
					}
				}
				else
				{
					Global_20591 = 0;
				}
			}
		}
		if (((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !BitTest(Global_4718592.f_17, 4)) && !func_112()) && unk_0x486FF5D06E9659F1(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_21725 != 0)
			{
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					func_111();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_107();
		}
		switch (Global_21725)
		{
			case 0:
				break;
			
			case 1:
				if (Global_21731)
				{
					if (Global_21721 == 0)
					{
						func_105();
					}
					else
					{
						func_104();
						func_105();
					}
				}
				else if (Global_21721 == 0)
				{
					func_92();
				}
				else
				{
					func_104();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_21731)
				{
					if (Global_21733)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_21735 = 0;
	Global_20382 = 0;
	func_2();
}

void func_2()
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_21736 = 0;
	Global_21737 = 0;
	Global_21738 = 0;
	Global_21739 = 0;
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
	Global_21729 = 0;
	Global_21730 = 0;
	Global_21772 = 0;
	Global_21773 = 0;
	Global_21776 = 0;
	Global_21778 = 0;
	Global_21777 = 0;
	Global_21780 = 0;
	Global_21779 = 0;
	Global_22742 = 0;
	Global_21782 = 0;
	if (Global_20383.f_1 == 10)
	{
	}
	else if (BitTest(Global_8253, 11))
	{
		func_3();
	}
	Global_21731 = 0;
	Global_21732 = 0;
	Global_21733 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22715 = 0;
	Global_22722 = 0;
	Global_22721 = 0;
	Global_22718 = 0;
	Global_22717 = 0;
	Global_22719 = 0;
	Global_22720 = 0;
	Global_21721 = 0;
	Global_21722 = 0;
	Global_21723 = 0;
	Global_21724 = 0;
	Global_21983 = 0;
	Global_22746 = 5000;
	Global_20366 = 0;
	unk_0x8744D2E3FC95740E(&Global_8253, 20);
	unk_0x8744D2E3FC95740E(&Global_8253, 24);
	unk_0x8744D2E3FC95740E(&Global_8254, 23);
	unk_0x8744D2E3FC95740E(&Global_8255, 0);
	unk_0x8744D2E3FC95740E(&Global_8254, 9);
	unk_0x8744D2E3FC95740E(&Global_8254, 31);
	unk_0x8744D2E3FC95740E(&Global_8254, 17);
	unk_0x8744D2E3FC95740E(&Global_8255, 5);
	Global_22709 = 0;
	Global_22708 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		Global_21725 = 4;
	}
	else
	{
		Global_21725 = 0;
		Global_22736 = 0;
		Global_22747 = unk_0x1DD05E817C89C737();
	}
}

void func_3()
{
	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (BitTest(Global_8253, 11))
			{
				if (!Global_20326)
				{
					unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 0, 1);
				}
				if (Global_78558)
				{
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 1);
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 1);
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 1);
				}
				unk_0x8744D2E3FC95740E(&Global_8253, 11);
			}
		}
	}
}

void func_4()
{
	Global_21735 = 0;
	Global_20382 = 0;
	func_2();
}

void func_5()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D()))
		{
			if (Global_21781 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_22717 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_22736 == 1)
			{
				unk_0xF329B991CDE087C7(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_22736 == 0)
		{
			unk_0xC78B293A5F4EACF9();
			iLocal_31 = 0;
		}
	}
	else if (Global_22719 > 0)
	{
		iLocal_37 = unk_0x1DD05E817C89C737();
		if ((iLocal_37 - iLocal_36) > Global_22719)
		{
			unk_0x43D69D4AAC59FA8E();
			Global_22717 = 0;
		}
	}
	if (Global_22736 == 0)
	{
		if (!unk_0x1F9EB85925C3ECD7())
		{
			Global_21725 = 6;
		}
	}
}

void func_6()
{
	unk_0xC78B293A5F4EACF9();
	Global_22736 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE87F28FD4128D063())
	{
		if (!BitTest(Global_8253, 11))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (Global_78558 == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
			{
				if (Global_78558 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_78558 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_22736 == 1)
		{
			if (Global_22737 == 1)
			{
				unk_0xF329B991CDE087C7(1);
				iLocal_31 = 1;
				Global_22737 = 0;
			}
		}
	}
	else if (Global_22736 == 0)
	{
		if (Global_22737 == 1)
		{
			unk_0xC78B293A5F4EACF9();
			iLocal_31 = 0;
			Global_22737 = 0;
		}
	}
	if (Global_21778 == 0)
	{
		if (!Global_21738)
		{
			if (!BitTest(Global_8254, 31))
			{
				if (!BitTest(Global_8254, 27))
				{
					if (func_54())
					{
						if (Global_20383.f_1 > 6)
						{
							unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 24);
							unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 27);
							unk_0x8744D2E3FC95740E(&Global_8254, 26);
							unk_0x8744D2E3FC95740E(&Global_8254, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0xE87F28FD4128D063() == 0 && Global_21738 == 0)
	{
		if (Global_21778 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 23);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&Global_8254, 23);
		}
		if (Global_21782)
		{
			if (Global_21778 == 0)
			{
				Global_21344 = { Global_21783 };
				Global_21801 = { Global_21789 };
				Global_21735 = 0;
				Global_22742 = 6;
				func_53();
				return;
			}
		}
		if (!Global_21780)
		{
			while (Global_21778 == 1)
			{
				wait(0);
				if (Global_20383.f_1 < 6)
				{
					Global_21778 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_21780)
						{
							iLocal_30 = 1;
							Global_22740 = 1;
							func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21867, &(Global_2028[Global_7568 /*29*/].f_7), &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_3), 0);
							func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_20371)
							{
								func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
								func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
								func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_22738 = 1;
							if (func_50(Global_7568, Global_20383) == 0)
							{
								func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21867, "CELL_300", &(Global_117[Global_7568 /*10*/].f_4), "CELL_195", 0);
								func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21867, &(Global_2028[Global_7568 /*29*/].f_7), &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_3), 0);
								func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_20371)
							{
								func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x8744D2E3FC95740E(&Global_8253, 17);
						}
					}
					if (func_49(2, Global_20352, 0))
					{
						func_47();
						Global_20309 = 0.19f;
						Global_21778 = 0;
						func_45();
						if (Global_21780)
						{
							Global_21344 = { Global_21861 };
							Global_22742 = 5;
						}
						else if (Global_21723 > 0)
						{
							Global_21983 = 1;
							Global_21725 = 0;
							Global_22746 = 0;
							if (BitTest(Global_8254, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_22709 + 1)
								{
									uLocal_94[iVar0] = func_44(&(Global_21984[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_44(&(Global_22346[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_22709, &Global_21014, Global_7568, &Global_21801, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_21723 == 2)
							{
								func_25(&Global_21014, Global_7568, &Global_21801, &(Global_21879[0 /*6*/]), &(Global_21931[0 /*6*/]), &(Global_21879[1 /*6*/]), &(Global_21931[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22742 = 1;
							Global_22738 = 0;
							Global_22740 = 0;
							Global_21735 = 0;
							func_23();
							return;
						}
						else
						{
							Global_21344 = { Global_21819 };
							Global_22742 = 1;
						}
						Global_22738 = 0;
						Global_22740 = 0;
						Global_21735 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20353, 0) || BitTest(Global_8253, 24))
					{
						func_47();
						Global_20309 = 0.19f;
						Global_21778 = 0;
						func_45();
						if (Global_21780)
						{
							Global_21344 = { Global_21855 };
							Global_22742 = 4;
						}
						else if (Global_21723 > 0)
						{
							Global_21983 = 1;
							Global_21725 = 0;
							Global_22746 = 0;
							if (BitTest(Global_8254, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_22708 + 1)
								{
									uLocal_96[iVar1] = func_44(&(Global_22165[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_44(&(Global_22527[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_22708, &Global_21014, Global_7568, &Global_21801, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_21723 == 2)
							{
								func_25(&Global_21014, Global_7568, &Global_21801, &(Global_21892[0 /*6*/]), &(Global_21944[0 /*6*/]), &(Global_21892[1 /*6*/]), &(Global_21944[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_22742 = 2;
							Global_22738 = 0;
							Global_22740 = 0;
							Global_21735 = 0;
							func_23();
							return;
						}
						else
						{
							Global_21344 = { Global_21825 };
							Global_22742 = 2;
						}
						Global_22738 = 0;
						Global_22740 = 0;
						Global_21735 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20355, 0))
					{
						if (Global_21780)
						{
							Global_20309 = 0.19f;
							Global_21778 = 0;
							func_45();
							func_47();
							Global_21344 = { Global_21849 };
							Global_22742 = 3;
							Global_22738 = 0;
							Global_22740 = 0;
							Global_21735 = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_21778)
			{
				wait(0);
				if (Global_20383.f_1 < 6)
				{
					Global_21778 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_121(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_121(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_22(Global_20364, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_20371)
						{
							func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x8744D2E3FC95740E(&Global_8253, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_20352, 0))
					{
						func_47();
						Global_21778 = 0;
						func_45();
						unk_0x88F483FBD433696A(Global_20364, "GET_CURRENT_SELECTION");
						uLocal_99 = unk_0x6CA3F2B87712B6A4();
						while (!unk_0xA6F779AA284EB20E(uLocal_99))
						{
							wait(0);
						}
						iVar2 = unk_0x5DEF122A58D4F685(uLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_21344 = { Global_21855 };
								Global_22742 = 4;
								break;
							
							case 1:
								Global_21344 = { Global_21849 };
								Global_22742 = 3;
								break;
							
							case 2:
								Global_21344 = { Global_21861 };
								Global_22742 = 5;
								break;
						}
						Global_22738 = 0;
						Global_22740 = 0;
						Global_21735 = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_20353, 0))
					{
						Global_21778 = 0;
						func_45();
					}
				}
			}
		}
		if (Global_21726 == 0)
		{
			unk_0x0F15249D24BC5ADA(0);
			settimera(0);
			while (timera() < 900 && Global_20383.f_1 == 9)
			{
				wait(0);
			}
			Global_21725 = 6;
		}
		if (!Global_1574982)
		{
			unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", &Global_20372, 1);
		}
		func_15();
		Global_20383.f_1 = Global_20385;
		func_8();
	}
	else if (Global_20584 == 0)
	{
		if (func_49(2, Global_20351, 0))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					if (BitTest(Global_8253, 20))
					{
					}
					else
					{
						Global_20361 = 1;
						func_45();
						unk_0x0F15249D24BC5ADA(0);
						Global_21774 = 1;
						Global_21775 = 1;
						Global_21725 = 6;
						func_15();
						Global_20383.f_1 = Global_20385;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
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
			func_51(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_8858);
			if (Global_8858 == 1)
			{
				func_51(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20387;
			}
			else
			{
				func_51(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20388), -1082130432, -1082130432, -1082130432);
				Global_20363 = Global_20388;
			}
			if (Global_20371)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20586 == 0)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8253, 17);
			}
			else if (Global_78558)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8253, 17);
			}
			else
			{
				if (Global_20585 == 1)
				{
					if (Global_20371)
					{
						func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20371)
				{
					func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
			}
			if (Global_78558)
			{
				func_11();
				unk_0x8744D2E3FC95740E(&Global_8255, 9);
				func_51(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20382 == 1)
			{
				func_10();
				func_51(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
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
				else if (func_50(Global_7568, Global_20383) == 0)
				{
					func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
				}
				func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21725 == 4 || Global_21725 == 3)
			{
				func_51(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
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
					if (func_50(Global_7568, Global_20383) == 0)
					{
						func_51(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &Var0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
					}
				}
				func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
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
		func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
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
		if (func_14(14))
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
									func_121(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_121(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_121(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_121(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_121(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_121(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_121(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_14(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_15()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return;
	}
	switch (Global_20385)
	{
		case 5:
			Global_20385 = 6;
			break;
		
		case 6:
			if (BitTest(Global_8254, 5))
			{
				Global_20385 = 6;
				unk_0x8744D2E3FC95740E(&Global_8254, 5);
			}
			else
			{
				Global_20385 = 3;
			}
			break;
		
		case 7:
			Global_20385 = 3;
			break;
		
		case 3:
			if (BitTest(Global_8254, 5))
			{
				Global_20385 = 6;
				unk_0x8744D2E3FC95740E(&Global_8254, 5);
			}
			else
			{
				Global_20385 = 3;
			}
			break;
		
		default:
			Global_20385 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_98)
	{
		if (timera() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_49(2, Global_20359, 0) || unk_0x875A214D5EBCA509(2, 181))
		{
			func_20();
			iLocal_98 = 1;
			settimera(0);
		}
		if (func_49(2, Global_20360, 0) || unk_0x875A214D5EBCA509(2, 180))
		{
			func_17();
			iLocal_98 = 1;
			settimera(0);
		}
	}
}

void func_17()
{
	func_51(Global_20364, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_20589 == 0)
		{
			unk_0xBF3F90E670404C44(2);
		}
		else
		{
			unk_0xBF3F90E670404C44(1);
		}
	}
}

int func_19()
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

void func_20()
{
	func_51(Global_20364, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20372, 1);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_20589 == 0)
		{
			unk_0xBF3F90E670404C44(1);
		}
		else
		{
			unk_0xBF3F90E670404C44(2);
		}
	}
}

void func_22(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
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

void func_23()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20364))
	{
		func_24();
		if (Global_20382 == 1)
		{
			if (Global_20371)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21772)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8253, 20))
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
		}
		else
		{
			func_121(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_78558)
	{
		func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8253, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_21737 = 1;
	}
	else
	{
		Global_21737 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_39(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
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
					func_111();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_37();
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
			unk_0x8744D2E3FC95740E(&Global_8255, 0);
			if (bParam3)
			{
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
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
		func_53();
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
		func_111();
	}
	return 0;
}

void func_27()
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

int func_28()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
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

void func_30()
{
	if (func_14(14))
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
		Global_20383 = func_31();
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

var func_31()
{
	func_32();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_35(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_34(unk_0x4A8C381C258A124D());
			if (func_33(iVar0) && (!func_14(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_33(Global_113648.f_2365.f_539.f_4321))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_37()
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

bool func_38(int iParam0, int iParam1)
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

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
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

void func_40(var uParam0)
{
	Global_21722 = uParam0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
}

void func_41()
{
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_21739 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_21737 = 1;
	}
	else
	{
		Global_21737 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20372, 1);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (!Global_20326)
				{
					if (!BitTest(Global_8253, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
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
		if (func_14(14))
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

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x875A214D5EBCA509(iParam0, uParam1) || (iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, iParam1)))
	{
		if (unk_0x761778199FE1211C())
		{
			if (unk_0x66DA7155B68E7638() == 0 || (unk_0xA43CD45F18522E3F() && unk_0xAE231F549813BBDF(2)))
			{
				return 0;
			}
		}
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
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

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

void func_51(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				if (!Global_20326)
				{
					if (BitTest(Global_8253, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
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

int func_54()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		iLocal_91 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_90);
	}
	else
	{
		iLocal_88 = unk_0x1DD05E817C89C737();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_28())
	{
		Global_20383.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return BitTest(Global_1962996, 5);
}

bool func_59()
{
	return BitTest(Global_1962996, 19);
}

void func_60()
{
	if (func_49(2, Global_20360, 0))
	{
		if (Global_22736 == 0)
		{
			if (Global_21731)
			{
				if (BitTest(Global_8254, 17))
				{
				}
				else
				{
					unk_0x329FFB0BB004FDEE();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_62() && unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_78558)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && iVar1 == 0)
		{
			iVar2 = unk_0xB204F40D393426B6(unk_0x4A8C381C258A124D(), 0, 1);
			if (Global_78558)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
			{
				iVar0 = 1;
			}
			if (!Global_20326)
			{
				if (Global_7568 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
						{
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
							}
							else
							{
								if (Global_78558)
								{
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 0);
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 0);
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 0);
								}
								unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 11);
								unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_62()
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

void func_63()
{
	if (Global_78558 == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_22738 = 1;
		if (func_50(Global_7568, Global_20383) == 0)
		{
			func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21867, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21867, &(Global_2028[Global_7568 /*29*/].f_7), &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_3), 0);
			func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_20309 = 0.2f;
		if (Global_20371)
		{
			func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_121(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8253, 17);
	}
	if (Global_21778 == 1)
	{
		if (Global_20383.f_1 < 6)
		{
			Global_21778 = 0;
		}
		else
		{
			if (Global_20323 == 0)
			{
				if (func_49(2, Global_20352, 0))
				{
					Global_20309 = 0.19f;
					Global_21778 = 0;
					func_45();
					Global_22743 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_20353, 0))
			{
				Global_20309 = 0.19f;
				Global_21778 = 0;
				func_45();
				Global_22743 = 2;
			}
		}
	}
	else if (Global_22743 == 2)
	{
		if (Global_21726 == 0)
		{
			unk_0x0F15249D24BC5ADA(0);
			Global_21725 = 6;
		}
		func_15();
		Global_20383.f_1 = Global_20385;
		func_8();
	}
	else if (!unk_0xE87F28FD4128D063())
	{
		iLocal_32 = 0;
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
		unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", &Global_20372, 1);
		func_15();
		Global_20383.f_1 = Global_20385;
		func_8();
	}
}

void func_64()
{
	if (Global_20592 == 1)
	{
		if (unk_0xE87F28FD4128D063())
		{
			if (unk_0x22258A5EB34183DC())
			{
				Global_20592 = 0;
			}
		}
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			Global_20592 = 0;
			unk_0x0F15249D24BC5ADA(0);
			Global_21725 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_20592 == 1)
		{
			Global_20592 = 0;
		}
	}
	if (timera() < Global_22746 || Global_20592 == 1)
	{
		if (func_49(2, Global_20351, 0))
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					if (BitTest(Global_8253, 20))
					{
					}
					else
					{
						Global_20361 = 1;
						func_45();
						unk_0x0F15249D24BC5ADA(0);
						Global_21774 = 1;
						Global_21725 = 6;
						unk_0x8744D2E3FC95740E(&Global_8253, 27);
						if (!Global_21736)
						{
							unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 5);
						}
						func_15();
						Global_20383.f_1 = Global_20385;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8253, 27);
		Global_21725 = 4;
		Global_21782 = 0;
		func_67();
		func_66();
		if (!Global_21738)
		{
			if (Global_22742 == 0)
			{
				if (!BitTest(Global_8255, 5))
				{
					unk_0x43D69D4AAC59FA8E();
				}
				unk_0x8744D2E3FC95740E(&Global_8255, 5);
			}
			else
			{
				unk_0xABC27367E50604B7(Global_21344.f_368, Global_21344.f_369);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		uLocal_90 = unk_0x7E3F74F641EE6B27();
	}
	else
	{
		iLocal_87 = unk_0x1DD05E817C89C737();
	}
}

void func_66()
{
	if (Global_21738)
	{
		if (Global_78558)
		{
			if (unk_0xA0C7B98BCF1EEF9E(Global_20364))
			{
				if (!unk_0x761778199FE1211C())
				{
					func_121(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_2793046.f_1825), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20364))
	{
		if (!Global_21733)
		{
			func_121(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_121(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8253, 17);
			if (BitTest(Global_8253, 20))
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20371)
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20326)
				{
					func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_121(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
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
			else if (func_50(Global_7568, Global_20383) == 0)
			{
				func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_121(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_219", &(Global_2028[Global_7568 /*29*/].f_3), 0);
			}
		}
		func_51(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_68()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		iLocal_92 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_78);
		iLocal_93 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_81);
	}
	else
	{
		iLocal_77 = unk_0x1DD05E817C89C737();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0x1DD05E817C89C737();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_21772 == 1)
	{
		if (func_48())
		{
			if (iLocal_92 > 4000)
			{
				if (BitTest(Global_8253, 14))
				{
					if (unk_0xA0C7B98BCF1EEF9E(Global_20364))
					{
						func_45();
						Global_20382 = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (BitTest(Global_8253, 14))
			{
				if (unk_0xA0C7B98BCF1EEF9E(Global_20364))
				{
					func_45();
					Global_20382 = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_20382 = 3;
	}
	if (Global_20382 == 2)
	{
		iLocal_30 = 0;
		Global_21725 = 4;
		func_61();
		Global_21782 = 0;
		func_67();
		func_66();
		if (!Global_21738)
		{
			if (Global_22742 == 0)
			{
				unk_0x43D69D4AAC59FA8E();
			}
			else
			{
				unk_0xABC27367E50604B7(Global_21344.f_368, Global_21344.f_369);
			}
		}
		func_65();
		Global_22741 = 0;
	}
	if (Global_21772 == 0)
	{
		if (Global_20382 == 3)
		{
			if (Global_21738)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_22741 = 1;
				unk_0x0F15249D24BC5ADA(0);
				Global_21725 = 6;
				func_15();
				Global_20383.f_1 = Global_20385;
				func_8();
			}
		}
	}
	else if (Global_20382 == 3)
	{
	}
}

void func_69()
{
}

void func_70()
{
	Global_2800025.f_2 = 1;
	Global_2800025.f_38 = 1;
	if (unk_0x261E3728EE56B3AC())
	{
		if (unk_0x5150DDF9D3BDA9E5())
		{
			while (unk_0x8BDB5F6FED3994AD())
			{
				wait(0);
			}
			unk_0x7D8697356CC73FFD();
			Global_2800025 = 0;
			Global_2800025.f_2 = 0;
		}
		else if (func_73(Global_2800025.f_20))
		{
			if (unk_0xEDD63461767A518C(&(Global_2800025.f_20)))
			{
				if (!unk_0x484CF81C32C3D413(&(Global_2800025.f_20)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_2800025.f_37)
	{
		func_55(0);
	}
	Global_2800025.f_37 = 0;
	Global_2800025.f_3 = 0;
}

void func_71()
{
	Global_2800025.f_1 = 0;
	Global_2800025 = 0;
	Global_2800025.f_2 = 0;
	Global_2800025.f_33 = -1;
	Global_2800025.f_34 = -1;
	StringCopy(&(Global_2800025.f_4), "", 64);
	StringCopy(&(Global_2800025.f_39[0 /*16*/]), "", 64);
	Global_2800025.f_38 = 0;
	Global_2800025.f_56 = 0;
	Global_2800025.f_57 = 0;
	Global_2800025.f_58 = -2;
	Global_2800025.f_3 = 0;
	func_72(&(Global_2800025.f_20));
}

void func_72(var uParam0)
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

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_21721)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_21344.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_20593[iVar2 /*6*/] = { Global_21344.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_20593[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_20593[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_20593[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x6BA487C862DB8DDF(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0xFACCDE46E24AD056(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				uVar5 = func_85(iVar13);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar13);
				uVar7 = func_80(iVar13);
				uVar8 = func_79(iVar13);
				uVar12 = func_78(iVar13);
				uVar9 = func_77(iVar13);
				uVar10 = func_76(iVar13);
				uVar11 = func_75(iVar13);
				if (unk_0x6BA487C862DB8DDF(&(Global_20593[iVar2 /*6*/])))
				{
					if (unk_0x1B79E937E91F40C3(&(Global_20593[iVar2 /*6*/]), &(Global_21344.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0xC401B1960D35A6C4(iVar3, &cLocal_46, &(Global_20593[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x6BA487C862DB8DDF(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xFACCDE46E24AD056(&cLocal_42), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				uVar5 = func_85(0);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(0);
				uVar7 = func_80(0);
				uVar8 = func_79(0);
				uVar12 = func_78(0);
				uVar9 = func_77(0);
				uVar10 = func_76(0);
				uVar11 = func_75(0);
				unk_0xC401B1960D35A6C4(iVar3, &cLocal_46, &(Global_21344.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_20593[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_20593[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_21731 == 0)
	{
		unk_0x6CBE32FD4ABF9B73(uLocal_68);
		unk_0xC5C39679B6570380(uLocal_69);
		unk_0xA406335199BF1001(Global_21344.f_368, Global_21344.f_369, Global_21344.f_370, uLocal_67);
		Global_21725 = 4;
	}
}

int func_75(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 1;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "1"))
	{
		return 1;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "2"))
	{
		return 2;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "3"))
	{
		return 3;
	}
	if (unk_0x1B79E937E91F40C3(uVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 2, 3);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 1, 2);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 0, 1);
	if (unk_0x1B79E937E91F40C3(uVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(uVar0);
}

int func_86(var uParam0)
{
	if (unk_0x1B79E937E91F40C3(uParam0, "0"))
	{
		return 0;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "1"))
	{
		return 1;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "2"))
	{
		return 2;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "3"))
	{
		return 3;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "4"))
	{
		return 4;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "5"))
	{
		return 5;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "6"))
	{
		return 6;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "7"))
	{
		return 7;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "8"))
	{
		return 8;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "9"))
	{
		return 9;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "A"))
	{
		return 10;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "B"))
	{
		return 11;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "C"))
	{
		return 12;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "D"))
	{
		return 13;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "E"))
	{
		return 14;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "F"))
	{
		return 15;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "G"))
	{
		return 16;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "H"))
	{
		return 17;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "I"))
	{
		return 18;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "J"))
	{
		return 19;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "K"))
	{
		return 20;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "L"))
	{
		return 21;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "M"))
	{
		return 22;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "N"))
	{
		return 23;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "O"))
	{
		return 24;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "P"))
	{
		return 25;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "R"))
	{
		return 27;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "S"))
	{
		return 28;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "T"))
	{
		return 29;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "U"))
	{
		return 30;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "V"))
	{
		return 31;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "W"))
	{
		return 32;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "X"))
	{
		return 33;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x1B79E937E91F40C3(uParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_87(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(uVar0);
}

int func_88(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(uVar0);
}

void func_89()
{
	cLocal_70 = { Global_21344.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_70))
	{
		sLocal_74 = unk_0xFACCDE46E24AD056(&cLocal_70);
		if (unk_0xFF692AB7350A74D7(sLocal_74))
		{
		}
	}
}

void func_90()
{
	cLocal_60 = { Global_21344.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_60))
	{
		sLocal_64 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 0, 1);
		if (unk_0xFF692AB7350A74D7(sLocal_64))
		{
		}
		sLocal_65 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 1, 2);
		if (unk_0xFF692AB7350A74D7(sLocal_65))
		{
		}
		sLocal_66 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 2, 3);
		if (unk_0xFF692AB7350A74D7(sLocal_66))
		{
		}
	}
}

void func_91()
{
	cLocal_55 = { Global_21344.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_55))
	{
		sLocal_59 = unk_0xFACCDE46E24AD056(&cLocal_55);
		if (unk_0xFF692AB7350A74D7(sLocal_59))
		{
		}
	}
}

void func_92()
{
	func_93();
	unk_0x6CBE32FD4ABF9B73(uLocal_68);
	unk_0xC5C39679B6570380(uLocal_69);
	if (Global_22717)
	{
		unk_0x4082E7EF621D1686(Global_21344.f_368, Global_21344.f_369, Global_21344.f_370, uLocal_67);
		iLocal_36 = unk_0x1DD05E817C89C737();
	}
	else
	{
		unk_0xA406335199BF1001(Global_21344.f_368, Global_21344.f_369, Global_21344.f_370, uLocal_67);
	}
	Global_21725 = 4;
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x00F2D73E763510A4(&Global_21801))
	{
		if (unk_0x1B79E937E91F40C3(&Global_21801, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_103() || func_102())
		{
			if (Global_1835499 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_78558 || func_101(0))
		{
			if (Global_1835499 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(unk_0x70E57E9927B6BA58(&Global_21801)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_21727 < 5 || Global_21727 == 10) || Global_21727 == 12) || Global_21727 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				unk_0xF2CB0224D3BE0B42(&Global_21801, 7);
				while (!unk_0xDCB78A15E5F495DC(7))
				{
					wait(0);
				}
			}
			else
			{
				unk_0x4AB15E3851FF326B(&Global_21801, 15);
				while (!unk_0xDCB78A15E5F495DC(15))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			unk_0xF2CB0224D3BE0B42(&Global_21801, 6);
			while (!unk_0xDCB78A15E5F495DC(6))
			{
				wait(0);
			}
		}
		else if (unk_0x486FF5D06E9659F1(joaat("fm_mission_controller_2020")) == 0)
		{
			unk_0x4AB15E3851FF326B(&Global_21801, 14);
			while (!unk_0xDCB78A15E5F495DC(14))
			{
				wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0x4C2ADBAAF83DA56A();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_22735 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_21344 };
		StringConCat(&cLocal_42, "A", 24);
		Global_20593[iVar2 /*6*/] = { Global_21344 };
		StringConCat(&(Global_20593[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_20593[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_20593[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x6BA487C862DB8DDF(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0xFACCDE46E24AD056(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4542485 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			uVar5 = func_85(iVar2);
			uLocal_67 = func_84();
			uLocal_68 = func_83();
			uLocal_69 = func_82();
			uVar6 = func_81(iVar2);
			uVar7 = func_80(iVar2);
			uVar8 = func_79(iVar2);
			uVar12 = func_78(iVar2);
			uVar9 = func_77(iVar2);
			uVar10 = func_76(iVar2);
			uVar11 = func_75(iVar2);
			if (unk_0x6BA487C862DB8DDF(&(Global_20593[iVar2 /*6*/])))
			{
				if (Global_22715 == 0 && Global_22721 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xC401B1960D35A6C4(iVar3, &cLocal_46, &(Global_20593[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x1B79E937E91F40C3(&(Global_20593[iVar2 /*6*/]), &Global_22723))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0xC401B1960D35A6C4(iVar3, &cLocal_46, &(Global_20593[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_22735 = iVar2;
					if (Global_22721 == 1)
					{
						Global_22721 = 0;
					}
				}
			}
			else if (Global_22721 == 0 && Global_22715 == 0)
			{
				unk_0xC401B1960D35A6C4(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x6BA487C862DB8DDF(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xFACCDE46E24AD056(&cLocal_42), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				uVar5 = func_85(iVar2);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar2);
				uVar7 = func_80(iVar2);
				uVar8 = func_79(iVar2);
				uVar12 = func_78(iVar2);
				uVar9 = func_77(iVar2);
				uVar10 = func_76(iVar2);
				uVar11 = func_75(iVar2);
				unk_0xC401B1960D35A6C4(iVar3, &cLocal_46, &Global_21344, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_21014[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xFC8BFE4B41177C22(Global_21014[iVar0 /*10*/]) || Global_21014[iVar0 /*10*/] == 0)
			{
				unk_0x302B7D91564CDE7F(iVar0, Global_21014[iVar0 /*10*/], &(Global_21014[iVar0 /*10*/].f_1));
			}
			if (Global_21014.f_161 == iVar0)
			{
				if ((Global_21014.f_162 != 0f && Global_21014.f_162.f_1 != 0f) && Global_21014.f_162.f_2 != 0f)
				{
					wait(0);
					unk_0x353876FDDC0D0E0E(Global_21014.f_161, Global_21014.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4542485 == 1)
	{
		Global_4542485 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4542304[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xFC8BFE4B41177C22(Global_4542304[iVar0 /*9*/]) || Global_4542304[iVar0 /*9*/] == 0)
				{
					unk_0x302B7D91564CDE7F(Global_4542304[iVar0 /*9*/].f_8, Global_4542304[iVar0 /*9*/], &(Global_4542304[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_70 = { Global_21344 };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_70))
	{
		sLocal_74 = unk_0xFACCDE46E24AD056(&cLocal_70);
		if (unk_0xFF692AB7350A74D7(sLocal_74))
		{
		}
	}
}

void func_96()
{
	cLocal_60 = { Global_21344 };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_60))
	{
		sLocal_64 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 0, 1);
		if (unk_0xFF692AB7350A74D7(sLocal_64))
		{
		}
		sLocal_65 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 1, 2);
		if (unk_0xFF692AB7350A74D7(sLocal_65))
		{
		}
		sLocal_66 = unk_0xA4FC5B871651C9F9(unk_0xFACCDE46E24AD056(&cLocal_60), 2, 3);
		if (unk_0xFF692AB7350A74D7(sLocal_66))
		{
		}
	}
}

void func_97()
{
	cLocal_55 = { Global_21344 };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x6BA487C862DB8DDF(&cLocal_55))
	{
		sLocal_59 = unk_0xFACCDE46E24AD056(&cLocal_55);
		if (unk_0xFF692AB7350A74D7(sLocal_59))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case -342942601:
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case -519616352:
		case 718322585:
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
		case -1018917633:
		case 1332392277:
		case -1889985881:
		case -1536828534:
		case -580715848:
		case -947428706:
		case -790967848:
		case 1475512972:
		case -9119060:
		case 1748914928:
		case -105714609:
		case -1463539315:
		case 1194496889:
		case -147438928:
		case 494169967:
		case 549653660:
		case 39587133:
		case 1013082963:
		case 952237143:
		case 1073149438:
		case 391502992:
		case -1192647115:
		case 1657711155:
		case 1404758415:
		case -675588129:
		case -1333870039:
		case -266249619:
		case 1616674547:
		case -1250679862:
		case -158239083:
		case -1990606476:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_2883694)
	{
		if (func_14(0))
		{
			if (Global_3407872 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_14(0))
		{
			if (Global_3932160 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

var func_101(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

var func_102()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

var func_103()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_103() || func_102())
	{
		if (Global_1835499 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_78558)
	{
		if (Global_1835499 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (unk_0x00F2D73E763510A4(&Global_21801))
	{
		if (unk_0x1B79E937E91F40C3(&Global_21801, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_98(unk_0x70E57E9927B6BA58(&Global_21801)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_21727 < 5 || Global_21727 == 10) || Global_21727 == 12) || Global_21727 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			unk_0xF2CB0224D3BE0B42(&Global_21801, 7);
			while (!unk_0xDCB78A15E5F495DC(7))
			{
				wait(0);
			}
		}
		else
		{
			unk_0x4AB15E3851FF326B(&Global_21801, 15);
			while (!unk_0xDCB78A15E5F495DC(15))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		unk_0xF2CB0224D3BE0B42(&Global_21801, 6);
		while (!unk_0xDCB78A15E5F495DC(6))
		{
			wait(0);
		}
	}
	else
	{
		unk_0x4AB15E3851FF326B(&Global_21801, 14);
		while (!unk_0xDCB78A15E5F495DC(14))
		{
			wait(0);
		}
	}
	unk_0x4C2ADBAAF83DA56A();
	func_94();
}

void func_105()
{
	while (Global_20366 == 1 && unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_20366 = 0;
	if (BitTest(Global_8253, 20))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8254, 1);
	}
	Global_20367 = 0;
	if (Global_21721 == 0)
	{
		if (!Global_21738)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_20592 = 0;
	if (Global_21735)
	{
		if (Global_22742 == 0)
		{
			if (Global_21738 == 0)
			{
				iLocal_34 = 5000;
				unk_0x4FF8DE2B4C376BE4(Global_21344.f_368, Global_21344.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_20592 = 1;
		settimerb(0);
		while ((Global_20592 == 1 && Global_21725 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				Global_20592 = 0;
				unk_0x0F15249D24BC5ADA(0);
				Global_21725 = 6;
			}
			if (unk_0xE87F28FD4128D063())
			{
				if (unk_0x22258A5EB34183DC())
				{
					Global_20592 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_21725 != 1)
		{
		}
		if (Global_20592 == 0)
		{
		}
	}
	Global_20592 = 0;
	if (((Global_20383.f_1 == 1 || Global_20383.f_1 == 0) || Global_21725 != 1) || Global_20349 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_21725 = 6;
	}
	else
	{
		if (Global_21733)
		{
			Global_22743 = 0;
			iLocal_32 = 0;
		}
		if (Global_21735 == 0)
		{
			if (Global_21776 == 0)
			{
				Global_20385 = Global_20383.f_1;
				Global_21776 = 1;
			}
			iLocal_30 = 0;
			if (Global_22742 == 0)
			{
				unk_0x4FF8DE2B4C376BE4(Global_21344.f_368, Global_21344.f_369);
				wait(0);
				Global_21725 = 3;
				Global_20592 = 1;
				settimerb(0);
				unk_0x0B0C9A0F9AAEB7F0(&Global_8253, 27);
				settimera(0);
			}
			else
			{
				Global_20592 = 0;
				Global_21725 = 4;
			}
			Global_20382 = 0;
			if (Global_21736 == 1)
			{
				if (Global_20383.f_1 == 10)
				{
				}
				if (!Global_20383.f_1 == 9)
				{
					if (Global_20383.f_1 > 4)
					{
						if (Global_20366 == 0)
						{
							Global_20383.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_20383.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_20383.f_1 == 4)
				{
					wait(0);
					if (Global_20592 == 1)
					{
						if (unk_0xE87F28FD4128D063())
						{
							if (unk_0x22258A5EB34183DC())
							{
								Global_20592 = 0;
							}
						}
					}
				}
				if (Global_20383.f_1 == 6)
				{
				}
				if (Global_20383.f_1 == 10)
				{
				}
				if (Global_20383.f_1 == 3)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_21725 = 6;
					Global_20367 = 1;
					return;
				}
				Global_20383.f_1 = 9;
				func_8();
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_84 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iLocal_82 = unk_0x1DD05E817C89C737();
			}
			while (Global_20383.f_1 != 9 && Global_20366 == 0)
			{
				wait(0);
				if (Global_20592 == 1)
				{
					if (unk_0xE87F28FD4128D063())
					{
						if (unk_0x22258A5EB34183DC())
						{
							Global_20592 = 0;
						}
					}
				}
				if (unk_0x76CD105BCAC6EB9F())
				{
					iLocal_91 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x1DD05E817C89C737();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_22741 = 1;
						Global_20366 = 1;
					}
				}
			}
			if (!BitTest(Global_8253, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_20366 == 0)
			{
				if (!Global_22742 == 0)
				{
					Global_21782 = 0;
					func_67();
					func_66();
					if (!Global_21738)
					{
						if (Global_22742 == 0)
						{
							unk_0x43D69D4AAC59FA8E();
						}
						else
						{
							unk_0xABC27367E50604B7(Global_21344.f_368, Global_21344.f_369);
						}
					}
					func_65();
				}
			}
			else
			{
				func_106();
				Global_20367 = 1;
			}
		}
		else
		{
			Global_20382 = 1;
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if (Global_20383.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x8744D2E3FC95740E(&Global_8254, 21);
				}
			}
			if (Global_21776 == 0)
			{
				Global_20385 = Global_20383.f_1;
				Global_21776 = 1;
			}
			if (Global_20383.f_1 == 3)
			{
				Global_20383.f_1 = 4;
			}
			else
			{
				while (Global_20383.f_1 == 4)
				{
					wait(0);
				}
				if (Global_20383.f_1 == 6)
				{
				}
				Global_20383.f_1 = 9;
				func_8();
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_84 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iLocal_82 = unk_0x1DD05E817C89C737();
			}
			while (Global_20383.f_1 != 9 && Global_20366 == 0)
			{
				wait(0);
				if (unk_0x76CD105BCAC6EB9F())
				{
					iLocal_91 = unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x1DD05E817C89C737();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_22741 = 1;
						Global_20366 = 1;
						unk_0x8744D2E3FC95740E(&Global_8254, 21);
					}
				}
			}
			if (Global_20366 == 0)
			{
				Global_21725 = 2;
			}
			else
			{
				func_106();
				Global_20367 = 1;
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_78 = unk_0x7E3F74F641EE6B27();
				uLocal_81 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iLocal_76 = unk_0x1DD05E817C89C737();
				iLocal_79 = unk_0x1DD05E817C89C737();
			}
		}
	}
}

void func_106()
{
	Global_20591 = 0;
	func_111();
}

void func_107()
{
	float fVar0;
	
	fVar0 = func_108(Global_20336[Global_20328 /*3*/], Global_20329[Global_20328 /*3*/], Global_20343, Global_20314, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_22739 == 0)
		{
			unk_0x37B894853929BF1A(1);
		}
		iLocal_32 = 0;
	}
}

float func_108(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
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
	if (func_48() && Global_4542576 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x1DD05E817C89C737();
	}
	fVar1 = func_110((to_float((unk_0x1DD05E817C89C737() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_20311 = { func_109(Param0, Param1, fVar2) };
		Global_20314 = { func_109(Param2, Param3, fVar2) };
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

Vector3 func_109(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_110(float fParam0, float fParam1, float fParam2)
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

void func_111()
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

bool func_112()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_114(sParam2, iParam3, 0);
}

int func_114(char* sParam0, int iParam1, bool bParam2)
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
					func_111();
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
		if (func_38(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_37();
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
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_53();
		func_115();
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
		func_111();
	}
	return 0;
}

void func_115()
{
	if (!func_116())
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

int func_116()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_119())
	{
		return 0;
	}
	if (func_117(unk_0x259BE71D8A81D4FA()))
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

bool func_117(int iParam0)
{
	return func_118(iParam0, 20);
}

var func_118(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_119()
{
	return -1;
}

int func_120()
{
	if (Global_21725 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_121(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
