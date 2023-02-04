// Triggered every time a side's middle game objective changes state. Is triggered only on the server.
[missionNamespace, "EndGame_OnObjectiveStateChanged",
{
	private ["_objective", "_side", "_newStateFor"];
	_objective 		= [_this, 0, objNull, [objNull]] call BIS_fnc_param;
	_side			= [_this, 1, sideUnknown, [sideUnknown]] call BIS_fnc_param;
	_newStateFor		= [_this, 2, "", [""]] call BIS_fnc_param;

	if (_newStateFor == "Succeed") then
	{
		_addEquipment = execFSM "AddEquipment.fsm";
	};
}] call BIS_fnc_addScriptedEventHandler;

// Add flashlight for AI in case mission is played at night
	{If ((side _x == Resistance) and (alive _x)) Then {_x addPrimaryWeaponItem "acc_flashlight"}} forEach (allUnits);

// Default loadouts
[west,"B_Rifleman"] call bis_fnc_addrespawninventory;
[west,["B_Grenadier",4]] call bis_fnc_addrespawninventory;
[west,["B_Autorifleman",4]] call bis_fnc_addrespawninventory;
[west,["B_Engineer",4]] call bis_fnc_addrespawninventory;
[west,["B_CombatLifesaver",4]] call bis_fnc_addrespawninventory;

[east,"O_Rifleman"] call bis_fnc_addrespawninventory;
[east,["O_Grenadier",4]] call bis_fnc_addrespawninventory;
[east,["O_Autorifleman",4]] call bis_fnc_addrespawninventory;
[east,["O_Engineer",4]] call bis_fnc_addrespawninventory;
[east,["O_CombatLifesaver",4]] call bis_fnc_addrespawninventory;

// Variables for unlocking new loadouts
BIS_west01_reward = false;
BIS_west02_reward = false;
BIS_west03_reward = false;
BIS_west04_reward = false;
BIS_east01_reward = false;
BIS_east02_reward = false;
BIS_east03_reward = false;
BIS_east04_reward = false;

// Helicopters
{clearMagazineCargoGlobal _x; clearWeaponcargoGlobal _x; clearBackpackCargoGlobal _x; clearItemCargoGlobal _x} forEach
	[
		BIS_Heli_Civil_01,
		BIS_Heli_Civil_02,
		BIS_Heli_Blufor,
		BIS_Heli_Opfor
	];

{_x addBackpackCargoGlobal ["B_Parachute",8]} forEach
	[
		BIS_Heli_Civil_01,
		BIS_Heli_Civil_02,
		BIS_Heli_Blufor,
		BIS_Heli_Opfor
	];

// Setting slingload for support helicopters
BIS_Huron setSlingLoad BIS_BLUFOR_LSV_01;
BIS_Taru setSlingLoad BIS_OPFOR_LSV_01;

// Hide helicopters and their cargo
{_x hideObjectGlobal true} forEach
	[
		BIS_Huron,
		BIS_BLUFOR_LSV_01,
		BIS_Taru,
		BIS_OPFOR_LSV_01
	];

// Boats
BIS_ships = allMissionObjects "ship";
{_x addItemCargoGlobal ["V_RebreatherIA",2]} forEach BIS_ships;

{clearMagazineCargoGlobal _x; clearWeaponcargoGlobal _x; clearBackpackCargoGlobal _x; clearItemCargoGlobal _x} forEach
	[
		BIS_B_Speedboat,
		BIS_O_Speedboat,
		BIS_GUE_Speedboat01,
		BIS_GUE_Speedboat02
	];

BIS_B_Speedboat addItemCargoGlobal ["V_RebreatherB",4];
BIS_O_Speedboat addItemCargoGlobal ["V_RebreatherIR",4];

{_x addItemCargoGlobal ["V_RebreatherIA",4]} forEach
	[
		BIS_GUE_Speedboat01,
		BIS_GUE_Speedboat02
	];
/*
// Disable simulation on all objects
{
	if (isNil { _x getVariable "BIS_hvt_keepSimulationEnabled" }) then
	{
		if (isMultiplayer) then
		{
			_x enableSimulationGlobal false;
		}
		else
		{
			_x enableSimulation false;
		};

		// ["Simulation Disabled: %1", _x] call BIS_fnc_logFormat;
	};
} forEach (allMissionObjects "ThingX");
*/