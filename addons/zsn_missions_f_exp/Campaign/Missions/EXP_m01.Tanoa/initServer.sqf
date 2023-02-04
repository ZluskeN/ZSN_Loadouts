#include "dev.hpp"

// Ensure global level of fog
0 setFog [0.1, 0.05, 50];

// Global mission variables
BIS_missionStarted = false;
BIS_firstSpotted = false;
BIS_spotParas = false;
BIS_parasSpotted = false;
BIS_copRescued = false;
BIS_playEnding = false;
{publicVariable _x} forEach ["BIS_missionStarted", "BIS_firstSpotted", "BIS_spotParas", "BIS_parasSpotted", "BIS_copRescued", "BIS_playEnding"];

// Server-side mission variables
BIS_respawns = [];
BIS_respawnEnabled = false;

BIS_introEnded = false;
BIS_deploySentries = false;
BIS_searchBuilding = false;
BIS_buildingSearched = false;
BIS_secondMove = false;
BIS_secondAlerted = false;
BIS_secondSearched = false;
BIS_revealTower = false;
BIS_towerAlerted = false;
BIS_attackedQRF = false;
BIS_deployQRF = false;
BIS_finalMove = false;
BIS_finalEngaged = false;
BIS_finalAlerted = false;
BIS_supportSearched = false;
BIS_startEnding = false;
BIS_endMission = false;

BIS_supportGroup = group BIS_supportLead;
BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];

BIS_QRFUnits = units BIS_QRFGroup1 + units BIS_QRFGroup2;
BIS_QRFVehicles = [BIS_QRFTruck1, BIS_QRFTruck2];

BIS_firstUnits = [BIS_first1, BIS_first2, BIS_first3, BIS_first4];
BIS_sentryUnits = units BIS_sentryGroup;

BIS_reinfUnits = units BIS_reinfGroup;
BIS_secondUnits = [BIS_second1, BIS_second2, BIS_second3, BIS_second4, BIS_second5, BIS_second6];
BIS_towerUnits = [BIS_tower1, BIS_tower2, BIS_tower3, BIS_tower4, BIS_tower5];

BIS_finalPlayers = [BIS_finalPlayers1, BIS_finalPlayers2, BIS_finalPlayers3, BIS_finalPlayers4, BIS_finalPlayers5, BIS_finalPlayers6, BIS_finalPlayers7, BIS_finalPlayers8, BIS_finalPlayers9, BIS_finalPlayers10, BIS_finalPlayers11, BIS_finalPlayers12, BIS_finalPlayers13];
BIS_finalSupport = [BIS_finalSupport1, BIS_finalSupport2, BIS_finalSupport3, BIS_finalSupport4, BIS_finalSupport5, BIS_finalSupport6];
BIS_finalUnits = BIS_finalPlayers + BIS_finalSupport;

BIS_firstAO = [BIS_firstAO1, BIS_firstAO2, BIS_firstAO3];
BIS_musicTrigs = [BIS_musicTrig1, BIS_musicTrig2, BIS_musicTrig3, BIS_musicTrig4, BIS_musicTrig5, BIS_musicTrig6];

if (!(isNil {BIS_secondSpawner})) then {
	// Eastern second location
	BIS_secondBuilding1 = [4861.49,3461.46,0.000404358] nearestObject "Land_House_Small_01_F";
	BIS_secondMarker = "BIS_secondA";
	BIS_secondDefend = "BIS_secondDefendA";
	BIS_secondDest = markerPos "BIS_secondDestA"; BIS_secondDest set [2, 0.5];
	BIS_respawnNearSecond = "BIS_respawnNearSecondA";
	BIS_respawnSecond = "BIS_respawnSecondA";
	BIS_copTrig = BIS_copTrigA;
	BIS_playerTrig = BIS_playerTrigA;
	BIS_enemyTrig = BIS_enemyTrigA;
	{deleteVehicle _x} forEach [BIS_copTrigB, BIS_playerTrigB, BIS_enemyTrigB];
} else {
	// Western second location
	BIS_secondBuilding1 = [4680.91,3563.97,-0.000843048] nearestObject "Land_House_Small_01_F";
	BIS_secondMarker = "BIS_secondB";
	BIS_secondDefend = "BIS_secondDefendB";
	BIS_secondDest = markerPos "BIS_secondDestB"; BIS_secondDest set [2, 0.5];
	BIS_respawnNearSecond = "BIS_respawnNearSecondB";
	BIS_respawnSecond = "BIS_respawnSecondB";
	BIS_copTrig = BIS_copTrigB;
	BIS_playerTrig = BIS_playerTrigB;
	BIS_enemyTrig = BIS_enemyTrigB;
	{deleteVehicle _x} forEach [BIS_copTrigA, BIS_playerTrigA, BIS_enemyTrigA];
};

// Hide markers
{_x setMarkerAlpha 0} forEach ["BIS_first", "BIS_secondA", "BIS_secondB", "BIS_final"];

// Find remaining buildings
BIS_firstBuilding1 = [4723.75,4150.31,0.00346756] nearestObject "Land_Slum_03_F";
BIS_finalBuilding1 = [5023.52,3017.94,0.132711] nearestObject "Land_House_Small_02_F";
BIS_finalBuilding2 = [5125.81,2924.12,-0.02001] nearestObject "Land_House_Small_05_F";

// Lock doors on final buildings
{
	private _building = _x;
	{_building setVariable [_x, 1, true]} forEach ["BIS_disabled_Door_1", "BIS_disabled_Door_2"];
} forEach [BIS_finalBuilding1, BIS_finalBuilding2];

// Make all buildings indestructible
{_x allowDamage false} forEach [BIS_firstBuilding1, BIS_secondBuilding1, BIS_finalBuilding1, BIS_finalBuilding2];

// Hide map lamp
private _lampOld = [5021.44,3024.93,0.0038929] nearestObject "Land_LampShabby_F";
_lampOld hideObjectGlobal true;

// Create new, fake lamp further away
private _lampNew = createVehicle ["Land_LampShabby_F", [5023.91,3028.47,0], [], 0, "NONE"];
_lampNew setDir (direction _lampOld);

// Hide water tank
private _waterTank = (nearestTerrainObjects [[5020.18,3024.89,0.000680923], [], 1]) select 0;
_waterTank hideObjectGlobal true;
	
// Add player classes
"NIGHT" call BIS_fnc_EXP_camp_initClasses;

{
	// Set up initial IFF settings
	private _unit = _x;
	{_unit setVariable [_x, false, true]} forEach ["BIS_iconAlways", "BIS_iconShow", "BIS_iconName"];
} forEach BIS_supportUnits;

// Add initial respawn position
private _respawn = [
	WEST,
	markerPos "BIS_respawnStart",
	localize "STR_A3_ApexProtocol_marker_Insertion"
] call BIS_fnc_addRespawnPosition;

BIS_respawns = BIS_respawns + [_respawn];

// Disable fleeing for all units
{_x allowFleeing 0} forEach allUnits;

// Hide vegetation that conflicts with compositions
{_x hideObjectGlobal true} forEach (
	(nearestTerrainObjects [[4703.82,3223.23,0.00232697],[],10])
	+ (nearestTerrainObjects [[4699.74,3280.07,0.00189972],[],10])
	+ (nearestTerrainObjects [[4840.13,3175.69,0.499992],[],5])
);