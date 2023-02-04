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

// Set cinematic mode
[true] call BIS_fnc_exp_camp_setCinematicMode;

// Disable revive
player setVariable ["BIS_revive_disableRevive", true, true];

// We add a PreloadFinished event which detects when he finishes first load
missionNamespace setVariable [VAR_SS_PRELOAD_FINISHED, addMissionEventHandler ["PreloadFinished",
{
	// Remove event, so it doesn't keep triggering
	removeMissionEventHandler ["PreloadFinished", missionNamespace getVariable [VAR_SS_PRELOAD_FINISHED, 0]];

	// Re-enable revive
	player setVariable ["BIS_revive_disableRevive", false, true];

	// The current mission state
	private _state = [] call BIS_fnc_exp_camp_manager_getState;

	// Log
	if (DEBUG_SHOW_LOGS) then {["Mission Manager::Client: Waiting finishing and moving to state %1", _state] call BIS_fnc_logFormat};

	switch (_state) do
	{
		// From here we tell the server that we preloaded
		case STATE_WAITING :
		{
			[player, VAR_SS_PRELOAD_PLAYERS] remoteExecCall ["BIS_fnc_exp_camp_manager_onPlayerRegistered", TARGET_SERVER];
		};

		// If joining during intro
		case STATE_INTRO :
		{
			[STATE_INTRO] call BIS_fnc_exp_camp_manager_triggerEvent;
		};

		// If joining during loadout state we allow player to enter it
		case STATE_LOADOUT :
		{
			[STATE_LOADOUT] call BIS_fnc_exp_camp_manager_triggerEvent;
		};

		// If mission already started then there is not much to do other then firing the corresponding event
		case STATE_STARTED :
		{
			[STATE_STARTED] call BIS_fnc_exp_camp_manager_triggerEvent;
		};
	};

	// Log
	if (DEBUG_SHOW_LOGS) then {"Mission Manager::Client: Waiting complete" call BIS_fnc_log};
}]];

// Log
if (DEBUG_SHOW_LOGS) then {"Mission Manager::Client: Waiting started" call BIS_fnc_log};