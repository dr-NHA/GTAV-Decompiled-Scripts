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
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	
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
	iVar0 = -1;
	bVar1 = false;
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_5();
	}
	while (true)
	{
		if (!bVar1)
		{
			switch (func_1(unk_0x4A8C381C258A124D()))
			{
				case 1:
					if (unk_0xB3157976738FC0C0("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						unk_0x64B3EF30EAA9FBA3();
						bVar1 = true;
					}
					break;
				
				case 2:
					if (unk_0xB3157976738FC0C0("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						unk_0x64B3EF30EAA9FBA3();
						bVar1 = true;
					}
					break;
				
				default:
					if (unk_0xB3157976738FC0C0("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						unk_0x64B3EF30EAA9FBA3();
						bVar1 = true;
					}
					break;
			}
		}
		else if (iVar0 == -1)
		{
			iVar0 = unk_0x1DD05E817C89C737();
		}
		else if (unk_0x1DD05E817C89C737() > iVar0 + 8000)
		{
			func_5();
		}
		wait(0);
	}
}

int func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_2(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_2(int iParam0)
{
	if (func_4(iParam0))
	{
		return func_3(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_3(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

bool func_4(int iParam0)
{
	return iParam0 < 3;
}

void func_5()
{
	unk_0x22A76EDE2316E9A1();
	unk_0xBBC29EBE6E1A48FA();
}
