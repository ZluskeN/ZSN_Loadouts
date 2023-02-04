#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Briefing
// Targets

player createDiaryRecord [
	"Diary",
	[
		localize "str_a3_mdl_category_intel",
		localize "STR_A3_EXP_M03_Briefing_Intel_1"
		+ "<br/>" +
		localize "STR_A3_EXP_M03_Briefing_Intel_2"
		+ "<br/>" +
		localize "STR_A3_EXP_M03_Briefing_Intel_3"
		+ "<br/>" +
		localize "STR_A3_EXP_M03_Briefing_Intel_4"
	]
];

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
		+ "<br/>" +
		localize "STR_A3_EXP_M03_Briefing_Signal_4"
	]
];

// Execution
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",

		localize "STR_A3_EXP_M03_Briefing_Execution_1"
		+ "<br/>" +
		format [localize "STR_A3_EXP_M03_Briefing_Execution_2","</marker>","<marker name = 'mrk_helipad'>"]
	]
];

// Mission
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",

		format [localize "STR_A3_EXP_M03_Briefing_Mission_1","</marker>","<marker name = 'mrk_support'>","<marker name = 'BIS_base'>","<marker name = 'mrk_zone_mike'>"]
		+ "<br/>" +
		format [localize "STR_A3_EXP_M03_Briefing_Mission_2","</marker>","<marker name = 'mrk_helipad'>"]
	]
];

// Situation
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",

		format [localize "STR_A3_EXP_M03_Briefing_Situation_1","</marker>","<marker name = 'BIS_base'>"]
		+ "<br/>" +
		localize "STR_A3_EXP_M03_Briefing_Situation_2"
		+ "<br/>" +
		localize "STR_A3_EXP_M03_Briefing_Situation_3"
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
group player setGroupID [format [localize "STR_A3_EXP_M03_callSigns_2","",""]];
group BIS_HQ setGroupID [localize "STR_A3_EXP_M03_callSigns_3"];
group BIS_PIL setGroupID [localize "STR_A3_ApexProtocol_callsign_Angel32"];
group BIS_LIA setGroupID [localize "STR_A3_ApexProtocol_callsign_Northstar"];

group BIS_supportLead setGroupID [format [localize "STR_A3_EXP_M03_callSigns_1","",""]];
group BIS_support1 setGroupID ["STR_A3_ApexProtocol_identity_Grimm"];
group BIS_support2 setGroupID ["STR_A3_ApexProtocol_identity_Salvo"];
group BIS_support3 setGroupID ["STR_A3_ApexProtocol_identity_Truck"];

BIS_supportLead setName (localize "STR_A3_ApexProtocol_identity_Riker");
BIS_support1 setName (localize "STR_A3_ApexProtocol_identity_Grimm");
BIS_support2 setName (localize "STR_A3_ApexProtocol_identity_Salvo");
BIS_support3 setName (localize "STR_A3_ApexProtocol_identity_Truck");

BIS_HQ setName localize "STR_A3_EXP_M03_callSigns_3";
BIS_PIL setName localize "STR_A3_ApexProtocol_callsign_Angel32";
BIS_LIA setName localize "STR_A3_ApexProtocol_callsign_Northstar";

//Set camouflage
player setUnitTrait ["camouflageCoef", 0.3, true];
//player setUnitTrait ["audibleCoef", 0.6, true];

// Register that player is ready
player setVariable ["BIS_spawned", true];

// Event for when the mission is started
[missionNamespace, EVENT_STARTED,
{
	[] spawn {
		scriptName "initPlayerLocal::EVENT_STARTED";
		sleep 5;

		[
			[localize "STR_A3_EXP_m03_SitrepText_1", 2, 2],
			[localize "STR_A3_EXP_m03_SitrepText_2", 2, 6],
			[localize "STR_A3_EXP_m03_SitrepText_3", 1, 9, 1]
		] spawn BIS_fnc_EXP_camp_SITREP;
	};
}] call BIS_fnc_addScriptedEventHandler;
