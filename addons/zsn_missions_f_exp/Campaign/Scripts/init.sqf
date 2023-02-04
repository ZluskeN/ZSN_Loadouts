// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Disable saving, team switch and sentences
// Note that sentences will be re-enabled by the first occuring conversation in the mission
if (isMultiplayer) then {enableSaving [false, false]};
enableTeamSwitch false;
enableSentences false;

// View distance and terrain grid, otherwise will be read from server.cfg and might not look as desired
setViewDistance VIEW_DISTANCE;
setTerrainGrid TERRAIN_GRID;

// Event for when the mission is waiting for players
[missionNamespace, EVENT_WAITING,
{
	[] call compile preprocessFileLineNumbers "\A3\Missions_F_Exp\Campaign\scripts\handleMissionWaiting.sqf";
}] call BIS_fnc_addScriptedEventHandler;

// Event for when the mission intro starts
[missionNamespace, EVENT_INTRO,
{
	[] call compile preprocessFileLineNumbers "\A3\Missions_F_Exp\Campaign\scripts\handleMissionIntro.sqf";
}] call BIS_fnc_addScriptedEventHandler;

// Event for when the mission loadout selection starts
[missionNamespace, EVENT_LOADOUT,
{
	[] call compile preprocessFileLineNumbers "\A3\Missions_F_Exp\Campaign\scripts\handleMissionLoadout.sqf";
}] call BIS_fnc_addScriptedEventHandler;

// Event for when the mission is started
[missionNamespace, EVENT_STARTED,
{
	[] call compile preprocessFileLineNumbers "\A3\Missions_F_Exp\Campaign\scripts\handleMissionStarted.sqf";
}] call BIS_fnc_addScriptedEventHandler;

// Event for when mission ends
addMissionEventHandler ["Ended",
{
	_this call compile preprocessFileLineNumbers "\A3\Missions_F_Exp\Campaign\scripts\handleMissionEnded.sqf";
}];

// Properties
private ["_introVideos", "_introVideosSubtitles", "_bWantsLoadoutSelection", "_bNoCinematics"];
if (isNil {_introVideos}) then {_introVideos = []};
if (isNil {_introVideosSubtitles}) then {_introVideosSubtitles = []};
if (isNil {_bWantsLoadoutSelection}) then {_bWantsLoadoutSelection = true};
if (isNil {_bNoCinematics}) then {_bNoCinematics = false};

// Initialize manager
[_introVideos, _introVideosSubtitles, nil, nil, nil, nil, _bWantsLoadoutSelection, _bNoCinematics] spawn BIS_fnc_exp_camp_manager;

// Multi-player only systems
if (isMultiplayer) then
{
	// Run the scripted Campaign Lobby
	[] call BIS_fnc_EXP_camp_lobby;

	// Initialize difficulty settings
	[] spawn BIS_fnc_EXP_camp_initDifficulty;

	// Handle player checklists
	[nil,nil,nil,1] spawn BIS_fnc_EXP_camp_playerChecklist;

	// Dynamic groups
	[] spawn
	{
		if (isServer) then
		{
			["Initialize", [true, nil, true, "CTRG15"]] call BIS_fnc_dynamicGroups;
		};

		if (hasInterface) then
		{
			waituntil {!isNull player};

			["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
		};
	};
};

// Vehicles replacement
[] spawn BIS_fnc_EXP_camp_replaceVehicles;

/*
//carefull with that, otherwise the outro black screen will cover it, but it should be also beneath the video and subtitles

//register layers
[] spawn
{
    waitUntil{"BIS_layerBlackScreen" in allCutLayers};
    "BIS_fnc_playVideo" call BIS_fnc_rscLayer;
    "BIS_fnc_showSubtitle" call BIS_fnc_rscLayer;
};
*/

// Make sure the player never becomes a renegade, store their goggles
if (hasInterface) then
{
	waituntil {!isNull player};

	player addRating 10e10;
	player setVariable ["BIS_goggles", goggles player];
	missionNamespace setVariable ["BIS_dynamicGroups_allowInterface", false];

	// Add goggles back upon respawn
 	player addEventHandler ["Respawn",
	{
		private _unit = _this param [0, objNull, [objNull]];

		// Ensure the player still doesn't become a renegade
		_unit addRating 10e10;

		// The goggles
		private _goggles = _unit getVariable ["BIS_goggles", ""];

		// Only apply if the unit isn't incapacitated
		if (!(_unit getVariable ["BIS_revive_incapacitated", false]) && {_goggles != ""}) then
		{
			// Add goggles back
			_unit addGoggles _goggles;
		};

		// Allow dynamic groups after respawn
		missionNamespace setVariable ["BIS_dynamicGroups_allowInterface", true];
	}];
};