#include "dev.hpp"

// Briefing
// Signal
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",

		format [localize "STR_A3_EXP_M03_Briefing_Signal_1","</marker>","<marker name = 'mrk_support'>"]
		+ "<br/>" +
		format [localize "STR_A3_EXP_M03_Briefing_Signal_2","</marker>","<marker name = 'mrk_players'>"]
		+ "<br/>" +
		localize "STR_A3_EXP_M03_Briefing_Signal_3"
	]
];

// Execution
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		format [localize "STR_A3_EXP_M02_Briefing_Execution_1", "</marker>","<marker name = 'BIS_RV'>"]
		+ "<br/>" +
		format [localize "STR_A3_EXP_M02_Briefing_Execution_2", "</marker>","<marker name = 'BIS_ambush'>","<marker name = 'BIS_convoy'>"]
		+ "<br/>" +
		localize "STR_A3_EXP_M02_Briefing_Execution_3"
	]
];

// Mission
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		format [localize "STR_A3_EXP_M02_Briefing_Mission_1","</marker>","<marker name = 'BIS_support'>","<marker name = 'BIS_ambush'>"]
		+ "<br/><br/>" +
		localize "STR_A3_EXP_M02_Briefing_Mission_2"
	]
];

// Situation
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",

		localize "STR_A3_EXP_M02_Briefing_Situation_1"
		+ "<br/><br/>" +
		localize "STR_A3_EXP_M02_Briefing_Situation_2"
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
		sleep 0.1;

		// Move center
		_map ctrlMapAnimAdd [0.5, 0.1, markerPos "BIS_briefingCenter"];
		ctrlMapAnimCommit _map;
	};
};


// Set callsigns
group player setGroupID [ localize "STR_A3_ApexProtocol_callsign_Raider2"];
BIS_HQ setGroupID [localize "STR_A3_ApexProtocol_callsign_Watchtower"];
group BIS_supportLead setGroupID [localize "STR_A3_ApexProtocol_callsign_Raider1"];
group BIS_LIA setGroupID [localize "STR_A3_ApexProtocol_callsign_Northstar"];

BIS_HQ setName localize "STR_A3_ApexProtocol_callsign_Watchtower";
BIS_LIA setName localize "STR_A3_ApexProtocol_callsign_Northstar";
BIS setName localize "STR_A3_ApexProtocol_callsign_Northstar";


// Add IFF
[] spawn BIS_fnc_EXP_m02_IFF;

// Handle player spotting Support Lead
[] spawn BIS_fnc_EXP_m02_seeLead;

// Control view distance
[] spawn BIS_fnc_EXP_m02_viewDistance;

execVM "functions\fn_EXP_m02_explosivesPlacement.sqf";

