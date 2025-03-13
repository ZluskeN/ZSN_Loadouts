////////////////////////////////////////////////////////////////////
//DeRap: zsn_weapons\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Thu Dec 03 22:29:49 2020 : 'file' last modified on Wed Dec 02 21:48:32 2020
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_Loadouts_WS
	{
		units[] = {"B_D_recon_lxWS","B_D_recon_LAT_lxWS","B_D_recon_exp_lxWS","B_soldier_UAV_lxWS","B_ION_crew_lxWS","B_ION_marksman_lxWS","B_ION_medic_lxWS","B_ION_Soldier_lxWS","I_soldier_UAV_lxWS","B_ION_shot_lxWS","B_ION_soldier_AR_lxWS","B_ION_Soldier_GL_lxWS","B_ION_soldier_UAV_01_lxWS","B_ION_soldier_UAV_02_lxWS","B_ION_TL_lxWS","B_ION_Story_Givens_lxWS","I_PMC_Soldier_01_lxWS","I_soldier_UAV_lxWS","I_SFIA_hireling_lxWS","I_SFIA_crew_lxWS","B_Tura_defector_lxWS","I_SFIA_Soldier_TL_lxWS","I_SFIA_Soldier_GL_lxWS","I_SFIA_officer_lxWS","I_SFIA_exp_lxWS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Characters_f_lxWS","ZSN_Loadouts"};
		magazines[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class cfgWeapons
{
	class arifle_ARX_hex_F;
	class arifle_ARX_Viper_hex_F: arifle_ARX_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Arco_hex_lxWS";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_mtp";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_ARX_hex_ARCO_Pointer_Snds_F: arifle_ARX_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Arco_hex_lxWS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_TI_hex_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_AK12U_F;
	class ZSN_arifle_AK12U_Hamr_F: arifle_AK12U_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_AK12_F;
	class ZSN_arifle_AK12_Holo_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_holosight_blk_f";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_AK12_GL_F;
	class ZSN_arifle_AK12_GL_ACO_Ion_F: arifle_AK12_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_RPK12_F;
	class ZSN_arifle_RPK12_Holo_F: arifle_RPK12_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_holosight_blk_f";
				slot = "CowsSlot";
			};
		};
	};
	class LMG_S77_GHex_lxWS;
	class ZSN_LMG_S77_GHex_ARCO_lxWS: LMG_S77_GHex_lxWS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_arco_ghex_f";
				slot = "CowsSlot";
			};
		};
	};
	class LMG_S77_AAF_lxWS;
	class ZSN_LMG_S77_AAF_ACO_Pointer_lxWS: LMG_S77_AAF_lxWS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class srifle_EBR_blk_lxWS;
	class ZSN_srifle_EBR_blk_AMS_LP_lxWS: srifle_EBR_blk_lxWS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_AMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_01_tan_RF;
	class ZSN_srifle_DMR_01_tan_RF: srifle_DMR_01_tan_RF
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_Mk20C_plain_F;
	class zsn_arifle_Mk20C_plain_flashlight_F: arifle_Mk20C_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class zsn_arifle_Mk20C_plain_holo_pointer_F: arifle_Mk20C_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight_khk_F";
			};
		};
	};
	class arifle_Mk20_plain_F;
	class zsn_arifle_Mk20_plain_ACO_IR_snd_F: arifle_Mk20_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_ACO_grn";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "suppressor_l_lxWS";
			};
		};
	};
	class zsn_arifle_Mk20_plain_Hamr_IR_snd_F: arifle_Mk20_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Hamr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "suppressor_l_lxWS";
			};
		};
	};
	class arifle_Mk20_GL_plain_F;
	class ZSN_arifle_Mk20_GL_plain_snd_F: arifle_Mk20_GL_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "suppressor_l_lxWS";
			};
		};
	};
	class ZSN_arifle_Mk20_GL_plain_ACO_snd_F: arifle_Mk20_GL_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "suppressor_l_lxWS";
			};
		};
	};
	class hgun_Glock19_khk_RF;
	class ZSN_hgun_Glock19_khk_MRD_light_RF: hgun_Glock19_khk_RF
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRD_black";
			};
		};
	};
	class ZSN_hgun_Glock19_khk_MRD_snd_RF: hgun_Glock19_khk_RF
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRD_khk_RF";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};
	class ZSN_hgun_Glock19_khk_MRD_blk_snd_RF: hgun_Glock19_khk_RF
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRD_black";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};
	class hgun_Glock19_auto_khk_RF;
	class ZSN_hgun_Glock19_auto_khk_MRD_snd_RF: hgun_Glock19_auto_khk_RF
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRD_khk_RF";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};
	class hgun_Glock19_RF;
	class ZSN_hgun_Glock19_IRlight_RF: hgun_Glock19_RF
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight_IR_pistol_RF";
			};
		};
	};
	class hgun_Glock19_auto_RF;
	class ZSN_hgun_Glock19_auto_IRlight_RF: hgun_Glock19_auto_RF
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR_pistol_RF";
			};
		};
	};
	class Rifle_Long_Base_F;
	class srifle_h6_base_rf: Rifle_Long_Base_F
	{
		ace_overheating_closedBolt = 1;
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class Box_NATO_WpsSpecial_F: NATO_Box_Base
	{
		class TransportWeapons
		{
			class _xx_srifle_h6_blk_rf
			{
				weapon = "srifle_h6_blk_rf";
				count = 1;
			};
			delete _xx_srifle_EBR_F;
			class _xx_srifle_EBR_blk_lxWS
			{
				weapon = "srifle_EBR_blk_lxWS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_556x45_AP_Stanag_Tan_RF
			{
				magazine = "20Rnd_556x45_AP_Stanag_Tan_RF";
				count = 8;
			};
		};
	};
	class Box_T_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
	{
		class TransportWeapons
		{
			class _xx_srifle_h6_blk_rf
			{
				weapon = "srifle_h6_blk_rf";
				count = 1;
			};
			delete _xx_srifle_EBR_F;
			class _xx_srifle_EBR_blk_lxWS
			{
				weapon = "srifle_EBR_blk_lxWS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_556x45_AP_Stanag_RF
			{
				magazine = "20Rnd_556x45_AP_Stanag_RF";
				count = 8;
			};
		};
	};
	class ION_Box_Wps_lxWS: NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_hgun_P07_blk_F;
			class _xx_hgun_Rook40_F
			{
				weapon = "hgun_Rook40_F";
				count = 1;
			};
		};
	};
	class I_supplyCrate_F;
	class I_EAF_supplyCrate_F: I_supplyCrate_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 36;
			};
		};
	};
	class Box_IND_WpsSpecial_F;
	class Box_EAF_WpsSpecial_F: Box_IND_WpsSpecial_F
	{
		class TransportWeapons
		{
			delete _xx_srifle_DMR_02_F;
			class _xx_srifle_h6_digi_rf
			{
				weapon = "srifle_h6_digi_rf";
				count = 1;
			};
			delete _xx_MMG_02_black_RCO_BI_F;
			class _xx_ZSN_LMG_S77_AAF_ACO_Pointer_lxWS
			{
				weapon = "ZSN_LMG_S77_AAF_ACO_Pointer_lxWS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_10Rnd_338_Mag;
			class _xx_10Rnd_556x45_AP_Stanag_red_khk_RF
			{
				magazine = "10Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 8;
			};
			delete _xx_130Rnd_338_Mag;
			class _xx_100Rnd_762x51_S77_Red_lxWS
			{
				magazine = "100Rnd_762x51_S77_Red_lxWS";
				count = 4;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 6;
			};
		};
	};
	class Box_IND_Ammo_F;
	class Box_EAF_Ammo_F: Box_IND_Ammo_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 36;
			};
		};
	};
	class Box_NATO_Equip_F;
	class Box_GEN_Equip_F: Box_NATO_Equip_F
	{
		class TransportWeapons
		{
			delete _xx_hgun_Rook40_F;
			class _xx_hgun_Glock19_RF
			{
				weapon = "hgun_Glock19_RF";
				count = 6;
			};
		};
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			class _xx_17Rnd_9x19_Mag_RF
			{
				magazine = "17Rnd_9x19_Mag_RF";
				count = 24;
			};
		};
	};
	class B_Carryall_eaf_F;
	class B_Carryall_eaf_IEAmmo_F: B_Carryall_eaf_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 12;
			};
		};
	};
	class B_ViperHarness_hex_F;
	class B_ViperHarness_hex_LAT_lxWS: B_ViperHarness_hex_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 5;
			};
		};
	};
	class B_recon_F;
	class B_D_recon_lxWS: B_recon_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};
	};
	class B_recon_LAT_F;
	class B_D_recon_LAT_lxWS: B_recon_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_snds_F","Throw","Put"};
	};
	class B_recon_exp_F;
	class B_D_recon_exp_lxWS: B_recon_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put"};
	};
	class B_officer_F;
	class B_crew_F;
	class B_ION_crew_lxWS: B_crew_F
	{
		weapons[] = {"hgun_PDW2000_r1_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"hgun_PDW2000_r1_lxWS","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_F;
	class B_ION_Soldier_lxWS: B_Soldier_F
	{
		weapons[] = {"arifle_XMS_M_Holosight_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_XMS_M_Holosight_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_QRF_Soldier_RF: B_Soldier_F
	{
		weapons[] = {"zsn_arifle_Mk20_plain_ACO_IR_snd_F","ZSN_hgun_Glock19_khk_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"zsn_arifle_Mk20_plain_ACO_IR_snd_F","ZSN_hgun_Glock19_khk_MRD_snd_RF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","17Rnd_9x19_Mag_RF","65Rnd_9x19_Mag_RF","65Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","17Rnd_9x19_Mag_RF","65Rnd_9x19_Mag_RF","65Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_medic_F;
	class B_ION_medic_lxWS: B_medic_F
	{
		weapons[] = {"arifle_XMS_Base_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_XMS_Base_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_QRF_medic_RF: B_medic_F
	{
		weapons[] = {"zsn_arifle_Mk20C_plain_flashlight_F","hgun_Glock19_khk_RF","Throw","Put"};
		respawnWeapons[] = {"zsn_arifle_Mk20C_plain_flashlight_F","hgun_Glock19_khk_RF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AR_F;
	class B_QRF_Soldier_AR_RF: B_soldier_AR_F
	{
		weapons[] = {"ZSN_LMG_03_aco_pointer_F","ZSN_hgun_Glock19_khk_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_aco_pointer_F","ZSN_hgun_Glock19_khk_MRD_snd_RF","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Soldier_GL_F;
	class B_ION_Soldier_GL_lxWS: B_Soldier_GL_F
	{
		weapons[] = {"arifle_XMS_GL_ACO_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_XMS_GL_ACO_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_QRF_Soldier_GL_RF: B_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_plain_ACO_snd_F","hgun_Glock19_khk_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_plain_ACO_snd_F","hgun_Glock19_khk_RF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_Soldier_TL_F;
	class B_ION_TL_lxWS: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_AK12_Holo_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_Holo_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_ION_Story_Givens_lxWS: B_Soldier_TL_F
	{
		weapons[] = {"arifle_XMS_M_Holosight_bipod_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_XMS_M_Holosight_bipod_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_Soldier_SL_F;
	class B_QRF_Soldier_SL_RF: B_Soldier_SL_F
	{
		weapons[] = {"zsn_arifle_Mk20_plain_Hamr_IR_snd_F","hgun_Glock19_khk_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"zsn_arifle_Mk20_plain_Hamr_IR_snd_F","hgun_Glock19_khk_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_LAT2_F;
	class B_QRF_soldier_LAT2_RF: B_Soldier_LAT2_F
	{
		weapons[] = {"zsn_arifle_Mk20C_plain_holo_pointer_F","launch_MRAWS_olive_F","ZSN_hgun_Glock19_khk_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"zsn_arifle_Mk20C_plain_holo_pointer_F","launch_MRAWS_olive_F","ZSN_hgun_Glock19_khk_MRD_snd_RF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_UAV_F;
	class B_soldier_UAV_lxWS: B_soldier_UAV_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_ION_soldier_UAV_01_lxWS: B_soldier_UAV_F
	{
		weapons[] = {"ZSN_arifle_AK12_GL_ACO_Ion_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_AK12_GL_ACO_Ion_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_shell_RF","1Rnd_RC40_SmokeRed_shell_RF","1Rnd_RC40_SmokeGreen_shell_RF","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_shell_RF","1Rnd_RC40_SmokeRed_shell_RF","1Rnd_RC40_SmokeGreen_shell_RF","Chemlight_green","Chemlight_green"};
	};
	class B_ION_soldier_UAV_02_lxWS: B_ION_soldier_UAV_01_lxWS
	{
		weapons[] = {"ZSN_arifle_AK12U_Hamr_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_Hamr_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_QRF_soldier_UAV_RF: B_soldier_UAV_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_plain_snd_F","ZSN_hgun_Glock19_khk_MRD_light_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_plain_snd_F","ZSN_hgun_Glock19_khk_MRD_light_RF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","MiniGrenade","MiniGrenade","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_shell_RF","1Rnd_RC40_SmokeRed_shell_RF","1Rnd_RC40_SmokeGreen_shell_RF","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","MiniGrenade","MiniGrenade","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_HE_shell_RF","1Rnd_RC40_shell_RF","1Rnd_RC40_SmokeRed_shell_RF","1Rnd_RC40_SmokeGreen_shell_RF","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_base_F;
	class B_soldier_M_F: B_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_plain_sb_mtp_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_plain_sb_mtp_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_T_soldier_M_F: B_soldier_M_F
	{
		linkedItems[] = {"H_HelmetB_plain_sb_tna_RF","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"H_HelmetB_plain_sb_tna_RF","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class B_W_soldier_M_F: B_soldier_M_F
	{
		linkedItems[] = {"H_HelmetB_plain_sb_wdl_RF","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_sb_wdl_RF","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Sharpshooter_F: B_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_plain_sb_mtp_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB_plain_sb_mtp_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_QRF_Sharpshooter_RF: B_Sharpshooter_F
	{
		weapons[] = {"srifle_h6_tan_DMS_bpd_RF","ZSN_hgun_Glock19_khk_MRD_blk_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_h6_tan_DMS_bpd_RF","ZSN_hgun_Glock19_khk_MRD_blk_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","65Rnd_9x19_Mag_RF","65Rnd_9x19_Mag_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","65Rnd_9x19_Mag_RF","65Rnd_9x19_Mag_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class ZSN_B_T_Sharpshooter_F: B_Sharpshooter_F
	{
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_soldier_M_F.jpg";
		faction = "BLU_T_F";
		uniformClass = "U_B_T_Soldier_F";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\BLUFOR\Data\U_BT_Soldier_F_tna_co.paa"};
		linkedItems[] = {"H_HelmetB_plain_sb_tna_RF","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"H_HelmetB_plain_sb_tna_RF","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_srifle_EBR_blk_AMS_LP_lxWS","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_EBR_blk_AMS_LP_lxWS","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag","20Rnd_762x51_Mag_blk_lxWS","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class ZSN_B_Soldier_Urban_base: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_F;
	class ZSN_B_RadioOperator_U_F: ZSN_B_soldierU_F
	{
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_Soldier_U_CBRN_F: ZSN_B_soldierU_F
	{
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_FL_F","ZSN_hgun_Glock19_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_FL_F","ZSN_hgun_Glock19_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_AR_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_SW_Black_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_Black_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_AAR_F: ZSN_B_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_LAT_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_NLAW_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_NLAW_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_AT_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_I_Titan_short_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_I_Titan_short_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_AAT_F: ZSN_B_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_AA_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_B_Titan_olive_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_B_Titan_olive_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_AAA_F: ZSN_B_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_TL_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_medic_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_Black_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_SoldierU_SL_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_repair_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_exp_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_engineer_U_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_soldierU_M_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_plain_sb_khaki_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_plain_sb_khaki_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
	};
	class ZSN_B_soldierU_A_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_SoldierU_GL_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_MX_GL_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_Black_Holo_pointer_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_Urban_Sharpshooter_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_srifle_DMR_02_AMS_LP_BI_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_02_AMS_LP_BI_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_plain_sb_khaki_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_plain_sb_khaki_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
};
	class ZSN_B_Urban_HeavyGunner_F: ZSN_B_Soldier_Urban_base
	{
		weapons[] = {"ZSN_MMG_02_black_ERCO_LP_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_02_black_ERCO_LP_F","ZSN_hgun_Glock19_auto_IRlight_RF","Throw","Put"};
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_ION_marksman_lxWS: B_soldier_M_F
	{
		weapons[] = {"ZSN_arifle_RPK12_Holo_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_RPK12_Holo_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_ION_shot_lxWS: B_ION_Soldier_lxWS
	{
		weapons[] = {"arifle_XMS_Shot_ACO_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_XMS_Shot_ACO_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_ION_Soldier_SG_lxWS: B_ION_Soldier_lxWS
	{
		weapons[] = {"sgun_aa40_Holosight_blk_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"sgun_aa40_Holosight_blk_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class I_PMC_Soldier_01_lxWS: B_Soldier_F
	{
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_TL_ard_F: B_CTRG_Soldier_TL_tna_F
	{
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Soldier_TL_lxWS: B_CTRG_Soldier_TL_tna_F
	{
		weapons[] = {"arifle_VelkoR5_snake_Holo_IR_Snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_VelkoR5_snake_Holo_IR_Snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		magazines[] = {"50Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_Exp_ard_F: B_CTRG_Soldier_Exp_tna_F
	{
		weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Soldier_Exp_lxWS: B_CTRG_Soldier_Exp_tna_F
	{
		weapons[] = {"glaunch_GLX_snake_lxWS","hgun_Glock19_Tan_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"glaunch_GLX_snake_lxWS","hgun_Glock19_Tan_RF","Throw","Put","Binocular"};
		magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareYellow_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","1Rnd_Pellet_Grenade_shell_lxWS","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareYellow_F","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_support_CMort_RF: B_D_CTRG_Soldier_Exp_lxWS
	{
		weapons[] = {"arifle_VelkoR5_snake_IR_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_snake_IR_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_Medic_ard_F: B_CTRG_Soldier_Medic_tna_F
	{
		weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Soldier_Medic_lxWS: B_CTRG_Soldier_Medic_tna_F
	{
		weapons[] = {"arifle_VelkoR5_snake_IR_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_snake_IR_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_M_ard_F: B_CTRG_Soldier_M_tna_F
	{
		weapons[] = {"arifle_MXM_SOS_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Soldier_M_lxWS: B_CTRG_Soldier_M_tna_F
	{
		weapons[] = {"srifle_EBR_snake_Hamr_Pointer_Bipod_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_EBR_snake_Hamr_Pointer_Bipod_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","20Rnd_762x51_Mag_snake_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class B_D_CTRG_Soldier_sniper_lxWS: B_D_CTRG_Soldier_M_lxWS
	{
		weapons[] = {"srifle_GM6_snake_DMS_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_snake_DMS_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Sharpshooter_lxWS: B_D_CTRG_Soldier_M_lxWS
	{
		weapons[] = {"srifle_h6_tan_vrco_snd_rf","ZSN_hgun_Glock19_khk_MRD_light_RF","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_h6_tan_vrco_snd_rf","ZSN_hgun_Glock19_khk_MRD_light_RF","Throw","Put","Rangefinder"};
		magazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","33Rnd_9x19_Mag_khk_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_ard_F: B_CTRG_Soldier_tna_F
	{
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Soldier_lxWS: B_CTRG_Soldier_tna_F
	{
		weapons[] = {"arifle_SLR_Para_snake_holosight_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_SLR_Para_snake_holosight_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_Snake_reload_tracer_Red_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_NLAW_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_NLAW_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_LAT_ard_F: B_CTRG_Soldier_LAT_tna_F
	{
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_NLAW_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_NLAW_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_LAT2_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_MRAWS_olive_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_MRAWS_olive_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_LAT2_ard_F: B_CTRG_Soldier_LAT2_tna_F
	{
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_MRAWS_sand_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_MRAWS_sand_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Soldier_LAT2_lxWS: B_CTRG_Soldier_LAT2_tna_F
	{
		weapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","launch_MRAWS_sand_F","hgun_Glock19_Tan_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","launch_MRAWS_sand_F","hgun_Glock19_Tan_RF","Throw","Put","Binocular"};
		magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_SW_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag_tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag_tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_AR_ard_F: B_CTRG_Soldier_AR_tna_F
	{
		weapons[] = {"ZSN_arifle_MX_SW_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_tracer","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_Soldier_HG_lxWS: B_CTRG_Soldier_AR_tna_F
	{
		weapons[] = {"LMG_S77_Compact_Snakeskin_Holosight_Pointer_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		respawnWeapons[] = {"LMG_S77_Compact_Snakeskin_Holosight_Pointer_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		magazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_GL_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_khk_ERCO_pointer_F","ZSN_hgun_Glock19_auto_khk_MRD_snd_RF","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class ZSN_B_CTRG_Soldier_JTAC_ard_F: B_CTRG_Soldier_JTAC_tna_F
	{
		weapons[] = {"ZSN_arifle_MX_GL_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_ERCO_pointer_F","hgun_Glock19_auto_Tan_MRD_snd_RF","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_D_CTRG_Soldier_JTAC_lxWS: B_CTRG_Soldier_JTAC_tna_F
	{
		weapons[] = {"arifle_VelkoR5_GL_snake_Hamr_IR_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"arifle_VelkoR5_GL_snake_Hamr_IR_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put","Laserdesignator"};
		magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class B_D_CTRG_Soldier_SG_lxWS:B_ION_Soldier_SG_lxWS
	{
		weapons[] = {"sgun_aa40_snake_Holo_IR_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put"};
		respawnWeapons[] = {"sgun_aa40_snake_Holo_IR_snd_lxWS","hgun_Glock19_Tan_MRD_snd_RF","Throw","Put"};
		magazines[] = {"20Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Smoke_Snake_lxWS","20Rnd_12Gauge_AA40_HE_Snake_lxWS","8Rnd_12Gauge_AA40_HE_Snake_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Pellets_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Slug_Snake_lxWS","8Rnd_12Gauge_AA40_Smoke_Snake_lxWS","20Rnd_12Gauge_AA40_HE_Snake_lxWS","8Rnd_12Gauge_AA40_HE_Snake_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","Chemlight_green","Chemlight_green"};
	};
	class B_D_CTRG_soldier_UAV_lxWS: B_soldier_UAV_F
	{
		weapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_snake_R1_IR_lxWS","hgun_Glock19_Tan_RF","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","35Rnd_556x45_Velko_snake_reload_tracer_red_lxWS","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_G_Soldier_SL_F;
	class B_G_Scout_RF: B_G_Soldier_SL_F
	{
		weapons[] = {"srifle_h6_oli_vrco_snd_RF","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_h6_oli_vrco_snd_RF","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_Soldier_base_F;
	class I_Soldier_M_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class I_soldier_UAV_F;
	class I_soldier_UAV_lxWS: I_soldier_UAV_F
	{
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_crew_F;
	class I_SFIA_crew_lxWS: I_crew_F
	{
		weapons[] = {"SMG_02_F","Throw","Put"};
		respawnWeapons[] = {"SMG_02_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","MiniGrenade","MiniGrenade"};
	};
	class I_SFIA_defector_lxWS;
	class B_Tura_defector_lxWS: I_SFIA_defector_lxWS
	{
		modelSides[] = {"TWEST",3};
		side = 1;
		faction = "BLU_TURA_lxWS";
	};
	class I_Soldier_TL_F;
	class I_SFIA_Soldier_TL_lxWS: I_Soldier_TL_F
	{
		weapons[] = {"arifle_SLR_ARCO_lxWS","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
		respawnweapons[] = {"arifle_SLR_ARCO_lxWS","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_GL_F;
	class I_SFIA_Soldier_GL_lxWS : I_Soldier_GL_F
	{
		weapons[] = {"arifle_SLR_GL_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SLR_GL_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};
	};
	class I_officer_F;
	class I_SFIA_officer_lxWS: I_officer_F
	{
		weapons[] = {"arifle_SLR_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SLR_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_G_Soldier_exp_F;
	class I_SFIA_exp_lxWS: I_G_Soldier_exp_F
	{
		weapons[] = {"arifle_Galat_ACO_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Galat_ACO_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_medic_F;
	class I_SFIA_medic_lxWS: I_G_medic_F
	{
		weapons[] = {"arifle_Galat_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnweapons[] = {"arifle_Galat_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class O_SFIA_Soldier_AR_lxWS;
	class O_SFIA_HeavyGunner_lxWS: O_SFIA_Soldier_AR_lxWS
	{
		weapons[] = {"LMG_S77_ACO_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnweapons[] = {"LMG_S77_ACO_lxWS","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_tracer_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_lxWS","100Rnd_762x51_S77_green_tracer_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class O_HeavyGunner_F;
	class ZSN_O_T_HeavyGunner_F: O_HeavyGunner_F
	{
		faction = "OPF_T_F";
		genericNames = "ChineseMen";
		uniformClass = "U_O_T_Soldier_F";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\OPFOR\Data\clothing_tna_CO.paa","\A3\Characters_F_Exp\OPFOR\Data\tech_tna_CO.paa"};
		weapons[] = {"ZSN_LMG_S77_GHex_ARCO_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_S77_GHex_ARCO_lxWS","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_A_Soldier_AR_lxWS;
	class O_A_HeavyGunner_lxWS: O_A_Soldier_AR_lxWS
	{
		editorSubcategory = "EdSubcat_Personnel_Story";
	};
	class O_Soldier_base_F;
	class O_soldier_M_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo_sb_hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo_sb_hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_soldier_M_F: O_soldier_M_F
	{
		linkedItems[] = {"H_HelmetIA_sb_arid_RF","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetIA_sb_arid_RF","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_A_soldier_base_F;
	class O_A_soldier_M_F: O_A_soldier_base_F
	{
		linkedItems[] = {"V_BandollierB_cbr","H_HelmetB_plain_sb_hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr","H_HelmetB_plain_sb_hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_R_Soldier_Base_F;
	class O_R_soldier_M_F: O_R_Soldier_Base_F
	{
		linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_sb_taiga_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
		respawnLinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_sb_taiga_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
	};
	class O_Soldier_Urban_base;
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_HarnessO_gry","H_HelmetO_ocamo_sb_urban_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetO_ocamo_sb_urban_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_M_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_srifle_DMR_01_tan_RF","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_srifle_DMR_01_tan_RF","hgun_Rook40_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_ocamo_sb_urban_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_ocamo_sb_urban_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class B_GEN_Soldier_base_F: B_Soldier_F
	{
		weapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
	};
	class B_GEN_Commander_F: B_GEN_Soldier_base_F
	{
		weapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
	};
	class B_Captain_Dwarden_F: B_GEN_Commander_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_holo_F","hgun_Glock19_RF","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_holo_F","hgun_Glock19_RF","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};
	};
	class O_crew_F;
	class O_GEN_crew_lxWS: O_crew_F
	{
		weapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
	};
	class B_Helipilot_F;
	class B_GEN_Helipilot_RF: B_Helipilot_F
	{
		weapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
	};
	class B_ION_Helipilot_lxWS: B_Helipilot_F
	{
		scope = 1;
		scopeCurator = 1;
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_Black_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_Black_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_UN_Helipilot_lxWS: B_Helipilot_F
	{
		weapons[] = {"SMG_01_black_holo_RF","Throw","Put"};
		respawnWeapons[] = {"SMG_01_black_holo_RF","Throw","Put"};
	};
	class I_E_Soldier_base_F;
	class I_E_Soldier_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_lite_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_A_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_GL_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_E_Soldier_AR_F;
	class ZSN_I_E_HeavyGunner_F: I_E_Soldier_AR_F
	{
		displayName = "Heavy Gunner";
		weapons[] = {"ZSN_LMG_S77_AAF_ACO_Pointer_lxWS","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_S77_AAF_ACO_Pointer_lxWS","hgun_P07_F","Throw","Put"};
		magazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAR_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAA_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAT_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_UAV_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_SL_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_TL_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_E_soldier_M_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_plain_sb_geo_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_plain_sb_geo_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class I_E_Soldier_LAT_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_LAT2_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AT_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AA_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_medic_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_repair_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_exp_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_engineer_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_crew_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_officer_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_support_base_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_MG_F: I_E_Soldier_support_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_GMG_F: I_E_Soldier_support_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_Mort_F: I_E_Soldier_support_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_AMG_F: I_E_Soldier_support_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_AMort_F: I_E_Soldier_support_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_RadioOperator_F: I_E_Soldier_base_F
	{
		magazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","20Rnd_556x45_AP_Stanag_red_khk_RF","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_Pathfinder_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_plain_sb_geo_RF","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_plain_sb_geo_RF","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class ZSN_I_E_Sniper_F: I_E_Soldier_Pathfinder_F
	{
		linkedItems[] = {"V_TacVest_oli","H_HelmetB_plain_sb_geo_RF","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_HelmetB_plain_sb_geo_RF","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class Offroad_01_military_base_F;
	class I_E_Offroad_01_F: Offroad_01_military_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 12;
			};
		};
	};
	class Offroad_01_military_covered_base_F;
	class I_E_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 12;
			};
		};
	};
	class Offroad_01_military_comms_base_F;
	class I_E_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 12;
			};
		};
	};
	class I_E_APC_tracked_03_base_F;
	class I_E_APC_tracked_03_cannon_F: I_E_APC_tracked_03_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 36;
			};
		};
	};
	class Heli_light_03_unarmed_base_F;
	class I_E_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 6;
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F;
	class I_E_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "20Rnd_556x45_AP_Stanag_red_khk_RF";
				count = 6;
			};
		};
	};
};
/* class cfgweapons
{
	class arifle_TRG21_F;
	class ZSN_arifle_TRG21_ACO_F: arifle_TRG21_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_VelkoR5_lxWS;
	class ZSN_arifle_VelkoR5_ACO_lxWS: arifle_VelkoR5_lxWS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_VelkoR5_GL_lxWS;
	class ZSN_arifle_VelkoR5_GL_MRCO_lxWS: arifle_VelkoR5_GL_lxWS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_mrco";
				slot = "CowsSlot";
			};
		};
	};
};*/
/* class cfgvehicles
{
	class ReammoBox_F;
	class IG_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag_green;
			class _xx_35Rnd_556x45_Velko_reload_tracer_green_lxWS
			{
				magazine = "35Rnd_556x45_Velko_reload_tracer_green_lxWS";
				count = 24;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_TRG20_F;
			class _xx_arifle_Velko_lxWS
			{
				weapon = "arifle_Velko_lxWS";
				count = 1;
			};
			delete _xx_arifle_TRG21_F;
			class _xx_arifle_VelkoR5_lxWS
			{
				weapon = "arifle_VelkoR5_lxWS";
				count = 4;
			};
			delete _xx_arifle_TRG21_GL_F;
			class _xx_arifle_VelkoR5_GL_lxWS
			{
				weapon = "arifle_VelkoR5_GL_lxWS";
				count = 1;
			};
		};
	};
	class FIA_Box_Base_F;
	class Box_FIA_Wps_F: FIA_Box_Base_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag_green;
			class _xx_35Rnd_556x45_Velko_reload_tracer_green_lxWS
			{
				magazine = "35Rnd_556x45_Velko_reload_tracer_green_lxWS";
				count = 40;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_TRG20_F;
			class _xx_arifle_Velko_lxWS
			{
				weapon = "arifle_Velko_lxWS";
				count = 10;
			};
			delete _xx_arifle_TRG21_F;
			class _xx_arifle_VelkoR5_lxWS
			{
				weapon = "arifle_VelkoR5_lxWS";
				count = 2;
			};
			delete _xx_arifle_TRG21_GL_F;
			class _xx_arifle_VelkoR5_GL_lxWS
			{
				weapon = "arifle_VelkoR5_GL_lxWS";
				count = 2;
			};
		};
	};
	class Box_FIA_Ammo_F: FIA_Box_Base_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag_green;
			class _xx_35Rnd_556x45_Velko_reload_tracer_green_lxWS
			{
				magazine = "35Rnd_556x45_Velko_reload_tracer_green_lxWS";
				count = 24;
			};
			delete _xx_30Rnd_556x45_Stanag_Tracer_Green;
			class _xx_35Rnd_556x45_Velko_tracer_green_lxWS
			{
				magazine = "35Rnd_556x45_Velko_tracer_green_lxWS";
				count = 6;
			};
		};
	};
 	class B_Carryall_oli;
	class G_Carryall_Ammo: B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag_green;
			class _xx_35Rnd_556x45_Velko_reload_tracer_green_lxWS
			{
				magazine = "35Rnd_556x45_Velko_reload_tracer_green_lxWS";
				count = 8;
			};
		};
	}; 
	class B_UN_officer_lxWS: B_officer_F
	{
		weapons[] = {"arifle_TRG20_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_engineer_F;
	class B_UN_engineer_lxWS: B_engineer_F
	{
		weapons[] = {"ZSN_arifle_TRG21_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_TRG21_ACO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_lite_F;
	class B_UN_Soldier_lite_lxWS: B_Soldier_lite_F
	{
		weapons[] = {"arifle_TRG21_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_repair_F;
	class B_UN_soldier_repair_lxWS: B_soldier_repair_F
	{
		weapons[] = {"arifle_TRG20_Holo_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_Holo_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_UN_crew_lxWS: B_crew_F
	{
		weapons[] = {"arifle_TRG20_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_UN_soldier_lxWS: B_Soldier_F
	{
		weapons[] = {"ZSN_arifle_TRG21_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_TRG21_ACO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_UN_medic_lxWS: B_medic_F
	{
		weapons[] = {"arifle_TRG21_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_ION_soldier_AR_lxWS: B_soldier_AR_F
	{
		weapons[] = {"LMG_S77_Compact_MRCO_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"LMG_S77_Compact_MRCO_lxWS","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_UN_soldier_AR_lxWS: B_soldier_AR_F
	{
		weapons[] = {"LMG_Zafir_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_UN_HeavyGunner_lxWS: B_UN_soldier_AR_lxWS
	{
		scope = 1;
	};
	class B_UN_soldier_GL_lxWS: B_soldier_GL_F
	{
		weapons[] = {"arifle_TRG21_GL_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_GL_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_UN_Soldier_TL_lxWS: B_Soldier_TL_F
	{
		weapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class SoldierGB;
	class I_G_Soldier_base_F: SoldierGB
	{
		weapons[] = {"arifle_Velko_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_Velko_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_LAT_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Velko_lxWS","launch_RPG32_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Velko_lxWS","launch_RPG32_F","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_LAT2_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Velko_lxWS","launch_MRAWS_olive_rail_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Velko_lxWS","launch_MRAWS_olive_rail_F","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_lite_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_tracer_green_lxWS","35Rnd_556x45_Velko_tracer_green_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_tracer_green_lxWS","35Rnd_556x45_Velko_tracer_green_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_A_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		magazines[] = {"50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","50Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_engineer_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_GL_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_VelkoR5_GL_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_GL_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_G_officer_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Velko_50rnd_MRCO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_Velko_50rnd_MRCO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class B_G_Soldier_F;
	class I_G_Story_Protagonist_F: B_G_Soldier_F
	{
		weapons[] = {"ZSN_arifle_VelkoR5_GL_MRCO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_VelkoR5_GL_MRCO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
}; */