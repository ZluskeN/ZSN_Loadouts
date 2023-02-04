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
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_9x21_Mag";};
this addVest "V_PlateCarrier1_rgr";
this addItemToVest "FirstAidKit";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_9x21_Mag";};
this addBackpack "B_AssaultPack_rgr";
this addItemToBackpack "NLAW_F";
this addHeadgear "H_HelmetB_light";
this addGoggles "G_Tactical_Black";

comment "Add weapons";
this addWeapon "SMG_02_F";
this addPrimaryWeaponItem "muzzle_snds_L";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_Aco_smg";
this addWeapon "launch_NLAW_F";
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