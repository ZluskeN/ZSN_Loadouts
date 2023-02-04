disableSerialization;

// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"
// Allow respawn on group leader
if (hasInterface && {getMissionConfigValue ["enablePlayerAddRespawn", 1] == 1}) then
{
	[WEST, player] call BIS_fnc_addRespawnPosition;
};

// Exit if we have no interface
if (!hasInterface) exitWith
{
	if (DEBUG_SHOW_LOGS) then
	{
		"Machine has no interface, ignoring..." call BIS_fnc_log;
	};
};

// Enable revive
if (player getVariable ["BIS_revive_disableRevive", false]) then
{
	player setVariable ["BIS_revive_disableRevive", false, true];
};

// Set cinematic mode
[false] call BIS_fnc_exp_camp_setCinematicMode;

// Player respawn event handler, just to be sure, remove it here is still assigned
if (!isNil {missionNamespace getVariable VAR_SS_RESPAWN}) then
{
	// Remove event handler so it doesn't keep firing
	player removeEventHandler ["Respawn", missionNamespace getVariable [VAR_SS_RESPAWN, -1]];

	// Reset variable
	missionNamespace setVariable [VAR_SS_RESPAWN, nil];
};

// Start loadout selection if we missed it at mission start
if !(missionNamespace getVariable [VAR_SS_SELECTED_LOADOUT, false]) then
{
	// Respawn menu stuff
	uiNamespace setVariable ["BIS_RscRespawnControls_skipBlackOut", true];

	// Flag that we participated in loadout selection
	missionNamespace setVariable [VAR_SS_SELECTED_LOADOUT, true];

	// Force death of player, silently if in multiplayer
	if (isMultiplayer) then
	{
		// The current unit controlled by player
		private _body = player;

		// Kill player silently
		_body setVariable ["BIS_revive_disableRevive", true, true];
		[_body] joinSilent grpNull;
		[_body, false] remoteExec ["enableSimulationGlobal"];
		[_body, true] remoteExec ["hideObjectGlobal"];
		forceRespawn _body;
		deleteVehicle _body;

		// Reset skip respawn menu blackout
		[] spawn
		{
			private _targetTime = time + 1;
			waitUntil {visibleMap || {time >= _targetTime}};
			uiNamespace setVariable ["BIS_RscRespawnControls_skipBlackOut", nil];
			player setVariable ["BIS_revive_disableRevive", false, true];
		};
	};
}
else
{
	setPlayerRespawnTime (getMissionConfigValue ["respawnDelay", 10]);
};

// Log
if (DEBUG_SHOW_LOGS) then {"Mission Manager::Client: Mission started" call BIS_fnc_log};
