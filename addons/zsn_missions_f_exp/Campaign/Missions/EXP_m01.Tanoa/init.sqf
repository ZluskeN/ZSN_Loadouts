#include "dev.hpp"
#include "\a3\missions_f_exp\campaign\commondefines.inc"

private _introVideos = [];
private _bNoCinematics = if (!(BIS_devMode)) then {false} else {true};
private _bWantsLoadoutSelection = true;
if (!(BIS_devMode)) then {missionNamespace setVariable [VAR_CINEMATICS_AFFECT_CAMERA_ONLY, true]};
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
			if (isDedicated) then {[] spawn BIS_fnc_EXP_m01_intro};
			[[], "BIS_fnc_EXP_m01_intro", ([] call BIS_fnc_listPlayers)] call BIS_fnc_MP;
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
		[player, "BIS_fnc_EXP_m01_addRespawn", false] call BIS_fnc_MP;

		// Register that the player spawned
		player setVariable ["BIS_spawned", true];
	};
};

// Ensure correct pitch for NPCs
{if (!(isNil _x)) then {(missionNamespace getVariable [_x, objNull]) setPitch 1}} forEach ["BIS_HQ", "BIS_cop1"];

// Variables that must be established everywhere
BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];
BIS_secondUnits = [BIS_second1, BIS_second2, BIS_second3, BIS_second4, BIS_second5, BIS_second6];

// Set up characters
{[_x, "NIGHT"] call BIS_fnc_EXP_camp_initCharacter} forEach BIS_supportUnits;
if (isServer) then {{_x unlinkItem "NVGogglesB_grn_F"; _x addGoggles "G_Tactical_Black"} forEach BIS_supportUnits};

// Handle electronics in first location
[BIS_case1, 3] spawn BIS_fnc_EXP_m01_destroyElectronics;
{_x spawn BIS_fnc_EXP_m01_destroyElectronics} forEach [BIS_monitor1, BIS_monitor2, BIS_radio1, BIS_lamp1];
BIS_radio1 spawn BIS_fnc_EXP_m01_radioMusic;

// Handle police officer
[] spawn BIS_fnc_EXP_m01_rescueCop;

// Handle spotting first units
[
	([BIS_first1, BIS_first2, BIS_first3, BIS_first4] + units BIS_sentryGroup),
	"BIS_firstSpotted"
] spawn BIS_fnc_EXP_m01_spotUnits;

[] spawn {
	scriptName "init.sqf: handle spotting paras";

	// Ensure players are allowed to spot paramilitaries
	waitUntil {missionNamespace getVariable ["BIS_spotParas", false]};

	// Handle spotting paramilitaries
	[
		(BIS_secondUnits + units BIS_reinfGroup),
		"BIS_parasSpotted",
		{
			if ({behaviour _x != "SAFE"} count (BIS_secondUnits + BIS_reinfUnits) == 0) then {
				// Play conversation if units aren't alerted
				//["40_Paras", "BIS_fnc_missionConversations"] call BIS_fnc_MP;
				private _conversationScript = ["40_Paras"] spawn BIS_fnc_missionConversations;
			};
		}
	] spawn BIS_fnc_EXP_m01_spotUnits;
};