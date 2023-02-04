// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Register the final sequence's forced black screen to avoid overlapping the video
"BIS_fnc_EXP_m07_endingClient_layerBlackScreen" call BIS_fnc_rscLayer;

// Signal
player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		format [localize "STR_A3_exp_m07_signal", "</marker>", "<marker name = 'BIS_prawler_1'>", "</marker>", "<marker name = 'BIS_prawler_2'>", "</marker>", "<marker name = 'BIS_keystone'>"]
	]
];

// Execution
player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		localize "STR_A3_exp_m07_execution"
	]
];

// Mission
player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		format [localize "STR_A3_exp_m07_mission", "</marker>", "<marker name = 'BIS_prawler_1'>", "</marker>", "<marker name = 'BIS_prawler_2'>", "</marker>", "<marker name = 'BIS_keystone'>"]
	]
];

// Situation
player createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		format [localize "STR_A3_exp_m07_situation","</marker>", "<marker name = 'BIS_bluePerl'>","</marker>", "<marker name = 'BIS_device'>"]
	]
];

if (isMultiplayer) then {
	[] spawn {
		disableSerialization;
		scriptName "initPlayerLocal.sqf: map zoom control";
		
		// Wait for respawn menu
		waitUntil {time > 0 && { !(alive player) && { visibleMap } }};
		
		// Grab display and map
		private "_display";
		waitUntil {_display = findDisplay 12; !(isNull _display)};
		private _map = _display displayCtrl 51;
		
		// Let respawn menu center first
		sleep 0.2;
		
		// Move center
		_map ctrlMapAnimAdd [0.5, 0.09, markerPos "BIS_briefingCenter"];
		ctrlMapAnimCommit _map;
	};
};

// Event for when the mission is started
[missionNamespace, EVENT_STARTED,
{
	[] spawn
	{
		scriptName "initPlayerLocal::EVENT_STARTED";

		1 cutText ["", "BLACK FADED", 99.0];
		missionNamespace setVariable [VAR_CINEMATICS_AFFECT_CAMERA_ONLY, true];
		[true] call BIS_fnc_exp_camp_setCinematicMode;

		sleep 5;

		[
			[localize "STR_A3_exp_m07_sitrep01", 2, 2],
			[localize "STR_A3_exp_m07_sitrep02", 2, 6],
			[localize "STR_A3_exp_m07_sitrep03", 1, 9, 1]
		] spawn BIS_fnc_EXP_camp_SITREP;

		sleep 10;

		[false] call BIS_fnc_exp_camp_setCinematicMode;
		missionNamespace setVariable [VAR_CINEMATICS_AFFECT_CAMERA_ONLY, false];
		1 cutText ["", "BLACK IN", 10.0];
	};
}] call BIS_fnc_addScriptedEventHandler;

// Boss search action
private _iconIdle = "A3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_search_ca.paa";
private _iconProgress = _iconIdle;
private _condShow = "!alive BIS_boss && {isNil {BIS_bossDisarmCodesRetrieved}} && {_this distance _target <= 2.5}";
private _codeCompleted = {BIS_bossDisarmCodesRetrieved = true; publicVariable "BIS_bossDisarmCodesRetrieved";};
private _actionID = [BIS_boss, localize "STR_A3_ApexProtocol_action_Search", _iconIdle, _iconProgress, _condShow, _condShow, {}, {}, _codeCompleted, {}, [], 4.0, 1000, false, true] call bis_fnc_holdActionAdd; // TODO: Localize

// All lamp classes
private _lampClasses = ["Land_LampAirport_F","Land_LampDecor_F","Land_LampHalogen_F","Land_LampHarbour_F","Land_LampShabby_F","Land_LampSolar_F","Land_LampStadium_F","Land_LampStreet_F","Land_LampStreet_small_F","Land_PowerPoleWooden_F","Land_PowerPoleWooden_L_F","Land_PowerPoleWooden_small_F"];

// All triggers
private _triggers = [BIS_blackout_1, BIS_blackout_2, BIS_blackout_3, BIS_blackout_4, BIS_blackout_5, BIS_blackout_6];

// All objects we will touch
BIS_portLights_objects = nearestObjects [[13583.8,12081.3,-1.98473], _lampClasses, 2500.0];
private _objects = +BIS_portLights_objects;

// Make sure we actually have something to work with
if (count _objects > 0) then
{
	{
		private _trigger = _x;

		{
			private _object = _x;

			if ([_trigger, _object] call BIS_fnc_inTrigger) then
			{
				// Remove from list so this object is not checked for other triggers
				_objects = _objects - [_object];

				// Destroy light
				_object setDamage 0.95;
			};
		}
		forEach _objects;
	}
	forEach _triggers;
};

[] spawn {
	scriptName "initPlayerLocal.sqf: laptop action control";
	
	// Wait for state to synchronize
	waitUntil {!(isNil {BIS_deviceDisarmed})};
	
	if (!(BIS_deviceDisarmed)) then {
		private _icon = "a3\ui_f\data\igui\cfg\holdactions\holdaction_connect_ca.paa";
		
		private _cond = "
			missionNamespace getVariable ['BIS_disarmDevice', false]
			&&
			{
				vehicle _this == _this
				&&
				{
					_this distance _target <= 3
				}
			}
		";
		
		// Add action to laptop
		[
			BIS_laptop1,
			localize "STR_A3_EXP_m07_action_disarm",
			_icon,
			_icon,
			_cond,
			_cond,
			nil,
			nil,
			{
				// Register Device as disarmed, remove actions for others
				BIS_deviceDisarmed = true;
				BIS_disarmDevice = false;
				{publicVariable _x} forEach ["BIS_deviceDisarmed", "BIS_disarmDevice"];
			},
			nil,
			nil,
			3
		] call BIS_fnc_holdActionAdd;
	};
};