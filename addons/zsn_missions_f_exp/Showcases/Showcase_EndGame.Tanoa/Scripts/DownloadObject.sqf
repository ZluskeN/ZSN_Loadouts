/*
	Author: Nelson Duarte

	Description:
	- Downloadable object (simplified version of End Game one, specific for the showcase)

	Parameters:
		Nothing

	Returns:
		Nothing

	Events:
		BIS_event_used - Attached to missionNamespace, will fire when player finishes using an object successfully, passed parameters are [_player, _object]
*/

scriptName "DownloadObject.sqf";

#define MAX_RATE				0.5
#define MAX_DISTANCE 				5
#define MAX_CONTEXT_DISTANCE			20.0
#define MAX_PROGRESS_TIME			2.5
#define VAR_USABLE				"BIS_usable"
#define VAR_USED				"BIS_used"
#define VAR_UPLOAD				"BIS_upload"
#define EVENT_USED				"BIS_event_used"
#define TEXT_INTEL				(localize "STR_A3_EndGame_Download_Downloading")
#define TEXT_UPLOAD				(localize "STR_A3_EndGame_Download_Uploading")

// Checks whether current player can use the downloadable object
BIS_fnc_downloadObject_canUse =
{
	private _player = _this param [0, objNull, [objNull]];
	private _object = _this param [1, objNull, [objNull]];

	!isNull _object &&
	{ !isNull cursorObject } &&
	{ cursorObject == _object } &&
	{ vehicle _player == _player } &&
	{ _object distance _player <= MAX_DISTANCE };
};

// Returns nearest downloadable object in range
BIS_fnc_downloadObject_nearObject =
{
	private _pos				= positionCameraToWorld [0,0,0];
	private _nearObjects 		= nearestObjects [_pos, [], MAX_CONTEXT_DISTANCE];
	private _downloadableObject = objNull;

	if (count _nearObjects > 0) then
	{
		{
			// Make sure object:
			// - Is flagged as usable
			// - Is not being used
			// - Was not yet used
			if (_x getVariable [VAR_USABLE, false] && {!(_x getVariable [VAR_USED, false])}) exitWith
			{
				_downloadableObject = _x;
			};
		}
		forEach _nearObjects;
	};

	_downloadableObject;
};

// Main loop
while { true } do
{
	// Find a context
	private _context = [] call BIS_fnc_downloadObject_nearObject;

	// If we found a valid context we can proceed with it's evaluation
	if (!isNull _context) then
	{
		// Whether current context can be used in current state by the player
		if ([player, _context] call BIS_fnc_downloadObject_canUse) then
		{
			// Needed for out of scope usage, see BIS_fnc_keyHold call bellow
			missionNamespace setVariable ["BIS_context", _context];

			// The text to be shown when interacting, since it can be either download or upload, if requested
			private _text = if (_context getVariable [VAR_UPLOAD, false]) then { TEXT_UPLOAD } else { TEXT_INTEL };

			// Key hold sequence, returns true or false
			private _succeeded = [_text, MAX_PROGRESS_TIME, compile "[player, missionNamespace getVariable ['BIS_context', objNull]] call BIS_fnc_downloadObject_canUse;"] call BIS_fnc_keyHold;

			// Did we succeed?
			if (_succeeded) then
			{
				// Register object as used
				_context setVariable [VAR_USED, true];

				// Trigger event to any listeners
				[missionNamespace, EVENT_USED, [player, _context]] call BIS_fnc_callScriptedEventHandler;
			};

			// Reset state
			_context = objNull;
			missionNamespace setVariable ["BIS_context", objNull];
		};
	};

	sleep MAX_RATE;
};