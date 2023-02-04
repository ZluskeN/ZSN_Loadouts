#include "dev.hpp"

// Global mission variables
BIS_MissionStarted = false;
BIS_spottingLead = false;
BIS_leadSpotted = false;
BIS_wreckFound = false;
BIS_extracted = false;
{publicVariable _x} forEach ["BIS_MissionStarted", "BIS_spottingLead", "BIS_leadSpotted", "BIS_wreckFound", "BIS_extracted"];

// Server-side mission variables
BIS_respawns = [];
BIS_respawnEnabled = false;

BIS_introEnded = false;
BIS_moveOut = false;
BIS_demoMove = false;
publicVariable "BIS_demoMove";
BIS_supportMove = false;
BIS_planGiven = false;
BIS_demoReady = false;
BIS_plantCharge = false;
BIS_chargePlanted = false;
BIS_convoySpotted = false;
BIS_detonate = false;
BIS_ambushed = false;
BIS_supportAttack = false;
BIS_supportLeave = false;
BIS_seekAndDestroy = false;
BIS_toExtract = false;

BIS_supportGroup = group BIS_supportLead;
BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];

BIS_plane = ([BIS_plane1] + units group driver BIS_plane1);
BIS_heli = ([BIS_heli1] + units group driver BIS_heli1);
BIS_convoyVehicles = [BIS_convoyTruck1, BIS_convoyTruck2, BIS_convoyTruck3, BIS_convoyTruck4];
BIS_convoyUnits = [];

BIS_pathTrigs = [BIS_pathTrig_1, BIS_pathTrig_2, BIS_pathTrig_3, BIS_pathTrig_4, BIS_pathTrig_5, BIS_pathTrig_6, BIS_pathTrig_7];

// Compile array of convoy units
{
	private _unit = objNull;
	private _i = 1;
	while {_unit = missionNamespace getVariable [(_x + "_" + str _i), objNull]; !(isNull _unit)} do {BIS_convoyUnits = BIS_convoyUnits + [_unit]; _i = _i + 1};
} forEach ["BIS_convoyTruck1", "BIS_convoyTruck2", "BIS_convoyTruck3", "BIS_convoyTruck4"];

// Add drivers and gunners to array
{{if (!(isNull _x)) then {BIS_convoyUnits = BIS_convoyUnits + [_x]}} forEach [driver _x, gunner _x]} forEach BIS_convoyVehicles;

// Hide plane & extraction helicopter
{
	_x hideObjectGlobal true;
	_x enableSimulationGlobal false;
	_x allowDamage false;
	_x setCaptive true;
} forEach (BIS_plane + BIS_heli);

// Set fly-in-heights
private _pos = getPosASL BIS_plane1;
_pos set [2, 340];
BIS_plane1 setPosASL _pos;
BIS_plane1 flyInHeightASL [340,340,340];
BIS_heli1 flyInHeight 50;

// Make sure players can only get into certain seats
private _count = (BIS_heli1 emptyPositions "Cargo") - 1;
private _unlocked = [1,3,6,7];
for "_i" from 0 to _count do {if (!(_i in _unlocked)) then {BIS_heli1 lockCargo [_i, true]}};

{
	// Hide the convoy
	_x hideObjectGlobal true;
	_x enableSimulationGlobal false;
	_x allowDamage false;
	_x setCaptive true;

	if (_x isKindOf "Man") then {
		// Lower accuracy, set as careless
		_x setSkill ["aimingAccuracy", 0.01];
		_x setBehaviour "CARELESS";
	} else {
		// Move into the air
		_x setVariable ["BIS_alt", (getPosATL _x) select 2];
		[_x, 10e10] call BIS_fnc_setHeight;
	};
} forEach (BIS_convoyVehicles + BIS_convoyUnits);

// Balance and hide AA units
BIS_AAUnits = [BIS_guard1,BIS_guard2,BIS_AAG1, BIS_AAG2];
BIS_AAVehicles = [BIS_AAQuad1, BIS_AAQuad2, BIS_AAQuad3];

{
	[_x, 2, true] call BIS_fnc_EXP_camp_balanceGroup;
	{BIS_AAUnits pushBack _x} forEach (units _x);
} forEach [BIS_grp_AA_1,BIS_grp_AA_2,BIS_grp_AA_3];

{
	_x setSkill 0.2;
	_x setSkill ["aimingAccuracy", 0.1];
} forEach BIS_AAUnits;

{
	_x hideObjectGlobal true;
	_x enableSimulationGlobal false;
	_x allowDamage false;
	_x setCaptive true;

	// Move into the air
	_x setVariable ["BIS_alt", (getPosATL _x) select 2];
	[_x, 10e10] call BIS_fnc_setHeight;
} forEach (BIS_AAUnits + BIS_AAVehicles);


// Show first Support Team members
{_x setVariable ["BIS_iconShow", true, true]} forEach [BIS_supportLead, BIS_support1];

// Reduce Support Team accuracy
{_x setSkill ["aimingAccuracy", 0.01]} forEach BIS_supportUnits;

// Move units into animations
BIS_supportLead playMove "Acts_Briefing_SC_StartLoop";
BIS_support2 playMove "Acts_Briefing_SA_StartLoop";
BIS_support3 playMove "Acts_Briefing_SB_StartLoop";

// Add player classes
[] call BIS_fnc_EXP_camp_initClasses;

// Handle charges
[] spawn BIS_fnc_EXP_m02_replenishCharges;

// Add respawn
private _respawn = [
	WEST,
	"BIS_respawnStart",
	localize "STR_A3_ApexProtocol_marker_Insertion"
] call BIS_fnc_addRespawnPosition;

BIS_respawns = BIS_respawns + [_respawn];
