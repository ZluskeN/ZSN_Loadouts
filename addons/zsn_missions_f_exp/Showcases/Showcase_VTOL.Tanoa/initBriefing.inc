"BIS_tskGetIn" call BIS_fnc_missionTasks;
"BIS_tskTakeOff" call BIS_fnc_missionTasks;
"BIS_tskPickup" call BIS_fnc_missionTasks;
"BIS_tskParadrop" call BIS_fnc_missionTasks;
"BIS_tskTaru" call BIS_fnc_missionTasks;
"BIS_tskIFVs" call BIS_fnc_missionTasks;

// "BIS_tskPilots" call BIS_fnc_missionTasks;
// "BIS_tskRescue" call BIS_fnc_missionTasks;
// "BIS_tskGunship" call BIS_fnc_missionTasks;
// "BIS_tskMaintenance" call BIS_fnc_missionTasks;
// "BIS_tskRTB" call BIS_fnc_missionTasks;

BIS_Player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		localize "STR_A3_Showcase_VTOL_signal"
	]
];

BIS_Player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		format [localize "STR_A3_Showcase_VTOL_execution", "</marker>", "<marker name = 'BIS_mrkHangar'>", "<marker name = 'BIS_mrkAirfield'>", "<marker name = 'BIS_mrkBala'>", "<marker name = 'BIS_mrkParadrop'>", "<marker name = 'BIS_mrkLijnhaven'>", "<marker name = 'BIS_mrkHangar'>"]
	]
];

BIS_Player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		localize "STR_A3_Showcase_VTOL_mission"
	]
];

BIS_Player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		localize "STR_A3_Showcase_VTOL_situation"
	]
];

BIS_Player createDiarySubject [
  	"Showcase",
  	localize "STR_A3_Diary_Showcase_title"
];

BIS_Player createDiaryRecord [
  	"Showcase",
  	[
   	localize "STR_A3_Diary_Summary_title",
   	"<img image = 'a3\Missions_F_Exp\data\img\Showcase_VTOL_briefing_CA.paa' width = '370' align='center'/>" + localize "STR_A3_Showcase_VTOL_Showcase_Summary_text"
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

[] spawn
{
	(findDisplay 37 displayCtrl 51) ctrlmapAnimAdd [1, 0.325, markerPos "BIS_mrk_BriefingCenter"];
	ctrlmapAnimCommit (findDisplay 37 displayCtrl 51);
};
