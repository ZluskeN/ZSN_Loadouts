/**
 * Triggered every time a side's middle game objective changes state
 * Is triggered only on the server
 */
[missionNamespace, "EndGame_OnObjectiveStateChanged",
{
	private ["_objective", "_side", "_newStateFor"];
	_objective 		= [_this, 0, objNull, [objNull]] call BIS_fnc_param;
	_side			= [_this, 1, sideUnknown, [sideUnknown]] call BIS_fnc_param;
	_newStateFor	= [_this, 2, "", [""]] call BIS_fnc_param;

	if (_newStateFor == "Succeed") then
	{
		_addEquipment = execFSM "AddEquipment.fsm";
	};
}] call BIS_fnc_addScriptedEventHandler;

// Set delay between each intel reveal
missionNamespace setVariable ["BIS_hvt_delayBetweenObjectiveReveal", 5];

// Default loadouts
[west,"B_Rifleman"] call bis_fnc_addrespawninventory;
[east,"O_Rifleman"] call bis_fnc_addrespawninventory;

// Variables for rewards FSM
BIS_west01_reward = false;
BIS_west02_reward = false;
BIS_west03_reward = false;
BIS_west04_reward = false;
BIS_east01_reward = false;
BIS_east02_reward = false;
BIS_east03_reward = false;
BIS_east04_reward = false;

// Setting slingload for support helicopters
BIS_Huron setSlingLoad BIS_Hunter;
BIS_Taru setSlingLoad BIS_Ifrit;

//{If ((side _x == Resistance) and (alive _x)) Then {_null = _x execVM "Loadouts\Syndikat.sqf"}} forEach (allUnits);