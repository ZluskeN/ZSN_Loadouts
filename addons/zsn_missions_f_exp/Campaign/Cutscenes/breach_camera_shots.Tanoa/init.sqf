// SET YOUR PARAMS

// 3rd Person for all.
camera_default = false;
// First person view of ONE
one_ffp = false;
// First person view of TWO (COMANDER)
two_ffp = true;
// First person view of THREE
three_ffp = false;
//First person view of FOUR (BREACHER/DOOR MAN)
four_ffp = false;

{_x hideobject true} foreach [win_cover_1,win_cover_2,win_cover_3,win_cover_4,win_cover_5,win_cover_6];

// BIG LAMP
_light = "#lightpoint" createVehicleLocal position bis_light;
_light setLightBrightness 0.09;
_light setLightAmbient [1, 0.5, 0.1];
_light setLightColor [1,0.5, 0.1];
_light lightAttachObject [bis_light, [2,0,0]];


// DOOR lightpoint for enemy in first room
_light = "#lightpoint" createVehicleLocal [5021.77,3017.32,0.00143814];
_light setLightBrightness 0.05;
_light setLightAmbient [1, 0.5, 0.1];
_light setLightColor [1,0.5, 0.1];

// DOOR lightpoint for enemy in first room
_light = "#lightpoint" createVehicleLocal [5021.07,3018.25,0.00143814];
_light setLightBrightness 0.04;
_light setLightAmbient [1, 0.5, 0.1];
_light setLightColor [1,0.5, 0.1];

// lightpoint for enemy behind barrels
_light = "#lightpoint" createVehicleLocal [5023.91,3013.56,0.00143623];
_light setLightBrightness 0.06;
_light setLightAmbient [1, 0.5, 0.1];
_light setLightColor [1,0.5, 0.1];

// lightpoint outside lighting
_light = "#lightpoint" createVehicleLocal [5022.62,3023.02,0.00135422];
_light setLightBrightness 0.1;
_light setLightAmbient [0, 0.5, 0.9];
_light setLightColor [0,0.5, 0.9];

_light = "#lightpoint" createVehicleLocal [5020.03,3021.84,0.00143814];
_light setLightBrightness 0.06;
_light setLightAmbient [0, 0.5, 0.9];
_light setLightColor [0,0.5, 0.9];




BIS_supportUnits = [BIS_supportLead, BIS_support1, BIS_support2, BIS_support3];
BIS_enemies = [BIS_enemyA, BIS_enemyB, BIS_enemyC];
private _actors = (BIS_supportUnits + BIS_enemies) + [BIS_miller];

// Hide map lamp
bis_blood hideobject true;
bis_blood2 HIDEOBJECT TRUE;
private _lampOld = [5021.44,3024.93,0.0038929] nearestObject "Land_LampShabby_F";
{_x hideObjectglobal true} foreach (nearestTerrainObjects [[5021.44,3024.93,0.0038929] ,[],2]) ; // Hide water tank
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
	
	// Swap NVGs for sunglasses
	_x unlinkItem "NVGogglesB_grn_F";
	_x addGoggles "G_Tactical_Black";
} forEach BIS_supportUnits;

// Remove scope from Support Lead
BIS_supportLead removePrimaryWeaponItem "optic_ERCO_khk_F";

// Set up Miller
BIS_miller call BIS_fnc_EXP_camp_initCharacter;
BIS_miller forceAddUniform "U_B_CTRG_Soldier_2_F";
removeVest BIS_miller;
removeAllWeapons BIS_miller;
removeGoggles BIS_miller;

waitUntil {time > 0};

// Support Team
if (camera_default) then {
				BIS_support3 switchMove "Acts_Breaching_One";
				BIS_supportLead switchMove "Acts_Breaching_Two";
				BIS_support1 switchMove "Acts_Breaching_Three";
				BIS_support2 switchMove "Acts_Breaching_Four";
	                 };

if (one_ffp) then {
				BIS_support3 switchMove "Acts_Breaching_One_FPP";
				BIS_supportLead switchMove "Acts_Breaching_Two";
				BIS_support1 switchMove "Acts_Breaching_Three";
				BIS_support2 switchMove "Acts_Breaching_Four";
				selectplayer BIS_support3;
	          };

