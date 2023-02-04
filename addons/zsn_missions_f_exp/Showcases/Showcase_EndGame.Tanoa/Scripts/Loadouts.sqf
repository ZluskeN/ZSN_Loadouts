// *******************************
// Apply custom loadouts for units
// *******************************

If (isNull _this) ExitWith {["Non-existent unit %1 used for custom loadout! Grid: %2",_this,(mapGridPosition _this)] call BIS_fnc_logFormat};

removeAllWeapons _this;
removeAllItems _this;
removeAllAssignedItems _this;
removeUniform _this;
removeVest _this;
removeBackpack _this;
removeHeadgear _this;
removeGoggles _this;

//-----
// NATO
//-----

// Team leader
If (typeOf _this == "B_T_Soldier_TL_F") Then {

	_this forceAddUniform "U_B_CTRG_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier2_rgr_noflag_F";
	for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
	for "_i" from 1 to 2 do {_this addItemToVest "1Rnd_HE_Grenade_shell";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_HelmetB_TI_tna_F";

	_this addWeapon "arifle_SPAR_01_GL_khk_F";
	// _this addPrimaryWeaponItem "acc_flashlight";
	_this addPrimaryWeaponItem "optic_Holosight_blk_F";
	// _this addWeapon "hgun_P07_khk_F";
	// _this addWeapon "Binocular";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};

// Grenadier
If (typeOf _this == "B_T_Soldier_GL_F") Then {

	_this forceAddUniform "U_B_CTRG_Soldier_3_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier2_rgr_noflag_F";
	for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
	for "_i" from 1 to 2 do {_this addItemToVest "1Rnd_HE_Grenade_shell";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	for "_i" from 1 to 2 do {_this addItemToVest "MiniGrenade";};
	_this addHeadgear "H_HelmetB_TI_tna_F";
	_this addGoggles "G_Balaclava_TI_tna_F";

	_this addWeapon "arifle_SPAR_01_GL_khk_F";
	// _this addPrimaryWeaponItem "acc_flashlight";
	_this addPrimaryWeaponItem "optic_Holosight_blk_F";
	// _this addWeapon "hgun_P07_khk_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};

// MG
If (typeOf _this == "B_T_soldier_AR_F") Then {

	_this forceAddUniform "U_B_CTRG_Soldier_3_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier2_rgr_noflag_F";
	for "_i" from 1 to 5 do {_this addItemToVest "150Rnd_556x45_Drum_Mag_Tracer_F";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_Cap_headphones";
	_this addGoggles "G_Balaclava_TI_tna_F";

	_this addWeapon "arifle_SPAR_02_khk_F";
	// _this addPrimaryWeaponItem "acc_flashlight";
	_this addPrimaryWeaponItem "optic_Holosight_blk_F";
	_this addPrimaryWeaponItem "bipod_01_F_blk";
	// _this addWeapon "hgun_P07_khk_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};

// Medic
If (typeOf _this == "B_T_Medic_F") Then {

	_this forceAddUniform "U_B_CTRG_Soldier_3_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier1_rgr_noflag_F";
	for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
	_this addBackpack "B_AssaultPack_rgr";
	_this addItemToBackpack "Medikit";
	_this addHeadgear "H_HelmetB_TI_tna_F";
	_this addGoggles "G_Balaclava_TI_tna_F";

	_this addWeapon "arifle_SPAR_01_khk_F";
	// _this addPrimaryWeaponItem "acc_flashlight";
	_this addPrimaryWeaponItem "optic_Holosight_blk_F";
	// _this addWeapon "hgun_P07_khk_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};

// Marksman
If (typeOf _this == "B_T_soldier_M_F") Then {

	_this forceAddUniform "U_B_CTRG_Soldier_2_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier2_rgr_noflag_F";
	for "_i" from 1 to 8 do {_this addItemToVest "20Rnd_762x51_Mag";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_Cap_headphones";
	_this addGoggles "G_Balaclava_TI_tna_F";

	_this addWeapon "arifle_SPAR_03_khk_F";
	// _this addPrimaryWeaponItem "acc_flashlight";
	_this addPrimaryWeaponItem "optic_ERCO_khk_F";
	_this addPrimaryWeaponItem "bipod_01_F_blk";
	// _this addWeapon "hgun_P07_khk_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};

// Rifleman
If (typeOf _this == "B_T_Soldier_F") Then {

	_this forceAddUniform "U_B_CTRG_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier1_rgr_noflag_F";
	for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_HelmetB_TI_tna_F";

	_this addWeapon "arifle_SPAR_01_khk_F";
	// _this addPrimaryWeaponItem "acc_flashlight";
	_this addPrimaryWeaponItem "optic_Holosight_blk_F";
	// _this addWeapon "hgun_P07_khk_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};
/*
// MMG
If (typeOf _this == "B_HeavyGunner_F") Then {

	_this forceAddUniform "U_B_T_Soldier_AR_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier1_tna_F";
	for "_i" from 1 to 2 do {_this addItemToVest "130Rnd_338_Mag";};
	_this addHeadgear "H_Booniehat_tna_F";

	_this addWeapon "MMG_02_black_F";
	_this addPrimaryWeaponItem "bipod_01_F_blk";
	// _this addPrimaryWeaponItem "acc_flashlight";
	// _this addWeapon "hgun_P07_khk_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};

// Sharphooter
If (typeOf _this == "B_Sharpshooter_F") Then {

	_this forceAddUniform "U_B_T_Soldier_SL_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellBlue";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_PlateCarrier1_tna_F";
	for "_i" from 1 to 8 do {_this addItemToVest "20Rnd_762x51_Mag";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_Booniehat_tna_F";

	_this addWeapon "srifle_DMR_03_khaki_F";
	_this addPrimaryWeaponItem "bipod_01_F_blk";
	// _this addPrimaryWeaponItem "acc_flashlight";
	// _this addWeapon "hgun_P07_khk_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};

};
*/

//-----
// CSAT
//-----

// Grenadier
If (typeOf _this == "O_T_Soldier_GL_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_HarnessOGL_ghex_F";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_580x42_Mag_Tracer_F";};
	for "_i" from 1 to 6 do {_this addItemToVest "1Rnd_HE_Grenade_shell";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	for "_i" from 1 to 2 do {_this addItemToVest "MiniGrenade";};
	_this addHeadgear "H_HelmetO_ghex_F";

	_this addWeapon "arifle_CTAR_GL_blk_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_ACO_grn";
	// _this addWeapon "hgun_Rook40_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// MG
If (typeOf _this == "O_T_Soldier_AR_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_HarnessO_ghex_F";
	for "_i" from 1 to 3 do {_this addItemToVest "100Rnd_580x42_Mag_Tracer_F";};
	_this addItemToVest "HandGrenade";
	_this addHeadgear "H_HelmetO_ghex_F";

	_this addWeapon "arifle_CTARS_blk_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_ACO_grn";
	// _this addWeapon "hgun_Rook40_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// Medic
If (typeOf _this == "O_T_Medic_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_HarnessO_ghex_F";
	for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_580x42_Mag_Tracer_F";};
	_this addBackpack "B_FieldPack_ghex_F";
	_this addItemToBackpack "Medikit";
	_this addHeadgear "H_HelmetO_ghex_F";

	_this addWeapon "arifle_CTAR_blk_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_ACO_grn";
	// _this addWeapon "hgun_Rook40_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// Marksman
If (typeOf _this == "O_T_Soldier_M_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_HarnessO_ghex_F";
	for "_i" from 1 to 8 do {_this addItemToVest "20Rnd_650x39_Cased_Mag_F";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_HelmetSpecO_ghex_F";

	_this addWeapon "srifle_DMR_07_blk_F";
	// _this addPrimaryWeaponItem "optic_Arco";
	// _this addWeapon "hgun_Rook40_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// Rifleman
If (typeOf _this == "O_T_Soldier_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_HarnessO_ghex_F";
	for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_580x42_Mag_Tracer_F";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_HelmetO_ghex_F";

	_this addWeapon "arifle_CTAR_blk_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_ACO_grn";
	// _this addWeapon "hgun_Rook40_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// Team leader
If (typeOf _this == "O_T_Soldier_TL_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "6Rnd_45ACP_Cylinder";};
	_this addVest "V_HarnessO_ghex_F";
	for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_580x42_Mag_Tracer_F";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_HelmetLeaderO_ghex_F";

	_this addWeapon "arifle_CTAR_blk_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_Arco";
	// _this addWeapon "hgun_Pistol_heavy_02_F";
	_this addWeapon "Rangefinder";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";
	_this linkItem "ItemGPS";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

/*
// MMG
If (typeOf _this == "O_HeavyGunner_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_HarnessO_ghex_F";
	for "_i" from 1 to 2 do {_this addItemToVest "150Rnd_93x64_Mag";};
	_this addHeadgear "H_HelmetO_ghex_F";

	_this addWeapon "MMG_01_hex_F";
	_this addPrimaryWeaponItem "bipod_02_F_hex";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addWeapon "hgun_Rook40_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// Sharpshooter
If (typeOf _this == "O_Sharpshooter_F") Then {

	_this forceAddUniform "U_O_T_Soldier_F";
	_this addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShellRed";};
	// for "_i" from 1 to 2 do {_this addItemToUniform "16Rnd_9x21_Mag";};
	_this addVest "V_HarnessO_ghex_F";
	for "_i" from 1 to 6 do {_this addItemToVest "10Rnd_93x64_DMR_05_Mag";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_HelmetO_ghex_F";

	_this addWeapon "srifle_DMR_05_blk_F";
	_this addPrimaryWeaponItem "bipod_02_F_blk";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addWeapon "hgun_Rook40_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};
*/

// Viper
If (typeOf _this == "O_V_Soldier_ghex_F") Then {

	_this forceAddUniform "U_O_V_Soldier_Viper_F";
	_this addBackpack "B_ViperHarness_blk_F";
	for "_i" from 1 to 2 do {_this addItemToBackpack "FirstAidKit";};
	for "_i" from 1 to 8 do {_this addItemToBackpack "30Rnd_65x39_caseless_green_mag_Tracer";};
	for "_i" from 1 to 2 do {_this addItemToBackpack "10Rnd_50BW_Mag_F";};
	for "_i" from 1 to 2 do {_this addItemToBackpack "MiniGrenade";};
	for "_i" from 1 to 2 do {_this addItemToBackpack "SmokeShellRed";};
	_this addHeadgear "H_HelmetO_ViperSP_ghex_F";

	_this addWeapon "arifle_ARX_blk_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_ACO_grn";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";
	_this linkItem "ItemGPS";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// Pilot
If (typeOf _this == "O_heliPilot_F") Then {

	_this forceAddUniform "U_O_PilotCoveralls";
	_this addHeadgear "H_PilotHelmetHeli_O";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";
	_this linkItem "ItemGPS";
	_this linkItem "NVGoggles_OPFOR";

	// _this setFace (format ["AsianHead_A3_0%1", 1+ floor random 7]);

	If (true) ExitWith {};

};

// Scientist
If (typeOf _this == "O_Survivor_F") Then {

	_this addGoggles "G_Spectacles_Tinted";
	_this setFace "AsianHead_A3_05";

	If (true) ExitWith {};

};

//---------
// Syndikat
//---------
/*
// Rifleman
If (typeOf _this == "I_G_Soldier_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_4_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_BandollierB_oli";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_762x39_Mag_Tracer_F";};
	_this addItemToVest "HandGrenade";
	_this addGoggles "G_Bandanna_khk";

	_this addWeapon "arifle_AKM_FL_F";

	_this setFace (format ["TanoanHead_A3_0%1", 1+ floor random 8]);

	If (true) ExitWith {};
};

// Grenadier
If (typeOf _this == "I_G_Soldier_GL_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_1_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacVest_camo";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_556x45_Stanag_Tracer_Yellow";};
	for "_i" from 1 to 4 do {_this addItemToVest "1Rnd_HE_Grenade_shell";};
	_this addItemToVest "HandGrenade";
	_this addHeadgear "H_Bandanna_khk";

	_this addWeapon "arifle_TRG21_GL_F";
	_this addPrimaryWeaponItem "acc_flashlight";

	_this setFace (format ["TanoanHead_A3_0%1", 1+ floor random 8]);

	If (true) ExitWith {};
};

// Autorifleman
If (typeOf _this == "I_G_Soldier_AR_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_3_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_Chestrig_rgr";
	for "_i" from 1 to 2 do {_this addItemToVest "200Rnd_556x45_Box_Tracer_F";};
	_this addItemToVest "HandGrenade";
	_this addHeadgear "H_Booniehat_oli";

	_this addWeapon "LMG_03_F";
	_this addPrimaryWeaponItem "bipod_03_F_blk";
	// _this addPrimaryWeaponItem "acc_flashlight";

	_this setFace (format ["TanoanHead_A3_0%1", 1+ floor random 8]);

	If (true) ExitWith {};
};

// Sharpshooter
If (typeOf _this == "I_G_Sharpshooter_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_1_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_BandollierB_rgr";
	for "_i" from 1 to 4 do {_this addItemToVest "20Rnd_762x51_Mag";};
	_this addItemToVest "HandGrenade";
	_this addHeadgear "H_Beret_blk";
	_this addGoggles "G_Bandanna_blk";

	_this addWeapon "srifle_DMR_06_olive_F";
	// _this addPrimaryWeaponItem "optic_DMS";
	_this addPrimaryWeaponItem "bipod_03_F_blk";

	_this setFace (format ["TanoanHead_A3_0%1", 1+ floor random 8]);

	If (true) ExitWith {};
};

// Medic
If (typeOf _this == "I_G_medic_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_4_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_BandollierB_khk";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_545x39_Mag_Tracer_F";};
	_this addBackpack "B_FieldPack_khk";
	_this addItemToBackpack "Medikit";
	_this addHeadgear "H_Booniehat_khk";
	_this addGoggles "G_Bandanna_khk";

	_this addWeapon "arifle_AKS_F";

	_this setFace (format ["TanoanHead_A3_0%1", 1+ floor random 8]);

	If (true) ExitWith {};
};

// Rifleman (AT)
If (typeOf _this == "I_G_Soldier_LAT_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_1_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacChestrig_grn_F";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_762x39_Mag_Tracer_F";};
	_this addBackpack "B_FieldPack_khk";
	for "_i" from 1 to 2 do {_this addItemToBackpack "RPG32_F";};
	_this addGoggles "G_Balaclava_oli";

	_this addWeapon "arifle_AKM_FL_F";
	_this addWeapon "launch_RPG32_F";

	_this setFace (format ["TanoanHead_A3_0%1", 1+ floor random 8]);

	If (true) ExitWith {};
};

// Team Leader
If (typeOf _this == "I_G_Soldier_TL_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_2_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacVest_camo";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_762x39_Mag_Tracer_F";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_Beret_blk";
	_this addGoggles "G_Bandanna_khk";

	_this addWeapon "arifle_AKM_FL_F";
	_this addWeapon "Binocular";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	_this setFace (format ["TanoanHead_A3_0%1", 1+ floor random 8]);

	If (true) ExitWith {};
};

// Officer
If (typeOf _this == "I_G_Officer_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Camo_F";
	_this addVest "V_BandollierB_oli";
	for "_i" from 1 to 5 do {_this addItemToVest "16Rnd_9x21_Mag";};
	_this addHeadgear "H_Booniehat_oli";

	_this addWeapon "hgun_Pistol_01_F";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	_this setFace "TanoanHead_A3_01";

	If (true) ExitWith {};
};
*/
