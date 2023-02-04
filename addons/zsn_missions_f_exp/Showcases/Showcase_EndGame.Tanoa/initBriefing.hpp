"BIS_tskFOB" call BIS_fnc_missionTasks;

// "BIS_tskReinforcements" call BIS_fnc_missionTasks;
// "BIS_tskIntel01" call BIS_fnc_missionTasks;
// "BIS_tskIntel02" call BIS_fnc_missionTasks;
// "BIS_tskSchematics" call BIS_fnc_missionTasks;
// "BIS_tskUpload" call BIS_fnc_missionTasks;
// "BIS_tskGunship" call BIS_fnc_missionTasks;

// ["BIS_tskFOB", "Current"] call BIS_fnc_missionTasks;

BIS_player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		format [localize "STR_A3_showcase_endgame_signal", "</marker>", "<marker name = 'BIS_mrkStart'>"]
	]
];

BIS_player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		format [localize "STR_A3_showcase_endgame_execution", "</marker>", "<marker name = 'BIS_mrkFOB'>"]
	]
];

BIS_player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		localize "STR_A3_showcase_endgame_mission"
	]
];

BIS_player createDiaryRecord [
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		localize "STR_A3_showcase_endgame_situation"
	]
];
/*
BIS_player createDiarySubject [
  	"Showcase",
  	localize "STR_A3_Diary_Showcase_title"
];

 BIS_player createDiaryRecord [
  	"Showcase",
  	[
   	localize "STR_A3_Diary_Summary_title",
   	"<img image = 'a3\Missions_F_Exp\data\img\Showcase_EndGame_briefing_CA.paa' width = '370' align='center'/>" + localize "STR_A3_Showcase_EndGame_Showcase_Summary_text"
  	]
];

 //--- Select "Showcase" subject by default
[] spawn {
	disableserialization;
	_diary = finddisplay 37;
	_diaryList = _diary displayctrl 1001;
	waituntil {lbsize _diaryList > 4};
	_diaryList lbsetcursel 4;
};
*/
[] spawn {
	(findDisplay 37 displayCtrl 51) ctrlmapAnimAdd [1, 0.325, markerPos "BIS_mrk_BriefingCenter"];
	ctrlmapAnimCommit (findDisplay 37 displayCtrl 51);
};
