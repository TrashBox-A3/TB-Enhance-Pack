class CfgGroups {
    
  class WEST {

        class ARSOC {
            name = "U.S.ARSOC";

            class Infantry {
                name = "Infantry";

            };

            class SOAR {
                name = "160th SOAR";

                class SOAR_OCP {
                    name = "160th SOAR(OCP)";
                    side = 1;
                    faction = "ARSOC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "SOAR_Heli_Pilot_1";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "SOAR_Heli_Pilot_2";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "SOAR_Heli_Crew_1";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "SOAR_Heli_Crew_2";
                    };
                    
                };

                

            };

            

        };
    };
};