// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Signal
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		format[localize "STR_A3_Exp_m05_Signal", "</marker>", "<marker name = 'BIS_prawler_1'>", "<marker name = 'BIS_prawler_2'>"]
	]
];

// Execution
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		format [localize "STR_A3_Exp_m05_Execution", "</marker>", "<marker name = 'BIS_prawler_1'>"]
	]
];

// Mission
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		format [localize "STR_A3_Exp_m05_Mission", "</marker>", "<marker name = 'BIS_prawler_1'>"]
	]
];

// Situation
player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		format [localize "STR_A3_Exp_m05_Situation", "</marker>", "<marker name = 'BIS_prawler_1'>"]
	]
];

// Support group
[units BIS_group_ai] call BIS_fnc_exp_camp_iff;

if (!isNil {BIS_chopperD} && {!isnull BIS_chopperD}) then {BIS_chopperD setname localize "STR_A3_ApexProtocol_callsign_Angel13"};

// Event for when the mission is started
[missionNamespace, EVENT_STARTED,
{
	[] spawn
	{
		scriptName "initPlayerLocal::EVENT_STARTED";
		sleep 5;

		[
			[localize "STR_A3_Exp_m05_Sitrep_1", 2, 2],
			[localize "STR_A3_Exp_m05_Sitrep_2", 2, 6],
			[localize "STR_A3_Exp_m05_Sitrep_3", 1, 9, 1]
		] spawn BIS_fnc_EXP_camp_SITREP;
	};
}] call BIS_fnc_addScriptedEventHandler;


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
  	_map ctrlMapAnimAdd [0.5, 0.05, markerPos "BIS_briefingCenter"];
 	ctrlMapAnimCommit _map;
	 };
};