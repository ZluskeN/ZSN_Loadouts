#include "dev.hpp"

// Set universal level of fog
0 setFog [0.5, 0.05, 50];

// Hide marker
"BIS_extract2" setMarkerAlpha 0;

// Global mission variables
BIS_started = false;
BIS_supportMoved = false;
{publicVariable _x} forEach ["BIS_started", "BIS_supportMoved"];

// Server-side mission variables
BIS_startPlayers = [] call BIS_fnc_listPlayers;
BIS_respawns = [];
BIS_respawnEnabled = false;

BIS_introEnded = false;
BIS_takeOff = false;
BIS_campAlerted = false;
BIS_feed1 = false;
BIS_feed1End = false;
BIS_feed2 = false;
BIS_feed2End = false;
BIS_feed3 = false;
BIS_feed3End = false;
BIS_atTarget = false;
BIS_ambush = false;
BIS_trackShots = false;
BIS_toExfil = false;
BIS_sendInvestigators = false;
BIS_alerted = false;
BIS_sendReinf = false;
BIS_exfil = false;

BIS_supportGroup = group BIS_supportLead;
BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];
BIS_heli = (units group driver BIS_heli1 + [BIS_heli1]);

BIS_enemyTrigs = [BIS_enemyTrigA, BIS_enemyTrigB, BIS_enemyTrigC, BIS_enemyTrigD];

BIS_campUnits = [];

BIS_sniperA = [BIS_sniperA1, BIS_sniperA2, BIS_sniperA3, BIS_sniperA4];
BIS_sniperB = [BIS_sniperB1, BIS_sniperB2, BIS_sniperB3, BIS_sniperB4];
BIS_sniperC = [BIS_sniperC1, BIS_sniperC2, BIS_sniperC3, BIS_sniperC4];
BIS_sniperD = [BIS_sniperD1, BIS_sniperD2, BIS_sniperD3, BIS_sniperD4];
BIS_snipers = ["BIS_sniperA", "BIS_sniperB", "BIS_sniperC", "BIS_sniperD"];

BIS_sniperTargets = [];

BIS_attackA = [BIS_attackA1, BIS_attackA2];
BIS_attackB = [BIS_attackB1, BIS_attackB2];
BIS_attackC = [BIS_attackC1, BIS_attackC2];
BIS_attackD = [BIS_attackD1, BIS_attackD2];
BIS_attackers = ["BIS_attackA", "BIS_attackB", "BIS_attackC", "BIS_attackD"];

BIS_SF = [];
BIS_chosenAttacks = [];

BIS_investigators = [BIS_investigator1, BIS_investigator2, BIS_investigator3, BIS_investigator4, BIS_investigator5, BIS_investigator6];

