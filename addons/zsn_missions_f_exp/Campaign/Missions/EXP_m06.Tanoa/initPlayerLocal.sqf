#include "dev.hpp"

if ((player call BIS_fnc_objectVar) in ["BIS_player1", "BIS_player2", "BIS_player3", "BIS_player4"]) then {
	player addEventHandler [
		"Respawn",
		{
			// Never connect to destroyed UGV
			player disableUAVConnectability [BIS_keyUGV, true];

			// Handle other drones
			{
				if (!(_x getVariable ["BIS_droneActive", false])) then {
					// Drone hasn't been activated
					player disableUAVConnectability [_x, true];
				} else {
					// Drone was activated
					player enableUAVConnectability [_x, false];
				};
			} forEach (BIS_drones - [BIS_UAV1]);
		}
	];
};

// Briefing
// Signal
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		format [localize "STR_A3_EXP_m06_Signal","<marker name = 'BIS_support'>","</marker>","<marker name = 'BIS_players'>"]
	]
];

// Execution
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		format [localize "STR_A3_EXP_m06_Execution","<marker name = 'BIS_islandCenter'>","</marker>"]
	]
];

// Mission
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		format [localize "STR_A3_EXP_m06_Mission","<marker name = 'BIS_players'>","</marker>","<marker name = 'BIS_insert'>","<marker name = 'BIS_islandCenter'>","<marker name = 'BIS_support'>","<marker name = 'BIS_secondIsland'>","<marker name = 'BIS_mortars'>"]
	]
];

// Situation
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		format [localize "STR_A3_EXP_m06_Situation","<marker name = 'BIS_islandCenter'>","</marker>"]
	]
];

if (isMultiplayer) then {
	[] spawn {
		disableSerialization;
		scriptName "initPlayerLocal.sqf: map zoom control";
		
		// Wait for respawn menu
		waitUntil {time > 0 && { !(alive player) && { visibleMap } }};
		
		// Grab display and map
		private "_display";
		waitUntil {_display = findDisplay 12; !(isNull _display)};
		private _map = _display displayCtrl 51;
		
		// Let respawn menu center first
		sleep 0.2;
		
		// Move center
		_map ctrlMapAnimAdd [0.5, 0.125, markerPos "BIS_briefingCenter"];
		ctrlMapAnimCommit _map;
	};
};

// Set callsigns
player setGroupID [localize "STR_A3_ApexProtocol_callsign_Raider2"];
BIS_supportMortar setGroupID [localize "STR_A3_EXP_m06_Raider1"];
BIS_supportMortar setname localize "STR_A3_EXP_m06_Raider1";
BIS_support3 setname localize "STR_A3_ApexProtocol_identity_Truck";
BIS_HQ setname localize "STR_A3_ApexProtocol_callsign_Watchtower";

// Handle mortar support
[] spawn BIS_fnc_EXP_m06_handleMortar;

// Handle drone icons
[] spawn BIS_fnc_EXP_m06_droneIcons;

// Handle IFF
BIS_miller setVariable ["BIS_iconAlways", true];
[[BIS_miller]] call BIS_fnc_EXP_camp_IFF;
