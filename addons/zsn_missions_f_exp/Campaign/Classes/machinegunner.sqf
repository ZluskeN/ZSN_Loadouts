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
this addVest "V_PlateCarrier2_rgr";
this addItemToVest "FirstAidKit";
for "_i" from 1 to 4 do {this addItemToVest "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "ZSN_20Rnd_570x28_Mag";};
this addItemToVest "200Rnd_65x39_cased_Box";
this addBackpack "B_AssaultPack_rgr";
this addItemToBackpack "200Rnd_65x39_cased_Box";
this addHeadgear "H_HelmetB_light";
this addGoggles "G_Tactical_Black";

comment "Add weapons";
this addWeapon "LMG_Mk200_F";
this addPrimaryWeaponItem "muzzle_snds_H_MG";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_Hamr";
this addWeapon "hgun_P07_khk_F";
this addHandgunItem "muzzle_snds_570";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "NVGoggles_INDEP";

comment "Set identity";
this setFace "WhiteHead_15";
this setSpeaker "Male01GRE";