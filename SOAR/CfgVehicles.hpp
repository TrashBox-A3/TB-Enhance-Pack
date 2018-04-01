class CfgVehicles
{
	class  B_Helipilot_F;
		class SOAR_Heli_Pilot_1:  B_Helipilot_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="SOAR Heli Pilot(OCP)";
		faction="ARSOC";
        icon = "iconMan";
        editorSubcategory = "SOAR_Pilots_OCP";
        editorPreview = "\SOAR\SOAR_EditorPreviews\SOAR_Heli_Pilot_1.jpg";
		backpack=;
        nakedUniform = "U_BasicBody"; 
		model = "\A3\Characters_F\Common\coveralls.p3d";
		uniformClass="rhs_uniform_cu_ocp";
		weapons[] = {
            "hlc_smg_mp5k",
            "Throw",
            "Put"
        };
        magazines[] = {"hlc_30Rnd_9x19_B_MP5"};
        respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5"};
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={};
		linkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_visor_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };
		respawnLinkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_visor_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'SOAR'] call BIS_fnc_setUnitInsignia";
    };
    };


    
		class SOAR_Heli_Pilot_2:  B_Helipilot_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="SOAR Heli Pilot(OCP)";
        faction="ARSOC";
        icon = "iconMan";
        editorSubcategory = "SOAR_Pilots_OCP";
        editorPreview = "\SOAR\SOAR_EditorPreviews\SOAR_Heli_Pilot_2.jpg";
        backpack=;
        nakedUniform = "U_BasicBody"; 
        model = "\A3\Characters_F\Common\coveralls.p3d";
        uniformClass="rhs_uniform_cu_ocp";
        weapons[] = {
            "hlc_smg_mp5k",
            "Throw",
            "Put"
        };
        magazines[] = {"hlc_30Rnd_9x19_B_MP5"};
        respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_visor_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_visor_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'SOAR'] call BIS_fnc_setUnitInsignia";
    };
	};


    class  B_helicrew_F;
		class SOAR_Heli_Crew_1:  B_helicrew_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="SOAR Heli Crew(OCP)";
        faction="ARSOC";
        icon = "iconMan";
        editorSubcategory = "SOAR_Pilots_OCP";
        editorPreview = "\SOAR\SOAR_EditorPreviews\SOAR_Heli_Crew_1.jpg";
        backpack=;
        nakedUniform = "U_BasicBody"; 
        model = "\A3\Characters_F\Common\coveralls.p3d";
        uniformClass="rhs_uniform_cu_ocp";
        weapons[] = {
            "hlc_smg_mp5k",
            "Throw",
            "Put"
        };
        magazines[] = {"hlc_30Rnd_9x19_B_MP5"};
        respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'SOAR'] call BIS_fnc_setUnitInsignia";
    };
	};


		class SOAR_Heli_Crew_2:  B_helicrew_F
	{
		scope=2;
        author="Rodeostar42";
        displayName="SOAR Heli Crew(OCP)";
        faction="ARSOC";
        icon = "iconMan";
        editorSubcategory = "SOAR_Pilots_OCP";
        editorPreview = "\SOAR\SOAR_EditorPreviews\SOAR_Heli_Crew_2.jpg";
        backpack=;
        nakedUniform = "U_BasicBody"; 
        model = "\A3\Characters_F\Common\coveralls.p3d";
        uniformClass="rhs_uniform_cu_ocp";
        weapons[] = {
            "hlc_smg_mp5k",
            "Throw",
            "Put"
        };
        magazines[] = {"hlc_30Rnd_9x19_B_MP5"};
        respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5"};
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={};
        linkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };
        respawnLinkedItems[] = {
            "rhsusf_iotv_ocp",
            "rhsusf_hgu56p_black",
            "ItemMap",
            "ItemCompass",
            "tf_anprc152",
            "ACE_Altimeter",
            "rhsusf_ANPVS_15"
        };

        class EventHandlers
    {
        init = "[(_this select 0), 'SOAR'] call BIS_fnc_setUnitInsignia";
    };
	};


    

};