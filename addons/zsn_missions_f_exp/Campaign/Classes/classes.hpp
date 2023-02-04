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
	class Rifleman
	{
		displayName = $STR_A3_ApexProtocol_class_Rifleman;
		role = "Assault";

		weapons[] = {
			"arifle_MX_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
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
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};

		items[] = {
			"FirstAidKit",
			"optic_nightstalker",
			"muzzle_snds_65_TI_blk_F"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"bipod_01_F_blk",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_F";
	};

	class Rifleman_Night: Rifleman
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};

	class Rifleman_m03: Rifleman
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
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
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class Rifleman_m06: Rifleman
	{
		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"bipod_01_F_blk",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};

	class Grenadier
	{
		displayName = $STR_A3_ApexProtocol_class_Grenadier;
		role = "Assault";

		weapons[] = {
			"arifle_MX_GL_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
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
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};

		items[] = {
			"FirstAidKit",
			"muzzle_snds_65_TI_blk_F",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_3_F";
	};

	class Grenadier_Night: Grenadier
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};

	class Grenadier_m03: Grenadier
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
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
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class Grenadier_m06: Grenadier
	{
		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};

	class MachineGunner
	{
		displayName = $STR_A3_ApexProtocol_class_Autorifleman;
		role = "Assault";

		weapons[] = {
			"arifle_MX_SW_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
		};

		magazines[] = {
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};

		items[] = {
			"FirstAidKit",
			"muzzle_snds_65_TI_blk_F",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_F";
	};

	class MachineGunner_Night: MachineGunner
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};

	class MachineGunner_m03: MachineGunner
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		magazines[] = {
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class MachineGunner_m06: MachineGunner
	{
		linkedItems[] = {
			"V_PlateCarrier2_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};

	class Medic
	{
		displayName = $STR_A3_ApexProtocol_class_Paramedic;
		role = "Support";

		weapons[] = {
			"arifle_MXC_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};

		items[] = {
			"Medikit",
			"FirstAidKit",
			"muzzle_snds_65_TI_blk_F",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_2_F";
		backpack = "B_AssaultPack_rgr";
	};

	class Medic_Night: Medic
	{
		items[] = {
			"Medikit",
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"NVGogglesB_grn_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};

	class Medic_m03: Medic
	{
		items[] = {
			"Medikit",
			"FirstAidKit",
			"optic_nightstalker"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class Medic_m06: Medic
	{
		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};

	class Engineer
	{
		displayName = $STR_A3_ApexProtocol_class_Engineer;
		role = "Support";

		weapons[] = {
			"arifle_MXC_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		items[] = {
			"ToolKit",
			"MineDetector",
			"FirstAidKit",
			"muzzle_snds_65_TI_blk_F",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Booniehat_oli",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_3_F";
		backpack = "B_Kitbag_rgr";
	};

	class Engineer_Night: Engineer
	{
		items[] = {
			"ToolKit",
			"MineDetector",
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Booniehat_oli",
			"optic_Holosight_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};

	class Engineer_m03: Engineer
	{
		items[] = {
			"ToolKit",
			"MineDetector",
			"FirstAidKit",
			"optic_nightstalker"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Booniehat_oli",
			"optic_Holosight_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class Engineer_m06: Engineer
	{
		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_Booniehat_oli",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};

	class RiflemanAT
	{
		displayName = $STR_A3_ApexProtocol_class_ATRifleman;
		role = "Support";

		weapons[] = {
			"arifle_MX_khk_F",
			"hgun_P07_khk_F",
			"launch_NLAW_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"SmokeShell",
			"SmokeShell",
			"NLAW_F",
			"NLAW_F"
		};

		items[] = {
			"FirstAidKit",
			"muzzle_snds_65_TI_blk_F",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS"
		};

		uniformClass = "U_B_CTRG_Soldier_F";
		backpack = "B_AssaultPack_rgr";
	};

	class RiflemanAT_Night: RiflemanAT
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS"
		};
	};

	class RiflemanAT_m03: RiflemanAT
	{
		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

			magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"SmokeShell",
			"SmokeShell",
			"NLAW_F",
			"NLAW_F",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class RiflemanAT_m06: RiflemanAT
	{
		linkedItems[] = {
			"V_PlateCarrier1_rgr_noflag_F",
			"H_HelmetB_TI_tna_F",
			"optic_Holosight_khk_F",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
	};

	class Scout
	{
		displayName = $STR_A3_ApexProtocol_class_Scout;
		role = "Recon";

		weapons[] = {
			"arifle_MX_GL_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};

		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Cap_blk",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"bipod_01_F_blk",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_2_F";
	};

	class Scout_Night: Scout
	{

		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Cap_blk",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"bipod_01_F_blk",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};

	class Scout_m03: Scout
	{

		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Cap_blk",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"bipod_01_F_blk",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class Scout_m06: Scout
	{
		linkedItems[] = {
			"V_TacVest_oli",
			"H_Cap_blk",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"bipod_01_F_blk",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};

	class Sharpshooter
	{
		displayName = $STR_A3_ApexProtocol_class_Sharpshooter;
		role = "Recon";

		weapons[] = {
			"arifle_MXM_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell"
		};

		items[] = {
			"FirstAidKit",
			"optic_LRPS",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Booniehat_oli",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_3_F";
	};

	class Sharpshooter_Night: Sharpshooter
	{

		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Booniehat_oli",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};

	class Sharpshooter_m03: Sharpshooter
	{

		items[] = {
			"FirstAidKit",
			"optic_nightstalker"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Booniehat_oli",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class Sharpshooter_m06: Sharpshooter
	{
		linkedItems[] = {
			"V_TacVest_oli",
			"H_Booniehat_oli",
			"optic_ERCO_khk_F",
			"acc_pointer_IR",
			"bipod_01_F_blk",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};

	class Saboteur
	{
		displayName = $STR_A3_ApexProtocol_class_Saboteur;
		role = "Recon";

		weapons[] = {
			"arifle_MX_khk_F",
			"hgun_P07_khk_F",
			"Rangefinder"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell",
			"SLAMDirectionalMine_Wire_Mag",
			"SLAMDirectionalMine_Wire_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		items[] = {
			"FirstAidKit",
			"ToolKit",
			"MineDetector",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Bandanna_khk_hs",
			"optic_ERCO_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		uniformClass = "U_B_CTRG_Soldier_2_F";
		backpack = "B_Kitbag_rgr";
	};

	class Saboteur_Night: Saboteur
	{

		items[] = {
			"FirstAidKit",
			"ToolKit",
			"MineDetector",
			"optic_nightstalker"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Bandanna_khk_hs",
			"optic_ERCO_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"acc_pointer_IR",
			"NVGogglesB_grn_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};
	};
	class Saboteur_m03: Saboteur
	{
		items[] = {
			"FirstAidKit",
			"ToolKit",
			"MineDetector",
			"optic_nightstalker"
		};

		magazines[] = {
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"ZSN_20Rnd_570x28_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShell",
			"SLAMDirectionalMine_Wire_Mag",
			"SLAMDirectionalMine_Wire_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};

		linkedItems[] = {
			"V_TacVest_oli",
			"H_Bandanna_khk_hs",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"acc_pointer_IR",
			"optic_ERCO_khk_F",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch"
		};

		backpack = "B_AssaultPack_rgr";
	};
	
	class Saboteur_m06: Saboteur
	{
		linkedItems[] = {
			"V_TacVest_oli",
			"H_Bandanna_khk_hs",
			"optic_ERCO_khk_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_570",
			"acc_pointer_IR",
			"ItemRadio",
			"ItemMap",
			"ItemCompass",
			"B_UavTerminal",
			"ItemWatch"
		};
	};
};