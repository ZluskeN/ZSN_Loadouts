scriptName "NATO_Engineer";

if (!hasInterface) exitWith { ["Loadout running on dedicated server - %1", "NATO_Engineer"] call BIS_fnc_logFormat; };
waitUntil { time > 0 };
waitUntil { !isNull player };
if (!local _this) exitWith { ["Loadout where unit is not local - %1 / %2", "NATO_Engineer", _this] call BIS_fnc_logFormat; };
_this setVariable ["BIS_hvt_loadoutType", "Engineer"];

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
_this addVest "V_PlateCarrier1_rgr_noflag_F";
for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_556x45_Stanag_red";};
_this forceAddUniform "U_B_CTRG_Soldier_2_F";
_this addItemToUniform "FirstAidKit";
for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShell";};
_this addBackpack "B_AssaultPack_rgr";
_this addItemToBackpack "Toolkit";
_this addItemToBackpack "MineDetector";
for "_i" from 1 to 2 do {_this addItemToBackpack "DemoCharge_Remote_Mag";};
_this addHeadgear "H_Booniehat_oli";

comment "Add weapons";
_this addWeapon "arifle_SPAR_01_khk_F";
_this addPrimaryWeaponItem "acc_pointer_IR";
_this addPrimaryWeaponItem "optic_Holosight_khk_F";

comment "Add items";
_this linkItem "ItemMap";
_this linkItem "ItemCompass";
_this linkItem "ItemWatch";
_this linkItem "ItemRadio";
_this linkItem "ItemGPS";
_this linkItem "NVGoggles_tna_F";
