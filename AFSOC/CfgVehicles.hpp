class CfgVehicles
{
	class  B_Soldier_base_F;
		class STS_Para_Jumper_Leader:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Combat Rescue Officer";
		faction="AFSOC";
        icon = "iconManLeader";
        editorSubcategory = "PJ";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\STS_Para_Jumper_Leader.jpg";
		backpack="B_Carryall_cbr";
        nakedUniform = "U_BasicBody"; 
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
		uniformClass="TB_G3_MC_PJ";
		weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };
		respawnLinkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'PJ'] call BIS_fnc_setUnitInsignia";
    };
    };


    
		class STS_Para_Jumper_2:  B_Soldier_base_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="Para Jumper";
        faction="AFSOC";
        icon = "iconManMedic";
        editorSubcategory = "PJ";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\STS_Para_Jumper_2.jpg";
        backpack="B_Carryall_cbr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="TB_G3_MC_PJ";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };
        respawnLinkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'PJ'] call BIS_fnc_setUnitInsignia";
    };
	};


    
		class STS_Para_Jumper_3:  B_Soldier_base_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="Para Jumper";
        faction="AFSOC";
        icon = "iconManMedic";
        editorSubcategory = "PJ";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\STS_Para_Jumper_3.jpg";
        backpack="B_Carryall_cbr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="TB_G3_MC_PJ";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };
        respawnLinkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'PJ'] call BIS_fnc_setUnitInsignia";
    };
	};


		class STS_Para_Jumper_4:  B_Soldier_base_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="Para Jumper";
        faction="AFSOC";
        icon = "iconManMedic";
        editorSubcategory = "PJ";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\STS_Para_Jumper_4.jpg";
        backpack="B_Carryall_cbr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="TB_G3_MC_PJ";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };
        respawnLinkedItems[] = {
            "lbt_medical_coy",
            "milgp_h_opscore_06_khk_hexagon",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'PJ'] call BIS_fnc_setUnitInsignia";
    };
	};


		class STS_CCT_Leader:  B_Soldier_base_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="CCT Leader";
        faction="AFSOC";
        icon = "iconManLeader";
        editorSubcategory = "CCT";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\CCT_Leader.jpg";
        backpack="tfw_ilbe_a_coy";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="milgp_u_g3_field_set_mc";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "cpc_communicationsbelt_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'CCT'] call BIS_fnc_setUnitInsignia";
    };
	};



		class STS_CCT_Operator_2:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Combat Controller";
		faction="AFSOC";
        icon = "iconMan";
        editorSubcategory = "CCT";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\CCT_Operator_2.jpg";
        backpack="tfw_ilbe_a_coy";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="milgp_u_g3_field_set_mc";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "cpc_communicationsbelt_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'CCT'] call BIS_fnc_setUnitInsignia";
    };
	};


		class STS_CCT_Operator_3:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Combat Controller";
		faction="AFSOC";
        icon = "iconMan";
        editorSubcategory = "CCT";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\CCT_Operator_3.jpg";
        backpack="tfw_ilbe_a_coy";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="milgp_u_g3_field_set_mc";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "cpc_communicationsbelt_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'CCT'] call BIS_fnc_setUnitInsignia";
    };
	};

			class STS_CCT_Operator_4:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Combat Controller";
		faction="AFSOC";
        icon = "iconMan";
        editorSubcategory = "CCT";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\CCT_Operator_4.jpg";
        backpack="tfw_ilbe_a_coy";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="milgp_u_g3_field_set_mc";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "lbt_medical_coy",
            "FIR_GroundCrew_Headset2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'CCT'] call BIS_fnc_setUnitInsignia";
    };
	};

			class STS_JTAC_Operator_1:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="JTAC Operator";
		faction="AFSOC";
        icon = "iconMan";
        editorSubcategory = "TACP";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\JTAC_Operator_1.jpg";
        backpack="tfw_ilbe_gr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="rhs_uniform_acu_ucp";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'JTAC'] call BIS_fnc_setUnitInsignia";
    };
	};

			class STS_JTAC_Operator_2:  B_Soldier_base_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="JTAC Operator";
        faction="AFSOC";
        icon = "iconMan";
        editorSubcategory = "TACP";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\JTAC_Operator_2.jpg";
        backpack="tfw_ilbe_gr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="rhs_uniform_acu_ucp";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'JTAC'] call BIS_fnc_setUnitInsignia";
    };
	};



            class STS_TACP_ROMAD_1:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="ROMAD";
        faction="AFSOC";
        icon = "iconMan";
        editorSubcategory = "TACP";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\JTAC_Operator_3.jpg";
        backpack="tfw_ilbe_gr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="rhs_uniform_acu_ucp";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'ROMAD'] call BIS_fnc_setUnitInsignia";
    };
    };


        class STS_TACP_ROMAD_2:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="ROMAD";
        faction="AFSOC";
        icon = "iconMan";
        editorSubcategory = "TACP";
        editorPreview = "\AFSOC\AFSOC_EditorPreviews\JTAC_Operator_4.jpg";
        backpack="tfw_ilbe_gr";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        attendant = 1;
        uniformClass="rhs_uniform_acu_ucp";
        weapons[] = {
            "rhs_weap_m4_carryhandle_mstock",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "cpc_communicationsbelt_rngr",
            "milgp_h_opscore_04_goggles_khk",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'ROMAD'] call BIS_fnc_setUnitInsignia";
    };
        
    };


        
	
};