if (two_ffp) then {
				BIS_support3 switchMove "Acts_Breaching_One";
				BIS_supportLead switchMove "Acts_Breaching_Two_FPP";
				BIS_support1 switchMove "Acts_Breaching_Three";
				BIS_support2 switchMove "Acts_Breaching_Four";
				selectplayer BIS_supportLead;
	          };

if (three_ffp) then {
				BIS_support3 switchMove "Acts_Breaching_One";
				BIS_supportLead switchMove "Acts_Breaching_Two";
				BIS_support1 switchMove "Acts_Breaching_Three_FPP";
				BIS_support2 switchMove "Acts_Breaching_Four";
				selectplayer BIS_support1;
	          };
if (four_ffp) then {
				BIS_support3 switchMove "Acts_Breaching_One";
				BIS_supportLead switchMove "Acts_Breaching_Two";
				BIS_support1 switchMove "Acts_Breaching_Three";
				BIS_support2 switchMove "Acts_Breaching_Four_FPP";
				selectplayer BIS_support2;
	          };



// Everyone else
BIS_enemyA switchMove "Acts_Breaching_Enemy_A";
BIS_enemyC switchMove "Acts_Breaching_Enemy_C";
BIS_miller switchMove "Acts_Breaching_Miller";

// Second enemy
BIS_enemyB switchMove "Acts_Breaching_Enemy_B";

// Disable playback
{
	_x setPos BIS_pos;
	_x setDir BIS_dir;

	_x enableSimulation false;
} forEach _actors;

// Wait for scene to be executed
waitUntil {cheat1};

player allowdamage false;
sleep 0.3;
BIS_enemyA enableSimulation true;
BIS_miller enableSimulation true;
BIS_enemyB enableSimulation true;
BIS_enemyC enableSimulation true;


// Enable playback
{_x enableSimulation true} forEach BIS_supportUnits;

sleep 8.3;

// Open door
[_building, "Door_2_rot", "Door_Handle_2_rot_1", "Door_Handle_2_rot_2"] spawn BIS_fnc_DoorOpen;
sleep 0.4;

// THROW SMOKE GRENADE
[] spawn {
	//FLASHBANG ="SmokeShellOrange" createVehicle [5056.18,3018.4,2];
	//FLASHBANG ="G_40mm_SmokeOrange" createVehicle [5056.18,3018.4,2];
	FLASHBANG ="F_20mm_red" createVehicle [5056.18,3018.4,2];
	//FLASHBANG ="O_IRStrobe" createVehicle [5056.18,3018.4,2];
	flashbang enablesimulation false;
	FLASHBANG attachto [BIS_supportLead, [0,0,0], "LeftHand"];
	sleep 0.6;
	flashbang enablesimulation TRUE;
	detach FLASHBANG;
	FLASHBANG setVelocity [-2,-6.5,1];
	sleep 0.5;
	deletevehicle flashbang;
};


// First enemy
BIS_enemyA enableSimulation true;

sleep 0.4;

// Close door
[_building, "Door_2_rot", "Door_Handle_2_rot_1", "Door_Handle_2_rot_2"] spawn BIS_fnc_DoorClose;
sleep 0.2;


			// Create grenade for sound
			private _pos = [5020.01,3017.34,0];
			private _grenade = createVehicle ["Grenade", _pos, [], 0, "NONE"];
			_grenade setPos _pos;

			// Create actual explosive
			_pos set [2, 1000];
			private _explode = createVehicle ["B_19mm_HE", _pos, [], 0, "NONE"];
			_explode hideObjectGlobal true;
			_explode setPos _pos;
			_explode setVelocity [0,0,-1];

			//sleep 1;
			sleep 0.9;

			// Delete grenade, move replacement
			_pos set [2, 0];
			deleteVehicle _grenade;
			_explode setPos _pos;
