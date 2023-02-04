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
this forceAddUniform "U_B_CTRG_Soldier_2_F";
for "_i" from 1 to 3 do {this addItemToUniform "20Rnd_762x51_Mag";};
this addVest "V_PlateCarrier2_rgr";
this addItemToVest "FirstAidKit";
for "_i" from 1 to 4 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 3 do {this addItemToVest "20Rnd_762x51_Mag";};
this addHeadgear "H_Watchcap_camo";
this addGoggles "G_Tactical_Black";

comment "Add weapons";
this addWeapon "srifle_EBR_F";
this addPrimaryWeaponItem "muzzle_snds_B";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_DMS";
this addPrimaryWeaponItem "bipod_01_F_blk";
this addWeapon "hgun_P07_khk_F";
this addHandgunItem "muzzle_snds_L";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "NVGoggles_INDEP";

comment "Set identity";
this setFace "WhiteHead_15";
this setSpeaker "Male01GRE";