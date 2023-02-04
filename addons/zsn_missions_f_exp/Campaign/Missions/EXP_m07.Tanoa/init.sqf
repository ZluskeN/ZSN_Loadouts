// Properties

_introVideosSubtitles = ["", "a3\Missions_F_Exp\Campaign\Briefings\EXP_m07_briefing.sqf"];
_introVideos = ["A3\Missions_F_Exp\video\EXP_m07_vTitlecard.ogv", "A3\Missions_F_Exp\video\EXP_m07_vIN.ogv"];
_bWantsLoadoutSelection = true;
_bNoCinematics = false;

// Campaign init
#include "\A3\Missions_F_Exp\Campaign\scripts\init.sqf"

// Port lights
[0] call BIS_fnc_portLights;

// Lights start on
if (isServer) then
{
	[2, [0]] call BIS_fnc_portLights;
};

// Handle IFF
[] spawn BIS_fnc_EXP_m07_handleIFF;

[BIS_miller, "NIGHT"] call BIS_fnc_EXP_camp_initCharacter;
BIS_miller removePrimaryWeaponItem (primaryWeaponItems BIS_miller select 0);
BIS_miller linkItem "NVGogglesB_grn_F";

{
	[_x, "NIGHT"] call BIS_fnc_EXP_camp_initCharacter;
	_x removePrimaryWeaponItem (primaryWeaponItems _x select 0);
} forEach [BIS_ai_1, BIS_ai_2, BIS_ai_3, BIS_ai_4];

BIS_james setName (localize "STR_A3_Group_Falcon");
BIS_james setFace "WhiteHead_04";
BIS_james setSpeaker "Male01ENGB";
BIS_james setNameSound "James";
BIS_falcon1 setName (localize "STR_A3_B_CTRG_soldier_AR_A_F0");
BIS_falcon1 setFace "WhiteHead_02";
BIS_falcon1 setSpeaker "Male04ENGB";
BIS_falcon1 setNameSound "McKay";
BIS_falcon2 setName (localize "STR_A3_B_CTRG_soldier_GL_LAT_F0");
BIS_falcon2 setFace "WhiteHead_11";
BIS_falcon2 setSpeaker "Male02ENGB";
BIS_falcon3 setName (localize "STR_A3_natomen_lastnames89");
BIS_falcon3 setNameSound "OConnor";
if (isServer) then {{_x addGoggles "G_Balaclava_TI_tna_F"} forEach [BIS_james, BIS_falcon1, BIS_falcon2, BIS_falcon3]};

// Ensure correct pitch for NPCs
{if (!(isNil _x)) then {(missionNamespace getVariable [_x, objNull]) setPitch 1}} forEach ["BIS_HQ", "BIS_james", "BIS_falcon1", "BIS_falcon2", "BIS_falcon3"];

if (!(isDedicated)) then {
	// Wait for player to respawn
	waitUntil {!(isNull player) && { !(alive player) && { visibleMap } }};
	waitUntil {alive player};
	
	// Add respawn on player
	[player, "BIS_fnc_EXP_m07_addRespawn", false] call BIS_fnc_MP;
};