// -------------------
// Variables
// -------------------

if (isNil "BIS_supplies") then {
	BIS_supplies = [BIS_supply1, BIS_supply2, BIS_supply4, BIS_supply5, BIS_supply6, BIS_supply7, BIS_supply8, BIS_supply9];
};

BIS_CLEARING_DISTANCE = 7;
BIS_suppliesDestroyed = false;
BIS_allSuppliesDestroyed = false;
MINIMUM_SUPPLIES_DESTROYED = 3;
SUPPLY_COUNT = 4;
BIS_explosivesHint = false;

BIS_taskTitle = [
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy1_Title",
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy2_Title",
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy3_Title",
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy4_Title"
];

BIS_taskDescription = [
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy1_Description",
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy2_Description",
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy3_Description",
	localize "STR_A3_EXP_m03_Tasks_tsk_destroy4_Description"
];

BIS_taskIndex = 0;

// -------------------
// Functions
// -------------------

BIS_fnc_checkExplosivesTask = {
	_supply = _this select 0;
	_tsk = str _supply;
	debugLog str _supply;
	waitUntil {_supply getVariable ["found",false]};
	if (!BIS_explosivesHint) then {
		BIS_explosivesHint = true;
		publicVariable "BIS_explosivesHint";
		[] spawn {
			sleep 2;
			[["Weapons", "IEDs"], nil, nil, nil, "", nil, TRUE] remoteExec ["BIS_fnc_advHint",0];
		};
	};

	//create false task with notification
	//["TaskCreatedIcon",[["destroy"] call bis_fnc_taskTypeIcon, localize "STR_A3_EXP_m03_Notifications_discovery_Description"]] call bis_fnc_showNotification;
	["TaskCreatedIcon",[["destroy"] call bis_fnc_taskTypeIcon, localize "STR_A3_EXP_m03_Notifications_discovery_Description"]] remoteExec ["bis_fnc_showNotification",0];
	[true,[str _supply],[BIS_taskDescription select BIS_taskIndex,BIS_taskTitle select BIS_taskIndex,""], _supply,"Created",nil,false,"destroy",true] call BIS_fnc_taskCreate;
	BIS_taskIndex = BIS_taskIndex + 1;

	waitUntil {_supply getVariable ["destroyed",false]};
	[_tsk,"SUCCEEDED",false] call BIS_fnc_taskSetState;
};


BIS_fnc_clearAmmoBox = {
	private _box = _this select 0;
	clearWeaponCargoGlobal _box;
	clearMagazineCargoGlobal _box;
	clearItemCargoGlobal _box;
	clearBackpackCargoGlobal _box;
};

BIS_fnc_lookingAtSupply = {
	private _validTargets = ["Land_MetalBarrel_F","Box_Syndicate_WpsLaunch_F", "IG_supplyCrate_F","Land_PaperBox_closed_scripted_F","Land_PaperBox_open_full_scripted_F", "Box_Syndicate_WpsLaunch_F", "Box_Syndicate_Wps_F", "Box_Syndicate_Ammo_F","Land_PaperBox_open_empty_scripted_F","Box_GEN_Equip_F"];

	if ({_x == typeOf cursorObject} count _validTargets > 0) then {
		_nearestSupply = [getPos cursorObject, BIS_supplies] call BIS_fnc_nearestArrayObject;
		if !(_nearestSupply getVariable ["found",false]) then {
			_nearestSupply setVariable ["found",true,true];
		};
	};
};


BIS_fnc_nearestArrayObject = {
	private _pos = _this select 0;
	private _arr = _this select 1;
	private _dist = 1000000;
	private _closestObj = objNull;
	private _currentElementDistance = 0;

	{
		_currentElementDistance = getPos _x distanceSqr _pos;
		if (_currentElementDistance < _dist) then {
			_closestObj = _x;
			_dist = _currentElementDistance;
		};
	} forEach _arr;
	_closestObj
};


BIS_fnc_checkAllSupplies = {
	waitUntil {BIS_allSuppliesDestroyed};
	["tsk4", "succeeded"] call BIS_fnc_taskSetState;
};

BIS_fnc_supplyInRange = {
	private _pos = _this select 0;
	BIS_SUPPLY_RANGE = 8;

	private _supply = objNull;
	{
		if (_pos distance _x < BIS_SUPPLY_RANGE) then {
			_supply = _x;
		};
	} forEach BIS_supplies;
	_supply
};

