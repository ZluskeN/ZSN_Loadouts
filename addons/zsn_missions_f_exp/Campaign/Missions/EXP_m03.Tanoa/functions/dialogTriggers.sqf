BIS_carMovable = true;
BIS_fullArrival = false;
BIS_atLz = false;
BIS_LsvInLz = false;
publicVariable "BIS_LsvInLz";

BIS_vtolForce = [BIS_heli, BIS_cargo];
{
	BIS_vtolForce pushBack _x;
}
forEach ((getPos trg_lz) nearEntities [["man"], 50]);

{
	_x hideObjectGlobal true;
}
forEach BIS_vtolForce;

BIS_fnc_carDamage = {
	debugLog "Car damage detection activated";
	BIS_carMovable = true;
	while {true} do {
		sleep 1;

		{
			_damage = BIS_lsv getHitPointDamage _x;
			if (_damage == 1) exitWith {
				BIS_carMovable = false;
			};
		} forEach ["HitRFWheel","HitLFWheel"];

		if (!(canMove BIS_LSV) || !BIS_carMovable) exitWith {
			//["x01_accident"] remoteExec ["BIS_fnc_missionConversations",0];
			["x01_accident"] spawn BIS_fnc_missionConversations;

		};
	};
};

waitUntil {missionNamespace getVariable ["BIS_exfiltrated",false]};
[] spawn BIS_fnc_carDamage;

[] spawn {
	sleep 200;
	if (missionNamespace getVariable ["BIS_lzReached", false]) then {
		//["x03_late_arrival"] remoteExec ["BIS_fnc_missionConversations",0];
		["x03_late_arrival"] spawn BIS_fnc_missionConversations;
	};
};


//TODO: check arrival
BIS_lzArrival = {
	[] spawn {
		//check if someone is missing
		if ({_x distance trg_lz < 40} count allPlayers == count allPlayers) then {
			[] call BIS_fnc_fullArrival;
		} else {
			[] call BIS_fnc_partialArrival;
			sleep 5;

			while {!BIS_fullArrival} do {
				sleep 1;
				if ({_x distance trg_lz < 40} count allPlayers == count allPlayers) then {
					BIS_fullArrival = true;
				};
				[] call BIS_fnc_fullArrival;
			};
		};
	};
};

BIS_fnc_partialArrival = {
	//dialog
	debugLog "Partial arival to LZ";
	//["x02_slow_players"] remoteExec ["BIS_fnc_missionConversations",0];
	["x02_slow_players"] spawn BIS_fnc_missionConversations;
};

BIS_fnc_fullArrival = {
	//fsm state change + fsm things
	debugLog "Full arrival to LZ";

	//if LSV nearby
	if (BIS_lsv distance trg_lz < 50) then {
		BIS_LsvInLz = true;
		publicVariable "BIS_LsvInLz";
	};
	//check if LSV nearby
	BIS_atLz = true;
};

