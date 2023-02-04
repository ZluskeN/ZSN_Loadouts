// Properties
private _introVideosSubtitles = ["", "a3\Missions_F_Exp\Campaign\Briefings\EXP_m05_briefing.sqf"];
private _introVideos = ["A3\Missions_F_Exp\video\EXP_m05_vTitlecard.ogv", "A3\Missions_F_Exp\video\EXP_m05_vIN.ogv"];
private _bWantsLoadoutSelection = true;
private _bNoCinematics = false;

// Campaign init
#include "\A3\Missions_F_Exp\Campaign\scripts\init.sqf"

// Set Up the support team
{[_x, "DAY"] spawn BIS_fnc_exp_camp_initCharacter} forEach units BIS_group_ai;

// Ensure correct pitch for NPCs
{if (!(isNil _x)) then {(missionNamespace getVariable [_x, objNull]) setPitch 1}} forEach ["BIS_hq", "BIS_lia", "BIS_chopperD"];