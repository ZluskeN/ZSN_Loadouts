scriptName "NATO_MG";

if (!hasInterface) exitWith { ["Loadout running on dedicated server - %1", "NATO_MG"] call BIS_fnc_logFormat; };
waitUntil { time > 0 };
waitUntil { !isNull player };
if (!local _this) exitWith { ["Loadout where unit is not local - %1 / %2", "NATO_MG", _this] call BIS_fnc_logFormat; };
_this setVariable ["BIS_hvt_loadoutType", "MG"];

comment "Remove existing items";
removeAllWeapons _this;
removeAllItems _this;
removeAllAssignedItems _this;
removeUniform _this;
removeVest _this;
removeBackpack _this;
removeHeadgear _this;
removeGoggles _this;

comment "Add containers";
_this addVest "V_PlateCarrier2_rgr_noflag_F";
for "_i" from 1 to 3 do {_this addItemToVest "150Rnd_556x45_Drum_Mag_F";};
_this forceAddUniform "U_B_CTRG_Soldier_3_F";
_this addItemToUniform "FirstAidKit";
for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShell";};
_this addHeadgear "H_HelmetB_TI_tna_F";

comment "Add weapons";
_this addWeapon "arifle_SPAR_02_khk_F";
_this addPrimaryWeaponItem "acc_pointer_IR";
_this addPrimaryWeaponItem "bipod_01_F_blk";
_this addPrimaryWeaponItem "optic_aco";

for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};

comment "Add items";
_this linkItem "ItemMap";
_this linkItem "ItemCompass";
_this linkItem "ItemWatch";
_this linkItem "ItemRadio";
_this linkItem "ItemGPS";
_this linkItem "NVGoggles_tna_F";
