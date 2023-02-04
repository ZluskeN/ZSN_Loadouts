//BALANCE GROUPS - REMOVE AI WHEN < 4 PLAYERS
debugLog format ["Original AI count: %1", count allUnits];

//private _groupsWithoutBalancing = [];
{
	if (leader _x distance (getMarkerPos "BIS_base") > 150) then {
		if (count units _x > 2 && side _x != WEST) then {
			[_x, 2, true] call BIS_fnc_EXP_camp_balanceGroup;
		};
	};
} forEach allGroups;
debugLog format ["Updated AI count: %1", count allUnits];

//TWEAKING GUARDS SKILLS
SKILL_VALUE = 0.25;

{
	if (side _x != WEST) then {
		{
			_x setskill ["spotDistance", SKILL_VALUE];
			_x setskill ["spotTime", SKILL_VALUE];
		} forEach units _x;
	};
} forEach allGroups;

//MAKE AI GUNNERS INACCURATE
{
	(gunner _x) setSkill 0.1;
	(gunner _x) setskill ["spotDistance", 0.1];
	(gunner _x) setskill ["aimingAccuracy", 0.1];
	(driver _x) setSkill 0.1;
	(driver _x) setskill ["spotDistance", 0.1];
	(driver _x) setskill ["aimingAccuracy", 0.1];
} forEach allMissionObjects "I_G_Offroad_01_Armed_F";

waitUntil {missionNamespace getVariable ["BIS_detectedInDepot", false]};
debugLog "Resetting spotting of AI.";

//reset spotting of enemies
{
	if (side _x != WEST) then {
		{
			_x setskill ["spotDistance", 0.3];
			_x setskill ["spotTime", 0.3];
		} forEach units _x;
	};
} forEach allGroups;

{
	_x  setUnitTrait ["camouflageCoef", 0.8, true];
	//_x  setUnitTrait ["audibleCoef", 0.5, true];
} forEach allPlayers;