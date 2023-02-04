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
	//*******************
	// Standard equipment
	//*******************
	class B_SquadLeader
	{
		displayName = $STR_b_soldier_sl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"Rangefinder",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierSpec_tna_F",
			"H_HelmetB_Enh_tna_F",
			"optic_ERCO_blk_F",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
	};
	class B_Marksman
	{
		displayName = $STR_b_soldier_m_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_03_khk_F",
			"Rangefinder",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
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
			"V_PlateCarrier1_tna_F",
			"H_HelmetB_Light_tna_F",
			"optic_ERCO_blk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
	};
	class B_Autorifleman
	{
		displayName = $STR_b_soldier_ar_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_02_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"150Rnd_556x45_Drum_Mag_F",
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
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
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
		uniformClass = "U_B_T_Soldier_AR_F";
	};
	class B_Grenadier
	{
		displayName = $STR_b_soldier_gl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_GL_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrierGL_tna_F",
			"H_HelmetB_tna_F",
			"optic_Aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
	class B_Rifleman
	{
		displayName = $STR_A3_cfgvehicles_b_soldier_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"optic_Aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
        class B_AT
	{
		displayName = $STR_b_soldier_lat_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManAT_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F",
			"launch_NLAW_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"NLAW_F",
			"NLAW_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"optic_Aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
        class B_Engineer
	{
		displayName = $STR_b_engineer_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrier1_tna_F",
			"H_HelmetB_Light_tna_F",
			"optic_aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
	class B_CombatLifesaver
	{
		displayName = $STR_b_medic_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMedic_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrierSpec_tna_F",
			"H_HelmetB_Enh_tna_F",
			"optic_aco",
			"acc_pointer_IR",
			"NVGoggles_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
		backpack = "B_AssaultPack_tna_F";
	};
	//******************
	// Limited equipment
	//******************
	class B_SquadLeader_L
	{
		displayName = $STR_b_soldier_sl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"Binocular",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierSpec_tna_F",
			"H_HelmetB_Enh_tna_F",
			"optic_ERCO_blk_F",
			"acc_flashlight",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
	};
	class B_Marksman_L
	{
		displayName = $STR_b_soldier_m_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_03_khk_F",
			"Binocular",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrier1_tna_F",
			"H_HelmetB_Light_tna_F",
			"optic_ERCO_blk_F",
			"acc_flashlight",
			"bipod_01_F_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
	};
	class B_Autorifleman_L
	{
		displayName = $STR_b_soldier_ar_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_02_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"bipod_01_F_blk",
			"optic_Aco",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
	class B_Grenadier_L
	{
		displayName = $STR_b_soldier_gl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_GL_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_tna_F",
			"H_HelmetB_tna_F",
			"optic_Aco",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
	class B_Rifleman_L
	{
		displayName = $STR_A3_cfgvehicles_b_soldier_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"optic_Aco",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
        class B_AT_L
	{
		displayName = $STR_b_soldier_lat_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManAT_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F",
			"launch_NLAW_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"NLAW_F",
			"NLAW_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"optic_Aco",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
        class B_Engineer_L
	{
		displayName = $STR_b_engineer_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrier1_tna_F",
			"H_HelmetB_Light_tna_F",
			"optic_Aco",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
	class B_CombatLifesaver_L
	{
		displayName = $STR_b_medic_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMedic_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrierSpec_tna_F",
			"H_HelmetB_Enh_tna_F",
			"optic_aco",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
		backpack = "B_AssaultPack_tna_F";
	};
	//*********
	// Survivor
	//*********
	class B_SquadLeader_S
	{
		displayName = $STR_b_soldier_sl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"Binocular",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierSpec_tna_F",
			"H_HelmetB_Enh_tna_F",
			"acc_flashlight",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
	};
	class B_Marksman_S
	{
		displayName = $STR_b_soldier_m_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_03_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier1_tna_F",
			"H_HelmetB_Light_tna_F",
			"acc_flashlight",
			"bipod_01_F_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
	};
	class B_Autorifleman_S
	{
		displayName = $STR_b_soldier_ar_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMG_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_02_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"150Rnd_556x45_Drum_Mag_F",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"bipod_01_F_blk",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
	class B_Grenadier_S
	{
		displayName = $STR_b_soldier_gl_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_GL_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_tna_F",
			"H_HelmetB_tna_F",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
	class B_Rifleman_S
	{
		displayName = $STR_A3_cfgvehicles_b_soldier_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
	};
        class B_AT_S
	{
		displayName = $STR_b_soldier_lat_f0;
		role = "Assault";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManAT_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F",
			"launch_NLAW_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"HandGrenade",
			"HandGrenade",
			"NLAW_F",
			"NLAW_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_tna_F",
			"H_HelmetB_tna_F",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
        class B_Engineer_S
	{
		displayName = $STR_b_engineer_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManEngineer_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
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
			"V_PlateCarrier1_tna_F",
			"H_HelmetB_Light_tna_F",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_AR_F";
		backpack = "B_AssaultPack_tna_F";
	};
	class B_CombatLifesaver_S
	{
		displayName = $STR_b_medic_f0;
		role = "Support";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManMedic_ca.paa";
		show = "side group _this == west";
		weapons[] = {
			"arifle_SPAR_01_khk_F",
			"hgun_P07_khk_F"
		};
		magazines[] = {
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red"
		};
		items[] = {
			"FirstAidKit",
			"Medikit"
		};
		linkedItems[] = {
			"V_PlateCarrierSpec_tna_F",
			"H_HelmetB_Enh_tna_F",
			"acc_flashlight",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_T_Soldier_SL_F";
		backpack = "B_AssaultPack_tna_F";
	};
};
