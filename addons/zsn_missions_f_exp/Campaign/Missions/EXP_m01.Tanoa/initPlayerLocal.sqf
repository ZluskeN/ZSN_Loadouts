#include "dev.hpp"

// Briefing
// Signal

player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		format [localize "STR_A3_exp_m01_signal","</marker>","<marker name = 'BIS_support'>","<marker name = 'BIS_players'>"]
	]
];

player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		localize "STR_A3_exp_m01_execution"
	]
];

player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		format [localize "STR_A3_exp_m01_mission", "</marker>", "<marker name = 'BIS_support'>","<marker name = 'BIS_first'>","<marker name = 'BIS_players'>"]
	]
];

player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		localize "STR_A3_exp_m01_situation"
	]
];

// Set callsigns
player setGroupID [localize "STR_A3_ApexProtocol_callsign_Raider2"];
BIS_supportLead setGroupID [localize "STR_A3_ApexProtocol_callsign_Raider1"];
BIS_HQ setGroupID [localize "STR_A3_ApexProtocol_callsign_Watchtower"];
BIS_HQ setName localize "STR_A3_ApexProtocol_callsign_Watchtower";
BIS_cop1 setName localize "STR_A3_exp_m01_policeOfficer";

if (didJIP) then {
	[] spawn {
		scriptName "initPlayerLocal.sqf: IFF control";
		
		private _units = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];
		
		// Wait for status to sync
		waitUntil {
			{
				private _unit = _x;
				{isNil {_unit getVariable _x}} count ["BIS_iconAlways", "BIS_iconShow", "BIS_iconName"] > 0
			} count _units == 0
		};
		
		// Start IFF
		[_units] call BIS_fnc_EXP_camp_IFF;
	};
};