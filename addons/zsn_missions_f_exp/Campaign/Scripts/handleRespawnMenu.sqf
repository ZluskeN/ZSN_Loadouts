#include "\A3\Missions_F_Exp\Lobby\headers\ui_campaignLobbyDefines.inc"

"SPECTATOR_UNAVAILABLE" cutFadeOut 0;

_maxRespawnTickets = ([getMissionConfigValue "maxRespawnTickets"] param [0, 3, [0]]) max 1;

// detect whether or not Deploy button should be shown
private _showDeployButton = isNil {missionNamespace getVariable "BIS_handleRespawnMenu_showDeployButton"};
disableSerialization;

call
{
	#define GET_READY_TIME_TIMEOUT 120
	#define GET_READY_TIME_RED 10
	#define GET_READY_TIME_ORANGE 30
	#define GET_READY_TIME_YELLOW 60

	private _introVideoDuration = 0;
	
	#include "handleRespawnMenuSpectator.sqf"
	#include "handleRespawnMenuExtras.sqf"
	#include "handleRespawnMenuVideo.sqf"

	private _deployButtonTextLocalized = localize "STR_A3_respawn_Deploy"; 
	private _deployCountdownTextLocalized = "<t align='right' color='#a3ffffff'>" + localize "STR_A3_respawn_AutoDeployIn" + "</t>";
	private _waitForTeammatesTextLocalized = "<t size='0.6'>&#160;<br/></t><t align='center' font='" + xGUI_FONT_NORMAL + "'>" + localize "STR_A3_respawn_Waiting" + "</t>";

	// spawn if position available macro
	#define VERIFY_POS_SPAWN \
		if !( \
			player call (missionNamespace getVariable "BIS_fnc_getRespawnPositions") isEqualTo [] \
			&& \
			{side group player call (missionNamespace getVariable "BIS_fnc_getRespawnMarkers") isEqualTo []} \
		) \
		exitWith \
		{ \
			{terminate _x} forEach (uiNamespace getVariable "BIS_handleRespawnMenu_spawnHandles"); \
			(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbSetCurSel 0; \
			["close"] spawn (uiNamespace getVariable "BIS_fnc_showRespawnMenuInventoryDetails"); \
			setPlayerRespawnTime 0; \
		};

	// 1st spawn/deploy macro
	#define DEPLOY_SPAWN \
		{terminate _x} forEach (uiNamespace getVariable "BIS_handleRespawnMenu_spawnHandles"); \
		player setVariable ["IsReadyToDeploy", nil, true]; \
		(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbSetCurSel 0; \
		["close"] spawn (uiNamespace getVariable "BIS_fnc_showRespawnMenuInventoryDetails"); \
		setPlayerRespawnTime 0;
		

	// collect user selections macro
	#define GET_USER_SELECTIONS \
		uiNamespace setVariable ["BIS_RscRespawnControls_selected", [ \
			lbCurSel (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlLocList"), \
			lbCurSel (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlRoleList"), \
			lbCurSel (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlComboLoadout") \
		]];
		
	private _fnc_toggleCtrl =
	{
		params ["_ctrl", "_toggle"];
		_ctrl ctrlEnable _toggle;
		_ctrl ctrlShow _toggle;
	};

	// set state of the respawn button
	
	_buttonBG = [CAMPAIGN_LOBBY_COLOR_GREEN + ALPHA_50] call (missionNamespace getVariable "BIS_fnc_HEXTORGB");
	// new button BG, similar to lobby colour
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlSetBackgroundColor _buttonBG;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlSetFont xGUI_FONT_NORMAL;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlSetFade 0;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlCommit 0;

	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlWarning") ctrlSetPosition ctrlPosition (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton");
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlWarning") ctrlCommit 0;

	if (_showDeployButton) then 
	{
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlSetText _deployButtonTextLocalized;
		[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton", true] call _fnc_toggleCtrl;
		findDisplay 12 displayCtrl 112 ctrlSetText getMissionConfigValue ["briefingName", briefingName]; // force correct mission name
		
	};

	// hide spectator, but only for deployment
	[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlButtonSpectate", !_showDeployButton] call _fnc_toggleCtrl;
	// disable autorespawn functionality
	[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlAutorespawn", false] call _fnc_toggleCtrl;


	// is respawn 
	if (!_showDeployButton) exitWith 
	{		
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlSetFade 0;
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlCommit 0;
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlSetPosition (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter_ctrlPosition");
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlSetFade 0;
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlCommit 0;
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlTicketsText") ctrlSetStructuredText (parseText localize "STR_A3_RscRespawnControls_TicketsText");
		[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlTicketsText", true] call _fnc_toggleCtrl;
		[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlTickets", true] call _fnc_toggleCtrl;
		
		// continue with default functionality
		with uiNamespace do 
		{
			[_maxRespawnTickets, toArray localize "STR_A3_RscRespawnControls_Respawn" apply {toString [_x]} joinString " "] spawn (missionNamespace getVariable "BIS_fnc_showRespawnMenuHeader");
			[] spawn (missionNamespace getVariable "BIS_fnc_showRespawnMenuPosition");
			[] spawn (missionNamespace getVariable "BIS_fnc_showRespawnMenuInventory");
			["close"] spawn (missionNamespace getVariable "BIS_fnc_showRespawnMenuInventoryDetails")
		};

		// override
		true
	};

	// broadcast mission pseudo start server time (on first come first served basis)
	missionNamespace setVariable [
		"BIS_handleRespawnMenu_missionServerTime", 
		missionNamespace getVariable [
			"BIS_handleRespawnMenu_missionServerTime", 
			serverTime
		], 
		isNil {missionNamespace getVariable "BIS_handleRespawnMenu_missionServerTime"}
	];

	// set correct countdown time
	setPlayerRespawnTime ((GET_READY_TIME_TIMEOUT + _introVideoDuration + 1) - serverTime + (missionNamespace getVariable "BIS_handleRespawnMenu_missionServerTime"));

	// show countdown to deployment/respawn
	missionNamespace setVariable ["BIS_handleRespawnMenu_playerRespawnTime", playerRespawnTime];
	addMissionEventHandler ["EachFrame",
	{
		// run only every second exactly
		if ((missionNamespace getVariable "BIS_handleRespawnMenu_playerRespawnTime") isEqualTo playerRespawnTime) exitWith {};
		missionNamespace setVariable ["BIS_handleRespawnMenu_playerRespawnTime", playerRespawnTime];

		_playerRespawnTimeShown = playerRespawnTime - 1;
		_minutes = floor (_playerRespawnTimeShown / 60);
		_seconds = _playerRespawnTimeShown % 60;
		_time = format ["%1%2:%3%4", ["", 0] select (_minutes < 10), _minutes, ["", 0] select (_seconds < 10), _seconds];

		_allTeammatesPlayers = units group player select {isPlayer _x};
		_total = count _allTeammatesPlayers;
		_alive = {alive _x} count _allTeammatesPlayers;

		_showDeployButton = isNil {missionNamespace getVariable "BIS_handleRespawnMenu_showDeployButton"};

		if (_playerRespawnTimeShown <= GET_READY_TIME_RED && _playerRespawnTimeShown > 0) then {playSound ["ReadoutClick", true]};
		
		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlTickets") ctrlSetStructuredText parseText format ["<t align='right'%2>%1</t>", _time, call
		{
			if (_playerRespawnTimeShown <= GET_READY_TIME_RED) exitWith {" color='#FF0000'"}; // RED
			if (_playerRespawnTimeShown <= GET_READY_TIME_ORANGE) exitWith {" color='#FF8000'"}; // ORANGE
			if (_playerRespawnTimeShown <= GET_READY_TIME_YELLOW) exitWith {" color='#FFFF00'"}; // YELLOW
			""
		}];

		(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlTeam") ctrlSetStructuredText parseText format ["<t>%1/%2</t>", _alive, _total];

		if (_showDeployButton) then
		{
			// waiting for others fade effect
			if (!ctrlEnabled (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton")) then
			{
				if (ctrlCommitted (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter")) then
				{
					(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlSetFade ([0.85, 0] select (ctrlFade (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") > 0));
					(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlCommit 2.5;
				};
			};

			// make it work on hosted or dedicated
			if (isServer || leader player isEqualTo player) then
			{
				// wait for all players
				_countNotReadyPlayers = {isPlayer _x && !(_x getVariable ["IsReadyToDeploy", false])} count units group player;

				// all ready, deploy now
				if (_countNotReadyPlayers == 0) exitWith
				{
					// deploy all connected
					{
						GET_USER_SELECTIONS
						DEPLOY_SPAWN
					}
					remoteExec ["call", 0];
				};
			};
		};

		// allow time to check if spawn position is available
		if (playerRespawnTime == 1) then
		{
			GET_USER_SELECTIONS
			// is deploy/spawn
			if (_showDeployButton) exitWith
			{
				DEPLOY_SPAWN
			};
			// spawn if position available
			VERIFY_POS_SPAWN
			// restart timeout if position not available
			setPlayerRespawnTime (GET_READY_TIME_TIMEOUT + 1);
		};
		

		if (playerRespawnTime <= 0) then 
		{
			removeMissionEventHandler ["EachFrame", _thisEventHandler];
			// no more deploy screen for anyone after that
			missionNamespace setVariable ["BIS_handleRespawnMenu_showDeployButton", false, isNil {missionNamespace getVariable "BIS_handleRespawnMenu_showDeployButton"}];
		};

	}];


	uiNamespace setVariable ["BIS_handleRespawnMenu_spawnHandles", with uiNamespace do 
	{[
		[] spawn (uiNamespace getVariable "BIS_fnc_showRespawnMenuPosition"),
		[] spawn (uiNamespace getVariable "BIS_fnc_showRespawnMenuInventory"),
		["close"] spawn (uiNamespace getVariable "BIS_fnc_showRespawnMenuInventoryDetails")
	]}];

	// tweak tickets info conrol
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlTicketsText") ctrlSetStructuredText parseText _deployCountdownTextLocalized;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlTickets") ctrlSetStructuredText parseText "";

	// store orig position before changing it
	uiNamespace setVariable ["BIS_RscRespawnControlsMap_ctrlCounter_ctrlPosition", ctrlPosition (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter")];

	// tweak counter ctrl and set it the size of the respawn button
	[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounterText", false] call _fnc_toggleCtrl;
	[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter", false] call _fnc_toggleCtrl;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlSetPosition ctrlPosition (uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton");
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlSetFade 1;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlCommit 0;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlSetStructuredText parseText _waitForTeammatesTextLocalized;
	[uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter", true] call _fnc_toggleCtrl;

	// make sure all spawn options selections are available
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlLocList") ctrlEnable true;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlRoleList") ctrlEnable true;
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlComboLoadout") ctrlEnable true;

	// overwrite respawn button functionality
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlRemoveAllEventHandlers "ButtonDown",
	(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlAddEventHandler ["ButtonDown",
	{
		if (isNil {missionNamespace getVariable "BIS_handleRespawnMenu_showDeployButton"}) exitWith
		{
			player setVariable ["IsReadyToDeploy", true, true];

			// disable deploy button
			(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlEnable false;
			(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlSetText "";
			(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlSetFade 0.75;
			(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlHeaderRespawnButton") ctrlCommit 1;
			(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlSetFade 0;
			(uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlCounter") ctrlCommit 1;
			
		};
		
		GET_USER_SELECTIONS
		// spawn now if position available
		VERIFY_POS_SPAWN
	}];


	// override
	true
};