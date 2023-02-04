//detection script
BIS_detected = false;
BIS_detectedInDepot = false;

BIS_checkUnitDetection = {
	if (BIS_detectedInDepot || {{_x distance (getMarkerPos "BIS_base") < 180} count (units group (allPlayers select 0)) == 0}) exitWith {};

	private _detected = false;

	{
		if ({alive _x} count units _x == 0) then {
			BIS_depotGroups = BIS_depotGroups - [_x];
		};
	} forEach BIS_depotGroups;

	{
		_player = _x;
		_knowsAbout = {_x knowsAbout _player > 2} count BIS_depotGroups;
		if (_knowsAbout > 0) exitWith {
			_detected = true;
			debugLog "Enemy knows about a player, setting alarm!";
		};
	} forEach allPlayers;
	_detected
};

//wait until players are detected
waitUntil {BIS_detectedInDepot};
debugLog "Players were detected at depot. Support team opens fire";

sleep 2;
//support group goes loud
{
	_x setCaptive false;
	_x enableAI "MOVE";
	_x enableAI "AUTOCOMBAT";
	doStop _x;
	_x forceSpeed 0;
	(group _x) setCombatMode "RED";
} forEach BIS_supportGroup;
//BIS_supportGroup enableAttack false;

sleep 0.5;

if (!BIS_supportTeamLeaving && !BIS_jungleRetreat && !BIS_suppliesDestroyed) then {
	["15_Detected"] spawn BIS_fnc_missionConversations;
};


//manage reinforcements:
sleep 90;
BIS_reinforcements1 = true;
debugLog "First wave of reinforcements activated.";

if (!BIS_jungleRetreat) then {
	["35_Reinforcements_1"] spawn BIS_fnc_missionConversations;

};

//second wave in 5 minutes
sleep 300;

if (!BIS_reinforcements2 && !BIS_jungleRetreat) then {
	["40_Reinforcements_2"] spawn BIS_fnc_missionConversations;
};
BIS_reinforcements2 = true;
debugLog "Second wave of reinforcements activated.";
