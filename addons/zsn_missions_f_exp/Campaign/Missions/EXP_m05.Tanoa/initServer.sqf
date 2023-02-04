"initServer.sqf started" call BIS_fnc_log;

// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

"initServer.sqf post campaign include" call BIS_fnc_log;

// Add respawn
BIS_initialRespawn = [
	WEST, 
	"BIS_respawnStart", 
	localize "STR_A3_ApexProtocol_marker_Insertion"
] call BIS_fnc_addRespawnPosition;

"initServer.sqf post initial respawn" call BIS_fnc_log;

// Event for when the mission is started
[missionNamespace, EVENT_STARTED,
{
	// Add respawn position on the support squad
	BIS_supportTeamRespawn = [WEST, leader BIS_group_ai] call BIS_fnc_addRespawnPosition;

	// Miller's custom equip
	removeAllWeapons BIS_miller;
	removeAllItems BIS_miller;
	removeAllAssignedItems BIS_miller;
	removeUniform BIS_miller;
	removeVest BIS_miller;
	removeBackpack BIS_miller;
	removeHeadgear BIS_miller;
	removeGoggles BIS_miller;

	BIS_miller forceAddUniform "U_B_CTRG_Soldier_2_F";
	BIS_miller addItemToUniform "FirstAidKit";
	for "_i" from 1 to 2 do {BIS_miller addItemToUniform "30Rnd_762x39_Mag_F";};
	BIS_miller addItemToUniform "16Rnd_9x21_Mag";
	BIS_miller addVest "V_Chestrig_rgr";

	BIS_miller addWeapon "arifle_AKM_F";
	BIS_miller addWeapon "hgun_Pistol_01_F";

	BIS_miller linkItem "ItemMap";
	BIS_miller linkItem "ItemCompass";
	BIS_miller linkItem "ItemWatch";
	BIS_miller linkItem "ItemRadio";
	BIS_miller linkItem "ItemGPS";

	BIS_miller setFace "Miller";
	BIS_miller setSpeaker "Male03ENGB";

	{
		_x addEventHandler ["Fired", {(_this select 0) setVehicleAmmo 1.0}];
	}
	forEach units BIS_group_ai;
}] call BIS_fnc_addScriptedEventHandler;

"initServer.sqf post event started" call BIS_fnc_log;

// Fog
0 setFog [0.1, 0.05, 50];

"initServer.sqf post fog" call BIS_fnc_log;

// Loadouts
["DAY"] call BIS_fnc_exp_camp_initClasses;

"initServer.sqf post init classes" call BIS_fnc_log;

// Support team FSMs
BIS_supportGroupFSM = [BIS_group_ai, BIS_miller, nil, nil, nil] execFSM "fsms\supportSquad.fsm";

"initServer.sqf post support group FSM initialization" call BIS_fnc_log;

// Remove silencers from Viper units main weapon
{
	if (side _x == EAST) then
	{
		private _weaponItems = primaryWeaponItems _x;
		private _silencer = _weaponItems select 0;
		if (_silencer != "") then {_x removePrimaryWeaponItem _silencer;};
	};
}
forEach allUnits;

"initServer.sqf post remove silencers from viper units" call BIS_fnc_log;

// Hide map lamp
private _lampOld = [5021.44,3024.93,0.0038929] nearestObject "Land_LampShabby_F";
_lampOld hideObjectGlobal true;

// Create new, fake lamp further away
private _lampNew = createVehicle ["Land_LampShabby_F", [5023.91,3028.47,0], [], 0, "NONE"];
_lampNew setDir (direction _lampOld);

// Hide water tank
private _waterTank = (nearestTerrainObjects [[5020.18,3024.89,0.000680923], [], 1]) select 0;
_waterTank hideObjectGlobal true;

// AI Skill
[
	true,
	[
		[EAST, 		0.5, 0.2, 0.8, 0.3],
		[RESISTANCE, 	0.3, 0.1, 0.5, 0.2]
	]
] call BIS_fnc_exp_camp_dynamicAISkill;

"initServer.sqf dynamic AI skill" call BIS_fnc_log;

// Debug fsms if required
if (DEBUG_FSM && {cheatsEnabled}) then
{
	// Debug mission flow
	if (!isNil {BIS_fnc_missionFlow_fsm}) then
	{
		call compile "diag_debugFSM BIS_fnc_missionFlow_fsm;";
	};

	// Debug support squad
	call compile "diag_debugFSM BIS_supportGroupFSM;";
};

"initServer.sqf ended" call BIS_fnc_log;