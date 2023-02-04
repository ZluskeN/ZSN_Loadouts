class CfgRoles
{
	class Assault
	{
		displayName = $STR_A3_Role_Assault;
		icon = "a3\missions_f_exp\data\img\classes\assault_ca.paa";
	};
	class Support
	{
		displayName = $STR_A3_Role_Support;
		icon = "a3\missions_f_exp\data\img\classes\support_ca.paa";
	};
	class Recon
	{
		displayName = $STR_A3_Role_Recon;
		icon = "a3\missions_f_exp\data\img\classes\recon_ca.paa";
	};
};

class CfgRespawnInventory
{
	// ************ //
	// Default NATO
	// ************ //
	class B_Rifleman
	{
		displayName = $STR_A3_cfgvehicles_b_soldier_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CTRG_Soldier_3_F";
	};
	class B_Grenadier
	{
		displayName = $STR_b_soldier_gl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_GL_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CTRG_Soldier_2_F";
	};
        class B_Engineer
	{
		displayName = $STR_b_engineer_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Booniehat_oli",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CTRG_Soldier_2_F";
		backpack = "B_AssaultPack_rgr";
	};
	class B_CombatLifesaver
	{
		displayName = $STR_b_medic_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMedic_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red"
		};
		items[] = {
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Cap_blk",
			"optic_aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CTRG_Soldier_3_F";
		backpack = "B_AssaultPack_rgr";
	};
	class B_Autorifleman
	{
		displayName = $STR_b_soldier_ar_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_02_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"bipod_01_F_blk",
			"optic_Aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CTRG_Soldier_3_F";
	};
	class B_RiflemanAT // Change to new unguided AT launcher when it's ready
	{
		displayName = $STR_b_soldier_lat_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManAT_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"launch_RPG32_ghex_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"RPG32_F",
			"RPG32_F",
			"RPG32_HE_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Cap_headphones",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		uniformClass = "U_B_CTRG_Soldier_3_F";
		backpack = "B_AssaultPack_rgr";
	};
	// ************ //
	// Unlock NATO
	// ************ //
	class B_Marksman
	{
		displayName = $STR_b_soldier_m_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_03_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Booniehat_oli",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		uniformClass = "U_B_CTRG_Soldier_3_F";
	};
	class B_ReconScout
	{
		displayName = $STR_b_recon_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"MiniGrenade",
			"MiniGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_oli",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"muzzle_snds_M",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		uniformClass = "U_B_CTRG_Soldier_F";
	};
	class B_UAVOperator
	{
		displayName = $STR_a3_b_soldier_uav_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"MiniGrenade",
			"MiniGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_oli",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"muzzle_snds_M",
			"B_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		uniformClass = "U_B_CTRG_Soldier_F";
		backpack = "B_UAV_01_backpack_F";
	};
	class B_ReconMarksman
	{
		displayName = $STR_b_recon_m_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_03_khk_F",
			"Rangefinder"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"APERSTripMine_Wire_Mag"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_oli",
			"optic_ERCO_khk_F",
			"H_HelmetB_TI_tna_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"muzzle_snds_B",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		uniformClass = "U_B_CTRG_Soldier_F";
	};
	class B_Sharpshooter
	{
		displayName = $STR_a3_cfgvehicles_b_sharpshooter_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"srifle_DMR_02_camo_F",
			"hgun_P07_F",
			"Rangefinder"
		};
		magazines[] = {
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"10Rnd_338_Mag",
			"APERSTripMine_Wire_Mag"
		};
		items[] = {
			"FirstAidKit",
			"optic_nvs"
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_Cap_headphones",
			"optic_AMS",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"muzzle_snds_L",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		uniformClass = "U_B_CTRG_Soldier_3_F";
	};
	class B_ReconTeamLeader
	{
		displayName = $STR_b_recon_tl_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_GL_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"muzzle_snds_M",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CTRG_Soldier_F";
	};
	class B_HeavyGunner
	{
		displayName = $STR_a3_cfgvehicles_b_heavygunner_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
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
			"V_PlateCarrier2_rgr_noflag_F",
			"H_Cap_headphones",
			"optic_aco",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_tna_F"
		};
		uniformClass = "U_B_CTRG_Soldier_2_F";
	};
	// ************ //
	// Default CSAT
	// ************ //
	class O_Rifleman
	{
		displayName = $STR_A3_cfgvehicles_b_soldier_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTAR_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",
			"acc_pointer_IR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	class O_Grenadier
	{
		displayName = $STR_b_soldier_gl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTAR_GL_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"HandGrenade",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
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
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
        class O_Engineer
	{
		displayName = $STR_b_engineer_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTAR_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};
		items[] = {
			"FirstAidKit",
			"Toolkit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",
			"acc_pointer_IR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "B_FieldPack_ghex_F";
	};
	class O_CombatLifesaver
	{
		displayName = $STR_b_medic_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMedic_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTAR_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F"
		};
		items[] = {
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",
			"acc_pointer_IR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "B_FieldPack_ghex_F";
	};
	class O_Autorifleman
	{
		displayName = $STR_b_soldier_ar_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTARS_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",
			"bipod_02_F_blk",
			"acc_pointer_IR",
			"O_NVGoggles_ghex_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	class O_RiflemanAT
	{
		displayName = $STR_b_soldier_lat_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManAT_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTAR_blk_F",
			"launch_RPG32_ghex_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"RPG32_F",
			"RPG32_F",
			"RPG32_HE_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_ACO_grn",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "B_FieldPack_ghex_F";
	};
	// ************ //
	// Unlock CSAT
	// ************ //
	class O_Marksman
	{
		displayName = $STR_b_soldier_m_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"srifle_DMR_07_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			// "bipod_02_F_blk", - the bipod is integrated
			"optic_Arco_blk_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	class O_ReconScout
	{
		displayName = $STR_b_recon_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTAR_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"MiniGrenade",
			"MiniGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetSpecO_ghex_F",
			"optic_ACO_grn",
			"acc_pointer_IR",
			"muzzle_snds_58_blk_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	class O_UAVOperator
	{
		displayName = $STR_a3_b_soldier_uav_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_CTAR_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_F",
			"MiniGrenade",
			"MiniGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetSpecO_ghex_F",
			"optic_aco_grn",
			"acc_pointer_IR",
			"muzzle_snds_58_blk_F",
			"O_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
		backpack = "O_UAV_01_backpack_F";
	};
	class O_ReconMarksman
	{
		displayName = $STR_b_recon_m_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"srifle_DMR_07_blk_F",
			"Rangefinder"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"20Rnd_650x39_Cased_Mag_F",
			"MiniGrenade",
			"MiniGrenade",
			"APERSTripMine_Wire_Mag"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetSpecO_ghex_F",
			"optic_Arco_blk_F",
			// "bipod_02_F_blk", Bipod is integrated
			"muzzle_snds_H",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	class O_Sharpshooter
	{
		displayName = $STR_a3_cfgvehicles_b_sharpshooter_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"srifle_DMR_05_blk_F",
			"hgun_Rook40_F",
			"Rangefinder"
		};
		magazines[] = {
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShell",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"MiniGrenade",
			"MiniGrenade",
                        "APERSTripMine_Wire_Mag"
		};
		items[] = {
			"FirstAidKit",
			"optic_nvs"
		};
		linkedItems[] = {
			"V_HarnessO_ghex_F",
			"H_HelmetO_ghex_F",
			"optic_KHS_blk",
			"acc_pointer_IR",
			"bipod_02_F_blk",
			"muzzle_snds_L",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
	class O_ReconTeamLeader
	{
		displayName = $STR_A3_o_v_soldier_hex_f0;
		role = "Recon";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManRecon_ca.paa";
		show = "side group _this == east";
		weapons[] = {
			"arifle_ARX_blk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"MiniGrenade",
			"MiniGrenade",
			"10Rnd_50BW_Mag_F",
			"10Rnd_50BW_Mag_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"H_HelmetSpecO_ghex_F",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"muzzle_snds_65_TI_blk_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_V_Soldier_Viper_F";
		backpack = "B_ViperHarness_blk_F";
	};
	class O_HeavyGunner
	{
		displayName = $STR_a3_cfgvehicles_b_heavygunner_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == east";
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
			"H_HelmetO_ghex_F",
			"optic_aco_grn",
			"acc_pointer_IR",
			"bipod_02_F_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_ghex_F"
		};
		uniformClass = "U_O_T_Soldier_F";
	};
};
