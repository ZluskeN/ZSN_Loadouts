scriptName "CSAT_MG";

if (!hasInterface) exitWith { ["Loadout running on dedicated server - %1", "CSAT_MG"] call BIS_fnc_logFormat; };
waitUntil { time > 0 };
waitUntil { !isNull player };
if (!local _this) exitWith { ["Loadout where unit is not local - %1 / %2", "CSAT_MG", _this] call BIS_fnc_logFormat; };
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
_this addVest "V_HarnessO_ghex_F";
for "_i" from 1 to 5 do {_this addItemToVest "100Rnd_580x42_Mag_F";};
for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
_this forceAddUniform "U_O_T_Soldier_F";
_this addItemToUniform "FirstAidKit";
for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShell";};
_this addHeadgear "H_HelmetO_ghex_F";

comment "Add weapons";
_this addWeapon "arifle_CTARS_blk_F";
_this addPrimaryWeaponItem "acc_pointer_IR";
_this addPrimaryWeaponItem "optic_aco_grn";

comment "Add items";
_this linkItem "ItemMap";
_this linkItem "ItemCompass";
_this linkItem "ItemWatch";
_this linkItem "ItemRadio";
_this linkItem "ItemGPS";
_this linkItem "O_NVGoggles_ghex_F";