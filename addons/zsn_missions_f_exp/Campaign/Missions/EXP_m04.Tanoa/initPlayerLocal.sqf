#include "dev.hpp"

// Register the final feed's forced black screen to avoid overlapping the video
"BIS_fnc_EXP_m04_feed3_layerBlackScreen" call BIS_fnc_rscLayer;

// Briefing
// Signal
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		format [localize "STR_A3_EXP_m04_Signal","<marker name = 'BIS_support'>","</marker>","<marker name = 'BIS_players'>"]
	]
];

// Execution
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		format [localize "STR_A3_EXP_m04_Execution","<marker name = 'BIS_defend'>","</marker>","<marker name = 'BIS_capture'>","<marker name = 'BIS_extract1'>"]
	]
];

// Mission
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		format [localize "STR_A3_EXP_m04_Mission","<marker name = 'BIS_players'>","</marker>","<marker name = 'BIS_defend'>","<marker name = 'BIS_support'>","<marker name = 'BIS_block'>","<marker name = 'BIS_capture'>","<marker name = 'BIS_extract1'>"]
	]
];

// Situation
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		format [localize "STR_A3_EXP_m04_Situation","<marker name = 'BIS_capture'>","</marker>","<marker name = 'BIS_village'>"]
	]
];

// Set callsigns
player setGroupID [localize "STR_A3_EXP_m04_Raider2"];
BIS_HQ setname localize "STR_A3_EXP_m04_Watchtower";
BIS_SOF setName localize "STR_A3_ApexProtocol_callsign_Northstar";

// Add IFF
[] spawn BIS_fnc_EXP_m04_IFF;

// Handle revealing players to enemy during ambush
[player, "BIS_fnc_EXP_m04_revealPlayer", false] call BIS_fnc_MP;

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
  	_map ctrlMapAnimAdd [0.5, 0.07, markerPos "BIS_briefingCenter"];
 	ctrlMapAnimCommit _map;
	 };
};