class CfgVehicles
{
	class  B_Soldier_base_F;
		class SEALs_AOR1_SquadLeader:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="SquadLeader";
		faction="JSOC_inf";
        icon = "iconManLeader";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_SquadLeader.jpg";
		backpack="milgp_bp_hydration_AOR1";
        nakedUniform = "U_BasicBody"; 
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_teamleader_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_teamleader_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};


    
		class SEALs_AOR1_Medic:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Combat Medic";
		faction="JSOC_inf";
        icon = "iconManMedic";
        editorSubcategory ="NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_Medic.jpg";
		backpack="milgp_bp_hydration_AOR1";
        nakedUniform = "U_BasicBody"; 
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
        attendant = 1;
		linkedItems[] = {
            "milgp_v_jpc_medic_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_medic_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'MED'] call BIS_fnc_setUnitInsignia";
    };
	};


    
		class SEALs_AOR1_RifleOperator:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Rifle Operator";
		faction="JSOC_inf";
        icon = "iconMan";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_RifleOperator.jpg";
		backpack="milgp_bp_Pointman_AOR1";
        nakedUniform = "U_BasicBody"; 
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};


		class SEALs_AOR1_Grenadier:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Grenadier";
		faction="JSOC_inf";
        icon = "iconMan";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_Grenadier.jpg";
		backpack="milgp_bp_Pointman_AOR1";
        nakedUniform = "U_BasicBody"; 		
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_mk18_m320",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","1Rnd_HE_Grenade_shell"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_Grenadier_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_Grenadier_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};


		class SEALs_AOR1_AutoRifleOperator:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Auto Rifle Operator";
		faction="JSOC_inf";
        icon = "iconManMG";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_AutoRifleOperator.jpg";
		backpack="milgp_bp_Pointman_AOR1";
        nakedUniform = "U_BasicBody"; 		
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_m249_pip_S_vfg",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_hgunner_belt_AOR1",
            "milgp_h_airframe_01_goggles_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_hgunner_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};



		class SEALs_AOR1_Engineer:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Engineer";
		faction="JSOC_inf";
        icon = "iconManEngineer";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_Engineer.jpg";
		backpack="milgp_bp_Tomahawk_AOR1";
        nakedUniform = "U_BasicBody"; 		
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
        canDeactivateMines = true;
        engineer = true;
		linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_01_goggles_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};


		class SEALs_AOR1_Marksman:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Marksman";
		faction="JSOC_inf";
        icon = "iconManRecon";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_Marksman.jpg";
		backpack="milgp_bp_hydration_AOR1";
        nakedUniform = "U_BasicBody"; 		
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_sr25_ec",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};

			class SEALs_AOR1_Bleacher:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Bleacher";
		faction="JSOC_inf";
        icon = "iconMan";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_Bleacher.jpg";
		backpack="milgp_bp_Breacher_AOR1";
        nakedUniform = "U_BasicBody"; 		
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_M590_8RD",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_8Rnd_00Buck","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_8Rnd_00Buck","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_03_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};

			class SEALs_AOR1_ATSpecialist:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="AT Specialist";
		faction="JSOC_inf";
        icon = "iconManAT";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_ATSpecialist.jpg";
		backpack="milgp_bp_Pointman_AOR1";
        nakedUniform = "U_BasicBody"; 		
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "rhs_weap_fgm148",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","rhs_fgm148_magazine_AT"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","rhs_fgm148_magazine_AT"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_02_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};

			class SEALs_AOR1_Sniper:  B_Soldier_base_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="Sniper";
		faction="JSOC_inf";
        icon = "iconManRecon";
        editorSubcategory = "NavySEALs_AOR1";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR1_Sniper.jpg";
		backpack="milgp_bp_hydration_AOR1";
        nakedUniform = "U_BasicBody"; 		
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="milgp_u_g3_field_set_aor1";
		weapons[] = {
            "rhs_weap_XM2010",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_5Rnd_300winmag_xm2010","hlc_15Rnd_9x19_B_P226"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
		respawnLinkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR1",
            "milgp_h_airframe_01_AOR1",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
	};



            class SEALs_AOR2_SquadLeader:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="SquadLeader";
        faction="JSOC_inf";
        icon = "iconManLeader";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_SquadLeader.jpg";
        backpack="milgp_bp_hydration_AOR2";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_teamleader_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_teamleader_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };


        class SEALs_AOR2_Medic:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Combat Medic";
        faction="JSOC_inf";
        icon = "iconManMedic";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_Medic.jpg";
        backpack="milgp_bp_hydration_AOR2";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        attendant = 1;
        linkedItems[] = {
            "milgp_v_jpc_medic_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_medic_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'MED'] call BIS_fnc_setUnitInsignia";
    };
    };


        class SEALs_AOR2_RifleOperator:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Rifle Operator";
        faction="JSOC_inf";
        icon = "iconMan";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_RifleOperator.jpg";
        backpack="milgp_bp_Pointman_AOR2";
        nakedUniform = "U_BasicBody"; 
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };


        class SEALs_AOR2_Grenadier:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Grenadier";
        faction="JSOC_inf";
        icon = "iconMan";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_Grenadier.jpg";
        backpack="milgp_bp_Pointman_AOR2";
        nakedUniform = "U_BasicBody";       
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_mk18_m320",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","1Rnd_HE_Grenade_shell"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_Grenadier_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_Grenadier_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };


        class SEALs_AOR2_AutoRifleOperator:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Auto Rifle Operator";
        faction="JSOC_inf";
        icon = "iconManMG";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_AutoRifleOperator.jpg";
        backpack="milgp_bp_Pointman_AOR2";
        nakedUniform = "U_BasicBody";       
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_m249_pip_S_vfg",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_hgunner_belt_AOR2",
            "milgp_h_airframe_01_goggles_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_hgunner_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };


        class SEALs_AOR2_Engineer:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Engineer";
        faction="JSOC_inf";
        icon = "iconManEngineer";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_Engineer.jpg";
        backpack="milgp_bp_Tomahawk_AOR2";
        nakedUniform = "U_BasicBody";       
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        canDeactivateMines = true;
        engineer = true;
        linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_01_goggles_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };


        class SEALs_AOR2_Marksman:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Marksman";
        faction="JSOC_inf";
        icon = "iconManRecon";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_Marksman.jpg";
        backpack="milgp_bp_hydration_AOR2";
        nakedUniform = "U_BasicBody";       
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_sr25_ec",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };

        class SEALs_AOR2_Bleacher:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="Bleacher";
        faction="JSOC_inf";
        icon = "iconMan";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_Bleacher.jpg";
        backpack="milgp_bp_Breacher_AOR2";
        nakedUniform = "U_BasicBody";       
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_M590_8RD",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_8Rnd_00Buck","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_8Rnd_00Buck","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_03_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };

            class SEALs_AOR2_ATSpecialist:  B_Soldier_base_F
    {
        scope=2;
        author="Rodeostar42";
        displayName="AT Specialist";
        faction="JSOC_inf";
        icon = "iconManAT";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_ATSpecialist.jpg";
        backpack="milgp_bp_Pointman_AOR2";
        nakedUniform = "U_BasicBody";       
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_hk416d10",
            "hlc_pistol_P226R_Combat",
            "rhs_weap_fgm148",
            "Throw",
            "Put"
        };
        magazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","rhs_fgm148_magazine_AT"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855_Stanag","hlc_15Rnd_9x19_B_P226","rhs_fgm148_magazine_AT"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_02_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_assaulter_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };

            class SEALs_AOR2_Sniper:  B_Soldier_base_F
    {
       
        scope=2;
        author="Rodeostar42";
        displayName="Sniper";
        faction="JSOC_inf";
        icon = "iconManRecon";
        editorSubcategory = "NavySEALs_AOR2";
        editorPreview = "\JSOC\JSOC_EditorPreviews\SEALs_AOR2_Sniper.jpg";
        backpack="milgp_bp_hydration_AOR2";
        nakedUniform = "U_BasicBody";       
        model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass="milgp_u_g3_field_set_aor2";
        weapons[] = {
            "rhs_weap_XM2010",
            "hlc_pistol_P226R_Combat",
            "Throw",
            "Put"
        };
        magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","hlc_15Rnd_9x19_B_P226"};
        respawnMagazines[] = {"rhsusf_5Rnd_300winmag_xm2010","hlc_15Rnd_9x19_B_P226"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "milgp_v_jpc_marksman_belt_AOR2",
            "milgp_h_airframe_01_AOR2",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ItemWatch"
        };
    };
	
};