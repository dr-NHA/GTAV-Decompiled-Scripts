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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	struct<5> Local_56 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (unk_0x96CFB880BAC634CE(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_56 };
	func_177();
	func_176();
	func_171(iLocal_44, 0, 0);
	settimera(0);
	func_170();
	func_166();
	while (true)
	{
		wait(0);
		func_165(iLocal_44);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_44, 0, 0);
		func_177();
		func_9();
		if ((unk_0x76CD105BCAC6EB9F() && !unk_0x834C960822A4683F()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2684800)
	{
		Global_4718592.f_113724 = 0;
	}
}

bool func_3()
{
	return Global_2683864.f_691;
}

bool func_4()
{
	return Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_192 != 0;
}

void func_5()
{
	Global_2683864.f_756 = 1;
}

var func_6()
{
	return Global_2683864.f_735;
}

var func_7()
{
	return BitTest(Global_2683864.f_2, 11);
}

bool func_8()
{
	return BitTest(Global_2684801.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
	{
		func_178();
	}
	if (bLocal_46)
	{
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			func_178();
		}
	}
	func_154();
	bVar0 = true;
	switch (Local_52.f_0)
	{
		case 4:
			func_153();
			return;
		
		case 5:
			func_150();
			return;
		
		case 6:
			func_148();
			return;
		
		case 7:
			func_147();
			return;
		
		case 8:
			func_146();
			return;
		
		case 9:
			func_144();
			return;
		
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		
		case 11:
			func_138();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_52.f_0 == 12)
	{
		return;
	}
	switch (Local_52.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!BitTest(Global_1950108.f_3, 27))
	{
		unk_0xB1C2DC5C115FA50D(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1944403 = 1;
	if (!unk_0x15CCE8886267624F())
	{
		unk_0x8F72AF14CE5AACE4(2500);
		while (unk_0x78ABC1D11B34F324())
		{
			wait(0);
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_105(&uVar0, 0, 0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0x091AB029AFE429F2(unk_0x4A8C381C258A124D(), 0, 1);
		}
		while (((unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0)) && unk_0xC8D49539708A80B4(unk_0x4A8C381C258A124D())) && unk_0x6BF8FE9F26BBABDE(unk_0x4A8C381C258A124D()))
		{
			wait(0);
		}
		if (!unk_0xC8D49539708A80B4(unk_0x4A8C381C258A124D()))
		{
			func_178();
		}
		unk_0x8744D2E3FC95740E(&(Global_1950108.f_3), 27);
		func_91(unk_0x259BE71D8A81D4FA(), 0, 57344, 0);
		Global_2635559.f_2681 = 1;
		if (BitTest(Global_1950108, 15))
		{
			unk_0x8744D2E3FC95740E(&Global_1950108, 15);
		}
		if (BitTest(Global_1950108.f_2, 6))
		{
			unk_0x8744D2E3FC95740E(&(Global_1950108.f_2), 6);
		}
		if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
		{
			Global_2635559.f_2682 = 1;
		}
		else
		{
			Global_2635559.f_2682 = 0;
		}
		if (unk_0x12B42434831D668E())
		{
			unk_0xB9AB3B8920F1AA69(0);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_178();
	}
	if (bLocal_55)
	{
		func_178();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar3 = 4;
				}
				if (func_64(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_62())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2.f_0 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2.f_0 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2.f_0 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2.f_0 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2.f_0 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2.f_0 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
	{
		unk_0xB2BD5837A8D3CEDA(Local_43.f_1, Var2.f_5, 1, 0, 0, 1);
	}
	wait(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_178();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59104[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59104[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59104[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	var uVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	var uVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), false, 0);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 1);
	}
	unk_0xA69DCC67B2B61AD1(uParam1->f_5, 4500f);
	unk_0x5926A824AF54BCC3(uParam1->f_5, 4500f);
	unk_0x2094BC4B6731BA68(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), true);
	wait(0);
	unk_0x98E393364463951A(1);
	unk_0x80813AC549A1E8AE(*uParam1);
	if (unk_0xD6F9DEE4765092A9(uParam1->f_16))
	{
	}
	else
	{
		unk_0x80813AC549A1E8AE(uParam1->f_16);
	}
	if (!unk_0x15CCE8886267624F())
	{
		unk_0x8F72AF14CE5AACE4(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x15CCE8886267624F())
	{
		unk_0x8F72AF14CE5AACE4(0);
	}
	iVar1 = unk_0x1DD05E817C89C737() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x1DD05E817C89C737())
	{
		bVar2 = true;
		unk_0x80813AC549A1E8AE(*uParam1);
		if (!unk_0xE100DD4F82A51BDE(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xD6F9DEE4765092A9(uParam1->f_16))
		{
			unk_0x80813AC549A1E8AE(uParam1->f_16);
			if (!unk_0xE100DD4F82A51BDE(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x15CCE8886267624F())
		{
			unk_0x8F72AF14CE5AACE4(0);
		}
		wait(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xD1B0AF388B711EBC(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x60040CDD28AA1BC3(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0, 0);
		unk_0x2094BC4B6731BA68(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
		unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
	}
	unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
	unk_0x98E393364463951A(0);
	unk_0x2094BC4B6731BA68(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x337117D37E592B05();
	unk_0x6874AA782954505E();
	func_51();
	while (func_50())
	{
		wait(0);
	}
	if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
	{
		unk_0x10B228D2FDB7AF16(250);
	}
	unk_0x40AC02FA167D4D0A(1);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		iVar4 = unk_0x2EC137C692A52458(uParam1->f_5, uParam1->f_8, 2);
		unk_0xBF3497E24DEAD835(iVar4, 0);
		unk_0xA7C372501A8A3B23(iVar4, 0);
		uVar5 = unk_0x69D23632E4288DBD("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_48(unk_0x4A8C381C258A124D(), uParam1->f_18);
		unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x711F9BE10FCB4E6B(unk_0x4A8C381C258A124D(), 1);
		unk_0xE00868707690F6A7(unk_0x259BE71D8A81D4FA(), 1);
		iVar3 = unk_0x025281901DECB32C(unk_0x4A8C381C258A124D(), 77);
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 77, 1);
		unk_0xF9B66DAE101B699C(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
		if (!unk_0xD6F9DEE4765092A9(uParam1->f_16) && !unk_0xD6F9DEE4765092A9(uParam1->f_17))
		{
			unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xD6F9DEE4765092A9(&(uParam1->f_11)))
	{
		iVar10 = func_67();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, unk_0x4A8C381C258A124D(), sVar12, 0, 1);
	}
	if (unk_0x5266F1D2AEF6F73A(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (unk_0x5266F1D2AEF6F73A(iVar4) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x15CCE8886267624F())
				{
					if (!unk_0xD6F9DEE4765092A9(uParam1->f_26))
					{
						unk_0xDCAFFD08A08087EB(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xD6F9DEE4765092A9(uParam1->f_27))
					{
						if (!unk_0xD6F9DEE4765092A9(uParam1->f_28))
						{
							unk_0xBF3D28CA44F3BE2D(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xD6F9DEE4765092A9(uParam1->f_29))
						{
							unk_0xBF3D28CA44F3BE2D(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x43AE50D2A33F6E2A();
			unk_0x4EB223432F8FA0A0(18);
			unk_0xF64D9910FB38427C();
			func_40(0);
			iVar15 = unk_0x1DD05E817C89C737();
			if (iVar15 >= (Global_43808 - 500))
			{
				func_39(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = unk_0xBD3B265153D3BA2D(iVar4);
			if (!unk_0xD6F9DEE4765092A9(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58(sVar13)))
			{
				iVar19 = (unk_0x6C29A57AC29D7033(2, 195) - 128);
				iVar20 = (unk_0x6C29A57AC29D7033(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (unk_0x3B5989D5DB08A155() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						Var22 = { unk_0x02AF3EA0F67D2329() };
						Var23 = { unk_0x83FDC027F0BEA202(unk_0x4A8C381C258A124D(), 31086, 0f, 0f, 0f) };
						fVar24 = unk_0xED977E2AE2CB16EE(Var22, Var23, 1);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0x4A8C381C258A124D(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x1DD05E817C89C737();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var27 = { unk_0x958849BB56EC0F07(2) };
							uVar28 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
							fVar29 = Var27.f_2;
							fVar30 = uVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						unk_0xD815D4BD1AE9E85A(fVar25, 1065353216);
						unk_0x64BB72494B9DF6DC(fVar26);
						unk_0x7E08E86FBA713FE8(fVar25);
						unk_0xE0A23567157E9B5E(fVar26);
						Var31 = { unk_0x02AF3EA0F67D2329() };
						Var32 = { unk_0xCF141FCD0940B0A3() };
						fVar33 = unk_0xED977E2AE2CB16EE(Var31, Var32, 1);
						iVar34 = round((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x5FD79E92E62966FB();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58(sVar14)) || iVar18)
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x717804C8C8DA67BF(unk_0x4A8C381C258A124D(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 500, 0, 1, 0);
							if (unk_0x3B5989D5DB08A155() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var37 = { unk_0x958849BB56EC0F07(2) };
									uVar38 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
									fVar39 = Var37.f_2;
									fVar40 = uVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								unk_0xD815D4BD1AE9E85A(fVar35, 1065353216);
								unk_0x64BB72494B9DF6DC(fVar36);
								Var41 = { unk_0x02AF3EA0F67D2329() };
								Var42 = { unk_0xCF141FCD0940B0A3() };
								fVar43 = unk_0xED977E2AE2CB16EE(Var41, Var42, 1);
								iVar44 = round((fVar43 * 1000f));
								unk_0xE37AF9002E782BA0(0, 1, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x5266F1D2AEF6F73A(iVar4))
					{
						unk_0x83E8210E2B5723F2(iVar4);
						iVar4 = -1;
					}
				}
			}
			wait(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x33B6B083EA6305A5(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), true, 0);
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
	}
	bVar45 = unk_0xE976C85F4B1CF1A2();
	bVar46 = false;
	if (uParam1->f_32)
	{
		unk_0x5FD79E92E62966FB();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !unk_0x3555462DB47B7AB1())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			wait(0);
			bVar45 = unk_0xE976C85F4B1CF1A2();
			bVar46 = false;
			if (uParam1->f_32)
			{
				unk_0x5FD79E92E62966FB();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!unk_0xD6F9DEE4765092A9(uParam1->f_16))
	{
		unk_0x268BE77F77533D03(uParam1->f_16);
	}
	unk_0x268BE77F77533D03(*uParam1);
	unk_0x85E6A1E36B5E2E4D(uVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 77, iVar3);
		unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0x78411E34CF90EA8C(uParam0->f_1))
	{
		unk_0x85E6A1E36B5E2E4D(uParam0->f_1, 0);
	}
	if (unk_0x78411E34CF90EA8C(uParam0->f_2))
	{
		unk_0x85E6A1E36B5E2E4D(uParam0->f_2, 0);
	}
	if (unk_0x78411E34CF90EA8C(uParam0->f_3))
	{
		unk_0x85E6A1E36B5E2E4D(uParam0->f_3, 0);
	}
	if (unk_0x78411E34CF90EA8C(uParam0->f_4))
	{
		unk_0x85E6A1E36B5E2E4D(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0x66EFB3D6110055C4(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	var uVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!unk_0x1C2F771CDC87A3A5(uParam0->f_5, 0))
			{
				func_14(uParam0);
				Var0 = { unk_0x02AF3EA0F67D2329() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xE5741C6B6539231F(uParam0->f_5) * FtoV(unk_0x0B852B0BF94A8DC1()) };
				}
				Var1 = { unk_0xAD8278DAEC2CC059(uParam0->f_5, Var0) };
				Var2 = { unk_0x958849BB56EC0F07(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - unk_0x88124E0D60FB8D11(uParam0->f_5, 2) };
				Var5 = { (-sin(Var3.f_2) * cos(Var3.f_0)), (cos(Var3.f_2) * cos(Var3.f_0)), sin(Var3.f_0) };
				Var6 = { (-sin(Var4.f_2) * cos(Var4.f_0)), (cos(Var4.f_2) * cos(Var4.f_0)), sin(Var4.f_0) };
				uVar7 = unk_0xB99978989A0F4E57();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xBB209150C6081BBE(1775630800, 0);
				}
				uParam0->f_1 = unk_0xBB209150C6081BBE(26379945, 1);
				if (bParam1)
				{
					unk_0x03F10D56CCA2C055(uParam0->f_1, uParam0->f_5, Var1, 1);
				}
				else
				{
					unk_0x1761457F86AD0EE2(uParam0->f_1, Var0);
				}
				unk_0x5E5CEC33463AD803(uParam0->f_1, Var2, 2);
				unk_0x58BDA5D9262F5D30(uParam0->f_1, uVar7);
				uParam0->f_2 = unk_0xBB209150C6081BBE(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x03F10D56CCA2C055(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x1761457F86AD0EE2(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x5E5CEC33463AD803(uParam0->f_2, Var2, 2);
				unk_0x58BDA5D9262F5D30(uParam0->f_2, uVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xBB209150C6081BBE(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x03F10D56CCA2C055(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x1761457F86AD0EE2(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x5E5CEC33463AD803(uParam0->f_4, Var2, 2);
					unk_0x58BDA5D9262F5D30(uParam0->f_4, uVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xF5317F0839442D94(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x859FFC7F5DEC29DE(uParam0->f_3, iParam6);
					unk_0x4CBC5D1BC117616B(uParam0->f_3, 1);
				}
				else
				{
					unk_0xB56F35D8A770F80F(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x1DD05E817C89C737();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x1DD05E817C89C737() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xDCAFFD08A08087EB("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xDCAFFD08A08087EB("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xDCAFFD08A08087EB("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xDCAFFD08A08087EB("CamPushInNeutral", 0, 0);
						}
						unk_0xBF3D28CA44F3BE2D(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x1DD05E817C89C737() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	unk_0xC0964AABD3C0CC7E();
	func_18();
}

void func_18()
{
	Global_23131.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_37();
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
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_35();
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
				func_33();
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
				if (func_32())
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
			if (func_31())
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
			func_30();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_29();
		func_24();
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
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
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

int func_25()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0x259BE71D8A81D4FA()))
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

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
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

void func_30()
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

int func_31()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
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

void func_33()
{
	if (func_34(14))
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
		Global_20383 = func_67();
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

bool func_34(int iParam0)
{
	return Global_43257 == iParam0;
}

void func_35()
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

bool func_36(int iParam0, int iParam1)
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

void func_37()
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_39(int iParam0)
{
	Global_43808 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_20383.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8254, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_20383.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return BitTest(Global_1962996, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return BitTest(Global_1962996, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_47(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		unk_0x5909C9E03CEF097D(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97614[iVar0 /*17*/] && !Global_97614[iVar0 /*17*/].f_1)
		{
			if (Global_97614[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_97614[iVar0 /*17*/].f_5 != 88 && Global_97614[iVar0 /*17*/].f_5 != 89) && Global_97614[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_97614[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
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

bool func_53(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_44232[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_171(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_44206[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44206[iParam0 /*5*/].f_1 == unk_0x4A8C381C258A124D())
		{
			Global_44444 = 0;
		}
	}
	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = (Global_44204 - 1);
	if (Global_44204 < 0)
	{
		Global_44204 = 0;
	}
}

int func_57(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		func_61(0);
		unk_0x2094BC4B6731BA68(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam1);
				unk_0xD815D4BD1AE9E85A(0f, 1065353216);
				unk_0x64BB72494B9DF6DC(0f);
			}
		}
		unk_0x4A3280817398D754(Param0, 4500f, 0);
		wait(0);
		unk_0x2094BC4B6731BA68(Param0, 5000f, 1, 0, 0, 0);
		unk_0xBAAB54D57B40765E(Param0, 5000f, 0);
		unk_0xA69DCC67B2B61AD1(Param0, 5000f);
		unk_0x5926A824AF54BCC3(Param0, 5000f);
		func_60();
		func_59();
		settimera(0);
		func_61(1);
		if (!unk_0x787F8EE1F6FBDC6D())
		{
			while (!unk_0x4A3280817398D754(Param0, 4500f, 0))
			{
				wait(0);
				if (timera() > 2000)
				{
					unk_0x98E393364463951A(0);
					return 0;
				}
			}
		}
		settimera(0);
		while (!unk_0x9E2D35FA908F57B4())
		{
			wait(0);
			if (timera() > 20000)
			{
				unk_0x98E393364463951A(0);
				if (unk_0x787F8EE1F6FBDC6D())
				{
					unk_0x6981C3213B841071();
				}
				return 0;
			}
		}
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x787F8EE1F6FBDC6D())
				{
					unk_0x6981C3213B841071();
				}
				unk_0x98E393364463951A(0);
				settimera(0);
				unk_0x337117D37E592B05();
				if (iParam3 == 1)
				{
					unk_0x6874AA782954505E();
				}
				else
				{
					settimera(5000);
				}
				unk_0x1BBEB35757ED1961();
			}
		}
		while ((!unk_0xEA02634993F717CE() && !func_58()) && timera() < 1500)
		{
			wait(0);
		}
		if (timera() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			unk_0xB1EAADCB692D69CE(Param0, &(Param0.f_2), 0, 0);
			unk_0x2094BC4B6731BA68(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 1, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uParam1);
				}
			}
		}
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_77348.f_553;
}

void func_59()
{
	Global_77348.f_553 = 1;
	Global_77348.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_77348[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(Global_100681.f_20, 2))
			{
				unk_0x98E393364463951A(1);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_100681.f_20), 2);
			}
		}
		else if (BitTest(Global_100681.f_20, 2))
		{
			unk_0x98E393364463951A(0);
			unk_0x8744D2E3FC95740E(&(Global_100681.f_20), 2);
		}
	}
}

int func_62()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_40195[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_71(Global_113648.f_2365.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_70(unk_0x4A8C381C258A124D());
			if (func_69(iVar0) && (!func_34(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_69(Global_113648.f_2365.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	unk_0x9B669C0440D2AB57(0f);
	unk_0xC30B691CAD767629(0f);
	unk_0xB3CAD109683148E3(0f);
	unk_0x9AFEC71EEA2F7754(1);
	unk_0xAD0E20104A60B568(0f);
	unk_0xDB37962FDFC63FD7(1);
	unk_0xC5EE3F8EC7822462(0);
	if (unk_0xBC2EE32DE886BD08("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xB43467C43086A6A1("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xD6F9DEE4765092A9(&Global_44424))
	{
		if (unk_0xBC2EE32DE886BD08(&Global_44424))
		{
			unk_0xB43467C43086A6A1(&Global_44424);
		}
	}
	if (unk_0x78411E34CF90EA8C(Global_44412))
	{
		if (unk_0xDD87838D03B64B0A(Global_44412))
		{
			unk_0x17F06E9D89A05855(Global_44412, 0f);
			unk_0x584EE85BE0BFA70E(Global_44412, 1);
		}
	}
	if (unk_0x12B42434831D668E())
	{
		unk_0xB9AB3B8920F1AA69(0);
	}
	if (bParam0)
	{
		if (unk_0x8960847E5FD7B48F() != -1 || unk_0x765B41E82372AA97() != -1)
		{
			unk_0x80F87A4A3B930613();
		}
		else if (unk_0x3555462DB47B7AB1())
		{
			unk_0x80F87A4A3B930613();
		}
	}
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
	StringCopy(&Global_44424, "", 64);
	StringCopy(&Global_44440, "", 16);
	func_74();
}

void func_74()
{
	Global_44411 = 0;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	StringCopy(&Global_44420, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18161;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18151;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18162;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18154;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18150;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18165;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18166;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18169;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18170;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18163;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19055;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19054;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x038FC0304403CC66(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(3971, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10.f_468 = iVar0;
	func_77(3971, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1574918;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2805029[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	Global_1894573[iVar0 /*608*/].f_10.f_467 = (Global_1894573[iVar0 /*608*/].f_10.f_467 + iParam0);
	if (Global_1894573[iVar0 /*608*/].f_10.f_467 < -9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
	else if (Global_1894573[iVar0 /*608*/].f_10.f_467 > 9999)
	{
		Global_1894573[iVar0 /*608*/].f_10.f_467 = 9999;
	}
}

int func_82()
{
	if (Global_1947733.f_3 != 0)
	{
		return Global_1947733.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1947733.f_2 != 0)
	{
		return Global_1947733.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1894573[iParam0 /*608*/].f_10.f_8[0];
}

int func_86()
{
	return Global_1894573[unk_0x259BE71D8A81D4FA() /*608*/].f_10;
}

bool func_87(bool bParam0)
{
	return func_88(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_28() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_28())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_104())
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
		if (!func_102())
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
			iVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || (!func_100(unk_0x259BE71D8A81D4FA(), 0) && !func_99()))
				{
					unk_0x4285E11B28063EE0(iVar27, !bVar14, 0);
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
					func_96(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_95(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(iVar27, false);
					}
					unk_0x11C125313CB8ADA2(iVar27, 1);
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
					func_94();
					func_93();
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
				if (!func_95(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
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
					if (func_92(Global_4718592.f_166301))
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

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	struct<3> Var0;
	
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_94()
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[unk_0x259BE71D8A81D4FA() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 1))
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

void func_96(int iParam0, int iParam1, int iParam2)
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
				func_98();
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
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 1);
			}
		}
		if (func_100(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_98()
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
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_99()
{
	return BitTest(Global_2621446, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_101(-1, 0) == 8;
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

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1574632.f_18;
}

int func_104()
{
	if (BitTest(Global_1853910[unk_0x259BE71D8A81D4FA() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
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

void func_106()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_44232[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0xC5935DFB3F39785A(500, 3000);
	Local_52.f_0 = 5;
	Local_51.f_2 = (timera() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x4FAFF4BCB7633475(Local_43.f_1))
	{
		if (unk_0x7F420695E3F776FB(Local_43.f_1, 0) || unk_0x9D6DF8F3584AAC2B(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x642A49B0C066F723(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0) && Global_44232[iLocal_54 /*5*/].f_3 > Global_44232[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_44232[iLocal_54 /*5*/].f_4 < 9 && Global_44232[iLocal_54 /*5*/].f_4 != 0) && Global_44232[iLocal_54 /*5*/].f_4 > Global_44232[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	uVar1 = func_113(iParam0);
	if (unk_0xD6F9DEE4765092A9(uVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	unk_0x73DEEAB0747FB17C(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0xD6F9DEE4765092A9(sVar2) && !unk_0xD6F9DEE4765092A9(sVar3))
		{
			unk_0x80813AC549A1E8AE(sVar2);
			while (!unk_0xE100DD4F82A51BDE(sVar2))
			{
				wait(0);
			}
			if (!unk_0x4FAFF4BCB7633475(Local_43.f_1))
			{
				unk_0x10425721983AE158(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!unk_0x8175BC6D49412468(sVar1))
	{
		return 0;
	}
	if (unk_0x4FAFF4BCB7633475(Local_43.f_1))
	{
		return 0;
	}
	unk_0x4669032A1DFBB449(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x3B5989D5DB08A155() == 4)
	{
		unk_0x696095B298957860(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0xCC2D0738666FD62D(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_52.f_2 = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0x501EBB0523078750(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xB98B1A5B59BC5065(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x2C09C6B54CFCFAF1(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x0FB8E752BCC547A9(Local_43.f_1, 200, 1);
	unk_0x0FB8E752BCC547A9(Local_43.f_1, 46, 1);
	unk_0xC1BC1B8A5AA67C6B(Local_43.f_1, 0);
	unk_0x1CA08719184AFC6F(Local_43.f_1, 262144, 1);
	unk_0x8A19BA162BA1DE3E(Local_43.f_1, 1);
	return 1;
}

bool func_108()
{
	return func_109(unk_0x259BE71D8A81D4FA());
}

int func_109(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 1) || unk_0x9D6DF8F3584AAC2B(iParam0))
	{
		return 0;
	}
	if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_play_anim")) != 7)
	{
		return 0;
	}
	if (unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_synchronized_scene")) != 7)
	{
		return 0;
	}
	if (unk_0x65F146FF416F109F(iParam0))
	{
		return 0;
	}
	if (unk_0x3F18810075C77D41(iParam0))
	{
		return 0;
	}
	if (unk_0x8BF5256C439DF778(iParam0))
	{
		return 0;
	}
	if (unk_0x7CB06BFD42FB0E24(iParam0))
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == unk_0x4A8C381C258A124D())
	{
		if (!unk_0x566C977EEAE1C0D1(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
		if (unk_0x1C751EF63BF4D501(unk_0x259BE71D8A81D4FA()) || unk_0x4F035D45FC2856F8(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	Var0 = { unk_0xE5741C6B6539231F(iParam0) };
	if (vmag2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_100733.f_388 > 0;
}

bool func_112()
{
	return unk_0x1DD05E817C89C737() <= Global_23270.f_6321 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

int func_114(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_115(iParam0);
	uVar1 = func_113(iVar0);
	if (unk_0xD6F9DEE4765092A9(Local_52.f_2))
	{
		if (unk_0xD6F9DEE4765092A9(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x1B79E937E91F40C3(Local_52.f_2, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_44232[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44232[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44232[iVar0 /*5*/].f_1)
		{
			return Global_44232[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;
	
	if (Local_51.f_0 == -2)
	{
		return -2;
	}
	if (Local_51.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51.f_0 - timera());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		Local_52.f_0 = 5;
		Local_51.f_2 = timera() + 5000;
		return;
	}
	Local_52.f_0 = 6;
}

bool func_120()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xD1A6A821F5AC81DB(Local_43.f_1, 1) };
	Var1 = { unk_0xD1A6A821F5AC81DB(Local_43.f_4, 1) };
	fVar2 = unk_0xED977E2AE2CB16EE(Var0, Var1, 1);
	return fVar2 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x4A8C381C258A124D())
	{
		unk_0x66EFB3D6110055C4(0, 36, 1);
		if (unk_0xC2BF1F6F84E31EB2(Local_43.f_1))
		{
			if (Global_44232[iLocal_54 /*5*/].f_2 == 0 || Global_44232[iLocal_54 /*5*/].f_2 == 2)
			{
				unk_0xF9358C41CC69C616(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xDC91B9320E14F119(Local_43.f_1))
		{
			unk_0xD0B00571D4BDDC97(Local_43.f_1, 0);
		}
	}
	if (Local_51.f_0 != -2)
	{
		if (Local_51.f_0 == -1)
		{
			if (Global_44232[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_44232[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51.f_0 - timera());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_44232[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_44232[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_44232[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_44232[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_44232[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_44232[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_44232[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xD6F9DEE4765092A9(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x13CCB1AD131C1082(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				unk_0x08D8528BA8E43641(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_44232[iLocal_54 /*5*/].f_3 >= 10 || Global_44232[iLocal_54 /*5*/].f_4 >= 15) || BitTest(Global_44449, 9))
	{
		if (unk_0x9B5C1660CCDF7189(Local_43.f_1, joaat("script_task_synchronized_scene")) == 1 && !BitTest(Global_1950108.f_3, 27))
		{
			return;
		}
		if (unk_0x75E315E7679F4F24(Local_43.f_1))
		{
			return;
		}
		if (unk_0x7F420695E3F776FB(Local_43.f_1, 1))
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x76CD105BCAC6EB9F() && Local_43.f_1 == unk_0x4A8C381C258A124D()) && func_136(unk_0x259BE71D8A81D4FA())) && Global_262145.f_24351)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x76CD105BCAC6EB9F() && Local_43.f_1 == unk_0x4A8C381C258A124D()) && func_135())
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x76CD105BCAC6EB9F() && unk_0x834C960822A4683F()) && func_134())
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x76CD105BCAC6EB9F() && unk_0x834C960822A4683F()) && func_133())
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_130(unk_0x259BE71D8A81D4FA()))
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x76CD105BCAC6EB9F() && Local_43.f_1 == unk_0x4A8C381C258A124D()) && func_129(unk_0x259BE71D8A81D4FA())) && Global_262145.f_27034)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x76CD105BCAC6EB9F() && Local_43.f_1 == unk_0x4A8C381C258A124D()) && func_126(unk_0x259BE71D8A81D4FA())) && Global_262145.f_27067)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x76CD105BCAC6EB9F() && Local_43.f_1 == unk_0x4A8C381C258A124D()) && func_122(unk_0x259BE71D8A81D4FA()) == 15)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x76CD105BCAC6EB9F() && Local_43.f_1 == unk_0x4A8C381C258A124D()) && Global_75693) && !Global_44205)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_52.f_1 = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
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

int func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

bool func_130(int iParam0)
{
	return func_131(func_132(iParam0));
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_125(iParam0) == 256)
	{
		return func_123(iParam0);
	}
	return -1;
}

var func_133()
{
	return Global_2683864.f_24;
}

var func_134()
{
	return Global_2683864.f_21;
}

var func_135()
{
	return Global_2764617;
}

int func_136(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_127(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	if (!unk_0x27E68848F0E5D7D9(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x6EF03BE64E058E2F(Local_43.f_1, 0);
	if (!unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_52.f_0 = 7;
	return 1;
}

void func_138()
{
	if (!unk_0x7F420695E3F776FB(Local_43.f_1, 0))
	{
		Local_52.f_0 = 4;
		return;
	}
}

void func_139()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		return;
	}
	if (!unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	fVar1 = unk_0xDF93B3CFAC96698F(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x00CC36CA06DD06AD(Var3, Var4) && !unk_0x59A8C2AB2084CAF7(Var3, Var4))
	{
		return;
	}
	unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
	unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
	func_11(73, 1);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x7F420695E3F776FB(Local_43.f_1, 0))
	{
		iVar1 = unk_0x6EF03BE64E058E2F(Local_43.f_1, 0);
		iVar2 = unk_0xFD5C5BBD1FE92BB7(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x76CD105BCAC6EB9F() && !unk_0x1B1A446EFA398EB5(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x4A8C381C258A124D() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x3B5989D5DB08A155() == 4)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (timera() < Local_51.f_4)
	{
		func_142(iVar0, fLocal_49);
		return;
	}
	if (unk_0x0101C509A6E67F99(iVar0))
	{
		Local_51.f_4 = timera() + 2000;
	}
	else
	{
		Local_51.f_4 = timera() + 1000;
	}
	fVar3 = unk_0xDF93B3CFAC96698F(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - timera());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_49);
}

float func_141(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0xD2AA6F822D3A55D2(-fParam1, fParam1);
	fVar1 = unk_0xD2AA6F822D3A55D2(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x0101C509A6E67F99(iParam0))
	{
		if (unk_0x6F21822F60DC0945(unk_0xBD545F8729E9F413(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(iParam0);
		if (unk_0x78B050AFBA6D1517(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_142(int iParam0, float fParam1)
{
	if (unk_0x76CD105BCAC6EB9F() && !unk_0x1B1A446EFA398EB5(iParam0))
	{
		return;
	}
	if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0xD4D1973154415E9B(unk_0xBD545F8729E9F413(iParam0), fParam1);
	}
	else if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0xDEABDA7736297FEB(unk_0xE93EDE86BBB66532(iParam0), fParam1);
	}
}

void func_143()
{
	int iVar0;
	
	if (!unk_0x7F420695E3F776FB(Local_43.f_1, 0))
	{
		Local_52.f_0 = 4;
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (Global_44232[iLocal_54 /*5*/].f_3 >= 10 || Global_44232[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_44232[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_44232[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_44232[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_44232[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(Local_43.f_1, 0);
	if (!unk_0xD9F5E1FEFD1329E4(iVar0, 0))
	{
		unk_0x092B9247AF00F5CF(Local_43.f_1, 0, 0);
		Local_52.f_0 = 11;
		return;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (timera() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_shuffle_to_next_vehicle_seat"));
	if (!iVar0 == 7)
	{
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!unk_0x7F420695E3F776FB(Local_43.f_1, 0))
	{
		Local_52.f_0 = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = unk_0x6EF03BE64E058E2F(Local_43.f_1, 0);
	iVar2 = unk_0xFD5C5BBD1FE92BB7(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_51.f_3 = -2;
		return;
	}
	unk_0x7A55A25242FBE562(Local_43.f_1, iVar1, 0);
	Local_52.f_0 = 9;
	Local_51.f_3 = timera() + 1000;
}

void func_145()
{
	if (Local_52.f_0 == 10)
	{
		return;
	}
	Local_52.f_0 = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_171(iLocal_44, 2, 5);
	Local_51.f_4 = timera();
	fLocal_49 = 0f;
}

void func_146()
{
	if (unk_0x27E68848F0E5D7D9(Local_43.f_1))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (timera() < Local_51.f_3)
	{
		return;
	}
	Local_52.f_0 = 4;
	Local_51.f_3 = -2;
}

void func_147()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x27E68848F0E5D7D9(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = unk_0x6EF03BE64E058E2F(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				unk_0x092B9247AF00F5CF(Local_43.f_1, 0, 0);
				Local_52.f_0 = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = unk_0xFD5C5BBD1FE92BB7(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		unk_0x7A55A25242FBE562(Local_43.f_1, iVar0, 0);
		Local_52.f_0 = 9;
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!func_120())
	{
		unk_0x974022927CB47E68(Local_43.f_1);
		Local_52.f_0 = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = unk_0x9B5C1660CCDF7189(Local_43.f_1, joaat("script_task_enter_vehicle"));
		if (iVar3 == 7)
		{
			if (!unk_0x7F420695E3F776FB(Local_43.f_1, 0))
			{
				unk_0x974022927CB47E68(Local_43.f_1);
				Local_52.f_0 = 4;
				return;
			}
		}
	}
}

void func_148()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_52.f_0 = 4;
		return;
	}
	if (!unk_0xD9F5E1FEFD1329E4(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_52.f_0 = 4;
		return;
	}
	Var0 = { unk_0xD1A6A821F5AC81DB(Local_43.f_1, 1) };
	Var1 = { unk_0xD1A6A821F5AC81DB(Local_43.f_4, 1) };
	fVar2 = unk_0xED977E2AE2CB16EE(Var0, Var1, 1);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_44232[iLocal_54 /*5*/].f_2))
		{
			Local_52.f_0 = 12;
			return;
		}
		Local_52.f_0 = 5;
		Local_51.f_2 = timera() + 2000;
		return;
	}
	iVar3 = unk_0x2EEC0612337D20CE(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (unk_0xC39AE5D390581AD5(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			Local_52.f_0 = 4;
			return;
		}
	}
	func_149();
	unk_0xEBA229B2E0BB05E0(Local_43.f_1, Local_43.f_4, -1, iVar4, 1073741824, 1, 0);
	Local_52.f_0 = 7;
}

void func_149()
{
	if (!unk_0xFC8BFE4B41177C22(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x4FAFF4BCB7633475(Local_43.f_1))
	{
		unk_0x4A46A67DB6AC487D(Local_43.f_1, 1048576000);
		unk_0x529EC998DD2C51F8(Local_43.f_1);
		unk_0x384E72D362B96929(Local_43.f_1, 0, -1056964608);
		Local_52.f_2 = "";
		unk_0x490EA3A0CF334F58(Local_43.f_1);
		unk_0x0FB8E752BCC547A9(Local_43.f_1, 200, 0);
		unk_0x0FB8E752BCC547A9(Local_43.f_1, 46, 0);
		unk_0xC1BC1B8A5AA67C6B(Local_43.f_1, 1);
		unk_0x1CA08719184AFC6F(Local_43.f_1, 262144, 0);
		unk_0x8A19BA162BA1DE3E(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_150()
{
	if (timera() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_51.f_2 = -2;
	Local_52.f_0 = 12;
}

int func_151()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_152(Local_43.f_1);
	Local_52.f_2 = "";
	Global_2793046.f_4637 = 1;
	return 1;
}

void func_152(int iParam0)
{
	unk_0x4A46A67DB6AC487D(uParam0, 1048576000);
	unk_0x384E72D362B96929(uParam0, 0, -1056964608);
	unk_0x0FB8E752BCC547A9(uParam0, 200, 0);
	unk_0xC1BC1B8A5AA67C6B(iParam0, 1);
	unk_0x1CA08719184AFC6F(iParam0, 262144, 0);
	unk_0x8A19BA162BA1DE3E(iParam0, 0);
}

void func_153()
{
	int iVar0;
	
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x7F420695E3F776FB(Local_43.f_1, 0))
	{
		Local_52.f_0 = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_52.f_0 = 12;
		return;
	}
	if (Local_51.f_0 == -2)
	{
		return;
	}
	if (!func_107(Global_44232[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	Local_52.f_0 = 12;
}

void func_154()
{
}

void func_155()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_44313[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_44313[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_157(iVar1);
				func_156(iVar1);
			}
			else if (Global_44313[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_44313[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44313[iParam0 /*6*/] = -1;
	Global_44313[iParam0 /*6*/].f_1 = -1;
	Global_44313[iParam0 /*6*/].f_2 = 6;
	Global_44313[iParam0 /*6*/].f_3 = 0;
	Global_44313[iParam0 /*6*/].f_4 = 0;
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_44313[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		
		case 2:
			func_161(Global_44313[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_160(Global_44313[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_159();
			break;
		
		case 5:
			func_158();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_158()
{
	Local_52.f_1 = 2;
}

void func_159()
{
	int iVar0;
	
	Global_44232[iLocal_54 /*5*/].f_4++;
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_4 < 9 && Global_44232[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44232[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	Global_44232[iLocal_54 /*5*/].f_3 = (Global_44232[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51.f_0 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_44232[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51.f_0 = (Local_51.f_0 + iParam0);
}

void func_162()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
		return;
	}
	iVar0 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_163();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_163()
{
}

void func_164()
{
	if (!Local_51.f_0 == -1)
	{
		if (!Local_51.f_0 == -2)
		{
			if (timera() >= Local_51.f_0)
			{
				func_149();
				Local_51.f_0 = -2;
				Local_52.f_0 = 12;
			}
		}
		if (timera() > Local_51.f_1)
		{
			func_178();
		}
	}
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44313[iVar0 /*6*/])
		{
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_52.f_0 = 4;
	if (!unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
	{
		if (unk_0x27E68848F0E5D7D9(Local_43.f_1))
		{
			Local_52.f_0 = 10;
		}
	}
	if (bLocal_46)
	{
		func_169();
		func_11(71, 1);
		if (unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = func_80(2059, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			func_77(2059, iVar0 + 1, -1, 1, 0);
			bLocal_55 = true;
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0xDF7F16323520B858(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0xDF7F16323520B858(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0xDF7F16323520B858(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_167(iVar6);
			}
			switch (func_67())
			{
				case 0:
					unk_0x1164A75E490C27B6(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x1164A75E490C27B6(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x1164A75E490C27B6(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_52.f_1 = 1;
		return;
	}
	Local_52.f_1 = 12;
	if (Local_51.f_0 == -1)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_44232[iLocal_54 /*5*/].f_3 < 3 && Global_44232[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_44232[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51.f_0 - timera());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_44232[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_44232[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = func_168(81);
	Global_2645068[iVar0 /*83*/] = 81;
	Global_2645068[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_169()
{
}

void func_170()
{
	Local_51.f_0 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_174(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_173();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44313[iVar0 /*6*/] = iParam0;
	Global_44313[iVar0 /*6*/].f_1 = iParam1;
	Global_44313[iVar0 /*6*/].f_2 = iParam2;
	Global_44313[iVar0 /*6*/].f_3 = iParam3;
	Global_44313[iVar0 /*6*/].f_4 = iParam4;
	Global_44313[iVar0 /*6*/].f_5 = iParam5;
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44313[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44313[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44313[iVar0 /*6*/])
			{
				if (iParam1 == Global_44313[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_176()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == unk_0x4A8C381C258A124D())
	{
		bLocal_46 = true;
		Global_44445 = 1;
		Global_44447++;
	}
	if (!unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x397CF4F4C8B17365(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x397CF4F4C8B17365(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_178()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_44232[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x397CF4F4C8B17365(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x397CF4F4C8B17365(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_46)
	{
		Global_44445 = 0;
	}
	func_179();
	unk_0x268BE77F77533D03(func_113(0));
	unk_0x268BE77F77533D03(func_113(2));
	unk_0x268BE77F77533D03(func_113(1));
	Global_1944403 = 0;
	if (unk_0x486FF5D06E9659F1(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_179()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x1C2F771CDC87A3A5(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x7F420695E3F776FB(Local_43.f_1, 0))
	{
		uVar1 = unk_0x6EF03BE64E058E2F(Local_43.f_1, 0);
		iVar2 = unk_0xFD5C5BBD1FE92BB7(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x3B5989D5DB08A155() == 4 || !unk_0x4A8C381C258A124D() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_142(uVar0, 0f);
}

void func_180(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_181(iParam2), 1);
}

int func_181(int iParam0)
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
