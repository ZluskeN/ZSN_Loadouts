// Delete empty groups
_deleteEmptyGrups = [] execVM "Scripts\DeleteEmptyGroups.sqf";

// Handle respawn of players - add respawn position for the team and delete older corpse (so only one for each player can be present)
addMissionEventHandler ["EntityRespawned",
{
	private _new = _this select 0;
	private _old = _this select 1;

	if (isPlayer _new)  then
	{
		private _oldBody = _old getVariable ["BIS_oldBody", objNull];
		if (!isNull _oldBody) then
		{
			deleteVehicle _oldBody;
		};

                _new setVariable ["BIS_oldBody", _old];

		[west,_new] call BIS_fnc_addRespawnPosition;

		// Remove (now unnecessary) backpack if player is AT rifleman
		// if (typeOf _new == "B_T_Soldier_LAT_F") then {_null = _new spawn {waitUntil {count (backpackMagazines _this) == 0}; removeBackpackGlobal _this}};
	};
}];

// Add initial respawn position and remove it after a timeout
[] spawn {
	_initSpawn = [west,"respawn",localize "STR_A3_EscapeFromTanoa_respawnVolcano"] call BIS_fnc_addRespawnPosition;
	sleep 300;
	waitUntil {sleep 5; {alive _x} count allPlayers > 0};
	_initSpawn call BIS_fnc_removeRespawnPosition;
};

// Start special events if enabled
[] spawn {
	sleep 5;

	if (missionNamespace getVariable "BIS_specialEvents" == 1) then
	{
                      _events = [10,15] spawn BIS_fnc_EfT_specialEvents;
	};
};

// Limit equipment of already existing enemy units
[] spawn {
	if (missionNamespace getVariable "BIS_enemyEquipment" == 1) then
	{
		{if ((side group _x == East) or (side group _x == Resistance)) then {_null = _x execVM "Scripts\LimitEquipment.sqf"}} forEach allUnits;
	};
};

// Escape task for players
[BIS_grpMain, "objEscape", [format [localize "STR_A3_EscapeFromTanoa_tskEscapeDesc", "<br/>"], localize "STR_A3_EscapeFromTanoa_tskEscapeTitle", "<br/>"], objNull, TRUE] call BIS_fnc_taskCreate;

// Initial music
[] spawn {
	sleep 15;
	"LeadTrack03a_F_EPA" remoteExec ["playMusic",west,false]; // LeadTrack02_F_EXP, LeadTrack01a_F, LeadTrack01c_F_EXP
};

// Definitions of vehicles and groups to be spawned
BIS_civilCars =
[
	"C_Offroad_01_F",
	"C_Quadbike_01_F",
	"C_SUV_01_F",
	"C_Van_01_transport_F",
	"C_Offroad_02_unarmed_F",
	"C_Truck_02_transport_F"
];

BIS_supportVehicles =
[
	"C_Van_01_fuel_F",
	"C_Truck_02_fuel_F",
	"C_Offroad_01_repair_F"
];

BIS_SyndikatPatrols =
[
	/*"BanditCombatGroup",
	"BanditFireTeam",
	"ParaCombatGroup",
	"ParaFireTeam"*/
	"EfT_I_Team01",
	"EfT_I_Team02",
	"EfT_I_Team03",
	"EfT_I_Team04",
	"EfT_I_Team05",
	"EfT_I_Squad01",
	"EfT_I_Squad02"
];

BIS_CSATPatrols =
[
	/*"O_T_InfTeam",
	"O_T_InfSquad"*/
	"EfT_O_Team01",
	"EfT_O_Team02"
];

