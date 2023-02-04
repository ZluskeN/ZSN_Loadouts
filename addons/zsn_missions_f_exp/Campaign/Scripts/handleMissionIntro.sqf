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

// Participated in intro
missionNamespace setVariable [VAR_SS_SAW_INTRO, true];

// The intro video
private _introVideos = missionNamespace getVariable [VAR_SS_INTRO_VIDEOS, []];
private _introVideosSubtitles = missionNamespace getVariable [VAR_SS_INTRO_VIDEOS_SUBTITLES, []];

// Well, if no video, nothing to do here
if (count _introVideos < 1) exitWith
{
	if (DEBUG_SHOW_ERRORS) then
	{
		"handleMissionIntro.sqf: No video paths provided" call BIS_fnc_error;
	};
};

// Ability to skip video
[] spawn
{
	scriptName "handleMissionintro.sqf : Skip intro";
	disableSerialization;

	private _display = displayNull;

	// Wait for valid display
	waitUntil
	{
		_display = [] call BIS_fnc_displayMission;
		!isNull _display;
	};

	// Remove eventhandler if it exists (only happens when restarting)
	if (!isNil {uiNamespace getVariable "BIS_fnc_intro_spaceEH"}) then
	{
		_display displayRemoveEventHandler ["KeyDown", uiNamespace getVariable "BIS_fnc_intro_spaceEH"];
		uiNamespace setVariable ["BIS_fnc_intro_spaceEH", nil];
	};

	// Reset variables
	missionNamespace setVariable ["BIS_fnc_intro_holdStartTime", nil];

	// Key down
	private _keyDown = _display displayAddEventHandler ["KeyDown",
	{
		// The pressed keys
		private _pressedKeys = missionNamespace getVariable ["BIS_keyHoldKeys", []];
		_pressedKeys pushBackUnique (_this select 1);
		missionNamespace setVariable ["BIS_keyHoldKeys", _pressedKeys];

		// Create text resource
		if (missionNamespace getVariable ["BIS_layerKeyHold", -1] <= -1) then
		{
			// If an instance of key hold script is running, terminate it now
			terminate (missionNamespace getVariable ["BIS_scriptKeyHold", scriptNull]);

			// Our unique layer id
			private _layer = "BIS_layerTitlecard" call BIS_fnc_rscLayer;

			// Create the resource
			_layer cutRsc ["RscDynamicText", "PLAIN"];

			private _formattingSting =  localize "STR_A3_ApexProtocol_notification_Skip";
			private _skipText = format [ _formattingSting, (["GUI", "BCG_RGB"] call BIS_fnc_displayColorGet) call BIS_fnc_colorRGBtoHTML, localize "STR_A3_ApexProtocol_notification_Skip0", localize "STR_A3_ApexProtocol_notification_Skip1", localize "STR_A3_ApexProtocol_notification_Skip2"];
			private _ctrlText = (uiNamespace getVariable "BIS_dynamicText") displayCtrl 9999;

			// Position the resource and set the displayed text
			_ctrlText ctrlSetPosition [0 * safeZoneW + safeZoneX, 0.8 * safeZoneH + safeZoneY, safeZoneW, safeZoneH];
			_ctrlText ctrlSetStructuredText parseText _skipText;

			// Set initial fade (invisible)
			_ctrlText ctrlSetFade 1;
			_ctrlText ctrlCommit 0;

			// Target fade (visible, after 1 second)
			_ctrlText ctrlSetFade 0;
			_ctrlText ctrlCommit 1;

			// Store layer id to remove it later
			missionNamespace setVariable ["BIS_layerKeyHold", _layer];
		};

		// Space pressed
		if (_this select 1 == 57) then
		{
			// The time at which user started pressing SPACE
			private _timeStart = missionNamespace getVariable ["BIS_fnc_intro_holdStartTime", -1];

			// Did we just started or we were already holding SPACE in previous frame
			if (_timeStart < 0) then
			{
				_timeStart = time;
				missionNamespace setVariable ["BIS_fnc_intro_holdStartTime", _timeStart];
			};

			// Did user hold SPACE for enough time
			if (time >= _timeStart + SKIP_INTRO_HOLD_MIN_TIME) then
			{
				([] call BIS_fnc_displayMission) displayRemoveEventHandler ["KeyDown", uiNamespace getVariable "BIS_fnc_intro_spaceEH"];
				uiNamepsace setVariable ["BIS_fnc_intro_spaceEH", nil];

				playSound ["click", true];

				terminate (missionNamespace getVariable [VAR_SS_INTRO_VIDEOS_SUBTITLES_SCRIPT, scriptNull]);
				missionNamespace setvariable ["BIS_fnc_playVideo_skipVideo_campaign", true];
			};
		};

		if (_this select 1 != 1) then {true};
	}];

	// Key up
	private _keyUp = _display displayAddEventHandler ["KeyUp",
	{
		// The pressed keys
		private _pressedKeys = missionNamespace getVariable ["BIS_keyHoldKeys", []];
		_pressedKeys = _pressedKeys - [_this select 1];
		missionNamespace setVariable ["BIS_keyHoldKeys", _pressedKeys];

		// Space released
		if (_this select 1 == 57) then
		{
			missionNamespace setVariable ["BIS_fnc_intro_holdStartTime", nil];
		};

		// In case we are not pressing any other key, proceed with the desteruction of the text resource
		if (count _pressedKeys <= 0) then
		{
			// Remove current thread
			terminate (missionNamespace getVariable ["BIS_scriptKeyHold", scriptNull]);

			// Handle text resource
			missionNamespace setVariable ["BIS_scriptKeyHold", [] spawn
			{
				disableSerialization;

				// Some delay before starting to fade out
				sleep 2;

				// Start to fade out
				private _ctrlText = (uiNamespace getVariable "BIS_dynamicText") displayCtrl 9999;
				if (!isNull _ctrlText) then
				{
					_ctrlText ctrlSetFade 1;
					_ctrlText ctrlCommit 1;
					waituntil {ctrlCommitted _ctrlText};
				};

				// Destroy text layer resource after fully fading out
				private _layer = missionNamespace getVariable ["BIS_layerKeyHold", -1];

				if (_layer > -1) then
				{
					_layer cutText ["", "PLAIN"];
					missionNamespace setVariable ["BIS_layerKeyHold", nil];
				};
			}];
		};

		if (_this select 1 != 1) then {true};
	}];

	uiNamespace setVariable ["BIS_fnc_intro_spaceEH", _keyDown];
	uiNamespace setVariable ["BIS_fnc_intro_spaceUpEH", _keyUp];
};

