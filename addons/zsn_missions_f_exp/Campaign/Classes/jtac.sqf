comment "Exported from Arsenal by Zipper";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "U_B_CTRG_Soldier_3_F";
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_65x39_caseless_khaki_mag";};
this addVest "V_PlateCarrier1_rgr";
this addItemToVest "FirstAidKit";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {this addItemToVest "ZSN_20Rnd_570x28_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "30Rnd_65x39_caseless_khaki_mag";};
this addBackpack "B_UAV_01_backpack_F";
this addHeadgear "H_Cap_oli_hs";
this addGoggles "G_Tactical_Black";

comment "Add weapons";
this addWeapon "arifle_MXM_khk_F";
this addPrimaryWeaponItem "muzzle_snds_H_khk_F";
this addPrimaryWeaponItem "optic_Hamr_khk_F";
this addPrimaryWeaponItem "bipod_01_F_khk";
this addWeapon "hgun_P07_khk_F";
this addHandgunItem "muzzle_snds_570";
this addWeapon "Laserdesignator";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "NVGoggles_INDEP";

comment "Set identity";
this setFace "WhiteHead_15";
this setSpeaker "Male01GRE";