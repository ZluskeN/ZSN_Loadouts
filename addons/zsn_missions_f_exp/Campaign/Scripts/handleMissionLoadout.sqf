disableSerialization;

// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Exit if we have no interface
if (!hasInterface) exitWith
{
	if (DEBUG_SHOW_LOGS) then
	{
		"Machine has no interface, ignoring..." call BIS_fnc_log;
	};
};

// We need to be able to suspend
[] spawn
{
	scriptName "handleMissionLoadout.sqf: Suspended Thread";

	// Make sure no videos are playing
	waituntil
	{
		count (missionNamespace getVariable [VAR_SS_INTRO_VIDEOS_PLAYED, []]) == count (missionNamespace getVariable [VAR_SS_INTRO_VIDEOS, []])
		||
		{missionNamespace getvariable ["BIS_fnc_playVideo_skipVideo_campaign", false]}
		||
		{!(missionNamespace getVariable [VAR_SS_SAW_INTRO, false])}
	};

	// Log
	if (DEBUG_SHOW_LOGS) then
	{
		"Loadout started because no videos are playing" call BIS_fnc_log;
	};

	// Set cinematic mode
	[false] call BIS_fnc_exp_camp_setCinematicMode;

	// Store the initial transform of player
	missionNamespace setVariable [VAR_SS_INITIAL_TRANSFORM, [getPosASLVisual player, getDirVisual player]];

	// Respawn menu stuff
	uiNamespace setVariable ["BIS_RscRespawnControls_skipBlackOut", true];
	(uiNamespace getVariable ["BIS_RscRespawnControlsMap_ctrlButtonSpectate", controlNull]) ctrlEnable false;

	// Flag that we participated in loadout selection
	missionNamespace setVariable [VAR_SS_SELECTED_LOADOUT, true];

	// The current unit controlled by player
	private _body = player;

	// Force death of player, silently
	_body setVariable ["BIS_revive_disableRevive", true, true];
	_body enableSimulationGlobal false;
	_body hideObjectGlobal true;
	forceRespawn _body;
	deleteVehicle _body;

	// Handle player spawning
	missionNamespace setVariable [VAR_SS_RESPAWN, player addEventHandler ["Respawn",
	{
		// Params
		params [["_newBody", objNull, [objNull]], ["_oldBody", objNull, [objNull]]];

		// The current mission state
		private _state = [] call BIS_fnc_exp_camp_manager_getState;

		// Validate mission state
		if (_state == STATE_LOADOUT) then
		{
			// Register loadout as finished
			[player, VAR_SS_LOADOUT_PLAYERS] remoteExecCall ["BIS_fnc_exp_camp_manager_onPlayerRegistered", TARGET_SERVER];

			// Remove event handler so it doesn't keep firing
			player removeEventHandler ["Respawn", missionNamespace getVariable [VAR_SS_RESPAWN, -1]];

			// Set cinematic mode
			[true] call BIS_fnc_exp_camp_setCinematicMode;

			// The initial transform
			private _transform = missionNamespace getVariable [VAR_SS_INITIAL_TRANSFORM, [getPosASLVisual player, getDirVisual player]];

			// Move player to initial transformation, because he probably re-spawned with wrong transform
			_transform spawn
			{
				sleep 0.1;
				player setDir (_this select 1);
				player setPosASL (_this select 0);
			};

			// Reset variable
			missionNamespace setVariable [VAR_SS_RESPAWN, nil];

			// Enable revive
			player setVariable ["BIS_revive_disableRevive", false, true];

			// Respawn menu stuff
			uiNamespace setVariable ["BIS_RscRespawnControls_skipBlackOut", nil];
			(uiNamespace getVariable ["BIS_RscRespawnControlsMap_ctrlButtonSpectate", controlNull]) ctrlEnable true;

			// Log
			if (DEBUG_SHOW_LOGS) then {"Mission Manager::Client: Loadout complete" call BIS_fnc_log};
		};
	}]];

	// Log
	if (DEBUG_SHOW_LOGS) then {"Mission Manager::Client: Loadout started" call BIS_fnc_log};
};