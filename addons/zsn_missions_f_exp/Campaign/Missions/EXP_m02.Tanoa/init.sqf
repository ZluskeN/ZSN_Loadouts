#include "dev.hpp"
#include "\a3\missions_f_exp\campaign\commondefines.inc"

private _introVideosSubtitles = ["", "a3\Missions_F_Exp\Campaign\Briefings\EXP_m02_briefing.sqf"];
private _introVideos = if (!(BIS_devMode)) then {["A3\Missions_F_Exp\video\EXP_m02_vTitlecard.ogv", "A3\Missions_F_Exp\video\EXP_m02_vIN.ogv"]} else {[]};
private _bNoCinematics = false;
private _bWantsLoadoutSelection = true;
missionNamespace setVariable [VAR_CINEMATICS_AFFECT_CAMERA_ONLY, true];
#include "\a3\missions_f_exp\campaign\scripts\init.sqf"

[
	missionNamespace,
	EVENT_STARTED,
	{
		if (isServer) then {
			// Register that the mission started
			BIS_missionStarted = true;
			publicVariable "BIS_missionStarted";

			// Enable respawn
			BIS_respawnEnabled = true;

			// Execute intro
			if (isDedicated) then {[] spawn BIS_fnc_EXP_m02_intro};
			[[], "BIS_fnc_EXP_m02_intro", ([] call BIS_fnc_listPlayers)] call BIS_fnc_MP;
		};
	}
] call BIS_fnc_addScriptedEventHandler;

if (!(isDedicated) && { !(BIS_devMode) }) then {
	// Mute game sounds
	0 fadeSound 0;

	// Remove any previously stored layers
	private _layer = uiNamespace getVariable "BIS_layerBlackScreen";
	if (!(isNil "_layer")) then {uiNamespace setVariable ["BIS_layerBlackScreen", nil]};

	// Create black screen
	[] spawn {
		disableSerialization;
		scriptName "init.sqf: create black screen";

		// Create layer
		private _layer = "BIS_layerBlackScreen" call BIS_fnc_rscLayer;
		_layer cutText ["", "BLACK FADED", 10e10];

		// Store layer
		uiNamespace setVariable ["BIS_layerBlackScreen", _layer];
	};

	// Handle respawn
	[] spawn {
		scriptName "init.sqf: handle respawn";

		// Wait for mission status to synchronize
		waitUntil {!(isNil "BIS_missionStarted")};

		// Wait for layer to exist
		private "_layer";
		waitUntil {_layer = uiNamespace getVariable "BIS_layerBlackScreen"; !(isNil "_layer")};

		// Wait for respawn to appear
		waitUntil {!(isNull player) && { !(alive player) && { visibleMap } }};

		// Remove black screen
		_layer cutText ["", "BLACK IN", 5];

		// Wait for player to respawn
		waitUntil {alive player};

		if (!(BIS_missionStarted)) then {
			// Add black screen again
			_layer cutText ["", "BLACK FADED", 10e10];

			// Create camera to prevent player from messing with their view
			BIS_viewLock = "Camera" camCreate [10,10,10];
			BIS_viewLock cameraEffect ["INTERNAL", "BACK"];

			// Have it looking through player's eyes
			private _vehicle = vehicle player;
			private _pos = position _vehicle; _pos set [2, 1];
			BIS_viewLock setPos _pos;
			BIS_viewLock setDir (direction _vehicle);
		} else {
			// Fade in sounds
			1 fadeSound 1;
		};

		// Add respawn on player
		[player, "BIS_fnc_EXP_m02_addRespawn", false] call BIS_fnc_MP;

		// Register that the player spawned
		player setVariable ["BIS_spawned", true];
	};
};

// Ensure correct pitch for NPCs
{if (!(isNil _x)) then {(missionNamespace getVariable [_x, objNull]) setPitch 1}} forEach ["BIS_HQ", "BIS", "BIS_LIA"];

// Register variables everywhere
BIS_supportGroup = group BIS_supportLead;
BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];

BIS_pathTrigs = [BIS_pathTrig_1, BIS_pathTrig_2, BIS_pathTrig_3, BIS_pathTrig_4, BIS_pathTrig_5, BIS_pathTrig_6];

// Set up Support Team
{[_x, "DAY"] call BIS_fnc_EXP_camp_initCharacter} forEach BIS_supportUnits;