// Name this script
scriptName "randomizeBoss.sqf";

// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Make sure to only run on the server
if (!isServer) exitWith
{
	"randomizeBoss.sqf: Tried to be run on non server machine" call BIS_fnc_error;
};

// Parameters
// @param: The boss unit to move to random position
// @param: The list of positions in which boss can spawn in format [[<positionASL>, <direction>], [<positionASL>, <direction>]]
params
[
	["_boss", objNull, [objNull]],
	["_positions", [], [[]]],
	["_objectives", [], [[]]]
];

// Make sure boss is valid
if (isNull _boss) exitWith
{
	"randomizeBoss.sqf: Provided _boss is null" call BIS_fnc_error;
};

// Make sure we have available positions
if (count _positions < 1) exitWith
{
	"randomizeBoss.sqf: No _positions provided" call BIS_fnc_error;
};

// The old positions stored in profile
// If mission was played in this machine, it will store all random positions selected so we make proper randomization
private _savedPositions = profileNamespace getVariable ["BIS_coop_campaign_m07_savedRandomBossPositions", []];

// The new saved positions list to be saved in profile
private _savedPositionsNew = [];

// The selected position
private _position = [0,0,0];

// If saved positions is equal to the total number of available positions is because we already used them all
// Reset list and select one by random
if (count _savedPositions == count _positions) then
{
	// Select a random position
	_position = selectRandom _positions;

	// Fill new saved positions
	_savedPositions = [_position];
}
else
{
	// Get delta positions
	private _deltaPositions = _positions - _savedPositions;

	// Select a random position
	_position = selectRandom _deltaPositions;

	// Fill new saved positions
	_savedPositionsNew = _savedPositions + [_position];
};

// Move boss to new position
_boss setPosASL (_position select 0);
_boss setDir (_position select 1);
_boss setFormDir (_position select 1);

// Store to profile on the server and connected clients
// If a client leaves the server and starts hosting, real randomization will still work there too
[[[_savedPositionsNew], "scripts\randomizeBossSave.sqf"], "execVM"] call BIS_fnc_mp;

// Get nearest object and register it with the boss
if (count _objectives > 0) then
{
	private _nearestObjective = objNull;
	private _nearestDistance = 10e10;

	{
		private _distance = _x distance _boss;

		if (_distance < _nearestDistance) then
		{
			_nearestObjective = _x;
			_nearestDistance = _distance;
		};
	}
	forEach _objectives;

	if (!isNull _nearestObjective) then
	{
		// Register objective with the boss
		_boss setVariable ["BIS_coop_campaign_m07_bossObjective", _nearestObjective];
		["randomizeBoss.sqf: Objective (%1) registered with _boss", _nearestObjective] call BIS_fnc_logFormat;

		// Start boss FSM
		private _fsm = [BIS_boss, _nearestObjective, false] execFSM "fsms\boss.fsm";

		// Debug FSM if requested
		//if (DEBUG_FSM) then
		//{
			//diag_debugFSM _fsm;
		//};

		// Cleanup objects which are not used
		private _objectiveObjects = _objectives - [_nearestObjective];

		// Go through the objects which were not selected and delete objects synchronized to it
		{
			private _synchronizedObjects = synchronizedObjects _x;

			{
				if !(_x isKindOf "EmptyDetector") then
				{

					["randomizeBoss.sqf: Unneeded object deleted - %1", _x] call BIS_fnc_logFormat;
					deleteVehicle _x;
				};
			}
			forEach _synchronizedObjects;
		}
		forEach _objectiveObjects;
	}
	else
	{
		"randomizeBoss.sqf: Unable to register a objective with the _boss" call BIS_fnc_logFormat;
	};
}
else
{
	"randomizeBoss.sqf: No _objectives provided to register with the _boss" call BIS_fnc_logFormat;
};

["randomizeBoss.sqf: Boss random positions saved to profile (%1) and one was selected (%2)", _savedPositionsNew, _position] call BIS_fnc_logFormat;