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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	struct<3> Local_30 = { 0, 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	iLocal_29 = -1;
	Local_30 = { 0f, 0f, 0f };
	if (unk_0x96CFB880BAC634CE(2))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		wait(0);
		if (!unk_0x76CD105BCAC6EB9F())
		{
			unk_0xBBC29EBE6E1A48FA();
		}
		if (func_23(unk_0x259BE71D8A81D4FA()) && unk_0xFC8BFE4B41177C22(func_22()))
		{
			uLocal_31 = func_22();
		}
		else
		{
			uLocal_31 = unk_0x4A8C381C258A124D();
		}
		if (unk_0x1C2F771CDC87A3A5(uLocal_31, 0))
		{
		}
		func_1();
	}
}

void func_1()
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	
	func_21();
	if (iLocal_29 != -1 && func_20(iLocal_29))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_31, 0) };
		Var1 = { func_19(iLocal_29) };
		if (vdist2(Var1, Var0) < IntToFloat(func_18(iLocal_29)))
		{
			bVar2 = false;
			iVar3 = 0;
			iVar3 = 0;
			while (iVar3 < func_17(iLocal_29))
			{
				if (!bVar2)
				{
					if (unk_0x5105BE70DEF1F5FB(uLocal_31, func_16(iLocal_29, iVar3), func_15(iLocal_29, iVar3), func_14(iLocal_29, iVar3), 0, 1, 0))
					{
						bVar2 = true;
					}
				}
				iVar3++;
			}
			if (bVar2)
			{
				unk_0xF42A811582CF3AE1(unk_0x70E57E9927B6BA58(func_13(iLocal_29)), Var1.f_0, Var1.f_1, func_12(iLocal_29), func_11(iLocal_29));
				func_10(iLocal_29);
			}
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_2())
		{
			if (BitTest(uLocal_32, 1))
			{
				unk_0x8744D2E3FC95740E(&uLocal_32, 1);
			}
			if (unk_0x4D9174D8796EA622())
			{
				if (!BitTest(uLocal_32, 0))
				{
					unk_0xA3EA82ACD0C97C3F(15, 1, -1);
					unk_0x0B0C9A0F9AAEB7F0(&uLocal_32, 0);
				}
			}
			else if (BitTest(uLocal_32, 0))
			{
				unk_0xA3EA82ACD0C97C3F(15, 0, -1);
				unk_0x8744D2E3FC95740E(&uLocal_32, 0);
			}
		}
		else if (!BitTest(uLocal_32, 1))
		{
			unk_0xA3EA82ACD0C97C3F(15, 0, -1);
			unk_0x8744D2E3FC95740E(&uLocal_32, 0);
			unk_0x0B0C9A0F9AAEB7F0(&uLocal_32, 1);
		}
	}
}

int func_2()
{
	int iVar0;
	
	if (func_7(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_5(unk_0x259BE71D8A81D4FA(), 1))
	{
		iVar0 = func_4();
		if (iVar0 != func_3())
		{
			if (func_7(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3()
{
	return -1;
}

var func_4()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

bool func_5(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_3();
}

int func_6(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_3())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (func_9(iParam0))
	{
		iVar0 = func_8(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_8(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293;
	}
	return 0;
}

int func_9(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1853910[iParam0 /*862*/].f_267.f_293 != 0;
	}
	return 0;
}

void func_10(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_31, 0) };
	unk_0x83F9B9189E65251B(Var0.f_0, Var0.f_1);
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_31, 0) };
			unk_0x83F9B9189E65251B(Var0.f_0, Var0.f_1);
			break;
		
		case 3:
			unk_0xBB6D152B544953A3();
			break;
		
		case 4:
			unk_0xBB6D152B544953A3();
			break;
	}
}

int func_11(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_31, 0) };
			if (Var0.f_2 < 9.7796f)
			{
				return 0;
			}
			else if (Var0.f_2 > 9.7796f && Var0.f_2 < 16f)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		
		case 2:
			Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_31, 0) };
			if (Var0.f_2 < 178.9f)
			{
				return 0;
			}
			else if (Var0.f_2 > 178.9f && Var0.f_2 < 188.7f)
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
	}
	return 0;
}

int func_12(int iParam0)
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
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
	}
	return 0;
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "V_FakeBoatPO1SH2A";
			break;
		
		case 1:
			return "V_FakeWarehousePO103";
			break;
		
		case 2:
			return "V_FakeKortzCenter";
			break;
		
		case 3:
			return "V_FakePrison";
			break;
		
		case 4:
			return "V_FakeMilitaryBase";
			break;
	}
	return "";
}