sleep 0.9;
//sleep 0.8;
[] spawn {sleep 0.1; BIS_enemyA  forceWeaponFire [primaryWeapon BIS_enemyA , "FullAuto"];
	  sleep 0.185; BIS_enemyA  forceWeaponFire [primaryWeapon BIS_enemyA , "FullAuto"];
	  sleep 0.45; BIS_enemyA  forceWeaponFire [primaryWeapon BIS_enemyA , "FullAuto"];
	  sleep 0.1; BIS_enemyA  forceWeaponFire [primaryWeapon BIS_enemyA , "FullAuto"];
	  sleep 0.1; BIS_enemyA  forceWeaponFire [primaryWeapon BIS_enemyA , "FullAuto"];
	  sleep 0.1; BIS_enemyA  forceWeaponFire [primaryWeapon BIS_enemyA , "FullAuto"];
	  };

// Open door
[_building, "Door_2_rot", "Door_Handle_2_rot_1", "Door_Handle_2_rot_2"] spawn BIS_fnc_DoorOpen;
varnice_1 enablesimulation true;


sleep 1;
{_x hideobject false} foreach [win_cover_1,win_cover_2,win_cover_3,win_cover_4,win_cover_5,win_cover_6];
// Fire
BIS_support3 forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"];
[] spawn {sleep 0.1; BIS_support3 forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"];
	  sleep 0.13; BIS_support3 forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"];
	  sleep 0.11; BIS_support3 forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"]};

sleep 0.1;


varnice_1 setvelocity [1.5,-1,0.2];


// Kill first enemy
BIS_enemyA allowDamage true;
{BIS_enemyA setHit [_x, 1]} forEach ["head", "body"];

sleep 0.6;
/*
BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];
[] spawn {for "_i" from 1 to 2 do {sleep 0.1; BIS_supportLead forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"]}};
*/
sleep 0.4;

// Enemy fire
BIS_enemyB enableSimulation true;
BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];

[] spawn {
	private _lowered = false;

	// Fire remaining rounds
	for "_i" from 1 to  7 do {
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

				// Fire weapon
				BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];

				// Put a "hesitation" delay between warning shots and final burst
				if (_i == 5) then {sleep 0.5};
			};
		};
	};
};
sleep 2.3;


		bullet1 = "B_762x51_Ball" createVehicle position zidle_0;
  		bullet1 setDir 180;
  		bullet1 setVelocity [10,1,-1];


		private "_effect1";
		_effect1 = "#particlesource" createVehicleLocal position zidle_0;
		_effect1 setParticleClass "DustMan";
		_effect1 attachto [zidle_0, [-0.2,0,0.5]];
		/*
		private "_effect1a";
		_effect1a = "#particlesource" createVehicleLocal position zidle_0;
		_effect1a setParticleClass "WoodChippings1";
		_effect1a attachto [zidle_0, [-0.2,0,0.5]];
		*/






zidle_0 enablesimulation true;
zidle_0 setvelocity [-0.8,0,0];
sleep 0.3;

deleteVehicle bullet1;
deletevehicle _effect1;
//deletevehicle _effect1a;

zidle_1 enablesimulation true;
zidle_1 setvelocity [-0.5,0.8,0];



		bullet2 = "B_762x51_Ball" createVehicle position zidle_1;
  		bullet2 setDir 180;
  		bullet2 setVelocity [-5,-0.5,-1];

  		private "_effect2";
		_effect2 = "#particlesource" createVehicleLocal position zidle_1;
		_effect2 setParticleClass "DustMan";
		_effect2 attachto [zidle_1, [0,0.2,0.7]];
		/*
		private "_effect2a";
		_effect2a = "#particlesource" createVehicleLocal position zidle_1;
		_effect2a setParticleClass "WoodChippings1";
		_effect2a attachto [zidle_1, [0,0.2,0.7]];
		*/
sleep 0.5;
deletevehicle _effect2;
//deletevehicle _effect2a;
deletevehicle bullet2;

sleep 4.35;

