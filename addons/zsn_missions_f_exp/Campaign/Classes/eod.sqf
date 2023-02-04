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
this forceAddUniform "U_B_CTRG_Soldier_F";
for "_i" from 1 to 3 do {this addItemToUniform "30Rnd_9x21_Mag";};
this addVest "V_PlateCarrier2_rgr";
this addItemToVest "FirstAidKit";
for "_i" from 1 to 2 do {this addItemToVest "HandGrenade";};
this addItemToVest "SmokeShell";
for "_i" from 1 to 3 do {this addItemToVest "16Rnd_9x21_Mag";};
for "_i" from 1 to 4 do {this addItemToVest "30Rnd_9x21_Mag";};
this addBackpack "B_Carryall_oli";
this addItemToBackpack "ToolKit";
this addItemToBackpack "MineDetector";
this addItemToBackpack "APERSBoundingMine_Range_Mag";
this addItemToBackpack "ATMine_Range_Mag";
this addItemToBackpack "DemoCharge_Remote_Mag";
this addItemToBackpack "SLAMDirectionalMine_Wire_Mag";
this addHeadgear "H_HelmetSpecB";
this addGoggles "G_Tactical_Black";

comment "Add weapons";
this addWeapon "SMG_02_F";
this addPrimaryWeaponItem "muzzle_snds_L";
this addPrimaryWeaponItem "acc_pointer_IR";
this addPrimaryWeaponItem "optic_Aco_smg";
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