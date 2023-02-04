// Always start a mission with this
        {_x allowFleeing 0} forEach allUnits;

// Hide map markers
	"BIS_mrkCharlie" setMarkerAlpha 0;
	"BIS_mrkCTRG" setMarkerAlpha 0;
	"BIS_mrkAmmo" setMarkerAlpha 0;
	"BIS_mrkIntel01" setMarkerAlpha 0;
	"BIS_mrkIntel02" setMarkerAlpha 0;
	"BIS_mrkSchematics" setMarkerAlpha 0;

// Scripted lanterns
	_null = [] execVM "Scripts\Lanterns.sqf";

// Do not show timer in 3rd stage
	missionNamespace setVariable ["BIS_hvtPhase_showTimer", false];

// Fog (not Willy Fog though)
	0 setFog [0,0,0];
	3600 setFog [0,0,0];

// Loadout for player
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

	player forceAddUniform "U_B_CTRG_Soldier_F";
	player addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {player addItemToUniform "SmokeShellBlue";};
	for "_i" from 1 to 3 do {player addItemToUniform "16Rnd_9x21_Mag";};
	player addVest "V_PlateCarrier2_rgr_noflag_F";
	for "_i" from 1 to 8 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
	for "_i" from 1 to 5 do {player addItemToVest "1Rnd_HE_Grenade_shell";};
	for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
	player addHeadgear "H_HelmetB_TI_tna_F";

	player addWeapon "arifle_SPAR_01_GL_khk_F";
	player addPrimaryWeaponItem "acc_flashlight";
	player addPrimaryWeaponItem "optic_Holosight_khk_F";
	player addWeapon "hgun_P07_khk_F";
	player addWeapon "Rangefinder";

	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "ItemRadio";
	player linkItem "ItemGPS";

// Loadouts for AI
	{If ((side _x == Resistance) and (alive _x)) Then {_null = _x execVM "Scripts\Syndikat.sqf"}} forEach (allUnits);
	{If ((side _x == East) and (alive _x)) Then {_null = _x execVM "Scripts\Loadouts.sqf"}} forEach (allUnits);
	{If ((typeOf _x == "O_Survivor_F") and (alive _x)) Then {_null = _x execVM "Scripts\Loadouts.sqf"}} forEach (allUnits);
        {_null = _x execVM "Scripts\Loadouts.sqf"} forEach (units BIS_grpAlpha);
        {_null = _x execVM "Scripts\Loadouts.sqf"} forEach (units BIS_grpBravo);
        {_null = _x execVM "Scripts\Loadouts.sqf"} forEach (units BIS_grpCharlie);

// Lower aim precision for Syndikat a bit
	{If ((side _x == Resistance) and (alive _x)) Then {_x setSkill ["aimingAccuracy",(0.1 + (random 0.15))]}} forEach (allUnits);

// AmmoBox cargo
	{clearMagazineCargo _x; clearWeaponCargo _x; clearItemCargo _x; clearBackpackCargo _x} forEach [BIS_AmmoBox];
	BIS_AmmoBox addMagazineCargo ["20Rnd_762x51_Mag",12];
	BIS_AmmoBox addMagazineCargo ["30Rnd_556x45_Stanag_Tracer_Red",24];
	BIS_AmmoBox addMagazineCargo ["150Rnd_556x45_Drum_Mag_Tracer_F",10];
	BIS_AmmoBox addItemCargo ["FirstAidKit",5];
	BIS_AmmoBox addWeaponCargo ["arifle_SPAR_03_khk_F",1];
	BIS_AmmoBox addWeaponCargo ["arifle_SPAR_02_khk_F",1];
	BIS_AmmoBox addBackpackCargo ["B_AssaultPack_rgr",1];
	BIS_AmmoBox addMagazineCargo ["Titan_AA",4];
	BIS_AmmoBox addWeaponCargo ["launch_B_Titan_tna_F",1];
	BIS_AmmoBox addMagazineCargo ["1Rnd_HE_Grenade_shell",10];

// Flying sequences
        HeliFlight = call compile preprocessFileLineNumbers "Scripts\HeliFlight.sqf";

// Units at FOB
        BIS_FOBUnits = [BIS_FOB_01,BIS_FOB_02,BIS_FOB_03,BIS_FOB_04,BIS_FOB_05,BIS_FOB_06];

// Units at Intel01
        BIS_Intel01Units = [BIS_Intel01_01,BIS_Intel01_02,BIS_Intel01_03,BIS_Intel01_04,BIS_Intel01_05,BIS_Intel01_06];

// Units at Intel02
        BIS_Intel02Units = [BIS_Intel02_01,BIS_Intel02_02,BIS_Intel02_03,BIS_Intel02_04,BIS_Intel02_05,BIS_Intel02_06];

// Units at Schematics
        BIS_SchematicsUnits = [BIS_Schematics_01,BIS_Schematics_02,BIS_Schematics_03,BIS_Schematics_04,BIS_Schematics_05,BIS_Schematics_06];

//Title card
// ["\a3\Missions_F_Exp\video\EndGame.ogv","STR_A3_showcase_endgame_titlecard"] spawn BIS_fnc_titlecard;
// waitUntil { !isNil { BIS_fnc_titlecard_finished } };

// Start establishing shot
[
	[12638.5,6662.63,0],					// Target position
	localize "STR_A3_showcase_endgame_sitrep_text",     	// SITREP text
	500,							// 500m altitude
	100,							// 100m radius
	0,							// 0 degrees viewing angle
	1,							// Clockwise movement
	[]
] spawn BIS_fnc_establishingShot;

// First Phase
	_null = [] spawn
	{
        	disableSerialization;
		("RscHvtPhase" call BIS_fnc_rscLayer) cutRsc ["RscHvtPhase", "PLAIN"];
		["SetStage",[0]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);
	};

// Handling loadgame for the Phase widget
	addMissionEventHandler ["Loaded",{_null = [] execVM "Scripts\OnLoad.sqf"}];

// Add actions to be able to download intel01
	_iconIdle = "A3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_connect_ca.paa";
	_iconProgress = _iconIdle;
	_condShow01 = "(player distance BIS_Intel01Objective < 3) and (cursorTarget == BIS_Intel01Objective) and (BIS_Intel01Created)";
	_condShow02 = "(player distance BIS_Intel02Objective < 3) and (cursorTarget == BIS_Intel02Objective) and (BIS_Intel02Created)";
	_condShow03 = "(player distance BIS_Terminal < 3) and (cursorTarget == BIS_Terminal) and (BIS_SchematicsTaken)";
	_actionTitle = localize "STR_A3_endgame_misc_download";
	_uploadTitle = localize "STR_A3_endgame_misc_upload";

	_intel01Action = [BIS_Intel01Objective, _actionTitle, _iconIdle, _iconProgress, _condShow01, _condShow01, {}, {}, {BIS_Intel01Taken = true}, {}, [], 4.0, 1000, true, false] call bis_fnc_holdActionAdd;
	_intel02Action = [BIS_Intel02Objective, _actionTitle, _iconIdle, _iconProgress, _condShow02, _condShow02, {}, {}, {BIS_Intel02Taken = true}, {}, [], 4.0, 1000, true, false] call bis_fnc_holdActionAdd;
	_uploadAction = [BIS_Terminal, _uploadTitle, _iconIdle, _iconProgress, _condShow03, _condShow03, {}, {}, {BIS_TerminalStart = true}, {}, [], 4.0, 1000, true, false] call bis_fnc_holdActionAdd;
