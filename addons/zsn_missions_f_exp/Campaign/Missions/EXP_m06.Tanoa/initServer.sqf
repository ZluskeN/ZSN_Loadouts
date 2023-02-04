#include "dev.hpp"

// Set universal level of fog
0 setFog [0.1, 0.05, 20];

// Global mission variables
BIS_missionStarted = false;
BIS_spottedUGV = false;
BIS_spottedTurret = false;
BIS_dronesRevealed = false;
BIS_droneLocked = true;
BIS_droneConnected = false;
BIS_terminalSpotted = false;
BIS_terminalConnected = false;
BIS_mortarActive = false;
BIS_endMission = false;
{publicVariable _x} forEach ["BIS_missionStarted", "BIS_spottedUGV", "BIS_spottedTurret", "BIS_dronesRevealed", "BIS_droneLocked", "BIS_droneConnected", "BIS_terminalSpotted", "BIS_terminalConnected", "BIS_mortarActive", "BIS_endMission"];

// Server-side mission variables
BIS_startPlayers = [] call BIS_fnc_listPlayers;
BIS_respawns = [];
BIS_respawnEnabled = true;

BIS_meetUp = false;
BIS_moveOut = false;
BIS_patrolAttacked = false;
BIS_patrolDestroyed = false;
BIS_droneInfo = false;
BIS_droneSkipped = false;
BIS_enemyAttacked = false;
BIS_firstUAV = false;
BIS_terminalHint = false;
BIS_investigate = false;
BIS_CTI = false;
BIS_tasks = [];
BIS_destroyDrones = false;
BIS_RV = false;
BIS_startEnding = false;


BIS_position1Alert = false;
BIS_position2Alert = false;
BIS_position3Alert = false;
BIS_position4Alert = false;
BIS_position5Alert = false;
BIS_landingAlert = false;

BIS_position1Clear = false;
BIS_position2Clear = false;
BIS_position3Clear = false;
BIS_position4Clear = false;
BIS_position5Clear = false;
BIS_landingClear = false;

BIS_technicalsDestroyed = false;
BIS_technical1Destroyed = false;
BIS_technical2Destroyed = false;
BIS_technical3Destroyed = false;

BIS_supportGroup = group BIS_supportLead;
BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];

BIS_drones = [BIS_turret1, BIS_UAV1, BIS_UGV1, BIS_UGV2];

BIS_patrolAO = [BIS_patrolAO1, BIS_patrolAO2];
BIS_droneAO = [BIS_droneAO1, BIS_droneAO2, BIS_droneAO3];
BIS_droneGuards = [BIS_droneGuard1, BIS_droneGuard2, BIS_droneGuard3];
BIS_technicals1 = ([BIS_technical1] + units group driver BIS_technical1);
BIS_technicals2 = ([BIS_technical2] + units group driver BIS_technical2);
BIS_technicals3 = ([BIS_technical3] + units group driver BIS_technical3);

// Compile array of position 1 guards
BIS_position1Units = [];
private _i = 1;
private "_unit";
while {_unit = missionNamespace getVariable ["BIS_position1_" + (str _i), objNull]; !(isNull _unit)} do {BIS_position1Units = BIS_position1Units + [_unit]; _i = _i + 1};

// Compile array of position 2 guards
BIS_position2Units = [];
private _i = 1;
private "_unit";
while {_unit = missionNamespace getVariable ["BIS_position2_" + (str _i), objNull]; !(isNull _unit)} do {BIS_position2Units = BIS_position2Units + [_unit]; _i = _i + 1};

// Compile array of position 3 guards
BIS_position3Units = [];
private _i = 1;
private "_unit";
while {_unit = missionNamespace getVariable ["BIS_position3_" + (str _i), objNull]; !(isNull _unit)} do {BIS_position3Units = BIS_position3Units + [_unit]; _i = _i + 1};

// Compile array of position 4 guards
BIS_position4Units = [];
private _i = 1;
private "_unit";
while {_unit = missionNamespace getVariable ["BIS_position4_" + (str _i), objNull]; !(isNull _unit)} do {BIS_position4Units = BIS_position4Units + [_unit]; _i = _i + 1};

// Compile array of position 5 guards
BIS_position5Units = [];
private _i = 1;
private "_unit";
while {_unit = missionNamespace getVariable ["BIS_position5_" + (str _i), objNull]; !(isNull _unit)} do {BIS_position5Units = BIS_position5Units + [_unit]; _i = _i + 1};

// Compile array of landing area guards
BIS_landingUnits = [];
private _i = 1;
private "_unit";
while {_unit = missionNamespace getVariable ["BIS_landing" + (str _i), objNull]; !(isNull _unit)} do {BIS_landingUnits = BIS_landingUnits + [_unit]; _i = _i + 1};

// Prevent units from fleeing
{_x allowFleeing 0} forEach allUnits;

// Disable giving drones waypoints
{_x enableUAVWaypoints false} forEach BIS_drones;

// Prevent player from manually driving the fixed wing UAV
BIS_UAV1 lockDriver true;

