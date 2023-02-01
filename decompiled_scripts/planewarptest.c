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
	struct<3> Local_19[2];
	float fLocal_20[2] = { 0f, 0f };
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
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_1();
	}
	unk_0x925970A93719CADE(1);
	unk_0xEC9DAA34BBB4658C(joaat("cuban800"));
	while (!unk_0x6252BC0DD8A320DB(joaat("cuban800")))
	{
		wait(0);
	}
	Local_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	Local_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 1220.202f, 3596.281f, 33.259f, 1, 0, 0, 1);
	}
	unk_0x6C39BDF5EA5D38FC(1220.202f, 3596.281f, 33.259f);
	uLocal_18 = unk_0x5779387E956077A6(joaat("cuban800"), Local_19[0 /*3*/], fLocal_20[0], 1, 1, 0);
	unk_0x1DE99C193C7EC64B(uLocal_18, 1084227584);
	unk_0x55098D9E9AD58806(joaat("cuban800"));
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), uLocal_18, -1);
	}
	while (true)
	{
		func_1();
		wait(0);
	}
}

void func_1()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_18))
	{
		unk_0x8C1F7D7A31B2A38E(&uLocal_18);
	}
	unk_0x55098D9E9AD58806(joaat("cuban800"));
	unk_0xBBC29EBE6E1A48FA();
}
