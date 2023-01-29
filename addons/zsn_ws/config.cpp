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
	class arifle_VelkoR5_lxWS;
	class ZSN_arifle_VelkoR5_ACO_lxWS: arifle_VelkoR5_lxWS
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco_grn";
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
				item = "optic_aco_grn";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
};
class CfgVehicles
{
	class B_Carryall_oli;
	class G_Carryall_Ammo: B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_35Rnd_556x45_Velko_reload_tracer_red_lxWS
			{
				magazine = "35Rnd_556x45_Velko_reload_tracer_red_lxWS";
				count = 8;
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
	class B_soldier_UAV_F;
	class B_soldier_UAV_lxWS: B_soldier_UAV_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_ION_soldier_UAV_01_lxWS: B_soldier_UAV_F
	{
		editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\B_ION_soldier_UAV_02_lxWS.jpg";
		weapons[] = {"hgun_PDW2000_Holo_snds_F","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"hgun_PDW2000_Holo_snds_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnmagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_ION_soldier_UAV_02_lxWS: B_ION_soldier_UAV_01_lxWS
	{
		weapons[] = {"hgun_PDW2000_Holo_snds_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_Holo_snds_F","hgun_Rook40_F","Throw","Put"};
	};
	class B_officer_F;
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
	class B_Soldier_F;
	class B_ION_Soldier_lxWS: B_Soldier_F
	{
		weapons[] = {"arifle_XMS_M_Holosight_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_XMS_M_Holosight_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_UN_soldier_lxWS: B_Soldier_F
	{
		weapons[] = {"ZSN_arifle_TRG21_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_TRG21_ACO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_crew_F;
	class B_ION_crew_lxWS: B_crew_F
	{
		weapons[] = {"hgun_PDW2000_r1_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"hgun_PDW2000_r1_lxWS","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_UN_crew_lxWS: B_crew_F
	{
		weapons[] = {"arifle_TRG20_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_medic_F;
	class B_ION_medic_lxWS: B_medic_F
	{
		weapons[] = {"arifle_XMS_Base_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"arifle_XMS_Base_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_UN_medic_lxWS: B_medic_F
	{
		weapons[] = {"arifle_TRG21_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AR_F;
	class B_ION_soldier_AR_lxWS: B_soldier_AR_F
	{
		weapons[] = {"LMG_S77_Compact_MRCO_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"LMG_S77_Compact_MRCO_lxWS","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
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
	class B_Soldier_GL_F;
	class B_ION_Soldier_GL_lxWS: B_Soldier_GL_F
	{
		weapons[] = {"arifle_XMS_GL_ACO_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_XMS_GL_ACO_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_UN_soldier_GL_lxWS: B_soldier_GL_F
	{
		weapons[] = {"arifle_TRG21_GL_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_GL_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_Soldier_TL_F;
	class B_ION_TL_lxWS: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_RPK12_Holo_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_RPK12_Holo_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_UN_Soldier_TL_lxWS: B_Soldier_TL_F
	{
		weapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_ION_Story_Givens_lxWS: B_Soldier_TL_F
	{
		weapons[] = {"arifle_XMS_M_Holosight_bipod_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_XMS_M_Holosight_bipod_lxWS","hgun_Rook40_F","Throw","Put"};
	};
	class B_soldier_M_F;
	class B_ION_marksman_lxWS: B_soldier_M_F
	{
		weapons[] = {"srifle_EBR_blk_holosight_bpd_lxWS","hgun_Rook40_F","Throw","Put"};
		respawnweapons[] = {"srifle_EBR_blk_holosight_bpd_lxWS","hgun_Rook40_F","Throw","Put"};
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
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class SoldierGB;
	class I_G_Soldier_base_F: SoldierGB
	{
		weapons[] = {"arifle_Velko_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_Velko_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_LAT_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Velko_lxWS","launch_RPG32_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Velko_lxWS","launch_RPG32_F","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_LAT2_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Velko_lxWS","launch_MRAWS_olive_rail_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Velko_lxWS","launch_MRAWS_olive_rail_F","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_lite_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_tracer_red_lxWS","35Rnd_556x45_Velko_tracer_red_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_tracer_red_lxWS","35Rnd_556x45_Velko_tracer_red_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_A_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
		magazines[] = {"50Rnd_556x45_Velko_reload_tracer_red_lxWS","50Rnd_556x45_Velko_reload_tracer_red_lxWS","50Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"50Rnd_556x45_Velko_reload_tracer_red_lxWS","50Rnd_556x45_Velko_reload_tracer_red_lxWS","50Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_engineer_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_VelkoR5_ACO_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_GL_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_VelkoR5_GL_lxWS","Throw","Put"};
		respawnWeapons[] = {"arifle_VelkoR5_GL_lxWS","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_G_officer_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_Velko_50rnd_MRCO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_Velko_50rnd_MRCO_lxWS","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_soldier_UAV_F;
	class I_soldier_UAV_lxWS: I_soldier_UAV_F
	{
		weapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_C_Soldier_Bandit_2_F;
	class I_SFIA_hireling_lxWS: I_C_Soldier_Bandit_2_F
	{
		weapons[] = {"SMG_05_F","launch_RPG32_F","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","launch_RPG32_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","RPG32_F"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","RPG32_F"};
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
		magazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_Tracer_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_Tracer_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_E_Soldier_AR_F;
	class ZSN_I_E_HeavyGunner_F: I_E_Soldier_AR_F
	{
		displayName = "Heavy Gunner";
		weapons[] = {"ZSN_LMG_S77_AAF_ACO_Pointer_lxWS","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_S77_AAF_ACO_Pointer_lxWS","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
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
};