BIS_patrol1A = [BIS_patrol1A_1, BIS_patrol1A_2, BIS_patrol1A_3, BIS_patrol1A_4];
BIS_patrol1B = [BIS_patrol1B_1, BIS_patrol1B_2, BIS_patrol1B_3, BIS_patrol1B_4];
BIS_patrol2A = (units group driver BIS_patrol2TruckA + [BIS_patrol2TruckA, BIS_patrol2A_1]);
BIS_patrol2B = (units group driver BIS_patrol2TruckB + [BIS_patrol2TruckB, BIS_patrol2B_1]);
BIS_patrol3 = [BIS_patrol3_1, BIS_patrol3_2, BIS_patrol3_3, BIS_patrol3_4, BIS_patrol3_5];
BIS_patrol4 = [BIS_patrol4_1, BIS_patrol4_2];
BIS_patrol5 = [BIS_patrol5_1, BIS_patrol5_2, BIS_patrol5_3, BIS_patrol5_4];
BIS_patrol6A = [BIS_patrol6A_1, BIS_patrol6A_2];
BIS_patrol6B = [BIS_patrol6B_1, BIS_patrol6B_2];
BIS_patrol7 = [BIS_patrol7_1, BIS_patrol7_2];
BIS_patrol8 = [BIS_patrol8_1, BIS_patrol8_2];
BIS_loner = (units group driver BIS_loneTruck + [BIS_loneTruck]);
BIS_garrison1 = (units group driver BIS_garrison1Truck1 + [BIS_garrison1Truck1, BIS_garrison1Truck2, BIS_garrison1_1, BIS_garrison1_2, BIS_garrison1_3, BIS_garrison1_4, BIS_garrison1_5, BIS_garrison1_6, BIS_garrison1_7, BIS_garrison1_8]);
BIS_garrison2 = [BIS_garrison2Truck1, BIS_garrison2_1, BIS_garrison2_2, BIS_garrison2_3, BIS_garrison2_4, BIS_garrison2_5, BIS_garrison2_6];
BIS_town1 = [BIS_town1Truck1, BIS_town1_1, BIS_town1_2, BIS_town1_3, BIS_town1_4, BIS_town1_5];
BIS_check1 = (units group driver BIS_check1Truck1 + [BIS_check1Truck1, BIS_check1_1]);
BIS_check2 = [BIS_check2Truck1, BIS_check2_1, BIS_check2_2, BIS_check2_3, BIS_check2_4];
BIS_check3 = [BIS_check3Truck1, BIS_check3MG, BIS_check3_1, BIS_check3_2, BIS_check3_3, BIS_check3_4];
BIS_reinf1 = [BIS_reinf1Truck1, BIS_reinf1_1, BIS_reinf1_2, BIS_reinf1_3, BIS_reinf1_4, BIS_reinf1_5, BIS_reinf1_6];
BIS_stockpile = [BIS_stockpileQuad, BIS_stockpile1, BIS_stockpile2];

BIS_searchers = (BIS_check1 + [BIS_sentry1, BIS_sentry1Quad, BIS_sentry2, BIS_sentry2Quad, driver BIS_quad1, BIS_quad1] + BIS_patrol1A + BIS_patrol1B + BIS_patrol2A + BIS_patrol2B + BIS_patrol3 + BIS_patrol4 + BIS_patrol5 + BIS_patrol6A + BIS_patrol6B + BIS_patrol7 + BIS_patrol8 + BIS_loner + BIS_garrison1 + BIS_town1 + BIS_check2 + BIS_check3 + BIS_reinf1 + BIS_stockpile);
BIS_flashlights = ([BIS_sentry1] + BIS_investigators + BIS_patrol1A + BIS_patrol1B + BIS_patrol3 + BIS_patrol4 + BIS_patrol5 + BIS_patrol6A + BIS_patrol6B + BIS_patrol7 + BIS_patrol8 + BIS_garrison2 + BIS_reinf1 + BIS_stockpile);

// Prevent units from fleeing
{_x allowFleeing 0} forEach allUnits;

// Prevent friendly fire
{_x setCaptive true; _x allowDamage false} forEach (BIS_supportUnits + BIS_heli);

// Keep helicopter on the ground with its engine on
BIS_heli1 flyInHeight 0;
[BIS_heli1, 5] call BIS_fnc_setHeight;

// Grab buildings
BIS_targetBuilding1 = [3254.23,5910.08,0.0276966] nearestObject "Land_House_Big_01_F";
BIS_targetBuilding2 = [3297.86,5873.8,-0.0211182] nearestObject "Land_Slum_03_F";
BIS_targetBuilding3 = [3284.23,5837.08,-0.00153542] nearestObject "Land_Shed_05_F";
BIS_targetBuilding4 = [3305.48,5887.7,-0.0140934] nearestObject "Land_Slum_02_F";

// Prevent them from being destroyed
{_x allowDamage false} forEach [BIS_targetBuilding1, BIS_targetBuilding2, BIS_targetBuilding3, BIS_targetBuilding4];

[] spawn {
	// Wait for simulation to start (necessary for change to propogate)
	waitUntil {time > 0};

	// Open their doors
	{
		[
			BIS_targetBuilding2,
			format ["Door_%1_rot", _x],
			format ["Door_Handle_%1_rot_1", _x],
			format ["Door_Handle_%1_rot_2", _x]
		] call BIS_fnc_DoorOpen;
	} forEach [1,2];

	{[BIS_targetBuilding1, _x] call BIS_fnc_DoorNoHandleOpen} forEach ["Door_1_rot", "Door_2_rot"];
	[BIS_targetBuilding3, "Door_1_rot"] call BIS_fnc_DoorNoHandleOpen;
};

