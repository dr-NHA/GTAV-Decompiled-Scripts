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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_92();
	while (true)
	{
		func_91();
		if (func_86())
		{
			func_85();
		}
		if (Global_2793046.f_5225.f_754 == 0)
		{
			func_85();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_85();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2793046.f_5225.f_753;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_2793046.f_5225.f_753 = func_6();
}

void func_3(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	unk_0x8744D2E3FC95740E(&(Global_2646729.f_388), uVar0);
	unk_0x8744D2E3FC95740E(&(Global_2646729.f_389), bVar0);
	unk_0x8744D2E3FC95740E(&(Global_2646729.f_390), bVar0);
	unk_0x8744D2E3FC95740E(&(Global_2646729.f_392), bVar0);
	unk_0x8744D2E3FC95740E(&(Global_2646729.f_396), bVar0);
	unk_0x8744D2E3FC95740E(&(Global_2646729.f_391), bVar0);
}

int func_4(int iParam0)
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
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

int func_6()
{
	return -1;
}

bool func_7(bool bParam0)
{
	return func_8(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_8(int iParam0, bool bParam1)
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_6() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_6())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	bool bVar0;
	
	if (func_7(1))
	{
		bVar0 = Global_2793046.f_5225.f_753;
		if (bVar0 != func_6())
		{
			if (func_12(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(bool bParam0)
{
	if (func_5(bParam0, 0, 1))
	{
		func_83(bParam0, 432, 1, 0);
		if (func_82(bParam0))
		{
			func_79(bParam0, func_80(func_81(unk_0x259BE71D8A81D4FA())), 1, 0);
		}
		if (func_77(bParam0))
		{
			func_75(bParam0, 1, 1, 0);
		}
		func_69(bParam0, 1, 0);
		func_13(bParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (bParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	bVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2672505)
		{
		}
		else if (unk_0xC450B06E5AAA0985(Global_2646729[bVar0]))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2646729.f_370), bVar0);
			unk_0x8744D2E3FC95740E(&(Global_2646729.f_375), bVar0);
			unk_0x861AC9C2D48CEA7F(Global_2646729[bVar0], 1);
			unk_0xB562F84CE9B07D89(Global_2646729[bVar0], 250);
			func_14(bParam0);
			if (iParam2 < 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2646729.f_375), bVar0);
			}
			else
			{
				Global_2646729.f_201[bVar0] = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam2);
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2646729.f_370), bVar0);
			unk_0x8744D2E3FC95740E(&(Global_2646729.f_375), bVar0);
			if (iParam2 < 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2646729.f_375), bVar0);
			}
			else
			{
				Global_2646729.f_201[bVar0] = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x8744D2E3FC95740E(&(Global_2646729.f_370), bVar0);
		unk_0x8744D2E3FC95740E(&(Global_2646729.f_375), bVar0);
		if (unk_0xC450B06E5AAA0985(Global_2646729[bVar0]))
		{
			func_14(bParam0);
			unk_0x861AC9C2D48CEA7F(Global_2646729[bVar0], 0);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xC450B06E5AAA0985(Global_2646729[iVar0]))
		{
			Global_2646729.f_1504[iVar0] = func_15(iParam0);
			unk_0x1456FD5C0C438B19(Global_2646729[iVar0], Global_2646729.f_1504[iVar0]);
		}
	}
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xC450B06E5AAA0985(Global_2646729[iVar0]))
		{
			iVar1 = unk_0x8FACE824AEC046E8(Global_2646729[iVar0]);
			if (BitTest(Global_2646729.f_386, iVar0) || BitTest(Global_2646729.f_385, iVar0))
			{
				return 1;
			}
			else if ((BitTest(Global_2646729.f_371, iVar0) || BitTest(Global_2646729.f_370, iVar0)) || BitTest(Global_2646729.f_388, iVar0))
			{
				return func_66(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_66(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_66(11);
						break;
					
					case 254:
						if (unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(Global_2672505))
						{
							return func_66(6);
						}
						else
						{
							return func_66(5);
						}
						break;
					
					case 271:
						if (unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(Global_2672505))
						{
							return func_66(6);
						}
						else
						{
							return func_66(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_65(Global_2672505, iParam0, -2, 0))
						{
							return func_66(6);
						}
						else
						{
							return func_66(5);
						}
						break;
					
					case 303:
					case 418:
						return func_66(10);
						break;
					
					case 364:
						if (func_20(Global_2672505, iParam0, 1))
						{
							return func_66(10);
						}
						else
						{
							return func_66(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_66(10);
						break;
					
					case 417:
						if ((func_19(iParam0) || func_18(iParam0)) || func_16(iParam0))
						{
							if (func_20(Global_2672505, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_20(Global_2672505, iParam0, 1))
						{
							return func_66(6);
						}
						else
						{
							return func_66(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_20(Global_2672505, iParam0, 1))
						{
							return func_66(6);
						}
						else
						{
							return func_66(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_17(Global_2657589[iParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
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

int func_18(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_17(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_19(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_17(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_20(int iParam0, int iParam1, bool bParam2)
{
	if (func_23(iParam0, -2, 0, 0, 0) == func_23(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_21(func_23(iParam0, -2, 0, 0, 0)) && func_21(func_23(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	if (iParam0 == func_22(1) || iParam0 == func_22(0))
	{
		return 1;
	}
	return 0;
}

int func_22(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_63(iParam0) && !bParam4)
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
	if (((func_63(unk_0x259BE71D8A81D4FA()) || (func_62() && func_61())) && !BitTest(Global_2793046.f_4690, 31)) && !bParam4)
	{
		uVar1 = func_60();
		if (unk_0xFC8BFE4B41177C22(uVar1))
		{
			if (unk_0x501EBB0523078750(uVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(uVar1) != -1)
				{
					if (func_5(unk_0x1C1C92A1CBAE364B(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_58(iParam1, iParam0, 0);
							}
							else
							{
								return func_40(iParam0, unk_0x1C1C92A1CBAE364B(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_40(iParam0, unk_0x1C1C92A1CBAE364B(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_58(iParam1, iParam0, 0);
				}
				else
				{
					return func_24(0, -1, 0);
				}
			}
			else
			{
				return func_24(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_58(iParam1, iParam0, 0);
		}
		else
		{
			return func_40(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_40(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_24(bool bParam0, int iParam1, bool bParam2)
{
	return func_25(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(iParam0);
	if ((func_39() || (func_38() && func_36())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_35(iParam2, iVar0);
		}
		else
		{
			return func_35(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_29(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_22(1);
				}
				else
				{
					return func_22(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_26(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_26(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_22(1);
	}
	return func_22(0);
}

int func_26(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, iParam1, iParam3);
	if (func_27(Global_4718592.f_113724, 1))
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

int func_27(int iParam0, bool bParam1)
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

int func_28(int iParam0, int iParam1, int iParam2)
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
			if (!func_29(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_30(iParam0, bVar0, iParam1, bVar1) || !func_30(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_30(iParam0, bVar0, iParam1, bVar1) || !func_30(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_30(iParam0, bVar0, iParam1, bVar1) || !func_30(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_30(iParam0, bVar0, iParam1, bVar1) || !func_30(iParam1, bVar1, iParam0, bVar0))
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

int func_30(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		if (((!func_5(iVar1, 1, 1) || func_32(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_31(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0x56E414973C2A8C0E(iVar1);
			if (unk_0x4FAFF4BCB7633475(uVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(uVar2);
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

var func_31(int iParam0)
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()
{
	return Global_1574918;
}

int func_35(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28(iParam1, iParam0, 4);
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

int func_36()
{
	if (func_37())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_37()
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_38()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_39()
{
	if (func_37() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	iVar2 = iParam0;
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
			if (func_48())
			{
				iVar3 = func_44(iParam0);
				if (!iVar3 == -1)
				{
					return func_42(iVar3);
				}
			}
			if ((func_65(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_29(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_22(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_41(1);
			}
			else
			{
				return func_25(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_22(1);
			}
			else
			{
				return func_25(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_44(iParam0);
	if (!iVar4 == -1)
	{
		return func_42(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_41(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_43(iParam0);
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

var func_43(int iParam0)
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_44(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_46(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_45(iParam0)];
		}
	}
	return -1;
}

int func_45(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_6();
}

bool func_46(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_47(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_6();
}

int func_47(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_6())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_48()
{
	if ((((((func_57() || func_56()) || func_55()) || func_54()) || func_53()) || func_51()) || func_49())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	return func_50(Global_4718592.f_113724);
}

int func_50(int iParam0)
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

int func_51()
{
	return func_52(Global_4718592.f_113724);
}

int func_52(int iParam0)
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

var func_53()
{
	return Global_2683864.f_24;
}

var func_54()
{
	return Global_2683864.f_21;
}

var func_55()
{
	return Global_2683864.f_19;
}

var func_56()
{
	return Global_2683864.f_18;
}

var func_57()
{
	return Global_2683864.f_17;
}

int func_58(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_48())
	{
		iVar2 = func_44(iParam1);
		if (!iVar2 == -1)
		{
			return func_42(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_6())
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
			iVar0 = func_25(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_59(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_29(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
		{
			iVar0 = func_41(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_59(int iParam0)
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

var func_60()
{
	return Global_2621446.f_2;
}

var func_61()
{
	return BitTest(Global_2621446, 4);
}

var func_62()
{
	return BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_36.f_18, 14);
}

int func_63(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_64())
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

bool func_64()
{
	return BitTest(Global_2621446, 3);
}

bool func_65(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(uParam0) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == iParam2;
	}
	return unk_0x1864096A95E36EBA(iParam0) == iParam2;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_68())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_67(iParam0);
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_68()
{
	int iVar0;
	
	iVar0 = unk_0x1864096A95E36EBA(Global_2672505);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return BitTest(Global_4718592.f_1265[iVar0 /*23466*/].f_12405, 4);
	}
	return 0;
}

void func_69(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_71(bParam0))
	{
		return;
	}
	func_70(&(Global_2646729.f_723[bParam0]), &(Global_2646729.f_1086[bParam0]), &(Global_2646729.f_393), bParam1, bParam0, bParam2, &uVar0);
}

int func_70(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)
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

int func_71(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 1;
	}
	if (unk_0x70E57E9927B6BA58(unk_0x1AF90EB93E0012D6()) == func_72())
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	switch (func_74())
	{
		case 0:
			return func_73();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_73()
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_74()
{
	return Global_32163;
}

void func_75(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_71(bParam0))
	{
		return;
	}
	if (func_70(&(Global_2646729.f_822[bParam0]), &(Global_2646729.f_1185[bParam0]), &(Global_2646729.f_367), bParam1, bParam0, bParam3, &uVar0))
	{
		func_76(bParam0, bParam2);
	}
}

void func_76(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2646729.f_368), bParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_2646729.f_368), bParam0);
	}
	if (unk_0xC450B06E5AAA0985(Global_2646729[bParam0]))
	{
		if (bParam1)
		{
			unk_0x360B279488A775FC(Global_2646729[bParam0], 0);
		}
		else
		{
			unk_0x360B279488A775FC(Global_2646729[bParam0], 1);
		}
	}
}

bool func_77(bool bParam0)
{
	return func_78(&(Global_2646729.f_822[bParam0]));
}

int func_78(var uParam0)
{
	if (unk_0xF40767E41852FB72(*uParam0))
	{
		if (!*uParam0 == unk_0x8F76B2250AC806FA())
		{
			return 0;
		}
	}
	return 1;
}

void func_79(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_71(bParam0))
	{
		return;
	}
	if (func_70(&(Global_2646729.f_624[bParam0]), &(Global_2646729.f_987[bParam0]), &(Global_2646729.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2646729.f_459[bParam0] = uParam1;
		}
	}
}

int func_80(int iParam0)
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

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iVar0 != -1)
	{
		return func_42(iVar0);
	}
	return 1;
}

bool func_82(bool bParam0)
{
	return func_78(&(Global_2646729.f_624[bParam0]));
}

void func_83(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_71(bParam0))
	{
		return;
	}
	if (func_70(&(Global_2646729.f_591[bParam0]), &(Global_2646729.f_954[bParam0]), &(Global_2646729.f_388), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2646729.f_426[bParam0] = iParam1;
		}
		if (bVar0)
		{
			func_84();
		}
	}
}

void func_84()
{
	Global_2646729.f_1655 = 1;
}

void func_85()
{
	func_2(Global_2793046.f_5225.f_753);
	unk_0xBBC29EBE6E1A48FA();
}

int func_86()
{
	if (Global_1575035 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_90())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_89())
	{
		return 1;
	}
	if (func_88(159))
	{
		if (!func_87())
		{
			return 1;
		}
	}
	if (func_88(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_72() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_72()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_87()
{
	return Global_2683864.f_698;
}

int func_88(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_89()
{
	return Global_2694526;
}

bool func_90()
{
	return Global_2683864.f_693;
}

void func_91()
{
	wait(0);
}

int func_92()
{
	unk_0xAECC5FA98C879D67(0);
	return 1;
}
