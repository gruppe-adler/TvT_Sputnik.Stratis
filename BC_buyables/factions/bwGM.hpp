//a different set of buyables
class bwGM {
    side = "Blufor";
    loadout = "bwGM";
    mode = "conquer";
    driverGps = "false";
    crewHelmet = "";
    disableTIEquipment = "true";

    // needs to be in every faction
    class StartVehicle {
        type = "gm_ge_army_iltis_cargo_oli";
        condition = "false";

        class gm_ge_army_iltis_cargo_oli {
            condition = "BC_IS_WOODLAND";
            code = "[(_this select 0)] call BC_buyables_fnc_configureBluforStartVehicle;";
            vehicleInit = "['gm_ge_oli',1],['beacon_1_1_org_unhide',0,'beacon_1_1_blu_unhide',0,'doorBag_unhide',0,'radio_01_unhide',1,'radio_02_unhide',1,'cover_hoops_unhide',1,'cover_doors_unhide',1,'windshield',0,'coldWeatherKit_unhide',0]";
        };

        class gm_ge_army_iltis_cargo_des {
            condition = "!BC_IS_WOODLAND";
        };
    };

    class Logistics {
        displayName = "Logistics";
        kindOf = "Vehicles";
        maxBuyCount = 9;
        minPlayerCount = 0;

        class gm_ge_army_u1300l_cargo_oli {
            displayName = "U1300L";
            description = "Carries soldiers soft armored.";
            price = 10;
            stock = 7;
            spawnEmpty = 1;
            wheelCargo = 4;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['beacon_1_1_org_unhide',0,'beacon_1_1_blu_unhide',0,'doorBag_unhide',0,'radio_01_unhide',1,'radio_02_unhide',0,'cover_hoops_unhide',0,'cover_doors_unhide',0,'windshield',0,'coldWeatherKit_unhide',0]";
        };

        class gm_ge_army_u1300l_cargo_des: gm_ge_army_u1300l_cargo_oli {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "[['rhs_desert',1],['hide_cover',0,'hide_spare',0,'hide_scaffold',0,'hide_bench',0]]";
        };

        class gm_ge_army_iltis_cargo_oli {
            displayName = "Iltis";
            description = "Fast and small.";
            price = 10;
            stock = 4;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            vehicleInit = "[[],[]]";
        };

        class gm_ge_army_iltis_cargo_des {
            code = "[(_this select 0), [['mud','mud_olive'] select BC_IS_WOODLAND,1], ['tailgateHide',0,'tailgate_open',0,'cage_fold',0]] call BIS_fnc_initVehicle;";
            vehicleInit = "[[],[]]";
        };


        class gm_ge_army_k125 {
            displayName = "K125";
            description = "Agile but protectionless.";
            price = 10;
            stock = 8;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "true";
            vehicleInit = "[[],[]]";
        };
    };


    class Recon {
        displayName = "Recon";
        kindOf = "Vehicles";
        maxBuyCount = 2;
        minPlayerCount = 20;

        class gm_ge_army_m113a1g_command_oli {
            displayName = "M113";
            description = "Unarmed Armored Carrier";
            price = 10;
            stock = 2;
            code = "";
            spawnEmpty = 1;
            vehicleInit = "[[],[]]";
            condition = "BC_IS_WOODLAND";
        };

        class gm_ge_army_m113a1g_command_des {
             vehicleInit = "[[],[]]";
             condition = "!BC_IS_WOODLAND";
        };

        class gm_ge_army_kat1_454_cargo_oli {
            displayName = "Cougar IMV";
            description = "Perfect commander limousine.";
            price = 10;
            stock = 2;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "[true,true]";
        };

        class gm_ge_army_kat1_454_cargo_des: gm_ge_army_kat1_454_cargo_oli {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "[true,true]";
        };        

    };


    class Support {
        displayName = "Support";
        kindOf = "Vehicles";
        maxBuyCount = 1;
        minPlayerCount = 40;

