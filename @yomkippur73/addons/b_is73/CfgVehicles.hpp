#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_G_Soldier_F;
    class B_G_Soldier_F_OCimport_01 : B_G_Soldier_F { scope = 0; class EventHandlers; };
    class B_G_Soldier_F_OCimport_02 : B_G_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_G_Soldier_AR_F;
    class B_G_Soldier_AR_F_OCimport_01 : B_G_Soldier_AR_F { scope = 0; class EventHandlers; };
    class B_G_Soldier_AR_F_OCimport_02 : B_G_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_G_medic_F;
    class B_G_medic_F_OCimport_01 : B_G_medic_F { scope = 0; class EventHandlers; };
    class B_G_medic_F_OCimport_02 : B_G_medic_F_OCimport_01 { class EventHandlers; };

    class B_G_Soldier_LAT_F;
    class B_G_Soldier_LAT_F_OCimport_01 : B_G_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_G_Soldier_LAT_F_OCimport_02 : B_G_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_G_Soldier_M_F;
    class B_G_Soldier_M_F_OCimport_01 : B_G_Soldier_M_F { scope = 0; class EventHandlers; };
    class B_G_Soldier_M_F_OCimport_02 : B_G_Soldier_M_F_OCimport_01 { class EventHandlers; };

    class B_G_Soldier_SL_F;
    class B_G_Soldier_SL_F_OCimport_01 : B_G_Soldier_SL_F { scope = 0; class EventHandlers; };
    class B_G_Soldier_SL_F_OCimport_02 : B_G_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class B_G_officer_F;
    class B_G_officer_F_OCimport_01 : B_G_officer_F { scope = 0; class EventHandlers; };
    class B_G_officer_F_OCimport_02 : B_G_officer_F_OCimport_01 { class EventHandlers; };

    class cwr3_b_m113a1;
    class cwr3_b_m113a1_OCimport_01 : cwr3_b_m113a1 { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_m113a1_OCimport_02 : cwr3_b_m113a1_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoGunner_1;
            class CargoGunner_2;
            class MainTurretTurnIn;
        };
    };

    class cwr3_b_m113a1_mev;
    class cwr3_b_m113a1_mev_OCimport_01 : cwr3_b_m113a1_mev { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_m113a1_mev_OCimport_02 : cwr3_b_m113a1_mev_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cwr3_b_m577_hq;
    class cwr3_b_m577_hq_OCimport_01 : cwr3_b_m577_hq { scope = 0; class EventHandlers; };
    class cwr3_b_m577_hq_OCimport_02 : cwr3_b_m577_hq_OCimport_01 { scope = 0; class EventHandlers; };

    class cwr3_b_m939;
    class cwr3_b_m939_OCimport_01 : cwr3_b_m939 { scope = 0; class EventHandlers; };
    class cwr3_b_m939_OCimport_02 : cwr3_b_m939_OCimport_01 { scope = 0; class EventHandlers; };

    class cwr3_b_m151;
    class cwr3_b_m151_OCimport_01 : cwr3_b_m151 { scope = 0; class EventHandlers; };
    class cwr3_b_m151_OCimport_02 : cwr3_b_m151_OCimport_01 { scope = 0; class EventHandlers; };

    class cwr3_b_m151_m2;
    class cwr3_b_m151_m2_OCimport_01 : cwr3_b_m151_m2 { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_m151_m2_OCimport_02 : cwr3_b_m151_m2_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class cwr3_b_m939_reammo;
    class cwr3_b_m939_reammo_OCimport_01 : cwr3_b_m939_reammo { scope = 0; class EventHandlers; };
    class cwr3_b_m939_reammo_OCimport_02 : cwr3_b_m939_reammo_OCimport_01 { scope = 0; class EventHandlers; };

    class cwr3_b_m939_refuel;
    class cwr3_b_m939_refuel_OCimport_01 : cwr3_b_m939_refuel { scope = 0; class EventHandlers; };
    class cwr3_b_m939_refuel_OCimport_02 : cwr3_b_m939_refuel_OCimport_01 { scope = 0; class EventHandlers; };

    class cwr3_b_m939_repair;
    class cwr3_b_m939_repair_OCimport_01 : cwr3_b_m939_repair { scope = 0; class EventHandlers; };
    class cwr3_b_m939_repair_OCimport_02 : cwr3_b_m939_repair_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_UH1H_RACS;
    class CUP_I_UH1H_RACS_OCimport_01 : CUP_I_UH1H_RACS { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_UH1H_RACS_OCimport_02 : CUP_I_UH1H_RACS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class RightDoorGun;
            class LeftDoorGun;
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class cwr3_b_ch47;
    class cwr3_b_ch47_OCimport_01 : cwr3_b_ch47 { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_ch47_OCimport_02 : cwr3_b_ch47_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class RightDoorGun;
            class BackDoorGun;
            class CopilotTurret;
        };
    };

    class cwr3_b_m119;
    class cwr3_b_m119_OCimport_01 : cwr3_b_m119 { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_m119_OCimport_02 : cwr3_b_m119_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cwr3_b_m252;
    class cwr3_b_m252_OCimport_01 : cwr3_b_m252 { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_m252_OCimport_02 : cwr3_b_m252_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cwr3_b_m2hb_high;
    class cwr3_b_m2hb_high_OCimport_01 : cwr3_b_m2hb_high { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_m2hb_high_OCimport_02 : cwr3_b_m2hb_high_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cwr3_i_m41a1;
    class cwr3_i_m41a1_OCimport_01 : cwr3_i_m41a1 { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_i_m41a1_OCimport_02 : cwr3_i_m41a1_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cwr3_b_m60a3;
    class cwr3_b_m60a3_OCimport_01 : cwr3_b_m60a3 { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_m60a3_OCimport_02 : cwr3_b_m60a3_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class cwr3_b_boat;
    class cwr3_b_boat_OCimport_01 : cwr3_b_boat { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_boat_OCimport_02 : cwr3_b_boat_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class B_Tura_ZU23_lxWS;
    class B_Tura_ZU23_lxWS_OCimport_01 : B_Tura_ZU23_lxWS { scope = 0; class EventHandlers; class Turrets; };
    class B_Tura_ZU23_lxWS_OCimport_02 : B_Tura_ZU23_lxWS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cwr3_b_f4e;
    class cwr3_b_f4e_OCimport_01 : cwr3_b_f4e { scope = 0; class EventHandlers; class Turrets; };
    class cwr3_b_f4e_OCimport_02 : cwr3_b_f4e_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class B_IS73_Rifleman_01 : B_G_Soldier_F_OCimport_02 {
        editorPreview = \x\yomkippur73\addons\b_is73\data\preview\B_IS73_Rifleman_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_IMI_Romat"};
        respawnWeapons[] = {"CUP_arifle_IMI_Romat"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_IMI_Romat","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_762x51_FNFAL_M",8,20}}},{},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Grenadier_01 : B_IS73_Rifleman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Grenadier_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_SLR_GL_lxWS"};
        respawnWeapons[] = {"arifle_SLR_GL_lxWS"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","1Rnd_40mm_HE_lxWS","20Rnd_762x51_slr_lxWS","1Rnd_40mm_HE_lxWS"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","1Rnd_40mm_HE_lxWS","20Rnd_762x51_slr_lxWS","1Rnd_40mm_HE_lxWS"};

        ALiVE_orbatCreator_loadout[] = {{"arifle_SLR_GL_lxWS","","","",{"20Rnd_762x51_slr_lxWS",20},{"1Rnd_40mm_HE_lxWS",1},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"SmokeShell",2,1},{"20Rnd_762x51_slr_lxWS",2,20}}},{"cwr3_i_vest_58webbing",{{"20Rnd_762x51_slr_lxWS",4,20},{"1Rnd_40mm_HE_lxWS",5,1},{"1Rnd_58mm_AT_lxWS",5,1}}},{},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Autorifleman_01 : B_G_Soldier_AR_F_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Autorifleman_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"cwr3_arifle_fnfalo"};
        respawnWeapons[] = {"cwr3_arifle_fnfalo"};

        magazines[] = {"CUP_30Rnd_762x51_FNFAL_M","CUP_30Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x51_FNFAL_M","CUP_30Rnd_762x51_FNFAL_M"};

        backpack = "cwr3_o_backpack_harness_roll";

        ALiVE_orbatCreator_loadout[] = {{"cwr3_arifle_fnfalo","","","",{"CUP_30Rnd_762x51_FNFAL_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"SmokeShell",2,1},{"CUP_30Rnd_762x51_FNFAL_M",1,30}}},{"cwr3_i_vest_58webbing",{{"CUP_30Rnd_762x51_FNFAL_M",7,30}}},{"cwr3_o_backpack_harness_roll",{{"CUP_30Rnd_762x51_FNFAL_M",4,30}}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Medic_01 : B_G_medic_F_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Medic_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_IMI_Romat"};
        respawnWeapons[] = {"CUP_arifle_IMI_Romat"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        backpack = "cwr3_i_backpack_medic_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_IMI_Romat","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_762x51_FNFAL_M",8,20}}},{"cwr3_i_backpack_medic_empty",{{"Medikit",1},{"FirstAidKit",10}}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Rifleman_AT_01 : B_G_Soldier_LAT_F_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Rifleman_AT_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_IMI_Romat","cwr3_launch_carlgustaf"};
        respawnWeapons[] = {"CUP_arifle_IMI_Romat","cwr3_launch_carlgustaf"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","cwr3_carlgustaf_heat_m","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","cwr3_carlgustaf_heat_m","CUP_20Rnd_762x51_FNFAL_M"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_IMI_Romat","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{"cwr3_launch_carlgustaf","","","",{"cwr3_carlgustaf_heat_m",1},{},""},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_762x51_FNFAL_M",8,20}}},{"CUP_B_AlicePack_OD",{{"cwr3_carlgustaf_heat_m",3,1}}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Marksman_01 : B_G_Soldier_M_F_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Marksman_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_LeeEnfield","CUP_hgun_Browning_HP"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield","CUP_hgun_Browning_HP"};

        magazines[] = {"CUP_10x_303_M","CUP_13Rnd_9x19_Browning_HP","CUP_10x_303_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_13Rnd_9x19_Browning_HP","CUP_10x_303_M","CUP_13Rnd_9x19_Browning_HP"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield","","","CUP_optic_no23mk2",{"CUP_10x_303_M",10},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_10x_303_M",12,10},{"CUP_13Rnd_9x19_Browning_HP",3,13}}},{},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Squad_Leader_01 : B_G_Soldier_SL_F_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Squad_Leader_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_IMI_Romat","CUP_hgun_Browning_HP","Binocular"};
        respawnWeapons[] = {"CUP_arifle_IMI_Romat","CUP_hgun_Browning_HP","Binocular"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_13Rnd_9x19_Browning_HP","CUP_20Rnd_762x51_FNFAL_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_13Rnd_9x19_Browning_HP","CUP_20Rnd_762x51_FNFAL_M","CUP_13Rnd_9x19_Browning_HP"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_IMI_Romat","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_762x51_FNFAL_M",8,20},{"CUP_13Rnd_9x19_Browning_HP",3,13}}},{},"cwr3_b_headgear_m1_olive","",{"Binocular","","","",{},{},""},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_RTO_01 : B_IS73_Rifleman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_RTO_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "RTO";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_IMI_Romat"};
        respawnWeapons[] = {"CUP_arifle_IMI_Romat"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        backpack = "cwr3_b_backpack_radio";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_IMI_Romat","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_762x51_FNFAL_M",8,20}}},{"cwr3_b_backpack_radio",{}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Officer_01 : B_G_officer_F_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Officer_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_b_vest_beltkit_officer","CUP_H_US_patrol_cap_OD","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_b_vest_beltkit_officer","CUP_H_US_patrol_cap_OD","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI","CUP_hgun_Browning_HP"};
        respawnWeapons[] = {"CUP_smg_UZI","CUP_hgun_Browning_HP"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP","CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP","CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_b_vest_beltkit_officer",{{"CUP_32Rnd_9x19_UZI_M",4,32},{"CUP_13Rnd_9x19_Browning_HP",3,13}}},{},"CUP_H_US_patrol_cap_OD","G_Aviator",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Lieutenant_01 : B_IS73_Officer_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Lieutenant_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Lieutenant";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI","CUP_hgun_Browning_HP"};
        respawnWeapons[] = {"CUP_smg_UZI","CUP_hgun_Browning_HP"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP","CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP","CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_32Rnd_9x19_UZI_M",8,32},{"CUP_13Rnd_9x19_Browning_HP",3,13}}},{},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Machine_Gunner_01 : B_IS73_Autorifleman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Machine_Gunner_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_FNMAG"};
        respawnWeapons[] = {"CUP_lmg_FNMAG"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

        backpack = "cwr3_i_backpack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_FNMAG","","","",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100}}},{"cwr3_i_backpack",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",5,100}}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Paratrooper_01 : B_IS73_Rifleman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Paratrooper_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_mitchell","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_mitchell","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A1"};
        respawnWeapons[] = {"CUP_arifle_M16A1"};

        magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_20Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A1","","","",{"CUP_20Rnd_556x45_Stanag",20},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_556x45_Stanag",9,20}}},{},"cwr3_b_headgear_m1_goggles_mitchell","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Paratrooper_Grenadier_01 : B_IS73_Grenadier_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Paratrooper_Grenadier_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Grenadier";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A1GL"};
        respawnWeapons[] = {"CUP_arifle_M16A1GL"};

        magazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_20Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};
        respawnMagazines[] = {"CUP_20Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_20Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A1GL","","","",{"CUP_20Rnd_556x45_Stanag",20},{"CUP_1Rnd_HE_M203",1},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"SmokeShell",2,1},{"CUP_20Rnd_556x45_Stanag",3,20},{"CUP_1Rnd_HE_M203",1,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_556x45_Stanag",9,20},{"CUP_1Rnd_HEDP_M203",10,1}}},{},"cwr3_b_headgear_m1_olive","cwr3_b_facewear_goggles",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Paratrooper_Autorifleman_01 : B_IS73_Autorifleman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Paratrooper_Autorifleman_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Autorifleman";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_FNMAG"};
        respawnWeapons[] = {"CUP_lmg_FNMAG"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

        backpack = "cwr3_i_backpack";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_FNMAG","","","",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100}}},{"cwr3_i_backpack",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",5,100}}},"cwr3_b_headgear_m1_olive","cwr3_b_facewear_goggles",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Paratrooper_Medic_01 : B_IS73_Medic_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Paratrooper_Medic_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Medic";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_woodland_army_1985","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_woodland_army_1985","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI"};
        respawnWeapons[] = {"CUP_smg_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        backpack = "cwr3_i_backpack_medic_empty";

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_32Rnd_9x19_UZI_M",9,32}}},{"cwr3_i_backpack_medic_empty",{{"Medikit",1},{"FirstAidKit",10}}},"cwr3_b_headgear_m1_goggles_woodland_army_1985","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Paratrooper_AT_01 : B_IS73_Rifleman_AT_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Paratrooper_AT_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper (AT)";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_mitchell","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_mitchell","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI","cwr3_launch_carlgustaf"};
        respawnWeapons[] = {"CUP_smg_UZI","cwr3_launch_carlgustaf"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","cwr3_carlgustaf_heat_m","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","cwr3_carlgustaf_heat_m","CUP_32Rnd_9x19_UZI_M"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{"cwr3_launch_carlgustaf","","","",{"cwr3_carlgustaf_heat_m",1},{},""},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_32Rnd_9x19_UZI_M",9,32}}},{"CUP_B_AlicePack_OD",{{"cwr3_carlgustaf_heat_m",3,1}}},"cwr3_b_headgear_m1_goggles_mitchell","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Paratrooper_Marksman_01 : B_IS73_Marksman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Paratrooper_Marksman_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Marksman";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"cwr3_arifle_fnfal_hlag"};
        respawnWeapons[] = {"cwr3_arifle_fnfal_hlag"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"cwr3_arifle_fnfal_hlag","","","cwr3_optic_krr",{"CUP_20Rnd_762x51_FNFAL_M",20},{},"CUP_bipod_FNFAL"},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_20Rnd_762x51_FNFAL_M",9,20}}},{},"cwr3_b_headgear_m1_olive","cwr3_b_facewear_goggles",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Paratrooper_Leader_01 : B_IS73_Squad_Leader_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Paratrooper_Leader_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Leader";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_erdl","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_goggles_erdl","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI","CUP_hgun_Browning_HP","Binocular"};
        respawnWeapons[] = {"CUP_smg_UZI","CUP_hgun_Browning_HP","Binocular"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP","CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP","CUP_32Rnd_9x19_UZI_M","CUP_13Rnd_9x19_Browning_HP"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{"CUP_hgun_Browning_HP","","","",{"CUP_13Rnd_9x19_Browning_HP",13},{},""},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_13Rnd_9x19_Browning_HP",3,13},{"CUP_32Rnd_9x19_UZI_M",9,32}}},{},"cwr3_b_headgear_m1_goggles_erdl","",{"Binocular","","","",{},{},""},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Crew_01 : B_IS73_Rifleman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Crew_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crew";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_b_vest_alice_crew","cwr3_b_headgear_cvc","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_b_vest_alice_crew","cwr3_b_headgear_cvc","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI"};
        respawnWeapons[] = {"CUP_smg_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_b_vest_alice_crew",{{"CUP_32Rnd_9x19_UZI_M",8,32}}},{},"cwr3_b_headgear_cvc","cwr3_b_facewear_goggles",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Helicopter_Pilot_01 : B_IS73_Crew_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Helicopter_Pilot_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_b_vest_pilot","cwr3_b_headgear_pilot_visor_white","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_b_vest_pilot","cwr3_b_headgear_pilot_visor_white","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI"};
        respawnWeapons[] = {"CUP_smg_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_b_vest_pilot",{{"CUP_32Rnd_9x19_UZI_M",8,32}}},{},"cwr3_b_headgear_pilot_visor_white","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_M113_01 : cwr3_b_m113a1_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_M113_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Crew_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Crew_01"; };
            class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
            class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
            class MainTurretTurnIn : MainTurretTurnIn { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m113\data\main_olive_CO.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m113\data\unique_olive_CO.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m113\data\accessories_olive_CO.paa'];_unit setObjectTextureGlobal [3,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_IS73_M113_MEV_01 : cwr3_b_m113a1_mev_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_M113_MEV_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113 MEV";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Crew_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m113\data\main_olive_CO.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m113\data\unique_olive_CO.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m113\data\accessories_olive_CO.paa'];_unit setObjectTextureGlobal [3,'\cwr3\vehicles\cwr3_m113\data\sign_med_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_IS73_M577_CP_01 : cwr3_b_m577_hq_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_M577_CP_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M577 CP";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Crew_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m113\data\variants\577_main_merdc_summer_CO.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m113\data\variants\main_merdc_summer_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m113\data\variants\unique_merdc_summer_co.paa'];_unit setObjectTextureGlobal [3,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "merdc_summer";

    };

    class B_IS73_M939_01 : cwr3_b_m939_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_M939_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M939";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m939\data\truck5t_01_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m939\data\truck5t_02_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m939\data\truck5t_dash_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_IS73_M151_01 : cwr3_b_m151_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_M151_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M151";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m151\data\m151_us_hull_merdcD_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m151\data\m151_us_canvas_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m151\data\m151_us_detail_merdcD_co.paa'];_unit setObjectTextureGlobal [3,'\cwr3\vehicles\cwr3_m151\data\m151_us_underbody_merdcD_co.paa'];_unit setObjectTextureGlobal [4,'\cwr3\vehicles\cwr3_m151\data\m151_us_wheel_merdcD_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "merdc_greydesert";

    };

    class B_IS73_M151_Armed_01 : cwr3_b_m151_m2_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_M151_Armed_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M151 (Armed)";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Grenadier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_IS73_Squad_Leader_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m151\data\m151_us_hull_merdcD_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m151\data\m151_us_canvas_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m151\data\m151_us_detail_merdcD_co.paa'];_unit setObjectTextureGlobal [3,'\cwr3\vehicles\cwr3_m151\data\m151_us_underbody_merdcD_co.paa'];_unit setObjectTextureGlobal [4,'\cwr3\vehicles\cwr3_m151\data\m151_us_wheel_merdcD_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "merdc_greydesert";

    };

    class B_IS73_Ammo_Truck_01 : cwr3_b_m939_reammo_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Ammo_Truck_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Truck";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m939\data\truck5t_01_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m939\data\truck5t_02_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m939\data\truck5t_dash_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_IS73_Fuel_Truck_01 : cwr3_b_m939_refuel_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Fuel_Truck_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fuel Truck";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m939\data\truck5t_01_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m939\data\truck5t_02_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m939\data\truck5t_dash_co.paa'];_unit setObjectTextureGlobal [3,'\a3\structures_f\items\vessels\data\firebarrel_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_IS73_Repair_Truck_01 : cwr3_b_m939_repair_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Repair_Truck_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Truck";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m939\data\truck5t_01_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m939\data\truck5t_02_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m939\data\truck5t_dash_co.paa'];_unit setObjectTextureGlobal [3,'\cwr3\vehicles\cwr3_m939\data\truck5t_repair_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_IS73_UH_1_01 : CUP_I_UH1H_RACS_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_UH_1_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class RightDoorGun : RightDoorGun { gunnerType = "B_IS73_Rifleman_01"; };
            class LeftDoorGun : LeftDoorGun { gunnerType = "B_IS73_Rifleman_01"; };
            class CopilotTurret : CopilotTurret { gunnerType = "B_IS73_Helicopter_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa'];_unit setObjectTextureGlobal [2,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class B_IS73_CH_47_01 : cwr3_b_ch47_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_CH_47_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH 47";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Helicopter_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Helicopter_Pilot_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "B_IS73_Helicopter_Pilot_01"; };
            class BackDoorGun : BackDoorGun { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = "B_IS73_Helicopter_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa'];_unit setObjectTextureGlobal [1,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa'];_unit setObjectTextureGlobal [2,''];_unit setObjectTextureGlobal [3,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "BAF";

    };

    class B_IS73_155mm_Howitzer_01 : cwr3_b_m119_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_155mm_Howitzer_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "155mm Howitzer";
        side = 1;
        faction = "B_IS73";
        crew = "cwr3_b_soldier";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_81mm_Mortar_01 : cwr3_b_m252_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_81mm_Mortar_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "81mm Mortar";
        side = 1;
        faction = "B_IS73";
        crew = "cwr3_b_soldier";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_M2_50_01 : cwr3_b_m2hb_high_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_M2_50_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 .50";
        side = 1;
        faction = "B_IS73";
        crew = "cwr3_b_soldier";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Mortar_Gunner_01 : B_IS73_Rifleman_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Mortar_Gunner_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Gunner";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI"};
        respawnWeapons[] = {"CUP_smg_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        backpack = "CUP_B_M252_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_32Rnd_9x19_UZI_M",9,32}}},{"CUP_B_M252_Gun_Bag",{}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Mortar_Assistant_01 : B_IS73_Mortar_Gunner_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Mortar_Assistant_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar Assistant";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI"};
        respawnWeapons[] = {"CUP_smg_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        backpack = "CUP_B_M252_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_32Rnd_9x19_UZI_M",9,32}}},{"CUP_B_M252_Bipod_Bag",{}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_MG_Gunner_01 : B_IS73_Mortar_Gunner_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_MG_Gunner_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "MG Gunner";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI"};
        respawnWeapons[] = {"CUP_smg_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        backpack = "CUP_B_M2_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_32Rnd_9x19_UZI_M",9,32}}},{"CUP_B_M2_Gun_Bag",{}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_MG_Assistant_01 : B_IS73_MG_Gunner_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_MG_Assistant_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "MG Assistant";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_i_vest_58webbing","cwr3_b_headgear_m1_olive","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_smg_UZI"};
        respawnWeapons[] = {"CUP_smg_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        backpack = "CUP_B_M2_MiniTripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_i_vest_58webbing",{{"CUP_32Rnd_9x19_UZI_M",9,32}}},{"CUP_B_M2_MiniTripod_Bag",{}},"cwr3_b_headgear_m1_olive","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Magach_5_01 : cwr3_i_m41a1_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Magach_5_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Magach 5";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Crew_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Crew_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cwr3\vehicles\cwr3_m41\data\main_olive_CO.paa'];_unit setObjectTextureGlobal [1,'cwr3\vehicles\cwr3_m41\data\large_olive_CO.paa'];_unit setObjectTextureGlobal [2,'cwr3\vehicles\cwr3_m41\data\small_olive_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class B_IS73_Magach_6_01 : cwr3_b_m60a3_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Magach_6_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Magach 6";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Crew_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Crew_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_m60a3\data\body_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_m60a3\data\turret_co.paa'];_unit setObjectTextureGlobal [2,'\cwr3\vehicles\cwr3_m60a3\data\gun_mount_co.paa'];_unit setObjectTextureGlobal [3,'\cwr3\vehicles\cwr3_m60a3\data\main_gun_co.paa'];_unit setObjectTextureGlobal [4,'\cwr3\vehicles\cwr3_m60a3\data\fuelcan_co.paa'];_unit setObjectTextureGlobal [5,'\cwr3\vehicles\cwr3_m60a3\data\wheel_1_co.paa'];_unit setObjectTextureGlobal [6,'\cwr3\vehicles\cwr3_m60a3\data\wheel_2_co.paa'];_unit setObjectTextureGlobal [7,'\cwr3\vehicles\cwr3_m60a3\data\m1a1_us_02_co.paa'];_unit setObjectTextureGlobal [8,'\cwr3\vehicles\cwr3_m60a3\data\back_co.paa'];_unit setObjectTextureGlobal [9,'\cwr3\vehicles\cwr3_m60a3\data\alpha_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "olive";

    };

    class B_IS73_Patrol_Boat_01 : cwr3_b_boat_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Patrol_Boat_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Patrol Boat";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Paratrooper_Leader_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Paratrooper_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_Zu_23_01 : B_Tura_ZU23_lxWS_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Zu_23_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23";
        side = 1;
        faction = "B_IS73";
        crew = "B_Tura_watcher_lxWS";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'lxws\vehicles_f_lxws\zu23\data\zu23_base_co.paa'];_unit setObjectTextureGlobal [1,'lxws\vehicles_f_lxws\zu23\data\zu23_co.paa'];_unit setObjectTextureGlobal [2,'lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_co.paa'];_unit setObjectTextureGlobal [3,'lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Tan";

    };

    class B_IS73_Pilot_01 : B_IS73_Helicopter_Pilot_01 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_Pilot_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "B_IS73";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "cwr3_o_uniform_pilot";

        linkedItems[] = {"cwr3_b_vest_pilot","cwr3_b_headgear_pilot_visor_white","ItemMap","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"cwr3_b_vest_pilot","cwr3_b_headgear_pilot_visor_white","ItemMap","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_UZI"};
        respawnWeapons[] = {"CUP_hgun_UZI"};

        magazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};
        respawnMagazines[] = {"CUP_32Rnd_9x19_UZI_M","CUP_32Rnd_9x19_UZI_M"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_UZI","","","",{"CUP_32Rnd_9x19_UZI_M",32},{},""},{"cwr3_o_uniform_pilot",{{"FirstAidKit",1},{"CUP_HandGrenade_RGO",2,1},{"SmokeShell",2,1}}},{"cwr3_b_vest_pilot",{{"CUP_30Rnd_9x19_UZI",8,30}}},{},"cwr3_b_headgear_pilot_visor_white","",{},{"ItemMap","","","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_IS73_F4_01 : cwr3_b_f4e_OCimport_02 {
        editorPreview = \x\YomKippur73\addons\b_is73\data\preview\B_IS73_F4_01.jpg;
        author = "Enol";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-4";
        side = 1;
        faction = "B_IS73";
        crew = "B_IS73_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "B_IS73_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cwr3\vehicles\cwr3_f4\tex\body_usaf_grey_co.paa'];_unit setObjectTextureGlobal [1,'\cwr3\vehicles\cwr3_f4\tex\wing_usaf_grey_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "usaf_grey";

    };

    class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_East_Uniforms_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class B_IS73_AmmoBox : Box_NATO_Ammo_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Israeli Defense Forces 73 Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_HandGrenade_RGO,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(20Rnd_762x51_slr_lxWS,50);
            mag_xx(1Rnd_40mm_HE_lxWS,50);
            mag_xx(1Rnd_58mm_AT_lxWS,50);
            mag_xx(CUP_30Rnd_762x51_FNFAL_M,50);
            mag_xx(cwr3_carlgustaf_heat_m,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_13Rnd_9x19_Browning_HP,50);
            mag_xx(CUP_32Rnd_9x19_UZI_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_20Rnd_556x45_Stanag,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class B_IS73_WeaponsBox : Box_NATO_Wps_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Israeli Defense Forces 73 Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(20Rnd_762x51_slr_lxWS,50);
            mag_xx(1Rnd_40mm_HE_lxWS,50);
            mag_xx(CUP_30Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_13Rnd_9x19_Browning_HP,50);
            mag_xx(CUP_32Rnd_9x19_UZI_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_20Rnd_556x45_Stanag,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_IMI_Romat,10);
            weap_xx(arifle_SLR_GL_lxWS,10);
            weap_xx(cwr3_arifle_fnfalo,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_hgun_Browning_HP,10);
            weap_xx(CUP_smg_UZI,10);
            weap_xx(CUP_lmg_FNMAG,10);
            weap_xx(CUP_arifle_M16A1,10);
            weap_xx(CUP_arifle_M16A1GL,10);
            weap_xx(cwr3_arifle_fnfal_hlag,10);
            weap_xx(CUP_hgun_UZI,10);
        };
        class TransportItems {
            item_xx(CUP_optic_no23mk2,10);
            item_xx(cwr3_optic_krr,10);
            item_xx(CUP_bipod_FNFAL,10);
        };
    };
    class B_IS73_LaunchersBox : Box_NATO_WpsLaunch_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Israeli Defense Forces 73 Launchers Box;
        class TransportMagazines {
            mag_xx(cwr3_carlgustaf_heat_m,5);
        };
        class TransportWeapons {
            weap_xx(cwr3_launch_carlgustaf,5);
        };
        class TransportItems {
        };
    };
    class B_IS73_UniformBox : Box_NATO_Uniforms_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Israeli Defense Forces 73 Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_U_O_TK_Green,15);
            item_xx(cwr3_o_uniform_pilot,15);
        };
    };
    class B_IS73_SupportBox : Box_NATO_Support_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Israeli Defense Forces 73 Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(cwr3_i_vest_58webbing,10);
            item_xx(cwr3_b_headgear_m1_olive,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(cwr3_o_backpack_harness_roll,10);
            item_xx(cwr3_i_backpack_medic_empty,10);
            item_xx(CUP_B_AlicePack_OD,10);
            item_xx(Binocular,10);
            item_xx(cwr3_b_backpack_radio,10);
            item_xx(ItemRadio,10);
            item_xx(cwr3_b_vest_beltkit_officer,10);
            item_xx(CUP_H_US_patrol_cap_OD,10);
            item_xx(G_Aviator,10);
            item_xx(cwr3_i_backpack,10);
            item_xx(cwr3_b_headgear_m1_goggles_mitchell,10);
            item_xx(cwr3_b_facewear_goggles,10);
            item_xx(cwr3_b_headgear_m1_goggles_woodland_army_1985,10);
            item_xx(cwr3_b_headgear_m1_goggles_erdl,10);
            item_xx(cwr3_b_vest_alice_crew,10);
            item_xx(cwr3_b_headgear_cvc,10);
            item_xx(cwr3_b_vest_pilot,10);
            item_xx(cwr3_b_headgear_pilot_visor_white,10);
            item_xx(CUP_B_M252_Gun_Bag,10);
            item_xx(CUP_B_M252_Bipod_Bag,10);
            item_xx(CUP_B_M2_Gun_Bag,10);
            item_xx(CUP_B_M2_MiniTripod_Bag,10);
            item_xx(G_Sport_BlackWhite,10);
        };
    };
    class B_IS73_SupplyBox : B_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Israeli Defense Forces 73 Supply Box;
        class TransportMagazines {
            mag_xx(CUP_HandGrenade_RGO,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(20Rnd_762x51_slr_lxWS,50);
            mag_xx(1Rnd_40mm_HE_lxWS,50);
            mag_xx(1Rnd_58mm_AT_lxWS,50);
            mag_xx(CUP_30Rnd_762x51_FNFAL_M,50);
            mag_xx(cwr3_carlgustaf_heat_m,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_13Rnd_9x19_Browning_HP,50);
            mag_xx(CUP_32Rnd_9x19_UZI_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_20Rnd_556x45_Stanag,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_30Rnd_9x19_UZI,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_IMI_Romat,10);
            weap_xx(arifle_SLR_GL_lxWS,10);
            weap_xx(cwr3_arifle_fnfalo,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_hgun_Browning_HP,10);
            weap_xx(CUP_smg_UZI,10);
            weap_xx(CUP_lmg_FNMAG,10);
            weap_xx(CUP_arifle_M16A1,10);
            weap_xx(CUP_arifle_M16A1GL,10);
            weap_xx(cwr3_arifle_fnfal_hlag,10);
            weap_xx(CUP_hgun_UZI,10);
            weap_xx(cwr3_launch_carlgustaf,10);
        };
        class TransportItems {
            item_xx(CUP_optic_no23mk2,10);
            item_xx(cwr3_optic_krr,10);
            item_xx(CUP_bipod_FNFAL,10);
            item_xx(cwr3_i_vest_58webbing,10);
            item_xx(cwr3_b_headgear_m1_olive,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(cwr3_o_backpack_harness_roll,10);
            item_xx(cwr3_i_backpack_medic_empty,10);
            item_xx(CUP_B_AlicePack_OD,10);
            item_xx(Binocular,10);
            item_xx(cwr3_b_backpack_radio,10);
            item_xx(ItemRadio,10);
            item_xx(cwr3_b_vest_beltkit_officer,10);
            item_xx(CUP_H_US_patrol_cap_OD,10);
            item_xx(G_Aviator,10);
            item_xx(cwr3_i_backpack,10);
            item_xx(cwr3_b_headgear_m1_goggles_mitchell,10);
            item_xx(cwr3_b_facewear_goggles,10);
            item_xx(cwr3_b_headgear_m1_goggles_woodland_army_1985,10);
            item_xx(cwr3_b_headgear_m1_goggles_erdl,10);
            item_xx(cwr3_b_vest_alice_crew,10);
            item_xx(cwr3_b_headgear_cvc,10);
            item_xx(cwr3_b_vest_pilot,10);
            item_xx(cwr3_b_headgear_pilot_visor_white,10);
            item_xx(CUP_B_M252_Gun_Bag,10);
            item_xx(CUP_B_M252_Bipod_Bag,10);
            item_xx(CUP_B_M2_Gun_Bag,10);
            item_xx(CUP_B_M2_MiniTripod_Bag,10);
            item_xx(G_Sport_BlackWhite,10);
            item_xx(CUP_U_O_TK_Green,10);
            item_xx(cwr3_o_uniform_pilot,10);
        };
    };

};