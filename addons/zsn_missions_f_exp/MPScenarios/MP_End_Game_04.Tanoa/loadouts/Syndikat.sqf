// Loadouts for Syndikat opponents - WIP, in the end, default sandbox equipment should be used

removeAllWeapons _this;
removeAllItems _this;
removeAllAssignedItems _this;
removeUniform _this;
removeVest _this;
removeBackpack _this;
removeHeadgear _this;
removeGoggles _this;

// Non-defined type of loadout

	If
	!(typeOf _this in
		["I_G_Soldier_F",
		"I_G_Soldier_GL_F",
		"I_G_Soldier_AR_F",
		"I_G_Sharpshooter_F",
		"I_G_medic_F",
		"I_G_Soldier_LAT_F",
		"I_G_Soldier_TL_F",
		"I_G_officer_F",
		"I_G_engineer_F"]
	) exitWith {["Non-existent loadout for %1, grid:%2",_this,(mapGridPosition _this)] call BIS_fnc_logFormat};

// Rifleman
If (typeOf _this == "I_G_Soldier_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_4_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacChestrig_grn_F";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_556x45_Stanag";};
	_this addItemToVest "HandGrenade";
	_this addGoggles "G_Bandanna_khk";

	_this addWeapon "arifle_TRG21_F";
	_this addPrimaryWeaponItem "acc_flashlight";

	If (true) ExitWith {};
};

// Grenadier
If (typeOf _this == "I_G_Soldier_GL_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_1_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacVest_camo";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_556x45_Stanag";};
	for "_i" from 1 to 4 do {_this addItemToVest "1Rnd_HE_Grenade_shell";};
	_this addItemToVest "HandGrenade";
	_this addHeadgear "H_Bandanna_khk";

	_this addWeapon "arifle_TRG21_GL_F";
	_this addPrimaryWeaponItem "acc_flashlight";

	If (true) ExitWith {};
};

// Autorifleman
If (typeOf _this == "I_G_Soldier_AR_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_3_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_Chestrig_rgr";
	for "_i" from 1 to 2 do {_this addItemToVest "200Rnd_65x39_cased_Box";};
	_this addItemToVest "HandGrenade";
	_this addHeadgear "H_Booniehat_oli";

	_this addWeapon "LMG_Mk200_F";
	_this addPrimaryWeaponItem "bipod_03_F_blk";

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

	If (true) ExitWith {};
};

// Medic
If (typeOf _this == "I_G_medic_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_4_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_BandollierB_khk";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_9x21_Mag";};
	_this addBackpack "B_FieldPack_khk";
	_this addItemToBackpack "Medikit";
	_this addHeadgear "H_Booniehat_khk";
	_this addGoggles "G_Bandanna_khk";

	_this addWeapon "SMG_02_F";
	_this addPrimaryWeaponItem "acc_flashlight";

	If (true) ExitWith {};
};

// Rifleman (AT)
If (typeOf _this == "I_G_Soldier_LAT_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_1_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacChestrig_grn_F";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_9x21_Mag";};
	_this addBackpack "B_FieldPack_khk";
	for "_i" from 1 to 2 do {_this addItemToBackpack "RPG32_F";};
	_this addGoggles "G_Balaclava_oli";

	_this addWeapon "SMG_02_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	_this addWeapon "launch_RPG32_F";

	If (true) ExitWith {};
};

// Team Leader
If (typeOf _this == "I_G_Soldier_TL_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_2_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacVest_camo";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_556x45_Stanag";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_Beret_blk";
	_this addGoggles "G_Bandanna_khk";

	_this addWeapon "arifle_TRG20_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_ACO_grn";
	_this addWeapon "Binocular";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";

	If (true) ExitWith {};
};

// Officer
If (typeOf _this == "I_G_officer_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_2_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacVest_camo";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_556x45_Stanag";};
	for "_i" from 1 to 4 do {_this addItemToVest "1Rnd_HE_Grenade_shell";};
	for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
	_this addHeadgear "H_Beret_blk";
	_this addGoggles "G_Bandanna_aviator";

	_this addWeapon "arifle_TRG21_GL_F";
	_this addPrimaryWeaponItem "acc_flashlight";
	// _this addPrimaryWeaponItem "optic_ACO_grn";
	_this addWeapon "Binocular";

	_this linkItem "ItemMap";
	_this linkItem "ItemCompass";
	_this linkItem "ItemWatch";
	_this linkItem "ItemRadio";
	_this linkItem "ItemGPS";

	If (true) ExitWith {};
};

// Engineer
If (typeOf _this == "I_G_engineer_F") Then
{
	_this forceAddUniform "U_I_C_Soldier_Para_3_F";
	_this addItemToUniform "FirstAidKit";
	_this addItemToUniform "SmokeShell";
	_this addVest "V_TacChestrig_grn_F";
	for "_i" from 1 to 6 do {_this addItemToVest "30Rnd_556x45_Stanag";};
	_this addBackpack "B_FieldPack_khk";
	_this addItemToBackpack "ToolKit";
	for "_i" from 1 to 2 do {_this addItemToBackpack "DemoCharge_Remote_Mag";};
	_this addItemToBackpack "ClaymoreDirectionalMine_Remote_Mag";
	_this addItemToBackpack "APERSTripMine_Wire_Mag";
	_this addGoggles "G_Balaclava_oli";

	_this addWeapon "arifle_TRG20_F";
	_this addPrimaryWeaponItem "acc_flashlight";

	If (true) ExitWith {};
};