        class gm_ge_army_iltis_milan_oli {
            displayName = "Iltis Milan";
            description = "Fast, reliable, deadly.";
            price = 10;
            stock = 7;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "[true,true]";
        };

        class gm_ge_army_iltis_milan_des: gm_ge_army_iltis_milan_oli {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "[true,true]";
        };

        class gm_ge_army_m113a1g_apc_oli {
            displayName = "M113 Alt";
            description = "Versatile APC.";
            stock = 7;
            spawnEmpty = 1;
            trackCargo = 3;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "[true,true]";
        };

        class gm_ge_army_m113a1g_apc_des: gm_ge_army_m113a1g_apc_oli {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "[true,true]";
        };
    };

    class Heavy {
        displayName = "Heavy";
        kindOf = "Vehicles";
        maxBuyCount = 1;
        minPlayerCount = 60;

        class gm_ge_army_fuchsa0_engineer_oli {
            displayName = "HMMWV TOW";
            description = "Tank hunter with fly-by-wire AT.";
            stock = 7;
            spawnEmpty = 1;
            wheelCargo = 2;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['standard',1], ['hide_snorkel',1,'hide_CIP',0,'hide_BFT',0,'hide_Antenna',0,'hide_A2_Parts',0,'Hide_A2Bumper',0,'Hide_Brushguard',1]";
        };

        class gm_ge_army_fuchsa0_engineer_des: gm_ge_army_fuchsa0_engineer_oli {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['Desert',1], ['hide_snorkel',1,'hide_CIP',0,'hide_BFT',0,'hide_Antenna',0,'hide_A2_Parts',0,'Hide_A2Bumper',0,'Hide_Brushguard',1]";
        };

        class gm_ge_army_m113a1g_apc_milan_oli {
            displayName = "UH-60M";
            description = "1 GPS\nFRIES equipped";
            stock = 7;
            code = "(_this select 0) addItemCargoGlobal ['ACE_NVG_Wide',2];(_this select 0) addItemCargoGlobal ['ItemGPS',1];[(_this select 0)] call ace_fastroping_fnc_equipFRIES;";
            spawnEmpty = 1;
            vehicleInit = "[[],[]]";
        };

        class gm_ge_army_m113a1g_apc_milan_des: gm_ge_army_m113a1g_apc_milan_oli {
            vehicleInit = "[[],[]]";
        };
    };

    class Special {
        displayName = "Special";
        kindOf = "Special";
        maxBuyCount = 2;

        class I_C_Boat_Transport_01_F {
            kindOf = "Special";
            displayName = "Boat + Diving Equipment inside * 4";
            description = "Get it in the Start Vehicle (ACE Interaction).";
            stock = 1;
            code = "(_this select 1) setVariable ['grad_carryBoatCargo', 1, true];[(_this select 1)] remoteExec ['BC_buymenu_fnc_addBoatInteraction', [0,-2] select isDedicated];";
            spawnEmpty = 1;
        };

        class rhsusf_explosive_m112 {
            kindOf = "Special";
            displayName = "Breaching Equipment";
            description = "Explosives and Wirecutter in Start Vehicle.";
            stock = 1;
            code = "(_this select 1) addItemCargoGlobal ['ACE_wirecutter',2];(_this select 1) addItemCargoGlobal ['ACE_Clacker',2];(_this select 1) addMagazineCargoGlobal ['DemoCharge_Remote_Mag', 2];";
            spawnEmpty = 1;
        };

        class Land_JumpTarget_F {
            kindOf = "Special";
            displayName = "Hunt IR Equipment";
            description = "Hunt IR Equipment in Start Vehicle.";
            stock = 1;
            code = "(_this select 1) addItemCargoGlobal ['ACE_HuntIR_monitor',2];(_this select 1) addMagazineCargoGlobal ['ACE_HuntIR_M203',4];";
            spawnEmpty = 1;
        };
    };
};