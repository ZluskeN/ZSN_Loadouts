BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];
BIS_enemies = [BIS_enemyA, BIS_enemyB, BIS_enemyC];
private _actors = (BIS_supportUnits + BIS_enemies) + [BIS_miller];

// Hide map lamp
private _lampOld = [5021.44,3024.93,0.0038929] nearestObject "Land_LampShabby_F";
_lampOld hideObject true;

// Create new, fake lamp further away
private _lampNew = createVehicle ["Land_LampShabby_F", [5022.23,3026.39,0], [], 0, "NONE"];
_lampNew setDir (direction _lampOld);

// Get position
BIS_pos = position BIS_breachPos;
deleteVehicle BIS_breachPos;

// Get direction
private _building = [5023.52,3017.94,0.132711] nearestObject "Land_House_Small_02_F";
BIS_dir = (direction _building) + 90;

// Disable collisions
{
	private _unit = _x;
	{_unit disableCollisionWith _x; _x disableCollisionWith _unit} forEach ((_actors - [_unit]) + [player]);
} forEach _actors;

// Set up Support Team
{
	[_x, "NIGHT"] call BIS_fnc_EXP_camp_initCharacter;
	
	// Remove silencers
	_x removePrimaryWeaponItem (((weaponsItems _x) select 0) select 1);
	
	// Remove launchers
	private _launcher = secondaryWeapon _x;
	if (_launcher != "") then {_x removeWeapon _launcher};
} forEach BIS_supportUnits;

// Set up Miller
BIS_miller call BIS_fnc_EXP_camp_initCharacter;
BIS_miller forceAddUniform "U_B_CTRG_Soldier_2_F";
removeVest BIS_miller;
removeAllWeapons BIS_miller;
removeGoggles BIS_miller;

waitUntil {time > 0};

// Support Team
BIS_support3 switchMove "Acts_Breaching_One";
BIS_supportLead switchMove "Acts_Breaching_Two";
BIS_support1 switchMove "Acts_Breaching_Three";
BIS_support2 switchMove "Acts_Breaching_Four";

// Everyone else
BIS_enemyA switchMove "Acts_Breaching_Enemy_A";
BIS_enemyC switchMove "Acts_Breaching_Enemy_C";
BIS_miller switchMove "Acts_Breaching_Miller";

// Second enemy
// 
BIS_enemyB switchMove "AmovPknlMstpSrasWrflDnon";
BIS_enemyB setUnitPos "MIDDLE";
BIS_enemyB setBehaviour "COMBAT";

// Disable playback
{
	if (_x != BIS_enemyB) then {
		// Everyone else
		_x setPos BIS_pos;
		_x setDir BIS_dir;
	} else {
		// Second enemy
		_x setPosATL [5026.21,3013.22,0.783638];
		_x setDir 312.17;
	};
	
	_x enableSimulation false;
} forEach _actors;

// Wait for scene to be executed
waitUntil {cheat1};

// Enable playback
{_x enableSimulation true} forEach BIS_supportUnits;

sleep 8.6;

// Open door
[_building, "Door_2_rot", "Door_Handle_2_rot_1", "Door_Handle_2_rot_2"] spawn BIS_fnc_DoorOpen;

sleep 0.1;

// Show lantern
BIS_lantern hideObject false;

sleep 0.3;

// First enemy
BIS_enemyA enableSimulation true;

sleep 0.4;

// Close door
[_building, "Door_2_rot", "Door_Handle_2_rot_1", "Door_Handle_2_rot_2"] spawn BIS_fnc_DoorClose;

sleep 0.8;

// Hide lantern
BIS_lantern hideObject true;

sleep 1.6;

// Open door
[_building, "Door_2_rot", "Door_Handle_2_rot_1", "Door_Handle_2_rot_2"] spawn BIS_fnc_DoorOpen;

sleep 0.1;

// Show lantern
BIS_lantern hideObject false;

sleep 0.8;

// Fire
BIS_support3 forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"];
[] spawn {sleep 0.1; BIS_support3 forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"]};

sleep 0.1;

// Kill first enemy
BIS_enemyA allowDamage true;
{BIS_enemyA setHit [_x, 1]} forEach ["head", "body"];

sleep 1;

// Enemy fire
BIS_enemyB enableSimulation true;
BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];

[] spawn {
	private _lowered = false;
	
	// Fire remaining rounds
	for "_i" from 1 to 7 do {
		sleep 0.12;
		
		// Lower accuracy after 2nd round
		if (_i > 1 && !(_lowered)) then {_lowered = true; BIS_enemyB setSkill ["aimingAccuracy", 0.01]};
		
		// Burst that initially knocks the Support Team member down
		BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
		
		if (_i == 7) then {
			sleep 1;
			
			// Follow-up warning shots
			for "_i" from 1 to 7 do {
				sleep 0.12;
				
				if (_i == 7) then {
					// Move into correct animation at the end
					BIS_enemyB addEventHandler [
						"Fired",
						{
							[] spawn {
								sleep 1;
								
								// Move into position
								BIS_enemyB hideObject true;
								BIS_enemyB setBehaviour "CARELESS";
								BIS_enemyB setPos BIS_pos;
								BIS_enemyB setDir BIS_dir;
								
								sleep 0.5;
								
								// Set correct animation
								BIS_enemyB hideObject false;
								BIS_enemyB switchMove "Acts_Breaching_Enemy_B";
								BIS_enemyB enableSimulation false;
							};
						}
					];
				};
				
				// Fire weapon
				BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
				
				// Put a "hesitation" delay between warning shots and final burst
				if (_i == 5) then {sleep 0.5};
			};
		};
	};
};

sleep 5.2;

// Third enemy and Miller
{_x enableSimulation true} forEach [BIS_enemyC, BIS_miller];

sleep 1;

// Second enemy
BIS_enemyB enableSimulation true;

sleep 1.5;

// Swap chairs
deleteVehicle BIS_chairUp;
BIS_chairDown hideObject false;

sleep 1.65;

// Fire
BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];
[] spawn {sleep 0.1; BIS_supportLead forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"]};

sleep 0.1;

// Kill third enemy
BIS_enemyC allowDamage true;
{BIS_enemyC setHit [_x, 1]} forEach ["head", "body"];

sleep 1.3;

// Fire
BIS_support2 forceWeaponFire [primaryWeapon BIS_support2, "Manual"];
[] spawn {for "_i" from 1 to 2 do {sleep 0.1; BIS_support2 forceWeaponFire [primaryWeapon BIS_support2, "Manual"]}};

sleep 0.3;

// Fire
BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];
[] spawn {for "_i" from 1 to 7 do {sleep 0.1; BIS_supportLead forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"]}};

sleep 0.1;

// Kill second enemy
BIS_enemyB allowDamage true;
{BIS_enemyB setHit [_x, 1]} forEach ["head", "body"];