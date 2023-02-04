// Achievements list and their description
// ExpBiggerPicture		: Completed each mission of the Apex Protocol campaign chronologically
// ExpBetterWithFriends		: Completed the Apex Protocol campaign with the help of your squad mates
// ExpLoneWolf			: Completed the Apex Protocol campaign alone
// ExpIntoTheFire		: Completed any mission in the Apex Protocol campaign with Respawn: Limited and Revive: First Aid Kit
// ExpToHellAndBack		: Completed all missions in the Apex Protocol campaign with Respawn (2) and Revive disabled (3)
scriptName "handleMissionEnded.sqf";

// Make sure we are not running on dedicated server nor headless client
if (!hasInterface) exitWith {};

// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Parameters
private _endType = _this param [0, "", [""]];

// End type must be victory, otherwise ignore this script completely
if (toLower _endType in ["applayersdead", "applayersdeadalone"]) exitWith
{
	["Mission ended with end of type %1", _endType] call BIS_fnc_logFormat;
};

// Replace player's rating with their score
private _score = score player;
player addRating (((rating player) * -1) + _score);
BIS_fnc_missionHandlers_rating = _score;

// Info
private _missionName = toLower missionName;
private _playingWithFriends = count ([] call BIS_fnc_listPlayers) > 1;
private _tickets = missionNamespace getVariable ["BIS_fnc_EXP_camp_initDifficulty_tickets", -1];
private _revive = missionNamespace getVariable ["BIS_fnc_EXP_camp_initDifficulty_revive", -1];

// Achievements data
private _achievement_loneWolf = profileNamespace getVariable [VAR_ACHIEVEMENT_LONE_WOLF, []];
private _achievement_betterWithFriends = profileNamespace getVariable [VAR_ACHIEVEMENT_BETTER_WITH_FRIENDS, []];
private _achievement_biggerPicture = profileNamespace getVariable [VAR_ACHIEVEMENT_BIGGER_PICTURE, []];
private _achievement_intoTheFire = profileNamespace getVariable [VAR_ACHIEVEMENT_INTO_THE_FIRE, false];
private _achievement_hellAndBack = profileNamespace getVariable [VAR_ACHIEVEMENT_HELL_AND_BACK, []];

// Internal function to add an achievement to the given array
private _fn_addToArray =
{
	// Params
	params [["_missionName", "", [""]], ["_list", [], [[]]]];

	// Index
	private _index = -1;

	// Go through data and check if current mission is already in the pool
	{
		if (_missionName == _x) exitWith
		{
			_index = _forEachIndex;
		};
	}
	forEach _list;

	// Is mission in pool already?
	if (_index == -1) then
	{
		_list pushBack _missionName;
	};
};

// Flag for mission not being recognized
private _valid = true;

// Depending on mission that was ended
switch (_missionName) do
{
	case "exp_m01":
	{
		if (!_playingWithFriends) then
		{
			[_missionName, _achievement_loneWolf] call _fn_addToArray;
		}
		else
		{
			[_missionName, _achievement_betterWithFriends] call _fn_addToArray;
		};

		if (_tickets == 2 && {_revive == 3}) then
		{
			[_missionName, _achievement_hellAndBack] call _fn_addToArray;
		};

		_achievement_biggerPicture = [_missionName];
	};

	case "exp_m02";
	case "exp_m03";
	case "exp_m04";
	case "exp_m05";
	case "exp_m06";
	case "exp_m07":
	{
		if (!_playingWithFriends) then
		{
			[_missionName, _achievement_loneWolf] call _fn_addToArray;
		}
		else
		{
			[_missionName, _achievement_betterWithFriends] call _fn_addToArray;
		};

		if (_tickets == 2 && {_revive == 3}) then
		{
			[_missionName, _achievement_hellAndBack] call _fn_addToArray;
		};

		[_missionName, _achievement_biggerPicture] call _fn_addToArray;
	};

	default
	{
		// Mission name not recognized
		// Should never happen, but useful to detect possible problems
		_valid = false;
	};
};

