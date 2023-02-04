//wait 4 minutes for convoy to get away
BIS_convoyDepart = false;
BIS_convoyMoving = false;
BIS_convoyActivated = false;
CONVOY_DEPART_TIME = 90;

BIS_fnc_driversGetOut = {
	{
		if (_x != gunner vehicle _x) then {
			doGetOut _x;
		};
	} forEach units group BIS_convoyLeader;
};

waitUntil {sleep 1; BIS_overwatchReached};

private _time = 0;
while {_time <= CONVOY_DEPART_TIME} do {
	sleep 1;
	_time = _time + 1;

	if (BIS_detectedInDepot) exitWith {
		[] call BIS_fnc_driversGetOut;
	};
};

if (!BIS_detectedInDepot) then {
	BIS_convoyDepart = true;
	debugLog "Convoy is departing";
};

//wait until all convoy units are inside car
_allIn = false;
while {!_allIn} do {
	sleep 0.1;

	//if player is alive and on foot, unit shouldn't be driving
	{
		_allIn = true;
		if (vehicle _x == _x && alive _x) then {
			_allIn = false;
		};
	} forEach units group BIS_delegationLeader;
};

debugLog "Convoy is departing";
if (!BIS_detected) then {
	BIS_convoyMoving = true;
	sleep 5;
	["07_ConvoyDepart"] call BIS_fnc_missionConversations;
};