// THROW  second SMOKE GRENADE ehm I mean FLASH GRENADE
[] spawn {
	//FLASHBANG ="SmokeShellOrange" createVehicle [5056.18,3018.4,2];
	FLASHBANG ="F_20mm_red" createVehicle [5056.18,3018.4,2];
	flashbang enablesimulation false;
	FLASHBANG attachto [BIS_supportLead, [0,0,0], "LeftHand"];
	sleep 0.12;
	flashbang enablesimulation TRUE;
	detach FLASHBANG;
	FLASHBANG setVelocity [-3,-6,-0.1];
	sleep 0.5;
	deletevehicle flashbang;
};


//sleep 7.5 +/-;

BIS_enemyB enableSimulation true;

			// Create grenade for sound
			private _pos = [5024.19,3013.23,0];
			private _grenade = createVehicle ["Grenade", _pos, [], 0, "NONE"];
			_grenade setPos _pos;

			// Create actual explosive
			_pos set [2, 1000];
			private _explode = createVehicle ["B_19mm_HE", _pos, [], 0, "NONE"];
			_explode hideObjectGlobal true;
			_explode setPos _pos;
			_explode setVelocity [0,0,-1];

			sleep 0.9;

			// Delete grenade, move replacement
			_pos set [2, 0];
			deleteVehicle _grenade;
			_explode setPos _pos;



sleep 0.1;
// Third enemy and Miller
{_x enableSimulation true} forEach [BIS_enemyB,BIS_enemyC, BIS_miller];

sleep 0.1;

// Second enemy
BIS_enemyB enableSimulation true;

sleep 0.8;

// Swap chairs
deleteVehicle BIS_chairUp;
BIS_chairDown hideObject false;

sleep 0.12;
BIS_enemyC forceWeaponFire [primaryWeapon BIS_enemyC, "FullAuto"];
[] spawn {
		sleep 0.1; BIS_enemyC forceWeaponFire [primaryWeapon BIS_enemyC, "FullAuto"];
		sleep 0.15; BIS_enemyC forceWeaponFire [primaryWeapon BIS_enemyC, "FullAuto"];
	 };

sleep 0.13;

// Fire
BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];
[] spawn {sleep 0.1; BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];};


// Kill third enemy

BIS_enemyC allowDamage true;
{BIS_enemyC setHit [_x, 1]} forEach ["head", "body"];
[] spawn {sleep 0.23;esus_1 enablesimulation true;esus_1 setvelocity [0.3,-1,0.1];};

sleep 0.8;

// Fire2
BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];
[] spawn {sleep 0.1; BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];esus_1 enablesimulation true;
esus_1 setvelocity [0.3,-1,0.5];};

// additional fire of last enemy ?
BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
[] spawn {
	sleep 0.02; BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
	sleep 0.06; BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
	sleep 0.07; BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
	};
sleep 0.15;

BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
[] spawn {sleep 0.1; BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"]};

// Kill second enemy
//BIS_enemyB allowDamage true;
//{BIS_enemyB setHit [_x, 1]} forEach ["head", "body"];

BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"];
[] spawn {for "_i" from 1 to 5 do {sleep (0.1 + random 0.03); BIS_enemyB forceWeaponFire [primaryWeapon BIS_enemyB, "FullAuto"]}};

sleep 0.1;
barrel_1 enablesimulation true;
barrel_1 setvelocity [0,1.65,0];
sleep 0.1;

// Fire
BIS_support2 forceWeaponFire [primaryWeapon BIS_support2, "FullAuto"];

sleep 0.5;
kybl_2 enablesimulation true;
kybl_2 setvelocity [-1.6,-1,0];
// SHOT INTO HEAD sleep 0.75;
sleep 0.32;
BIS_enemyB allowDamage true;
// Fire

BIS_supportLead forceWeaponFire [primaryWeapon BIS_supportLead, "FullAuto"];
[] spawn {for "_i" from 1 to 2 do {sleep 0.1; BIS_supportLead forceWeaponFire [primaryWeapon BIS_support3, "FullAuto"]}};

sleep 0.195;
//bis_blood hideobject false;	// blood from head
//{BIS_enemyB setHit [_x, 1]} forEach ["head"];

bis_blood2 hideobject false; // blood from torso
{BIS_enemyB setHit [_x, 1]} forEach ["body"];


