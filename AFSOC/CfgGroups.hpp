class CfgGroups {
    
  class WEST {

        class AFSOC {
            name = "Air Force Special Operations Command";

            class Infantry {
                name = "Infantry";

            };

            class STS {
                name = "24th Special Tactics Squadron";

                class STS_PJ {
                    name = "Para Rescue Jumpers";
                    side = 1;
                    faction = "STS_PJT";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STS_Para_Jumper_Leader";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_Para_Jumper_2";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_Para_Jumper_3";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_Para_Jumper_4";
                    };
                    
                };

                class STS_CCT {
                    name = "Combat Control Team";
                    side = 1;
                    faction = "STS_CCTT";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STS_CCT_Leader";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_CCT_Operator_2";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_CCT_Operator_3";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_CCT_Operator_4";
                    };
                    
                };

                class STS_JTAC {
                    name = "Tactical Air Control Party";
                    side = 1;
                    faction = "STS_JTACT";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STS_JTAC_Operator_1";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_JTAC_Operator_2";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_TACP_ROMAD_1";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STS_TACP_ROMAD_2";
                    };
                    
                };

            };

            

        };
    };
};