//dataprojector light
ProjectLight = "#lightpoint" createVehicleLocal [3252.12,5909.3,1.5];
ProjectLight setLightBrightness 0.09;
ProjectLight setLightAmbient [0, 0.5, 0.9];
ProjectLight setLightColor [0, 0.5, 0.9];

ProjectLight2 = "#lightpoint" createVehicleLocal [3251,5910.92,1.5];
ProjectLight2 setLightBrightness 0.03;
ProjectLight2 setLightAmbient [0, 0.5, 0.9];
ProjectLight2 setLightColor [0, 0.5, 0.9];

ProjectLight3 = "#lightpoint" createVehicleLocal [3251.4,5910.38,1.5];
ProjectLight3 setLightBrightness 0.05;
ProjectLight3 setLightAmbient [0, 0.5, 0.9];
ProjectLight3 setLightColor [0, 0.5, 0.9];

// Remove or topple vegetation
{_x hideObjectGlobal true} forEach (nearestTerrainObjects [[3257.18,5892.8,0.0015583],[],7]);
{{_x setDamage 1} forEach (nearestTerrainObjects [[2992.69,5987,0.00133896],["Tree"],19]);} remoteexec ["call"];

// Control phone music (ToDo: replace with proper music)
/*[] spawn {
	scriptName "initServer.sqf: phone music";

	private _tracks = [];

	while {true} do {
		// Replenish pool if necessary
		if (count _tracks == 0) then {_tracks = [1,2]};

		// Select a random track
		private _track = _tracks call BIS_fnc_selectRandom;
		_tracks = _tracks - [_track];

		// Find name and duration
		private _track = "radio_track_0" + (str _track);
		private _duration = (getNumber (configFile >> "CfgSounds" >> _track >> "duration") + (3 + random 7));

		// Play track, wait for it to finish
		[[_track, {BIS_phone1 say3D _this}], "BIS_fnc_call"] call BIS_fnc_MP;
		sleep _duration;
	};
};*/

// Set up snipers
{
	private _units = missionNamespace getVariable _x;

	{
		private _unit = _x;

		// Hide unit
		_unit hideObjectGlobal true;
		_unit enableSimulationGlobal false;
		_unit allowDamage false;

		// Move up into the air
		private _alt = getPosATL _unit select 2;
		_unit setVariable ["BIS_alt", _alt];
		[_unit, 10e10] call BIS_fnc_setHeight;

		// Disable inappropriate AI components
		{_unit disableAI _x} forEach ["AUTOCOMBAT", "SUPPRESSION"];

		// Always in combat, prevent from engaging automatically, keep prone
		_unit setBehaviour "COMBAT";
		_unit setCombatMode "BLUE";
		_unit setUnitPos "DOWN";
		_unit spawn {waitUntil {time > 0}; _this switchMove "AmovPpneMstpSrasWrflDnon"};
	} forEach _units;
} forEach BIS_snipers;

// Set up attackers
{
	private _units = missionNamespace getVariable _x;

	{
		private _unit = _x;

		// Ensure it has long-range optics
		_unit addPrimaryWeaponItem "optic_Arco_ghex_F";

		// Hide unit
		_unit hideObjectGlobal true;
		_unit enableSimulationGlobal false;
		_unit allowDamage false;

		// Move up into the air
		private _alt = getPosATL _unit select 2;
		_unit setVariable ["BIS_alt", _alt];
		[_unit, 10e10] call BIS_fnc_setHeight;

		// Disable inappropriate AI components
		{_unit disableAI _x} forEach ["AUTOCOMBAT", "SUPPRESSION"];

		// Go prone
		_unit setUnitPos "DOWN";
		_unit spawn {waitUntil {time > 0}; _this switchMove "AmovPpneMstpSrasWrflDnon"};
	} forEach _units;
} forEach BIS_attackers;

// Create fake target for attackers
private _group = createGroup WEST;
BIS_attackTarget = _group createUnit ["Logic", [3283.75,5899.66,0], [], 0, "NONE"];
{BIS_attackTarget disableAI _x} forEach ["AUTOCOMBAT", "AUTOTARGET", "MOVE", "SUPPRESSION", "TARGET"];

