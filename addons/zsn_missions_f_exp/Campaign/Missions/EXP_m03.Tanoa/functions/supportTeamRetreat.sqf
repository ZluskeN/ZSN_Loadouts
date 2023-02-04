//constants:
ALLOWED_SUPPORT_TEAM_HITS = 45;
BIS_hitCounter = 0;

//function
BIS_fnc_supportTeamRetreat = {
	//physical retreat of units
	{
		_x setunitpos "DOWN";
		_x enableAI "MOVE";
		_x forceSpeed -1;
		group _x setBehaviour "CARELESS";
	} forEach BIS_supportGroup;

	sleep 6;
	{
		sleep 2;
		"SmokeShell_Infinite" createVehicle getPos _x;
		_x setCaptive true;
	} forEach BIS_supportGroup;

	sleep 30;
	_smokeGrenades = allMissionObjects "SmokeShell_Infinite";
	{deleteVehicle _x} forEach _smokeGrenades;

	{
		//disable IFF
		_x setVariable ["BIS_iconShow", false, true];
		_x disableAI "MOVE";
		//_x hideObjectGlobal true;
		_x setPos (getPos BIS_HQ);
	} forEach BIS_supportGroup;
};

//tweak support team hits according to number of players
_coef = 0;
if (playersNumber west > 2) then {
	//lower amount of support team hits
	_coef = 1 + playersNumber west * 0.25;
	ALLOWED_SUPPORT_TEAM_HITS = ALLOWED_SUPPORT_TEAM_HITS / _coef;
};

//script that detects how much fire support team can take and when they retreat
BIS_supportGroup = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];
{
	_x setskill ["spotDistance", 0.8];
	_x setskill ["aimingAccuracy", 0.15];

	_x allowDamage false;
	_x setCaptive true;
	_x setunitpos "middle";
	_x disableAI "MOVE";
	_x disableAI "AUTOCOMBAT";
	(group _x) setCombatMode "BLUE";
	_x addEventHandler ["hitPart", {BIS_hitCounter = BIS_hitCounter + 1}];
} forEach BIS_supportGroup;

//disable some equipment
{
	_x removeMagazineGlobal "NLAW_F";
	_x removeMagazineGlobal "SmokeShell";
	_x removeMagazineGlobal "SmokeShellGreen";
	_x removeMagazineGlobal "SmokeShellOrange";
	_x removeMagazineGlobal "SmokeShellPurple";
	_x removeMagazineGlobal "SmokeShellBlue";
} forEach BIS_supportGroup;

waitUntil {missionNamespace getVariable ["BIS_detectedInDepot", false]};
sleep 45;

BIS_hitCounter = 0;
BIS_supportRetreating = false;
while {!BIS_supportRetreating} do {
	sleep 1;
	if (BIS_hitCounter >= ALLOWED_SUPPORT_TEAM_HITS) then {
		BIS_supportRetreating = true;
	};
};

if (!BIS_jungleRetreat) then {
	[] spawn BIS_fnc_supportTeamRetreat;
	["30_SupportTeamRetreating"] spawn BIS_fnc_missionConversations;
};