// Set cinematic mode
[true] call BIS_fnc_exp_camp_setCinematicMode;

// The video to play first
private _video = _introVideos select 0;

// Play intro video
[_video, nil, nil, "BIS_fnc_playVideo_skipVideo_campaign"] spawn BIS_fnc_playVideo;

// Subtitles for video
if (count _introVideosSubtitles > 0 && {_introVideosSubtitles select 0 != ""}) then
{
	missionNamespace setVariable [VAR_SS_INTRO_VIDEOS_SUBTITLES_SCRIPT, [] execVM (_introVideosSubtitles select 0)];
};

// Add event handler and wait for it to end
missionNamespace setVariable [VAR_SS_INTRO_VIDEO_STOPPED, [missionNamespace, "BIS_fnc_playVideo_stopped",
{
	// The path of the video which just stopped playing
	private _videoPath = _this param [0, "", [""]];

	// The videos and subtitles to play
	private _introVideos = missionNamespace getVariable [VAR_SS_INTRO_VIDEOS, []];
	private _introVideosSubtitles = missionNamespace getVariable [VAR_SS_INTRO_VIDEOS_SUBTITLES, []];

	// The path of the desired intro video
	private _desiredVideoPaths = missionNamespace getVariable [VAR_SS_INTRO_VIDEOS, []];
	private _desiredVideoPathsPlayed = missionNamespace getVariable [VAR_SS_INTRO_VIDEOS_PLAYED, []];

	// Flag video as played
	missionNamespace setVariable [VAR_SS_INTRO_VIDEOS_PLAYED, _desiredVideoPathsPlayed + [_videoPath]];

	// Update played videos list with the added one
	_desiredVideoPathsPlayed = missionNamespace getVariable [VAR_SS_INTRO_VIDEOS_PLAYED, []];

	// Validate video name and the current mission state
	if (_videoPath in _desiredVideoPaths && {count _introVideos > 0}) then
	{
		// In case there's more than one video to play
		// Register this one which stopped playing, make sure it was not skipped
		// And play the next video
		if (!(missionNamespace getvariable ["BIS_fnc_playVideo_skipVideo_campaign", false]) && {count _desiredVideoPathsPlayed < count _desiredVideoPaths}) then
		{
			// The video and subtitles to play
			private _video = _introVideos select (count _desiredVideoPathsPlayed);
			private _subtitles = if (count _introVideosSubtitles >= count _desiredVideoPathsPlayed) then {_introVideosSubtitles select (count _desiredVideoPathsPlayed)} else {""};

			// Play intro video
			[_video, nil, nil, "BIS_fnc_playVideo_skipVideo_campaign"] spawn BIS_fnc_playVideo;

			// Subtitles for video
			if (_subtitles != "") then
			{
				missionNamespace setVariable [VAR_SS_INTRO_VIDEOS_SUBTITLES_SCRIPT, [] execVM _subtitles];
			};
		}
		else
		{
			// Stop subtitles
			terminate (missionNamespace getVariable [VAR_SS_INTRO_VIDEOS_SUBTITLES_SCRIPT, scriptNull]);
			BIS_fnc_EXP_camp_playSubtitles_terminate = true;

			// Remove event handler so it doesn't keep firing
			[missionNamespace, "BIS_fnc_playVideo_stopped", missionNamespace getVariable [VAR_SS_INTRO_VIDEO_STOPPED, -1]] call BIS_fnc_removeScriptedEventHandler;

			// Notify server that we finished playing the video
			[player, VAR_SS_INTRO_PLAYERS] remoteExecCall ["BIS_fnc_exp_camp_manager_onPlayerRegistered", TARGET_SERVER];

			// Start loadout phase already
			// No need for synchronization
			if (isMultiplayer && {[] call BIS_fnc_exp_camp_manager_getState != STATE_LOADOUT}) then
			{
				[STATE_LOADOUT] call BIS_fnc_exp_camp_manager_triggerEvent;
			};

			// Disable serialization since we'll be dealing with UI related stuff which can't be serialized
			disableSerialization;

			// Unregister key down event handler
			if (!isNil {uiNamespace getVariable "BIS_fnc_intro_spaceEH"}) then
			{
				([] call BIS_fnc_displayMission) displayRemoveEventHandler ["KeyDown", uiNamespace getVariable "BIS_fnc_intro_spaceEH"];
				uiNamespace setVariable ["BIS_fnc_intro_spaceEH", nil];
			};

			// Unregister key up event handler
			if (!isNil {uiNamespace getVariable "BIS_fnc_intro_spaceUpEH"}) then
			{
				([] call BIS_fnc_displayMission) displayRemoveEventHandler ["KeyUp", uiNamespace getVariable "BIS_fnc_intro_spaceUpEH"];
				uiNamespace setVariable ["BIS_fnc_intro_spaceUpEH", nil];
			};

			// Make sure key hold thread is not running
			terminate (missionNamespace getVariable ["BIS_scriptKeyHold", scriptNull]);

			// Destroy text layer resource
			private _layer = missionNamespace getVariable ["BIS_layerKeyHold", -1];

			if (_layer > -1) then
			{
				_layer cutText ["", "PLAIN"];
				missionNamespace setVariable ["BIS_layerKeyHold", nil];
			};

			// Log
			if (DEBUG_SHOW_LOGS) then {"Mission Manager::Client: Intro complete" call BIS_fnc_log};
		};
	};
}] call BIS_fnc_addScriptedEventHandler];

// Log
if (DEBUG_SHOW_LOGS) then {"Mission Manager::Client: Intro started" call BIS_fnc_log};