float func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 28.125f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 32.6875f;
					break;
				
				case 1:
					return 13.1875f;
					break;
				
				case 2:
					return 16.25f;
					break;
				
				case 3:
					return 21.75f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95f;
					break;
				
				case 1:
					return 78.75f;
					break;
				
				case 2:
					return 70.6875f;
					break;
				
				case 3:
					return 64.4375f;
					break;
				
				case 4:
					return 32.375f;
					break;
				
				case 5:
					return 19f;
					break;
				
				case 6:
					return 19f;
					break;
				
				case 7:
					return 19.78125f;
					break;
				
				case 8:
					return 32.0625f;
					break;
				
				case 9:
					return 35.8125f;
					break;
				
				case 10:
					return 30.5f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3000f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1500f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.537f, -3057.289f, 40.75164f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.27837f, -2654.244f, 20.9423f;
					break;
				
				case 1:
					return 13.93163f, -2654.561f, 14.44239f;
					break;
				
				case 2:
					return 55.59572f, -2667.499f, 10.82245f;
					break;
				
				case 3:
					return 34.5866f, -2746.387f, 10.95006f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2169.17f, 256.7264f, 203.4081f;
					break;
				
				case 1:
					return -2216.394f, 329.4761f, 201.3617f;
					break;
				
				case 2:
					return -2345.353f, 350.7882f, 189.6522f;
					break;
				
				case 3:
					return -2288.097f, 388.9909f, 200.9045f;
					break;
				
				case 4:
					return -2310.263f, 406.638f, 200.9041f;
					break;
				
				case 5:
					return -2169.221f, 260.5679f, 202.4294f;
					break;
				
				case 6:
					return -2258.778f, 166.9506f, 202.8318f;
					break;
				
				case 7:
					return -2236.973f, 285.5958f, 203.0395f;
					break;
				
				case 8:
					return -2211.362f, 303.6741f, 214.9323f;
					break;
				
				case 9:
					return -2282.098f, 383.0904f, 201.0395f;
					break;
				
				case 10:
					return -2277.93f, 356.4442f, 201.1015f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 200f, 2600f, -5f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1451.205f, 2689.44f, -37.62654f;
					break;
			}
			break;
	}
	return Local_30;
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.535f, -2880.354f, -19.96489f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.15308f, -2747.067f, 1.137565f;
					break;
				
				case 1:
					return 13.95777f, -2700.626f, 5.046232f;
					break;
				
				case 2:
					return 55.61185f, -2687.681f, 5.005801f;
					break;
				
				case 3:
					return 34.56926f, -2759.479f, -0.030933f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2317.38f, 191.6319f, 165.4037f;
					break;
				
				case 1:
					return -2357.995f, 264.0297f, 162.7988f;
					break;
				
				case 2:
					return -2261.433f, 387.3963f, 154.3522f;
					break;
				
				case 3:
					return -2326.399f, 408.3378f, 140.3182f;
					break;
				
				case 4:
					return -2304.617f, 460.2127f, 140.2147f;
					break;
				
				case 5:
					return -2150.825f, 216.4168f, 162.8012f;
					break;
				
				case 6:
					return -2172.765f, 203.5957f, 167.4135f;
					break;
				
				case 7:
					return -2191.036f, 305.961f, 159.625f;
					break;
				
				case 8:
					return -2227.613f, 340.0587f, 165.1357f;
					break;
				
				case 9:
					return -2244.41f, 399.5764f, 137.5101f;
					break;
				
				case 10:
					return -2243.261f, 371.4072f, 137.2722f;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3200f, 2600f, 3000f;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2841.107f, 3506.837f, 1000.474f;
					break;
			}
			break;
	}
	return Local_30;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 4;
			break;
		
		case 2:
			return 11;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10000;
			break;
		
		case 1:
			return 10000;
			break;
		
		case 2:
			return 250000;
			break;
		
		case 3:
			return 9000000;
			break;
		
		case 4:
			return 2250000;
			break;
	}
	return 0;
}

Vector3 func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1240f, -2970f, 12.2f;
			break;
		
		case 1:
			return 40f, -2720f, 12f;
			break;
		
		case 2:
			return -2250f, 300f, 182.2f;
			break;
		
		case 3:
			return 1700f, 2580f, 80f;
			break;
		
		case 4:
			return -2250f, 3100f, 80f;
			break;
	}
	return Local_30;
}

int func_20(int iParam0)
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
			break;
	}
	return 1;
}

void func_21()
{
	struct<3> Var0;
	
	iLocal_28++;
	if (iLocal_28 > 4)
	{
		iLocal_28 = 0;
	}
	if (iLocal_28 != iLocal_29)
	{
		if (iLocal_29 == -1)
		{
			iLocal_29 = iLocal_28;
		}
		else
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_31, 0) };
			if (vdist2(func_19(iLocal_28), Var0) < vdist2(func_19(iLocal_29), Var0))
			{
				iLocal_29 = iLocal_28;
			}
		}
	}
}

var func_22()
{
	return Global_2621446.f_2;
}

int func_23(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_24())
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

bool func_24()
{
	return BitTest(Global_2621446, 3);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1574918;
}
