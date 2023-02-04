scriptName "NATO_Rifleman";

if (!hasInterface) exitWith { ["Loadout running on dedicated server - %1", "NATO_Rifleman"] call BIS_fnc_logFormat; };
waitUntil { time > 0 };
waitUntil { !isNull player };
if (!local _this) exitWith { ["Loadout where unit is not local - %1 / %2", "NATO_Rifleman", _this] call BIS_fnc_logFormat; };
_this setVariable ["BIS_hvt_loadoutType", "Rifleman"];

comment "Remove existing items";
removeAllWeapons _this;
removeAllItems _this;
removeAllAssignedItems _this;
removeUniform _this;
removeVest _this;
removeBackpack _this;
removeHeadgear _this;

comment "Add containers";
_this addVest "V_PlateCarrier1_tna_F";
for "_i" from 1 to 8 do {_this addItemToVest "30Rnd_556x45_stanag";};
for "_i" from 1 to 2 do {_this addItemToVest "HandGrenade";};
_this forceAddUniform "U_B_T_Soldier_F";
_this addItemToUniform "FirstAidKit";
for "_i" from 1 to 2 do {_this addItemToUniform "SmokeShell";};
_this addHeadgear "H_Booniehat_tna_F";

comment "Add weapons";
_this addWeapon "arifle_spar_01_blk_f";
// _this addPrimaryWeaponItem "acc_pointer_IR";
_this addPrimaryWeaponItem "optic_aco";

comment "Add items";
_this linkItem "ItemMap";
_this linkItem "ItemCompass";
_this linkItem "ItemWatch";
_this linkItem "ItemRadio";
_this linkItem "ItemGPS";
_this linkItem "NVGoggles_INDEP";