// Spawning enemy units & vehicles, empty transport and support vehicles
{
	// Syndikat patrols
	if (triggerText _x == "GEN_infantry") then
	{
		_x spawn
		{
			_basePos = position _this;
			_rad = (triggerArea _this) select 0;
			deleteVehicle _this;

			waitUntil {sleep 5; ({(_x distance2d _basePos) < (1000)} count allPlayers > 0)};

			if ({side _x == resistance} count allGroups > 120) exitWith {"Too many RESISTANCE groups at the same time!" call BIS_fnc_log};

			_newGrp = grpNull;
			_newGrp = [_basePos, Resistance, missionConfigFile >> "CfgGroups" >> "Indep" >> "IND_C_F" >> "Infantry" >> (selectRandom BIS_SyndikatPatrols), [], [], [0.2, 0.3]] call BIS_fnc_spawnGroup;

			// Enable Dynamic simulation
			_newGrp enableDynamicSimulation true;

			// Limit unit equipment if set by server
			if (missionNamespace getVariable "BIS_enemyEquipment" == 1) then {{_null = _x execVM "Scripts\LimitEquipment.sqf"} forEach units _newGrp};

			// Limit aiming accuracy
			{_x setSkill ["AimingAccuracy",0.15]} forEach (units _newGrp);

			if ((random 1) > 0.65)
			then
			{
				/*_wp = _newGrp addWaypoint [position leader _newGrp, 0];
				_wp setWaypointType "GUARD";*/
				_stalk = [_newGrp,group (allPlayers select 0)] spawn BIS_fnc_stalk;
			} else
			{
				{
					_wp = _newGrp addWaypoint [_basePos, _rad];
					_wp setWaypointType "MOVE";
					_wp setWaypointSpeed "LIMITED";
					_wp setWaypointBehaviour "SAFE";
				} forEach [1, 2, 3, 4, 5];
				_wp = _newGrp addWaypoint [waypointPosition [_newGrp, 1], 0];
				_wp setWaypointType "CYCLE";
			};
		};
	};

	// CSAT patrols
	if (triggerText _x == "CSAT_infantry") then
	{
		_x spawn
		{
			_basePos = position _this;
			_rad = (triggerArea _this) select 0;
			deleteVehicle _this;

			waitUntil {sleep 5; ({(_x distance2d _basePos) < (1000)} count allPlayers > 0)};

			if ({side _x == east} count allGroups > 120) exitWith {"Too many EAST groups at the same time!" call BIS_fnc_log};

			_newGrp = grpNull;
			_newGrp = [_basePos, EAST, missionConfigFile >> "CfgGroups" >> "East" >> "OPF_T_F" >> "Infantry" >> (selectRandom BIS_CSATPatrols), [], [], [0.3, 0.4]] call BIS_fnc_spawnGroup;

			// Enable Dynamic simulation
			_newGrp enableDynamicSimulation true;

			// Limit unit equipment if set by server
			if (missionNamespace getVariable "BIS_enemyEquipment" == 1) then {{_null = _x execVM "Scripts\LimitEquipment.sqf"} forEach units _newGrp};

			// Limit aiming accuracy
			{_x setSkill ["AimingAccuracy",0.20]} forEach (units _newGrp);

			if ((random 1) > 0.65)
			then
			{
				/*_wp = _newGrp addWaypoint [position leader _newGrp, 0];
				_wp setWaypointType "GUARD";*/
				_stalk = [_newGrp,group (allPlayers select 0)] spawn BIS_fnc_stalk;
			} else
			{
				{
					_wp = _newGrp addWaypoint [_basePos, _rad];
					_wp setWaypointType "MOVE";
					_wp setWaypointSpeed "LIMITED";
					_wp setWaypointBehaviour "SAFE";
				} forEach [1, 2, 3, 4, 5];
				_wp = _newGrp addWaypoint [waypointPosition [_newGrp, 1], 0];
				_wp setWaypointType "CYCLE";
			};
		};
	};

	// CSAT patrolling vehicles
	if (triggerText _x == "GEN_patrolVeh") then {
		_x spawn {
			_basePos = position _this;
			_dir = (triggerArea _this) select 2;
			if (_dir < 0) then {_dir = 360 + _dir};
			_vehType = (triggerStatements _this) select 1;
			_wpPath = group ((synchronizedObjects _this) select 0);	// synchronized civilian unit is used as waypoint storage
			deleteVehicle ((synchronizedObjects _this) select 0);
			deleteVehicle _this;

			waitUntil {sleep 2.5; ({(_x distance _basePos) < 1250} count allPlayers > 0)};

			_vehClass = switch (_vehType) do
			{
				case "MRAP": {selectRandom ["O_T_MRAP_02_hmg_ghex_F","O_T_MRAP_02_gmg_ghex_F"]};
				case "APC": {"O_T_APC_Wheeled_02_rcws_v2_ghex_F"};
				case "IFV": {"O_T_APC_Tracked_02_cannon_ghex_F"};       // Not used, only one in each escape location
				case "AAA": {"O_T_APC_Tracked_02_AA_ghex_F"};           // Not used, only one at the International Airfield
				case "SPG": {"O_T_MBT_02_arty_ghex_F"};                 // Not used at all
				case "MBT": {"O_T_MBT_02_cannon_ghex_F"};               // Not used at all
				case "LSV": {"O_T_LSV_02_armed_ghex_F"};
				case "LSVU": {"O_T_LSV_02_unarmed_ghex_F"};
				case "UGV": {"O_T_UGV_01_rcws_ghex_F"};

				default {"O_T_LSV_02_armed_ghex_F"};
			};
			_veh = createVehicle [_vehClass, _basePos, [], 0, "NONE"];
			_veh setDir _dir;
			createVehicleCrew _veh;
			_vehCrew = crew _veh;
			_vehGroup = group (_vehCrew select 0);

			_vehGroup copyWaypoints _wpPath;
			deleteGroup _wpPath;
			{clearMagazineCargoGlobal _x; clearWeaponCargoGlobal _x; clearBackpackCargoGlobal _x; clearItemCargoGlobal _x} forEach [_veh];
			_veh addItemCargoGlobal ["FirstAidKit",2];
			_veh setFuel (0.35 + random 0.25);
			_veh setVehicleAmmo (0.4 + random 0.4);

			// If the vehicle is unarmed LSV, create crew for FFV positions and disable getting out in combat
			if (_vehType == "LSVU") then {
				_veh setUnloadInCombat [false,false];

				_unit01 = _vehGroup createUnit ["O_T_Soldier_AR_F", [0,0,0], [], 0, "CAN_COLLIDE"];
				_unit01 moveInCargo _veh;
				[_unit01] orderGetIn true;

				_unit02 = _vehGroup createUnit [selectRandom ["O_T_Soldier_GL_F","O_T_Soldier_F"], [0,0,0], [], 0, "CAN_COLLIDE"];
				_unit02 moveInCargo _veh;
				[_unit02] orderGetIn true;

				_unit03 = _vehGroup createUnit ["O_T_Soldier_F", [0,0,0], [], 0, "CAN_COLLIDE"];
				_unit03 moveInCargo _veh;
				[_unit03] orderGetIn true;

                                _vehCrew = crew _veh;
			};

			// Handle immobilization
			if (missionNamespace getVariable "BIS_crewInImmobile" == 1) then
			{
				_veh allowCrewInImmobile true;
			};

			// Chance to create a second vehicle of the same type - only for armed LSV and UGV
			if ((_vehType in ["UGV","LSV"]) and {random 100 < 35}) then {

				_veh02 = createVehicle [_vehClass, [(_basePos select 0) - 7, (_basePos select 1) - 7, 0], [], 0, "NONE"];
				_veh02 setDir _dir;
				createVehicleCrew _veh02;
				_veh02Crew = crew _veh02;
				_veh02Crew joinSilent _vehGroup;

				{clearMagazineCargoGlobal _x; clearWeaponCargoGlobal _x; clearBackpackCargoGlobal _x; clearItemCargoGlobal _x} forEach [_veh02];
				_veh02 addItemCargoGlobal ["FirstAidKit",2];
				_veh02 setFuel (0.35 + random 0.25);
				_veh02 setVehicleAmmo (0.4 + random 0.4);

				// Handle immobilization
				if (missionNamespace getVariable "BIS_crewInImmobile" == 1) then
				{
					_veh02 allowCrewInImmobile true;
				};

			};

			// Limit unit equipment if set by server
			if ((missionNamespace getVariable "BIS_enemyEquipment" == 1) and {_vehType != "UGV"}) then {{_null = _x execVM "Scripts\LimitEquipment.sqf"} forEach (units _vehGroup)};

			// Limit aiming accuracy
			{_x setSkill ["AimingAccuracy",0.1]} forEach (units _vehGroup);

			// Enable Dynamic simulation
			_vehGroup enableDynamicSimulation true;

		};
	};

	// Civilian vehicles
	if (triggerText _x == "GEN_civilCar") then
	{
		_x spawn
		{
			_basePos = position _this;
			_dir = (triggerArea _this) select 2;
			if (_dir < 0) then {_dir = 360 + _dir};

			deleteVehicle _this;

			waitUntil {sleep 5; ({(_x distance _basePos) < 1000} count allPlayers > 0)};

			_veh = (selectRandom BIS_civilCars) createVehicle _basePos;
			_veh setFuel (0.35 + (random 0.25));
			_veh setDir _dir;
			{clearMagazineCargoGlobal _x; clearWeaponCargoGlobal _x; clearBackpackCargoGlobal _x; clearItemCargoGlobal _x} forEach [_veh];
			_veh addItemCargo ["FirstAidKit",1];
			_veh enableDynamicSimulation true;

		};
	};
} forEach (allMissionObjects "EmptyDetector");