// If mission which just ended is invalid, exit
if (!_valid) exitWith
{
	if (DEBUG_SHOW_ERRORS) then
	{
		["Unrecognized mission : %1", _missionName] call BIS_fnc_error;
	};
};

// Unlock playing alone
if (count _achievement_loneWolf == MISSION_COUNT) then
{
	setStatValue ["ExpLoneWolf", 1];
	if (DEBUG_SHOW_LOGS) then {"handleMissionEnded.sqf : ExpLoneWolf achievement unlocked" call BIS_fnc_log};
};

// Unlock playing with friends
if (count _achievement_betterWithFriends == MISSION_COUNT) then
{
	setStatValue ["ExpBetterWithFriends", 1];
	if (DEBUG_SHOW_LOGS) then {"handleMissionEnded.sqf : ExpBetterWithFriends achievement unlocked" call BIS_fnc_log};
};

// Unlock Into the fire
if (_tickets == 1 && {_revive == 1}) then
{
	_achievement_intoTheFire = true;
	setStatValue ["ExpIntoTheFire", 1];
	if (DEBUG_SHOW_LOGS) then {"handleMissionEnded.sqf : ExpIntoTheFire achievement unlocked" call BIS_fnc_log};
};

// Unlock hell and back
if (count _achievement_hellAndBack == MISSION_COUNT) then
{
	setStatValue ["ExpToHellAndBack", 1];
	if (DEBUG_SHOW_LOGS) then {"handleMissionEnded.sqf : ExpToHellAndBack achievement unlocked" call BIS_fnc_log};
};

// Mission names, for comparation
private _orderedMissionNames = ["exp_m01", "exp_m02", "exp_m03", "exp_m04", "exp_m05", "exp_m06", "exp_m07"];

// Unlock bigger picture
if (_orderedMissionNames isEqualTo _achievement_biggerPicture) then
{
	setStatValue ["ExpBiggerPicture", 1];
	if (DEBUG_SHOW_LOGS) then {"handleMissionEnded.sqf : ExpBiggerPicture achievement unlocked" call BIS_fnc_log};
};

// Store to profile
profileNamespace setVariable [VAR_ACHIEVEMENT_LONE_WOLF, _achievement_loneWolf];
profileNamespace setVariable [VAR_ACHIEVEMENT_BETTER_WITH_FRIENDS, _achievement_betterWithFriends];
profileNamespace setVariable [VAR_ACHIEVEMENT_BIGGER_PICTURE, _achievement_biggerPicture];
profileNamespace setVariable [VAR_ACHIEVEMENT_INTO_THE_FIRE, _achievement_intoTheFire];
profileNamespace setVariable [VAR_ACHIEVEMENT_HELL_AND_BACK, _achievement_hellAndBack];
saveProfileNamespace;

// Log
if (DEBUG_SHOW_LOGS) then
{
	["handleMissionEnded.sqf : Mission ended: %1", _missionName] call BIS_fnc_logFormat;
	["handleMissionEnded.sqf : Playing with friends: %1", _playingWithFriends] call BIS_fnc_logFormat;
	["handleMissionEnded.sqf : Achievement Lone Wolf: %1", _achievement_loneWolf] call BIS_fnc_logFormat;
	["handleMissionEnded.sqf : Achievement Better With Friends: %1", _achievement_betterWithFriends] call BIS_fnc_logFormat;
	["handleMissionEnded.sqf : Achievement Bigger Picture: %1", _achievement_biggerPicture] call BIS_fnc_logFormat;
	["handleMissionEnded.sqf : Achievement Into The Fire: %1", _achievement_intoTheFire] call BIS_fnc_logFormat;
	["handleMissionEnded.sqf : Achievement Hell And Back: %1", _achievement_hellAndBack] call BIS_fnc_logFormat;
};