// Disable drone autonomy
[] spawn {
	scriptName "initServer.sqf: disable drone autonomy";
	sleep 1;
	{_x setAutonomous false} forEach (BIS_drones - [BIS_UAV1]);
};

{
	private _drone = _x;

	if (_drone != BIS_keyUGV) then {
		// Determine crew
		private _units = [gunner _drone];
		private _driver = driver _drone;
		if (!(isNull _driver)) then {_units = _units + [_driver]};

		// Set captive
		{_x setCaptive true} forEach (_units + [_drone]);
	};

	if (_drone isKindOf "Car") then {
		// Clear cargo space
		clearWeaponCargoGlobal _drone;
		clearMagazineCargoGlobal _drone;
		clearItemCargoGlobal _drone;
		clearBackpackCargoGlobal _drone;
	};
} forEach (BIS_drones + [BIS_keyUGV]);

// Set up the fixed wing UAV
BIS_UAV1 flyInHeightASL [700,700,700];
BIS_UAV1 lockCameraTo [markerPos "BIS_UAVTarget1", [0]];

// Set up the UGV
BIS_keyUGV setDamage 0.75;
BIS_keyUGV setHitPointDamage ["HitRFWheel", 1];
BIS_keyUGV allowDamage false;

// Set up the guards
{_x setBehaviour "SAFE"} forEach BIS_droneGuards;
BIS_droneGuard2 setUnitPos "MIDDLE";

// Set up UAV terminal
{BIS_pallet1Pos disableAI _x} forEach ["ANIM", "AUTOCOMBAT", "AUTOTARGET", "FSM", "MOVE", "SUPPRESSION", "TARGET"];
BIS_pallet1Pos setDir 0;
BIS_pallet1 attachTo [BIS_pallet1Pos, [0,0,0.1]];
BIS_pallet1 setDir (direction BIS_tent1 + 190);
BIS_terminal1 attachTo [BIS_pallet1, [-0.4,0,0.1]];
BIS_terminal1 setDir 90;
BIS_crate1 attachTo [BIS_pallet1, [0.4,0.25,0.25]];
BIS_crate1 setDir 75;
BIS_crate2 attachTo [BIS_pallet1, [0.4,-0.55,0.35]];
BIS_crate2 setDir 75;
[] spawn {waitUntil {time > 0}; [BIS_terminal1, 3] call BIS_fnc_DataTerminalAnimate};

// Set up ammoboxes in bunkers
BIS_ammobox_2 attachTo [BIS_pallet2Pos, [0,0,0.19]];
BIS_ammobox_2 setdir 300;

BIS_ammobox_1 attachTo [BIS_pallet3Pos, [0,0,0.19]];
BIS_ammobox_1 setdir 50;

// Add player classes
{[missionNamespace, _x] call BIS_fnc_addRespawnInventory} forEach ["Rifleman_m06", "Grenadier_m06", "MachineGunner_m06", "Medic_m06", "Engineer_m06", "RiflemanAT_m06", "Scout_m06", "Sharpshooter_m06", "Saboteur_m06"];

// Add respawn
private _respawn = [
	WEST,
	"BIS_insert",
	localize "STR_A3_EXP_m06_InsertionPoint"
] call BIS_fnc_addRespawnPosition;

BIS_respawns = BIS_respawns + [_respawn];

// Create bush infront of Miller
Bis_miller_bush = createSimpleObject ["A3\Vegetation_F_Exp\Shrub\b_Calochlaena_F.p3d", getPosASL bis_bush];
Bis_miller_bush setdir 310;
// Hide terrain objects that conflict with compositions

{_x allowdamage false} forEach (nearestTerrainObjects [[2785.88,8803.79,0.000364304],[],50]);
{_x hideObjectGlobal true} forEach (
	(nearestTerrainObjects [[3095.69,9140.12,0.00184631],["Tree"],50])	// Better view of bay
	+ (nearestTerrainObjects [[2560.58,9059.99,0.00154877],[],5])		// Old canyon
	+ (nearestTerrainObjects [[2892.33,8763.58,-1.15646],[],3])			// Insertion bush #1
	+ (nearestTerrainObjects [[2878.34,8749.61,-0.378396],[],5])		// Insertion bush #2
	+ (nearestTerrainObjects [[2885.99,8750.58,-0.916459],[],3])		// Insertion bush #2
	+ (nearestTerrainObjects [[2849.82,9497.73,0.00162506],[],2])		// Camp bush #1
	+ (nearestTerrainObjects [[2852.68,9482.36,0.00180626],[],2])		// Camp bush #2
	+ (nearestTerrainObjects [[2845.89,9488.17,0.00158882],[],3])		// Camp bush #3
	+ (nearestTerrainObjects [[3093.17,9200.21,0.00130081],[],3])		// Pillbox wall
);

[] spawn {
	scriptName "initServer.sqf: drones revealed";
	
	// Wait for drones to be revealed by a player
	waitUntil {BIS_dronesRevealed};
	
	// Update state of UAV
	BIS_firstUAV = BIS_UAV1 getVariable ["BIS_droneActive", false];
	
	// Play conversation
	"20_Drone_Connected" spawn BIS_fnc_missionConversations;
};