// Set up investigators & search parties
private _slow = BIS_loner + BIS_patrol1A + BIS_patrol1B + BIS_patrol6A + BIS_patrol6B + BIS_patrol8;
private _aware = BIS_investigators + BIS_patrol3 + BIS_patrol4 + BIS_patrol5 + BIS_reinf1;

{
	_x hideObjectGlobal true;
	_x enableSimulationGlobal false;
	_x setCaptive true;
	_x allowDamage false;

	if (vehicle _x == _x) then {
		// Move up into the air
		private _alt = getPosATL _x select 2;
		_x setVariable ["BIS_alt", _alt];
		[_x, 10e10] call BIS_fnc_setHeight;
	};

	if (!(_x in _aware)) then {_x setBehaviour "SAFE"};
	if (_x in _slow) then {_x setSpeedMode "LIMITED"};

	if (!(_x isKindOf "Man")) then {
		// Handle vehicles
		clearWeaponCargoGlobal _x;
		clearMagazineCargoGlobal _x;
		clearItemCargoGlobal _x;
		clearBackpackCargoGlobal _x;
	};
} forEach (BIS_investigators + BIS_searchers);

// Add flashlights where necessary
{if (_x isKindOf "Man") then {_x addPrimaryWeaponItem "acc_flashlight"}} forEach BIS_flashlights;

// Set up civilian
BIS_town1Civ1 hideObjectGlobal true;
BIS_town1Civ1 enableSimulationGlobal false;
BIS_town1Civ1 setCaptive true;
BIS_town1Civ1 allowDamage false;

// Move up into the air
private _alt = getPosATL BIS_town1Civ1 select 2;
BIS_town1Civ1 setVariable ["BIS_alt", _alt];
[BIS_town1Civ1, 10e10] call BIS_fnc_setHeight;

BIS_town1Civ1 setBehaviour "SAFE";
BIS_town1Civ1 setUnitPos "UP";
{BIS_town1Civ1 disableAI _x} forEach ["AUTOCOMBAT", "AUTOTARGET", "MOVE", "TARGET"];

// Make him hide when necessary
[] spawn {
	scriptName "initServer.sqf: civilian hide";

	// Wait for him to be scared
	waitUntil {behaviour BIS_town1Civ1 == "COMBAT"};

	// Let him move
	BIS_town1Civ1 setBehaviour "CARELESS";
	BIS_town1Civ1 enableAI "MOVE";

	// Alert others
	{_x setBehaviour "COMBAT"} forEach BIS_town1;
};

// Keep watertower guy standing
BIS_town1_3 setUnitPos "UP";

// Set up extraction truck
{BIS_extractTruck lockCargo [_x, true]} forEach [0,1,3,7];
clearWeaponCargoGlobal BIS_extractTruck;
clearMagazineCargoGlobal BIS_extractTruck;
clearItemCargoGlobal BIS_extractTruck;
clearBackpackCargoGlobal BIS_extractTruck;

BIS_extractTruck hideObjectGlobal true;
BIS_extractTruck enableSimulationGlobal false;
BIS_extractTruck allowDamage false;
BIS_extractTruck setCaptive true;
BIS_extractTruck setUnloadInCombat [false, false];

private _alt = getPosATL BIS_extractTruck select 2;
BIS_extractTruck setVariable ["BIS_alt", _alt];
[BIS_extractTruck, 10e10] call BIS_fnc_setHeight;

// Handle flashlights of disembarking reinforcements
BIS_reinf1Truck1 addEventHandler [
	"GetOut",
	{
		private _unit = _this select 2;
		if (_unit in BIS_reinf1) then {_unit enableGunLights "forceOn"};
	}
];

// Add player classes
"NIGHT" call BIS_fnc_EXP_camp_initClasses;

// Add respawn
private _respawn = [
	WEST,
	"BIS_respawnStart",
	localize "STR_A3_ApexProtocol_marker_Insertion"
] call BIS_fnc_addRespawnPosition;

BIS_respawns = BIS_respawns + [_respawn];