// Set identity to player
BIS_Player setIdentity "LaoChe";

// Add eventHandler to all friendly units to check friendly fire + add more for pilot (rescue task)
{if (side _x == east) then {_ff = _x addEventHandler ["Killed",{if (_this select 1 == vehicle player) then {BIS_FF = BIS_FF + 1}}]}} forEach allUnits;
{_ff = _x addEventHandler ["Killed",{if (_this select 1 == vehicle player) then {BIS_FF = BIS_FF + 5}}]} forEach [BIS_Pilot01];

// Hide markers
{_x setMarkerAlpha 0} forEach ["BIS_mrkPilots","BIS_mrkTaru01","BIS_mrkTaru02","BIS_mrkTaru03","BIS_mrkTaru04","BIS_mrkTaru05","BIS_mrkTaru06","BIS_mrkTaru07","BIS_mrkTaru08","BIS_mrkTaru09","BIS_mrkTaru10"];

// Player's loadout
BIS_Player setUnitLoadout [
	["SMG_02_F","","","",["30Rnd_9x21_Mag_SMG_02",30],[],""],
	[],
	[],
	["U_O_PilotCoveralls",[["FirstAidKit",1],["SmokeShellRed",2,1],["30Rnd_9x21_Mag_SMG_02",3,30]]],
	[],
	[],
	"H_PilotHelmetHeli_O",
	"",
	[],
	["ItemMap","","ItemRadio","ItemCompass","ItemWatch",""]
];

// Get parachutes! (quoting Oukej when piloting Orca in Escape from Tanoa playtest 01, 10 seconds before being shot down :)
if (backpack BIS_Player != "B_Parachute") then {BIS_Player addBackpack "B_Parachute"};

// Correct weapon holding animation
_null = BIS_Player spawn {time > 0; BIS_Player switchMove "amovpercmstpslowwrfldnon"};
BIS_Player selectWeapon (primaryWeapon BIS_Player);

// Callsigns
(group BIS_Player) setGroupID [localize "STR_A3_Showcase_VTOL_callsign_shark1"];
(group BIS_PHQ) setGroupID [localize "STR_A3_Showcase_VTOL_callsign_swordfish"];
(group BIS_TaruPilot) setGroupID [localize "STR_A3_Showcase_VTOL_callsign_dragonfly7"];
(group BIS_TaruPilot02) setGroupID [localize "STR_A3_Showcase_VTOL_callsign_dragonfly6"];
(group BIS_Paratrooper01) setGroupID [localize "STR_A3_Showcase_VTOL_callsign_rhino3"];
(group BIS_Pilot01) setGroupID [localize "STR_A3_Showcase_VTOL_callsign_lion5"];

// No fleeing
{_x allowFleeing 0} forEach allUnits;

// Fog (not Willy Fog though)
0 setFog [0,0,0];
3600 setFog [0,0,0];

// Lower aim precision for NATO a bit
{if ((side _x == west) and (alive _x)) then {_x setSkill ["aimingAccuracy",0.2]}} forEach (allUnits);

// Delete AA units after they fire
{if (typeOf _x == "B_T_Soldier_AA_F") then {_x addEventHandler ["Fired",{if (_this select 1 == (secondaryWeapon (_this select 0))) then {deleteVehicle (_this select 0)}}]}} forEach (allUnits);

// Set precise position for game logics
BIS_Paradrop setPos getMarkerPos "BIS_mrkParadrop";
BIS_Bala setPos getMarkerPos "BIS_mrkBala";
BIS_Hangar setPos getMarkerPos "BIS_mrkHangar";

// Mortar fire at Tanouka to have some ambient combat
_fireSupport = [BIS_Tanouka,"Sh_82mm_AMOS",350,60,[10,15]] spawn BIS_fnc_fireSupportVirtual;

// Open door on Medical pod
BIS_MedicalPod animateDoor ["Door_6_source",1,true];

// Open ramp on VTOL and wait for player to get close and close them
[] spawn {
	BIS_VTOL animateDoor ["Door_1_source",1,true];

	waitUntil {BIS_Player distance2D BIS_VTOL < 35};
	BIS_Engineer doMove getMarkerPos "BIS_mrkEngineer";

	waitUntil {BIS_Player distance2D BIS_VTOL < 20};
	BIS_VTOL animateDoor ["Door_1_source",0,false];
};

// Report remote targets from the UAV
{east reportRemoteTarget [_x,7200]} forEach [BIS_IFV03,BIS_FakeTarget01,BIS_FakeTarget02,BIS_FakeTarget03,BIS_Marid,BIS_LSV,BIS_Taru,BIS_SLTaru,BIS_Drone,BIS_Prowler];

// Destroy Tavunaka airbase and Radar base
BIS_Build = nearestTerrainObjects [BIS_TavunakaBase, ["House"], 350, false, true];
{_x setDamage (selectRandom [0.75,1])} forEach BIS_Build;

BIS_Radar = nearestTerrainObjects [getPos BIS_RadarPos, ["House"], 20, false, true];
{_x setDamage 1} forEach BIS_Radar;

// Hide shot down pilot so nobody can even try to save him before the task
BIS_Pilot01 hideObject true;

//Title card
["\a3\Missions_F_EXP\video\VTOL.ogv","STR_A3_Showcase_VTOL_Showcase_Summary_text"] spawn BIS_fnc_titlecard;
waitUntil {!isNil {BIS_fnc_titlecard_finished}};

// Start establishing shot
[
	[6958,7214.978,0],					// Target position
	localize "STR_A3_Showcase_VTOL_sitrep",     		// SITREP text          TODO: localize
	500,							// 500m altitude
	100,							// 100m radius
	0,							// 0 degrees viewing angle
	1,							// Clockwise movement
	[]
] spawn BIS_fnc_establishingShot;
