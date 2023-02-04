"initServer.sqf started" call BIS_fnc_log;

// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

"initServer.sqf post campaign include" call BIS_fnc_log;

"initServer.sqf post initial respawn" call BIS_fnc_log;

// Loadouts
["NIGHT"] call BIS_fnc_exp_camp_initClasses;

"initServer.sqf post init classes" call BIS_fnc_log;

// Set fog
0 setFog [0,0,0];

// Global mission variables
BIS_disarmDevice = false;
BIS_deviceDisarmed = false;
{publicVariable _x} forEach ["BIS_disarmDevice", "BIS_deviceDisarmed"];

// Server-side mission variables
BIS_respawnsApproach = [];
BIS_respawnsPlayers = [];
BIS_respawnEnabled = false;

BIS_generatorDestroyed = false;
BIS_falconArrived = false;
BIS_strongEarthquake = false;
BIS_falconLeave = false;
BIS_atDevice = false;
BIS_startDefense = false;
BIS_millerMove = false;
BIS_millerDisarming = false;
BIS_reinfMove = false;
BIS_fakeUnloaded = false;
BIS_secondWave = false;
BIS_VTOLsMove = false;
BIS_fleeVTOL = false;
BIS_helisMove = false;
BIS_deviceSecured = false;
BIS_extractArrived = false;
BIS_missionEnding = false;

BIS_viperFake = units BIS_viperFake;
BIS_viper1 = [BIS_viper1_1, BIS_viper1_2, BIS_viper1_3, BIS_viper1_4, BIS_viper1_5, BIS_viper1_6];
BIS_viper2 = [BIS_viper2_1, BIS_viper2_2, BIS_viper2_3, BIS_viper2_4];
BIS_viper3 = [BIS_viper3_1, BIS_viper3_2, BIS_viper3_3, BIS_viper3_4, BIS_viper3_5, BIS_viper3_6, BIS_viper3_7, BIS_viper3_8, BIS_viper3_9, BIS_viper3_10, BIS_viper3_11, BIS_viper3_12];
BIS_viper4 = [BIS_viper4_1, BIS_viper4_2, BIS_viper4_3, BIS_viper4_4, BIS_viper4_5];
BIS_viper = BIS_viper1 + BIS_viper2 + BIS_viper3 + BIS_viper4;

{
	private _heli = _x;
	private _units = units group driver _heli;
	_units = _units + (crew _heli);

	// Hide extract
	{
		_x hideObjectGlobal true;
		_x enableSimulationGlobal false;
		_x setCaptive true;
		_x allowDamage false;
	} forEach ([_heli] + _units);

	// Disable AI
	{
		private _unit = _x;
		{_unit disableAI _x} forEach ["AUTOCOMBAT", "AUTOTARGET", "TARGET"];
		_unit setCombatMode "BLUE";
	} forEach _units;
} forEach [BIS_heli1, BIS_heliExtract, BIS_heliSling, BIS_heliAttack];

{
	// Prevent units from fleeing
	_x allowFleeing 0;

	if (_x in BIS_viper) then {
		// Remove FAKs and silencers from Viper
		_x removeItem "FirstAidKit";
		private _silencer = (primaryWeaponItems _x) select 0;
		if (_silencer != "") then {_x removePrimaryWeaponItem _silencer};
	};
} forEach allUnits;

// Reveal AI to enemies when they shoot
{
	_x addEventHandler [
		"Fired",
		{
			params ["_unit", "_weapon"];
			if (_weapon in [primaryWeapon _unit, handgunWeapon _unit, secondaryWeapon _unit]) then {{_x reveal [_unit, 4]} forEach BIS_viper3};
		}
	];
} forEach [BIS_ai_1, BIS_james];

// Turn off device light
BIS_device setHit ["Light_1_hit", 1];

"initServer.sqf post mission init" call BIS_fnc_log;

// AI
{
	// The group and it's side
	private _group = _x;
	private _side = side _group;

	// We really just want to deal with enemy units
	if (_side != WEST) then
	{
		// Do not allow fleeing
		_group allowFleeing 0;

		// Skill
		{
			// Syndikat only
			if (side _x == RESISTANCE) then
			{
				// Killed event handler is used to register death of unit in a group
				_x addEventHandler ["Killed",
				{
					private _unit = _this param [0, objNull, [objNull]];
					private _group = group _unit;

					if (!isNull _unit && {!isNull _group} && {_unit != BIS_boss}) then
					{
						[_group, _unit] call BIS_fnc_onGroupUnitKilled;
					};
				}];
			};

			// Remove silencers from viper units main weapon
			if (side _x == EAST) then
			{
				private _weaponItems = primaryWeaponItems _x;
				private _silencer = _weaponItems select 0;
				if (_silencer != "") then {_x removePrimaryWeaponItem _silencer;};
			};
		}
		forEach units _group;
	};
}
forEach allGroups;

"initServer.sqf post AI handling" call BIS_fnc_log;

// AI Skill
[
	true,
	[
		[EAST, 		0.5, 0.2, 0.8, 0.5],
		[RESISTANCE, 	0.3, 0.2, 0.5, 0.3]
	]
] call BIS_fnc_exp_camp_dynamicAISkill;

"initServer.sqf post dynamic AI skill" call BIS_fnc_log;

// Debug fsms if required
if (DEBUG_FSM && {cheatsEnabled}) then
{
	// Debug mission flow
	if (!isNil {BIS_fnc_missionFlow_fsm}) then
	{
		call compile "diag_debugFSM BIS_fnc_missionFlow_fsm;";
	};
};

// Handle respawns
{_x spawn BIS_fnc_EXP_m07_handleRespawn} forEach [
	[BIS_intel_1, 150, "BIS_respawnNear1", localize "STR_A3_Exp_m07_respawnNearLisbon"],
	[BIS_intel_2, 150, "BIS_respawnNear2", localize "STR_A3_Exp_m07_respawnNearMadrid"],
	[BIS_intel_3, 150, "BIS_respawnNear3", localize "STR_A3_Exp_m07_respawnNearParis"]//,
	//[BIS_intel_device, 300, "BIS_respawnNorth", localize "STR_A3_Exp_m07_respawnNorthSector"],
	//[BIS_intel_device, 700, "BIS_respawnSouth", localize "STR_A3_Exp_m07_respawnSouthSector"]
];

// Add initial respawn
private _respawn = [WEST, "BIS_respawnStart", localize "STR_A3_ApexProtocol_marker_Insertion"] call BIS_fnc_addRespawnPosition;
BIS_respawnsApproach = BIS_respawnsApproach + [_respawn];

"initServer.sqf ended" call BIS_fnc_log;