// Check if the players are escaping
BIS_Escaped = false;
publicVariable "BIS_Escaped";

[] spawn
{
	while {!(BIS_Escaped)} do
	{
		sleep 5;
		_awayList = [];
		{_awayList = _awayList + list _x} forEach [BIS_trgTanoa_01,BIS_trgTanoa_02];

		_livePlayers = [];
		{if (alive _x) then {_livePlayers pushBackUnique _x}} forEach allPlayers;
		{if (((!((vehicle _x) in _awayList)) and ((vehicle _x isKindOf "Ship") or (vehicle _x isKindOf "Air"))) and (count _livePlayers > 0))} forEach (_livePlayers) then

		// if (({!((vehicle _x) in _awayList) and ((vehicle _x isKindOf "Ship") or (vehicle _x isKindOf "Air"))} count units BIS_grpMain == _livePlayers) and (_livePlayers > 0)) then
		{
			["objEscape", "Succeeded"] remoteExec ["BIS_fnc_taskSetState",west,true];
			["end1"] remoteExec ["BIS_fnc_endMission",west,true];
			BIS_Escaped = true;
			publicVariable "BIS_Escaped";
		};
	};
};

// Mission fail if everyone is dead
[] spawn
{
	sleep 300;
	waitUntil {sleep 5; {alive _x} count (units BIS_grpMain) > 0};
	waitUntil {sleep 5; {alive _x} count (units BIS_grpMain) == 0};
	["objEscape", "Failed"] remoteExec ["BIS_fnc_taskSetState",west,true];
	["endLoser", false] remoteExec ["BIS_fnc_endMission",west,true];
};

// Music when somebody gets into one of the escape vehicles
[] spawn
{
	sleep 5;
	waitUntil {sleep 5; {(vehicle _x isKindOf "Ship") or (vehicle _x isKindOf "Air")} count units BIS_grpMain > 0};
	5 fadeMusic 0.75;
	"LeadTrack04_F_EXP" remoteExec ["playMusic",west,false];
};
