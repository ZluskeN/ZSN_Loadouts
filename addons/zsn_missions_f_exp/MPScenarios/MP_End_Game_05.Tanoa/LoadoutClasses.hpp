class CfgRoles
{
	class Rifleman
	{
		displayName = $STR_a3_cfgvehicles_b_soldier_f0;
		icon = "a3\missions_f_exp\data\img\classes\assault_ca.paa";
	};

	class Autorifleman
	{
		displayName = $STR_b_soldier_ar_f0;
		icon = "a3\missions_f_exp\data\img\classes\assault_ca.paa";
	};

	class Support
	{
		displayName = $STR_b_engineer_f0;
		icon = "a3\missions_f_exp\data\img\classes\support_ca.paa";
	};

	class Sniper
	{
		displayName = $STR_b_soldier_m_f0;
		icon = "a3\missions_f_exp\data\img\classes\recon_ca.paa";
	};
	class Grenadier
	{
		displayName = $str_b_soldier_gl_f0;
		icon = "a3\missions_f_exp\data\img\classes\assault_ca.paa";
	};
	class UAVoperator
	{
		displayName = $STR_A3_B_Soldier_UAV_f0;
		icon = "a3\missions_f_exp\data\img\classes\assault_ca.paa";
	};
};


class CfgRespawnInventory
{
	// ************ //
	// Default NATO
	// ************ //
	class B_Rifleman
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_01_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Rifleman";
		weapons[] = {
			"arifle_SPAR_01_blk_F"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Booniehat_tna_F",
			"optic_aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};

	//AK47
	class B_Rifleman2
	{
		displayName = $STR_A3_CfgWeapons_arifle_AKM_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Rifleman";
		weapons[] = {
			"arifle_AKM_F"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"30Rnd_762x39_mag_F",
			"30Rnd_762x39_mag_F",
			"30Rnd_762x39_mag_F",
			"30Rnd_762x39_mag_F",
			"30Rnd_762x39_mag_F",
			"30Rnd_762x39_mag_F",
			"30Rnd_762x39_mag_F",
			"30Rnd_762x39_mag_F",
			"SmokeShell",
			"SmokeShell"

		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Booniehat_tna_F",
			"optic_aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
//SPAR16
	class B_Rifleman3
	{
		//displayName = $STR_A3_CfgWeapons_arifle_SPAR_01_base_F0;
		displayName = $STR_A3_CfgWeapons_arifle_XMX0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Rifleman";
		weapons[] = {
			//"arifle_SPAR_01_blk_F"
			"arifle_MX_khk_F"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Booniehat_tna_F",
			"optic_aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
	//SPAR17
	class B_Rifleman4
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_03_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Rifleman";
		weapons[] = {
			"arifle_SPAR_03_blk_F"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"SmokeShell",
			"SmokeShell"

		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Booniehat_tna_F",
			"optic_aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
	/*  ******************
	Mahcine gunners
	******************** */

	//MX_SW ----------> replace by spar 16s
	class B_Autorifleman
	{
		displayName = $STR_A3_CfgWeapons_arifle_spar_02_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		role = "Autorifleman";
		weapons[] = {
			"arifle_SPAR_02_blk_f"
		};
		magazines[] = {
			"150rnd_556x45_drum_mag_f",
			"150rnd_556x45_drum_mag_f",
			"150rnd_556x45_drum_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_Booniehat_tna_F",
			"bipod_01_F_blk",
			"optic_Aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};

//MK200
	class B_Autorifleman1
	{
		displayName = $STR_A3_CfgWeapons_lmg_mk2000;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		role = "Autorifleman";
		weapons[] = {
			"LMG_Mk200_F"
		};
		magazines[] = {
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Bandanna_khk",
			"bipod_01_F_blk",
			"optic_Aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
//MK46 - addto hravy gunner or never.
	class B_Autorifleman2
	{
		displayName = $STR_A3_CfgWeapons_lmg_03_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		role = "Autorifleman";
		weapons[] = {
			"LMG_03_F"
		};
		magazines[] = {
			"200Rnd_556x45_Box_f",
			"200Rnd_556x45_Box_f",
			"200Rnd_556x45_Box_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Bandanna_khk",
			"bipod_01_F_blk",
			"optic_Aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
	//MMG
		class B_HeavyGunner
	{
		displayName = $STR_A3_CfgWeapons_mmg_02_black_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		role = "Autorifleman";
		weapons[] = {
			"MMG_02_black_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Bandanna_khk",

			//"optic_aco",
			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"bipod_01_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};

	/* ************************
	SNIPERS and Marksmans classes
	************************* */
	class B_Sharpshooter
	{
		displayName = $STR_A3_CfgWeapons_srifle_lrr0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "sniper";
		weapons[] = {
			"srifle_LRR_tna_F",
			"Rangefinder"
		};
		magazines[] = {

			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"optic_AMS",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Sniper_F";
	};
	class B_Sharpshooter1
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_03_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "sniper";
		weapons[] = {
			"arifle_SPAR_03_blk_F",
			"Rangefinder"
		};
		magazines[] = {

			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"optic_AMS",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Sniper_F";
	};

	/* *************************
	Grenadiers classes
	************************** */
	class B_Grenadier
	{
		displayName = $STR_A3_CfgWeapons_arifle_xmx_gl0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Grenadier";
		weapons[] = {
			"arifle_MX_GL_khk_F"
		};
		magazines[] = {

			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_tna_F",
			"H_Booniehat_tna_F",
			"optic_Aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
	//spar16gl
	class B_Grenadier1
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_01_gl_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Grenadier";
		weapons[] = {
			"arifle_SPAR_01_gl_blk_f"
		};
		magazines[] = {

			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_tna_F",
			"H_Booniehat_tna_F",
			"optic_Aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
	/* **********************
	Engineers classes
	********************* */
        class B_Engineer
	{
		displayName = $STR_A3_CfgWeapons_arifle_xmx0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == west";
		role = "sapper";
		weapons[] = {
			"arifle_MXC_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_MilCap_tna_F",
			"optic_Holosight",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
//aks
	class B_Engineer1
	{
		displayName = $STR_A3_CfgWeapons_arifle_aks_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == west";
		role = "sapper";
		weapons[] = {
			"arifle_aks_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_MilCap_tna_F",
			"optic_Holosight",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
	/* **************************
	UAV Operators
	**************************** */
	class B_UAVOperator
	{
		displayName = $STR_A3_CfgWeapons_arifle_xmm0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == west";
		role = "UAVoperator";
		weapons[] = {
			"arifle_MXM_khk_F"
		};
		magazines[] = {

			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_MilCap_tna_F", // to be deleted when ghillie is used
			"optic_aco",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"muzzle_snds_H",
			"B_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_UAV_01_backpack_F";
	};

	class B_RiflemanS
	{
		displayName = $STR_A3_CfgWeapons_arifle_xmx0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Rifleman";
		weapons[] = {
			"arifle_MX_khk_F"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"SmokeShell",
			"SmokeShell"

		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Booniehat_tna_F",
			"optic_aco",
			"muzzle_snds_H",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
	class B_Rifleman3S
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_01_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Rifleman";
		weapons[] = {
			"arifle_SPAR_01_blk_F"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"SmokeShell",
			"SmokeShell"

		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_HelmetIA",
			"optic_aco",
			"muzzle_snds_m",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};

	class B_Rifleman4S
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_03_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Rifleman";
		weapons[] = {
			"arifle_SPAR_03_blk_F"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"20Rnd_762x51_mag",
			"SmokeShell",
			"SmokeShell"

		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_HelmetIA",
			"optic_aco",
			"muzzle_snds_B",
			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};

	//MX_SW
	class B_AutoriflemanS
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_02_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		role = "Autorifleman";
		weapons[] = {
			"arifle_SPAR_02_blk_F"
		};
		magazines[] = {
			"150Rnd_556x45_drum_mag_f",
			"150Rnd_556x45_drum_mag_f",
			"150Rnd_556x45_drum_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_Booniehat_tna_F",
			"bipod_01_F_blk",
			"optic_Aco",
			"muzzle_snds_M",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
	class B_Autorifleman1S
	{
		displayName = $STR_A3_CfgWeapons_lmg_mk2000;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		role = "Autorifleman";
		weapons[] = {
			"LMG_Mk200_F"
		};
		magazines[] = {
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Bandanna_khk",
			"bipod_01_F_blk",
			"optic_Aco",
			"muzzle_snds_H_MG_blk_F",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};

	class B_HeavyGunnerS
	{
		displayName = $STR_A3_CfgWeapons_mmg_02_black_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		role = "Autorifleman";
		weapons[] = {
			"MMG_02_black_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_Bandanna_khk",

			//"optic_aco",
			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"bipod_01_F_blk",
			"muzzle_snds_338_black",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};
	class B_Sharpshooter1S
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_03_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "sniper";
		weapons[] = {
			"arifle_SPAR_03_blk_F",
			"Rangefinder"
		};
		magazines[] = {

			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"20Rnd_762X51_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"optic_AMS",
			"muzzle_snds_b",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Sniper_F";
	};

	class B_GrenadierS
	{
		displayName = $STR_A3_CfgWeapons_arifle_xmx_gl0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Grenadier";
		weapons[] = {
			"arifle_MX_GL_khk_F"
		};
		magazines[] = {

			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_tna_F",
			"H_Booniehat_tna_F",
			"optic_Aco",
			"muzzle_snds_H",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};

	class B_Grenadier1s
	{
		displayName = $STR_A3_CfgWeapons_arifle_SPAR_01_gl_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		role = "Grenadier";
		weapons[] = {
			"arifle_SPAR_01_gl_blk_f"
		};
		magazines[] = {

			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"30Rnd_556x45_stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_tna_F",
			"H_Booniehat_tna_F",
			"optic_Aco",
			"muzzle_snds_M",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
	};

	class B_EngineerS
	{
		displayName = $STR_A3_CfgWeapons_arifle_xmx0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == west";
		role = "sapper";
		weapons[] = {
			"arifle_MXC_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_MilCap_tna_F",
			"optic_Holosight",
			"muzzle_snds_H",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};

	class B_UAVOperatorS
	{
		displayName = $STR_A3_CfgWeapons_arifle_xmm0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == west";
		role = "UAVoperator";
		weapons[] = {
			"arifle_MXM_khk_F"
		};
		magazines[] = {

			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_MilCap_tna_F", // to be deleted when ghillie is used
			"optic_aco",
			"muzzle_snds_H",

			"acc_pointer_IR",
			"NVGoggles_INDEP",

			"muzzle_snds_H",
			"B_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_F";
		backpack = "B_UAV_01_backpack_F";
	};
	// ***************************************************************************************************************** //
	// Default CSAT
	// ***************************************************************************************************************** //
	//car95
	class O_Rifleman
	{
		displayName = $STR_A3_cfgweapons_arifle_ctar_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Rifleman";
		weapons[] = {
			"arifle_CTAR_blk_F"
		};
		magazines[] = {
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_aco_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};

	// ************ //
	// Unlock CSAT
	// ************ //
	class O_Rifleman1
	{
		displayName = $STR_a3_cfgweapons_arifle_katiba_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Rifleman";
		weapons[] = {
			"arifle_katiba_F"
		};
		magazines[] = {
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_aco_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	//ak47
	class O_Rifleman2
	{
		displayName = $STR_A3_CfgWeapons_arifle_AKM_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Rifleman";
		weapons[] = {
			"arifle_akm_f"
		};
		magazines[] = {
			"30Rnd_762x39_mag_f",
			"30Rnd_762x39_mag_f",
			"30Rnd_762x39_mag_f",
			"30Rnd_762x39_mag_f",
			"30Rnd_762x39_mag_f",
			"30Rnd_762x39_mag_f",
			"30Rnd_762x39_mag_f",
			"30Rnd_762x39_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_aco_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	/* *********************************
	Machinegunners classes
	********************************** */
	class O_Autorifleman
	{
		displayName = $STR_A3_cfgweapons_lmg_zafir_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
		role = "Autorifleman";
		weapons[] = {
			"LMG_Zafir_F"
		};
		magazines[] = {

			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	// car95s
	class O_Autorifleman1
	{
		displayName = $STR_A3_cfgweapons_arifle_ctars_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
		role = "Autorifleman";
		weapons[] = {
			"arifle_ctars_blk_f"
		};
		magazines[] = {

			"100Rnd_580x42_mag_f",
			"100Rnd_580x42_mag_f",
			"100Rnd_580x42_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	//NAVID
	class O_HeavyGunner
	{
		displayName = $STR_A3_CfgWeapons_mmg_01_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
		role = "Autorifleman";
		weapons[] = {
			"MMG_01_hex_F"
		};
		magazines[] = {
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_Bandanna_khk_hs",

			//"optic_aco_grn",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"bipod_02_F_hex",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};

	class O_Autorifleman2
	{
		displayName = $STR_A3_CfgWeapons_lmg_03_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
		role = "Autorifleman";
		weapons[] = {
			"LMG_03_f"
		};
		magazines[] = {

			"200Rnd_556x45_box_f",
			"200Rnd_556x45_box_f",
			"200Rnd_556x45_box_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};

	/* ***********************
	Snipers and sharpshooters classes
	************************ */

	class O_Sharpshooter
	{
		displayName = $STR_A3_CfgWeapons_srifle_gm60;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "sniper";
		weapons[] = {
			"srifle_GM6_ghex_F",
			"Rangefinder"
		};
		magazines[] = {

			"5Rnd_127x108_Mag",
			"5Rnd_127x108_Mag",
			"5Rnd_127x108_Mag",
			"5Rnd_127x108_Mag",
			"5Rnd_127x108_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"optic_KHS_blk",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Sniper_F";
	};
	//rahim
	class O_Sharpshooter1
	{
		displayName = $STR_A3_CfgWeapons_srifle_dmr_01_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "sniper";
		weapons[] = {
			"srifle_DMR_01_F",
			"Rangefinder"
		};
		magazines[] = {

			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"optic_KHS_blk",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Sniper_F";
	};
	//DMR
	class O_Sharpshooter2
	{
		displayName = $STR_A3_CfgWeapons_DMR_07_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "sniper";
		weapons[] = {
			"srifle_DMR_07_ghex_F",
			"Rangefinder"
		};
		magazines[] = {

			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"optic_KHS_blk",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Sniper_F";
	};
	/* *******************************
	grenadiers classes
	******************************** */
	class O_Grenadier
	{
		displayName = $STR_A3_CfgWeapons_arifle_katiba_gl_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Grenadier";
		weapons[] = {
			"arifle_Katiba_GL_F"
		};
		magazines[] = {

			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessOGL_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	//CAR-95 GL
	class O_Grenadier1
	{
		displayName = $STR_A3_CfgWeapons_arifle_ctar_gl_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Grenadier";
		weapons[] = {
			"arifle_CTAR_GL_blk_F"
		};
		magazines[] = {

			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessOGL_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	/***************************
	Sappers classes

	************************** */
        class O_Engineer
	{
		displayName = $STR_A3_CfgWeapons_arifle_aks_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == east";
		role = "Sapper";
		weapons[] = {
			"arifle_aks_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"30Rnd_545x39_mag_f",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_MilCap_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "B_FieldPack_ghex_F";
	};
	 class O_Engineer1
	{
		displayName = $STR_A3_cfgweapons_arifle_ctar_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == east";
		role = "Sapper";
		weapons[] = {
			"arifle_ctar_blk_f"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_MilCap_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "B_FieldPack_ghex_F";
	};
	/* ********************************
	UAV OPERATORS CLASSES AND SILENCORS

	********************************* */

	class O_UAVOperator
	{
		displayName = $STR_A3_cfgweapons_arifle_ctar_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == east";
		role = "uavoperator";
		weapons[] = {
			"arifle_ctar_blk_f"
		};
		magazines[] = {
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_MilCap_ghex_F",
			"optic_aco_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"muzzle_snds_H",
			"O_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "O_UAV_01_backpack_F";
	};
	class O_Rifleman1S
	{
		displayName = $STR_a3_cfgweapons_arifle_katiba_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Rifleman";
		weapons[] = {
			"arifle_Katiba_F"
		};
		magazines[] = {
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_aco_grn",
			"muzzle_snds_H",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	//car95
	class O_RiflemanS
	{
		displayName = $STR_A3_cfgweapons_arifle_ctar_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Rifleman";
		weapons[] = {
			"arifle_CTAR_blk_F"
		};
		magazines[] = {
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_aco_grn",
			"muzzle_snds_58_blk_f",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	class O_Autorifleman1S
	{
		displayName = $STR_A3_cfgweapons_arifle_ctars_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
		role = "Autorifleman";
		weapons[] = {
			"arifle_ctars_blk_f"
		};
		magazines[] = {

			"100Rnd_580x42_mag_f",
			"100Rnd_580x42_mag_f",
			"100Rnd_580x42_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",
			"muzzle_snds_58_blk_f",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	//NAVID
	class O_HeavyGunnerS
	{
		displayName = $STR_A3_CfgWeapons_mmg_01_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
		role = "Autorifleman";
		weapons[] = {
			"MMG_01_hex_F"
		};
		magazines[] = {
			"150Rnd_93x64_Mag",
			"150Rnd_93x64_Mag",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_Bandanna_khk_hs",

			//"optic_aco_grn",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"muzzle_snds_93MMG",

			"bipod_02_F_hex",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	//rahim
	class O_Sharpshooter1S
	{
		displayName = $STR_A3_CfgWeapons_srifle_dmr_01_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "sniper";
		weapons[] = {
			"srifle_DMR_01_F",
			"Rangefinder"
		};
		magazines[] = {

			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_762x54_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"optic_KHS_blk",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"muzzle_snds_B",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Sniper_F";
	};

	//DMR
	class O_Sharpshooter2S
	{
		displayName = $STR_A3_CfgWeapons_DMR_07_base_F0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "sniper";
		weapons[] = {
			"srifle_DMR_07_ghex_F",
			"Rangefinder"
		};
		magazines[] = {

			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"20Rnd_650x39_cased_mag_f",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"optic_KHS_blk",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"muzzle_snds_H",

			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Sniper_F";
	};

	class O_GrenadierS
	{
		displayName = $STR_A3_CfgWeapons_arifle_katiba_gl_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Grenadier";
		weapons[] = {
			"arifle_Katiba_GL_F"
		};
		magazines[] = {

			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessOGL_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",
			"muzzle_snds_H",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	//CAR-95 GL
	class O_Grenadier1S
	{
		displayName = $STR_A3_CfgWeapons_arifle_ctar_gl_blk_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		role = "Grenadier";
		weapons[] = {
			"arifle_CTAR_GL_blk_F"
		};
		magazines[] = {

			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessOGL_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"muzzle_snds_58_blk_f",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	 class O_Engineer1S
	{
		displayName = $STR_A3_cfgweapons_arifle_ctar_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == east";
		role = "Sapper";
		weapons[] = {
			"arifle_ctar_blk_f"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_MilCap_ghex_F",
			"optic_ACO_grn",
			"muzzle_snds_58_blk_f",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "B_FieldPack_ghex_F";
	};
	class O_UAVOperatorS
	{
		displayName = $STR_A3_cfgweapons_arifle_ctar_base_f0;
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == east";
		role = "uavoperator";
		weapons[] = {
			"arifle_ctar_blk_f"
		};
		magazines[] = {
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"30Rnd_580x42_mag_f",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_MilCap_ghex_F",
			"optic_aco_grn",
			"muzzle_snds_58_blk_f",

			"acc_pointer_IR",
			"NVGoggles_OPFOR",

			"muzzle_snds_H",
			"O_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "O_UAV_01_backpack_F";
	};
};