BIS_fnc_destroyComposition = {
	private _obj = _this select 0;
	private _pos = getPos _obj;
	//private _compositionObjects = _obj nearObjects [typeOf _obj, 10];
	private _compositionObjects = _obj getVariable "composition";
	private _bomb = "Bo_Mk82";


	sleep 0.7;
	debugLog format ["Composition destroyed: %1", _obj];
	_bomb createVehicle _pos;

	//debugLog str _compositionObjects;
	sleep 1;
	{
		[_x,true] remoteExec ["hideObjectGlobal",2];
	} forEach _compositionObjects;

	//if container is nearby
	nearestObjects [player, ["Car","Tank"], 200];

	private _container = (nearestObjects [_pos, ["Cargo_base_F"], 10]) select 0;
	_ruinedContainer = "Land_Cargo20_military_ruins_F";

	if (!isNil "_container") then {
		switch (typeOf _container) do {
			case "Land_Cargo40_military_green_F": {
				_ruinedContainer = "Land_Cargo40_military_ruins_F";
			};
			case "Land_Cargo40_grey_F": {
				_ruinedContainer = "Land_Cargo40_china_color_V1_ruins_F";
			};
			case "Land_Cargo20_military_green_F": {
				_ruinedContainer = "Land_Cargo20_military_ruins_F";
			};
			case "Land_Cargo20_grey_F": {
				_ruinedContainer = "Land_Cargo20_china_color_V1_ruins_F";
			};
			default {_ruinedContainer = "DemoCharge_Remote_Mag"};
		};
		[_container,true] remoteExec ["hideObjectGlobal",2];
		private _ruin = createVehicle [_ruinedContainer, getPos _container, [], 0, "CAN_COLLIDE"];
		_ruin setDir (getDir _container);
		//make sure ruin is in correct position
		_ruin setPos [getPos _ruin select 0, getPos _ruin select 1,0];
	};

	if (_obj == BIS_supply1) then {
		//destroy building and ammobox nearby
		(nearestBuilding _obj) setDamage 1;
		deleteVehicle BIS_explosiveSupply;
	};

	BIS_detectedInDepot = true;
	publicVariable "BIS_detectedInDepot";

	//check if all objects were destroyed
	if (({_x getVariable ["destroyed",false]} count BIS_supplies == {_x getVariable ["rigged",false]} count BIS_supplies) && {_x getVariable ["destroyed",false]} count BIS_supplies <= 3) then {
		BIS_explosivesDetonated = true;
	};
};

// -------------------
// Execution
// -------------------


if (isServer) then {
	//set 4 randomized supplies
	while {count BIS_supplies > SUPPLY_COUNT} do {
		_suppliesToDestroy = selectRandom BIS_supplies;
		if !(_suppliesToDestroy == BIS_supply1) then {
			deleteVehicle (_suppliesToDestroy getVariable ["trg",objNull]);
			_supplyComposition = (getPos _suppliesToDestroy) nearObjects [typeOf _suppliesToDestroy, BIS_CLEARING_DISTANCE];
			{
				deleteVehicle _x;
			} forEach _supplyComposition;
			BIS_supplies = BIS_supplies - [_suppliesToDestroy];
		};
	};
	publicVariable "BIS_supplies";

	{
		_supplyComposition = [];
		if (_x == BIS_supply1) then {
			_supplyComposition = nearestObjects [getPos _x, [], 5];
		} else {
			_supplyComposition = (getPos _x) nearObjects [typeOf _x, BIS_CLEARING_DISTANCE];
		};
		_x setVariable ["composition", _supplyComposition, true];
	} forEach BIS_supplies;

	//Remove equipment from supplies
	{
		if (!(_x == BIS_supply1) && !(_x == BIS_supply2)) then {
			//remove all equipment from supply boxes nearby
			{
				//[_x] call BIS_fnc_clearAmmoBox;
			} forEach (_x getVariable ["composition",[]]);
		};
	} forEach BIS_supplies;

	//check if supplies were destroyed
	[] spawn {
		while {!BIS_allSuppliesDestroyed} do {
			sleep 0.5;
			_destroyedSupplies = {_x getVariable ["destroyed",false]} count BIS_supplies;

			if (_destroyedSupplies >= MINIMUM_SUPPLIES_DESTROYED && !BIS_suppliesDestroyed) then {
				BIS_suppliesDestroyed = true;
				publicVariable "BIS_suppliesDestroyed";
				debugLog "Basic supplies destroyed.";
			};
			if (_destroyedSupplies == count BIS_supplies) then {
				BIS_allSuppliesDestroyed = true;
				publicVariable "BIS_allSuppliesDestroyed";
				debugLog "All supplies destroyed.";
			};
		};
	};

	//check if task was discovered
	{
		[_x] spawn BIS_fnc_checkExplosivesTask;
	} forEach BIS_supplies;

	//check damage
	[] spawn {
		while {!BIS_allSuppliesDestroyed} do {
			{
				sleep 0.2;
				if !(_x getVariable ["destroyed", false]) then {
					if ({damage _x == 1} count (_x getVariable "composition") > 0) then {
						//destroy composition
						debugLog "Blowing supplies up";
						[_x] call BIS_fnc_destroyComposition;
						_x setVariable ["destroyed", true, true];
					};
				};
			} forEach BIS_supplies;
		};
	};
	sleep 1;
	publicVariable "BIS_supplies";
};


