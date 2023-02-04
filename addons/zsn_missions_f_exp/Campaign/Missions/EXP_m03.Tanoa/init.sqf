//forward declaration of variables
BIS_reinforcements1 = false;
BIS_reinforcements2 = false;
BIS_extractionReached = false;
BIS_overwatchReached = false;
BIS_supportRetreating = false;
BIS_detectedInDepot = false;
BIS_jungleRetreat = false;
BIS_supportTeamLeaving = false;
BIS_explosivesDetonated = false;
BIS_inExfilZone = 0;
BIS_exfiltrated = false;
BIS_allSuppliesDestroyed = false;
BIS_inHelicopter = false;
BIS_respawn2 = false;
BIS_depotGroups = [];

{
	if (side _x == resistance && group _x != BIS_supplyConvoy) then {
		BIS_depotGroups pushBackUnique (group _x);
	};
} forEach ((getMarkerPos "BIS_base") nearEntities ["Man", 150]);

// Properties
_introVideosSubtitles = ["", "a3\Missions_F_Exp\Campaign\Briefings\EXP_m03_briefing.sqf"];
_introVideos = ["A3\Missions_F_Exp\video\EXP_m03_vTitlecard.ogv", "A3\Missions_F_Exp\video\EXP_m03_vIN.ogv"];
_bWantsLoadoutSelection = true;
_bNoCinematics = false;

// Campaign init
#include "\A3\Missions_F_Exp\Campaign\scripts\init.sqf"

//support group init with IFF and loadouts
BIS_supportGroup =  [BIS_support1, BIS_support2, BIS_support3, BIS_supportLead];
[BIS_supportGroup] call BIS_fnc_EXP_camp_IFF;
BIS_supportLead setVariable ["BIS_iconAlways", true];
{[_x, "DAY"] call BIS_fnc_EXP_camp_initCharacter} forEach BIS_supportGroup;

execVM "functions\supplyDetonation.sqf";
execVM "functions\unlockAchievment.sqf";

// Ensure correct pitch for NPCs
{if (!(isNil _x)) then {(missionNamespace getVariable [_x, objNull]) setPitch 1}} forEach ["BIS_HQ", "BIS_LIA", "BIS_PIL", "BIS_m2"];

//----------------------------
// special objects and effects
//----------------------------

_obj = createSimpleObject ["A3\Vegetation_F_Exp\TREE\t_Cyathea_F.p3d", getPosASL strom4];
_obj setdir 240;
[_obj, 90, 0] call BIS_fnc_setPitchBank;

_obj = createSimpleObject ["A3\Vegetation_F_Exp\TREE\t_Leucaena_F.p3d", getPosASL strom];
_obj setdir 110;
[_obj, 90, 0] call BIS_fnc_setPitchBank;

_obj = createSimpleObject ["A3\Vegetation_F_Exp\TREE\t_Leucaena_F.p3d", getPosASL strom2];
_obj setdir 110;
[_obj, 90, 0] call BIS_fnc_setPitchBank;

_obj = createSimpleObject ["A3\Vegetation_F_Exp\TREE\t_Leucaena_F.p3d", getPosASL strom2];
_obj setdir 290;
[_obj, 90, 0] call BIS_fnc_setPitchBank;

_obj = createSimpleObject ["A3\Vegetation_F_Exp\TREE\t_Leucaena_F.p3d", getPosASL strom3];
_obj setdir 10;
[_obj, 90, 0] call BIS_fnc_setPitchBank;

//reattach mines to player
BIS_myMines = [];
if (!isDedicated) then {
	player addEventHandler ["fired", {
		if ((_this select 5) isKindOf ["SatchelCharge_Remote_Mag", configfile >> "CfgMagazines"]) then {
			BIS_myMines = getAllOwnedMines player;
			debugLog "mine added";
		};
	}];

	//equipment
	player addMPEventHandler ["MPRespawn", {
		[] spawn BIS_fnc_addExplosivesToInventory;
		{
			player addOwnedMine _x;
		} forEach BIS_myMines;
	}];
};

//supplies
waitUntil {BIS_overwatchReached};

if (!isDedicated) then {
	while {!BIS_allSuppliesDestroyed} do {
		sleep 0.2;
		[] call BIS_fnc_lookingAtSupply;
	};
};
