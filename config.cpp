////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class bsl_marksmen : config.bin{
class CfgPatches
{
	class ZSN_Loadouts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Mark","A3_Characters_F_Exp","A3_Characters_F_Jets","A3_Characters_F_Patrol"};
	};
};
class cfgWeapons
{
	class LMG_Mk200_F;
	class ZSN_LMG_Mk200_BI_F: LMG_Mk200_F
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "bipod_02_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class ZSN_LMG_Mk200_LP_BI_F: ZSN_LMG_Mk200_BI_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_01_snd_F;
	class ZSN_arifle_SPAR_01_snd_Hamr_pointer_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr_khk_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_SPAR_01_GL_snd_F;
	class ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F: arifle_SPAR_01_GL_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_SPAR_03_snd_F;
	class ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F: arifle_SPAR_03_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_SOS_khk_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_mtp";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_b_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_SPAR_01_khk_F;
	class ZSN_arifle_SPAR_01_khk_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_khk_ACO_F: arifle_SPAR_01_khk_F
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
	class ZSN_arifle_SPAR_01_khk_ACO_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_khk_Holo_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_khk_Hamr_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_01_GL_khk_F;
	class ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F: arifle_SPAR_01_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_02_khk_F;
	class ZSN_arifle_SPAR_02_khk_pointer_F: arifle_SPAR_02_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_khk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_03_khk_F;
	class ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F: arifle_SPAR_03_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_khk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_01_blk_F;
	class ZSN_arifle_SPAR_01_blk_Holo_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_gend_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_F;
	class ZSN_arifle_MX_ERCO_pointer_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_snd_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_Black_F;
	class ZSN_arifle_MX_Black_ERCO_pointer_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_GL_Black_F;
	class ZSN_arifle_MX_GL_Black_ERCO_pointer_F: arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_SW_Black_F;
	class ZSN_arifle_MX_SW_Black_ERCO_pointer_F: arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
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
	class arifle_MXM_Black_F;
	class ZSN_arifle_MXM_Black_SOS_pointer_F: arifle_MXM_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_SOS";
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
	class arifle_MX_khk_F;
	class ZSN_arifle_MX_khk_ERCO_pointer_F: arifle_MX_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_Mk20c_plain_F;
	class ZSN_arifle_Mk20c_ACO_pointer_plain_F: arifle_Mk20c_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_Mk20c_pointer_plain_F: arifle_Mk20c_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_Mk20c_ACO_plain_F: arifle_Mk20c_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_Mk20_plain_F;
	class ZSN_arifle_Mk20_ACO_pointer_plain_F: arifle_Mk20_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_Mk20_pointer_plain_F: arifle_Mk20_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_Mk20_ACO_plain_F: arifle_Mk20_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_Mk20_MRCO_pointer_plain_F: arifle_Mk20_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_Mk20_GL_plain_F;
	class ZSN_arifle_Mk20_GL_ACO_plain_F: arifle_Mk20_GL_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_Mk20_GL_MRCO_pointer_plain_F: arifle_Mk20_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F: arifle_Mk20c_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_snd_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_Mk20C_MRCO_pointer_snds_plain_F: arifle_Mk20C_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_snd_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_Mk20_GL_ACO_pointer_snds_plain_F: arifle_Mk20_GL_plain_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_snd_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class srifle_DMR_03_tan_F;
	class ZSN_srifle_DMR_03_tan_AMS_LP_BI_snds_F: srifle_DMR_03_tan_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_B_snd_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class srifle_DMR_04_Tan_F;
	class ZSN_srifle_DMR_04_Tan_TWS_LP_F: srifle_DMR_04_Tan_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_tws";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class hgun_Pistol_heavy_01_snds_F;
	class ZSN_hgun_Pistol_heavy_01_MRD_snds_F: hgun_Pistol_heavy_01_snds_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRD";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_acp";
				slot = "MuzzleSlot";
			};
		};
	};
	class MMG_01_tan_F;
	class ZSN_MMG_01_tan_ARCO_LP_F: MMG_01_tan_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Arco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_tan";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class MMG_01_hex_ARCO_LP_F;
	class ZSN_MMG_01_hex_ARCO_LP_F: MMG_01_hex_ARCO_LP_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_hex";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class LMG_03_F;
	class ZSN_LMG_03_pointer_F: LMG_03_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class srifle_EBR_F;
	class ZSN_srifle_EBR_AMS_LP_F: srifle_EBR_F
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
	class srifle_DMR_03_khaki_F;
	class ZSN_srifle_DMR_03_khaki_MRCO_LP_BI_F: srifle_DMR_03_khaki_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_05_tan_f;
	class ZSN_srifle_DMR_05_tan_KHS_LP_F: srifle_DMR_05_tan_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_KHS_tan";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_tan";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_05_hex_F;
	class ZSN_srifle_DMR_05_hex_LP_F: srifle_DMR_05_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_KHS_blk";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_hex";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_06_olive_F;
	class ZSN_srifle_DMR_06_olive_MRCO_F: srifle_DMR_06_olive_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_oli";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class ZSN_B_Patrol_Soldier_Leader_weapon_F: arifle_SPAR_01_GL_khk_F
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class ZSN_B_Patrol_Soldier_Operator_weapon_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class ZSN_B_Patrol_Soldier_Marksman_weapon_F: srifle_EBR_F
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
				item = "optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
		};
	};
	class ZSN_B_Patrol_Soldier_Medic_weapon_F: arifle_SPAR_01_khk_F
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class ZSN_B_Patrol_Soldier_Autorifleman_weapon_F: arifle_SPAR_02_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class ZSN_B_Patrol_Soldier_MachineGunner_weapon_F: LMG_03_F
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_MG_khk_F";
			};
		};
	};
	class LMG_Zafir_F;
	class ZSN_B_Patrol_Soldier_HeavyGunner_weapon_F: LMG_Zafir_F
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
	class ZSN_B_Patrol_Soldier_Carrier_weapon_F: arifle_SPAR_01_khk_F
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
				item = "optic_Arco";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class ZSN_B_Patrol_Soldier_Specialist_weapon_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class B_supplyCrate_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;	
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 6;
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 6;	
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;	
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
			class arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class arifle_SPAR_02_snd_F
			{
				weapon = "arifle_SPAR_02_snd_F";
				count = 1;
			};
		};
	};
	class O_supplyCrate_F : B_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 4;
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_Zafir_F;
			class _xx_ZSN_LMG_Mk200_BI_F
			{
				weapon = "ZSN_LMG_Mk200_BI_F";
				count = 1;
			};
		};
	};
	class I_supplyCrate_F : B_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine = "30Rnd_45ACP_Mag_SMG_01";
				count = 6;
			};
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 3;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_Mk20_plain_F
			{
				weapon = "arifle_Mk20_plain_F";
				count = 2;
			};
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_03_F
			{
				weapon = "LMG_03_F";
				count = 1;
			};
		};
	};
	class FIA_Box_Base_F;
	class Box_FIA_Wps_F : FIA_Box_Base_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 8;	
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_Zafir_F
			{
				weapon = "LMG_Zafir_F";
				count = 2;
			};
		};
	};
	class Box_FIA_Ammo_F : FIA_Box_Base_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 8;	
			};
		};
	};
	class NATO_Box_Base : ReammoBox_F{};
	class Box_NATO_WpsSpecial_F : NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_arifle_MXM_F;
			class _xx_arifle_SPAR_03_blk_F
			{
				weapon = "arifle_SPAR_03_blk_F";
				count = 1;
			};
			delete _xx_srifle_DMR_03_F;
			class _xx_srifle_EBR_F
			{
				weapon = "srifle_EBR_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 12;	
			};
		};
	};
	class Box_T_NATO_WpsSpecial_F : Box_NATO_WpsSpecial_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_MXM_khk_F;
			class _xx_arifle_MXM_Black_F
			{
				weapon = "arifle_MXM_Black_F";
				count = 1;
			};
			delete _xx_srifle_LRR_tna_F;
			class _xx_srifle_LRR_F
			{
				weapon = "srifle_LRR_F";
				count = 1;
			};
			delete _xx_srifle_DMR_03_woodland_F;
			class _xx_srifle_EBR_F
			{
				weapon = "srifle_EBR_F";
				count = 1;
			};
			delete _xx_srifle_DMR_02_camo_F;
			class _xx_srifle_DMR_02_F
			{
				weapon = "srifle_DMR_02_F";
				count = 1;
			};
			class _xx_arifle_SPAR_03_blk_F
			{
				weapon = "arifle_SPAR_03_blk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 12;	
			};
		};
	};
	class Box_NATO_Ammo_F : NATO_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;	
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 6;	
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 6;	
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;	
			};
			delete _xx_3Rnd_HE_Grenade_shell;
		};
	};
	class EAST_Box_Base : ReammoBox_F{};
	class Box_East_Wps_F : EAST_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 2;
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_Zafir_F;
			class _xx_ZSN_LMG_Mk200_BI_F
			{
				weapon = "ZSN_LMG_Mk200_BI_F";
				count = 2;
			};
		};
	};
	class Box_East_WpsSpecial_F : EAST_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_srifle_DMR_04_F;
			class _xx_srifle_DMR_04_Tan_F
			{
				weapon = "srifle_DMR_04_Tan_F";
				count = 1;
			};
			delete _xx_srifle_DMR_05_hex_F;
			class _xx_srifle_DMR_05_tan_f
			{
				weapon = "srifle_DMR_05_tan_f";
				count = 1;
			};
			delete _xx_MMG_01_hex_F;
			class _xx_MMG_01_tan_F
			{
				weapon = "MMG_01_tan_F";
				count = 1;
			};
		};
	};
	class Box_T_East_WpsSpecial_F : Box_East_WpsSpecial_F
	{
		class TransportWeapons
		{
			delete _xx_srifle_DMR_05_hex_F;
			class _xx_srifle_DMR_05_blk_F
			{
				weapon = "srifle_DMR_05_blk_F";
				count = 1;
			};
		};
	};
	class Box_East_Ammo_F : EAST_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 4;
			};
		};
	};
	class IND_Box_Base : ReammoBox_F{};
	class Box_IND_WpsSpecial_F : IND_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_srifle_EBR_F;
			class _xx_srifle_DMR_03_khaki_F
			{
				weapon = "srifle_DMR_03_khaki_F";
				count = 4;
			};
		};
	};
	class Box_IND_Wps_F : IND_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 2;	
			};
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 1;	
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine = "30Rnd_45ACP_Mag_SMG_01";
				count = 1;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_Mk20C_plain_F
			{
				weapon = "arifle_Mk20C_plain_F";
				count = 2;
			};
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_Mk20_plain_F
			{
				weapon = "arifle_Mk20_plain_F";
				count = 4;
			};
			delete _xx_arifle_Mk20_GL_F;
			class _xx_arifle_Mk20_GL_plain_F
			{
				weapon = "arifle_Mk20_GL_plain_F";
				count = 2;
			};
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_03_F
			{
				weapon = "LMG_03_F";
				count = 2;
			};
			delete _xx_hgun_ACPC2_F;
			class _xx_hgun_Pistol_heavy_01_F
			{
				weapon = "hgun_Pistol_heavy_01_F";
				count = 1;
			};
			delete _xx_hgun_PDW2000_F;
			class _xx_SMG_01_F
			{
				weapon = "SMG_01_F";
				count = 1;
			};
		};
	};
	class Box_IND_Ammo_F : IND_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 3;
			};
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine = "30Rnd_45ACP_Mag_SMG_01";
				count = 6;
			};
		};
	};
	class Box_Syndicate_Ammo_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_556x45_Box_F;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 4;	
			};
		};
	};
	class Box_Syndicate_Wps_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_556x45_Box_F;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 2;	
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_03_F;
			class _xx_LMG_Mk200_F
			{
				weapon = "LMG_Mk200_F";
				count = 2;
			};
		};
	};
	class Box_NATO_Wps_F : NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
			class arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 6;
			};
			delete _xx_arifle_MX_GL_F;
			class arifle_SPAR_01_GL_blk_F
			{
				weapon = "arifle_SPAR_01_GL_blk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
			delete _xx_SMG_01_F;
			class _xx_hgun_PDW2000_F
			{
				weapon = "hgun_PDW2000_F";
				count = 1;
			};
			delete _xx_hgun_Pistol_heavy_01_F;
			class hgun_ACPC2_F
			{
				weapon = "hgun_ACPC2_F";
				count = 1;
			};
			delete _xx_arifle_MXC_F;
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;	
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 1;	
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 1;
			};
		};
	};
	class Box_T_NATO_Wps_F : Box_NATO_Wps_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_MX_khk_F;
			class arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 6;
			};
			delete _xx_arifle_MX_GL_khk_F;
			class arifle_SPAR_01_GL_blk_F
			{
				weapon = "arifle_SPAR_01_GL_blk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
			delete _xx_hgun_Pistol_heavy_01_F;
			class hgun_ACPC2_F
			{
				weapon = "hgun_ACPC2_F";
				count = 1;
			};
			delete _xx_SMG_01_F;
			class hgun_PDW2000_F
			{
				weapon = "hgun_PDW2000_F";
				count = 1;
			};
			delete _xx_arifle_MXC_khk_F;
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;	
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 1;	
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 1;
			};
		};
	};
	class IG_supplyCrate_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 6;	
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_Zafir_F
			{
				weapon = "LMG_Zafir_F";
				count = 2;
			};
		};
		class TransportItems
		{
			delete _xx_bipod_03_F_oli;
		};
	};
	class C_T_supplyCrate_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 32;	
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};
			delete _xx_20Rnd_762x51_Mag;
		};
		class TransportWeapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MX_Black_F
			{
				weapon = "arifle_MX_Black_F";
				count = 2;
			};
			delete _xx_arifle_SPAR_01_GL_blk_F;
			class _xx_arifle_MX_GL_Black_F
			{
				weapon = "arifle_MX_GL_Black_F";
				count = 1;
			};
			delete _xx_arifle_SPAR_02_blk_F;
			class _xx_arifle_MX_SW_Black_F
			{
				weapon = "arifle_MX_SW_Black_F";
				count = 1;
			};
			delete _xx_arifle_SPAR_03_blk_F;
			class _xx_arifle_MXM_Black_F
			{
				weapon = "arifle_MXM_Black_F";
				count = 1;
			};
		};
	};
	class Box_East_Support_F : East_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_acp;
		};
	};
	class Box_Ind_Support_F : IND_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_L;
			delete _xx_muzzle_snds_h;
			class _xx_muzzle_snds_H_MG_blk_F
			{
				name = "muzzle_snds_H_MG_blk_F";
				count = 2;
			};
		};
	};
	class Box_NATO_Support_F : NATO_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_acp;
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 5;
			};
		};
	};
	class Box_NATO_Equip_F : ReammoBox_F{};
	class Box_GEN_Equip_F : Box_NATO_Equip_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine = "30Rnd_9x21_Mag_SMG_02";
				count = 16;	
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;	
			};
		};
		class TransportWeapons
		{
			delete _xx_hgun_P07_F;
			class _xx_hgun_Rook40_F
			{
				weapon = "hgun_Rook40_F";
				count = 6;
			};
			class _xx_SMG_05_F
			{
				weapon = "SMG_05_F";
				count = 4;
			};
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_optic_Holosight_blk_F
			{
				name = "optic_Holosight_blk_F";
				count = 2;
			};
			delete _xx_muzzle_snds_L;
			class _xx_muzzle_snds_m
			{
				name = "muzzle_snds_m";
				count = 2;
			};
		};
	};
	class B_TacticalPack_mcamo;
	class B_AssaultPack_mcamo_AAR : B_TacticalPack_mcamo
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_mag_Tracer;
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
				count = 4;
			};
		};
	};
	class B_Carryall_ghex_F;
	class B_Carryall_ghex_OTAAR_AAR_F : B_Carryall_ghex_F
	{
		class TransportItems
		{
			class _xx_muzzle_snds_58_blk_F
			{
				name = "muzzle_snds_58_blk_F";
				count = 1;
			};
		};
	};
	class B_Carryall_mcamo;
	class B_AssaultPack_mcamo_Ammo : B_Carryall_mcamo
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 1;
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
		};
	};
	class B_Carryall_cbr;
	class zsn_B_AssaultPack_cbr_Ammo : B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 6;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 1;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 1;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 3;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine = "3Rnd_HE_Grenade_shell";
				count = 1;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine = "10Rnd_338_Mag";
				count = 2;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 2;
			};
		};
	};
	class B_Kitbag_rgr;
	class B_Kitbag_rgr_AAR : B_Kitbag_rgr
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_100Rnd_65x39_caseless_mag_Tracer;
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
				count = 2;
			};
		};
		class TransportItems
		{
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 1;
			};
			delete _xx_bipod_01_F_snd;
			class _xx_bipod_01_F_blk
			{
				name = "bipod_01_F_blk";
				count = 1;
			};
		};
	};
	class B_Carryall_ocamo;
	class B_FieldPack_ocamo_AAR : B_Carryall_ocamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 4;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 2;
			};
		};
	};
	class B_Carryall_oucamo;
	class B_FieldPack_oucamo_AAR : B_Carryall_oucamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 1;
			};
		};
	};
	class B_Carryall_ocamo_AAR : B_Carryall_ocamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_bipod_02_F_hex;
			class _xx_bipod_02_F_blk
			{
				name = "bipod_02_F_blk";
				count = 1;
			};
			class _xx_muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 1;
			};
		};
	};
	class B_FieldPack_cbr_Ammo : B_Carryall_ocamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
		};
	};
	class B_Carryall_oucamo_AAR : B_Carryall_oucamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_bipod_02_F_hex;
			class _xx_bipod_02_F_blk
			{
				name = "bipod_02_F_blk";
				count = 1;
			};
			class _xx_muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 1;
			};
		};
	};
	class B_FieldPack_oucamo_Ammo : B_Carryall_oucamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
		};
	};
	class B_Carryall_oli;
	class B_Carryall_oli_BTAmmo_F : B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 1;
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
		};
	};
	class I_Fieldpack_oli_Ammo : B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 1;
			};
		};
	};
	class B_TacticalPack_oli;
	class I_Fieldpack_oli_AAR : B_TacticalPack_oli
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 2;
			};
			delete _xx_200Rnd_65x39_cased_Box_Tracer;
			class _xx_200Rnd_556x45_Box_Tracer_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_F";
				count = 2;
			};
		};
	};
	class B_AssaultPack_dgtl;
	class ZSN_I_AssaultPack_dgtl_ReconMedic : B_AssaultPack_dgtl
	{
		author = "ZluskeN";
		scope = 1;
		class TransportItems 
		{
			class _xx_FirstAidKit 
			{
				count = 5;
				name = "FirstAidKit";
			};
			class _xx_Medikit 
			{
				count = 1;
				name = "Medikit";
			};
		};
		class TransportMagazines 
		{
			class _xx_SmokeShellBlue 
			{
				count = 1;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellOrange 
			{
				count = 1;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeShellGreen 
			{
				count = 1;
				magazine = "SmokeShellRed";
			};
		};
	};
	class G_Carryall_Ammo : B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 1;
			};
		};
	};
	class B_TacticalPack_oli_AAR : B_TacticalPack_oli
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 3;
			};
			delete _xx_200Rnd_65x39_cased_Box_Tracer;
			class _xx_200Rnd_556x45_Box_Tracer_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_F";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_muzzle_snds_h;
			class _xx_muzzle_snds_H_MG_blk_F
			{
				name = "muzzle_snds_H_MG_blk_F";
				count = 1;
			};
		};
	};
	class B_Kitbag_mcamo;
	class B_Patrol_Supply_bag_F: B_Kitbag_mcamo
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 1;
			};
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
		};
	};
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	class B_Soldier_base_F: SoldierWB
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Soldier_02_f: B_Soldier_base_F{};
	class B_Soldier_03_f: B_Soldier_base_F{};
	class B_Soldier_04_f: B_Soldier_base_F{};
	class B_Soldier_05_f : B_Soldier_base_F{};
	class B_Pilot_F : B_Soldier_05_f
	{
		weapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShell","SmokeShellBlue","Chemlight_green"};
	};
	class B_Soldier_F : B_Soldier_base_F{};
	class B_GEN_Soldier_base_F : B_Soldier_F{};
	class B_GEN_Soldier_F : B_GEN_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
	};
	class B_GEN_Commander_F : B_GEN_Soldier_base_F
	{
		weapons[] = {"SMG_05_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"SMG_05_F","hgun_Rook40_F","Throw","Put","Binocular"};
	};
	class B_Soldier_lite_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_F : B_Soldier_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_Soldier_GL_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_GL_F: B_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_Soldier_AR_F: B_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_Soldier_SL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_SL_F: B_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
	};
	class B_Soldier_TL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
	};
	class B_soldier_M_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_M_F: B_soldier_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_soldier_LAT_F: B_Soldier_base_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_LAT_F: B_soldier_LAT_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_medic_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_medic_F: B_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_soldier_repair_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_repair_F: B_soldier_repair_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_soldier_exp_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_exp_F: B_soldier_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_Soldier_A_F: B_Soldier_base_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_A_F: B_Soldier_A_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AA_F: B_soldier_AA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_engineer_F : B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_engineer_F : B_engineer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_crew_F: B_Soldier_03_f
	{
		weapons[] = {"arifle_SPAR_01_khk_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_T_Crew_F: B_crew_F
	{
		weapons[] = {"arifle_SPAR_01_khk_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_F","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Officer_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Officer_F: B_Officer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_ACPC2_F","Throw","Put"};
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		weapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Deck_Crew_F:  B_Helipilot_F
	{
		linkedItems[] = {"V_DeckCrew_yellow_F","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_DeckCrew_yellow_F","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class B_T_Helipilot_F: B_Helipilot_F
	{
		linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Helicrew_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helicrew_F: B_Helicrew_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_F","Throw","Put"};
		linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Soldier_recon_base: B_Soldier_base_F{};
	class B_recon_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_F: B_recon_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
	};
	class B_recon_LAT_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_LAT_F: B_recon_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_exp_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_exp_F: B_recon_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
	};
	class B_recon_medic_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_medic_F: B_recon_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
	};
	class B_recon_TL_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_TL_F: B_recon_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_recon_M_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_M_F: B_recon_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_recon_JTAC_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_recon_JTAC_F: B_recon_JTAC_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
	};
	class B_Soldier_sniper_base_F: B_Soldier_base_F{};
	class B_ghillie_base_F : B_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
	};
	class B_T_ghillie_tna_F : B_ghillie_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_sniper_F : B_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
	};
	class B_T_sniper_F : B_sniper_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_spotter_F: B_Soldier_sniper_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_spotter_F: B_spotter_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
	};
	class B_Story_SF_Captain_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Story_Protagonist_F : B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
	};
	class B_CTRG_soldier_AR_A_F: B_Soldier_base_F
	{
		backpack = "zsn_B_AssaultPack_cbr_Ammo";
	};
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_TL_tna_F : B_CTRG_Soldier_F
	{
		magazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_SW_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_CTRG_Soldier_3_F;
	class B_CTRG_Miller_F: B_CTRG_Soldier_3_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_support_base_F: B_Soldier_base_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_MG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_T_Support_MG_F: B_support_MG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_support_GMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_T_support_GMG_F: B_support_GMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_T_support_Mort_F: B_support_Mort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_Soldier_AAR_F;
	class B_T_Soldier_AAR_F : B_soldier_AAR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
	};
	class B_support_AMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_T_support_AMG_F: B_support_AMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_T_support_AMort_F: B_support_AMort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_Sharpshooter_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_EBR_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_EBR_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
	};
	class B_soldier_AAT_F : B_Soldier_support_base_F{};
	class B_T_Soldier_AAT_F : B_soldier_AAT_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
	};
	class B_soldier_AAA_F : B_soldier_AAT_F{};
	class B_T_Soldier_AAA_F : B_soldier_AAA_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
	};
	class B_soldier_PG_F : B_Soldier_base_F{};
	class B_T_Soldier_PG_F : B_soldier_PG_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_soldier_UAV_F : B_Soldier_base_F{};
	class B_T_Soldier_UAV_F : B_soldier_UAV_F
	{
		weapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_Patrol_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Leader_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Leader_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
	};
	class B_Patrol_Soldier_UAV_F: B_soldier_UAV_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Operator_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Operator_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_M_F: B_soldier_M_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Marksman_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Marksman_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Medic_F: B_medic_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Medic_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Medic_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade"};
	};
	class B_Patrol_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Autorifleman_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Autorifleman_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","150Rnd_556x45_Drum_Mag_Tracer_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","150Rnd_556x45_Drum_Mag_Tracer_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_MG_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_MachineGunner_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_MachineGunner_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_Tracer_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_Tracer_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_HeavyGunner_F;
	class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_HeavyGunner_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_HeavyGunner_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_A_F: B_Soldier_A_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Carrier_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Carrier_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Specialist_weapon_F","hgun_ACPC2_snds_F","launch_B_Titan_short_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Specialist_weapon_F","hgun_ACPC2_snds_F","launch_B_Titan_short_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Engineer_F: B_engineer_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Specialist_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Specialist_weapon_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class I_Soldier_base_F: SoldierGB
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_02_F : I_Soldier_base_F{};
	class I_Soldier_03_F : I_Soldier_base_F{};
	class I_Soldier_04_F : I_Soldier_base_F{};
	class I_pilot_F : I_Soldier_04_F
	{
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShell","SmokeShellGreen","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShell","SmokeShellGreen","Chemlight_green"};
	};
	class I_Fighter_Pilot_F : I_pilot_F
	{
		weapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_Soldier_lite_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_A_F: I_Soldier_02_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_ACO_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_ACO_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_LMG_03_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_SL_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_MRCO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_MRCO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_MRCO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_MRCO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_Soldier_M_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_03_khaki_MRCO_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_srifle_DMR_03_khaki_MRCO_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","launch_NLAW_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","launch_NLAW_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AA_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","launch_I_Titan_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_medic_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_repair_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_exp_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_engineer_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_crew_F: I_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Helipilot_F: I_Soldier_03_F
	{
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_helicrew_F: I_Helipilot_F
	{
		weapons[] = {"arifle_Mk20C_plain_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_plain_F","Throw","Put"};
	};
	class I_officer_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20C_ACO_plain_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_Mk20C_ACO_plain_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_diver_base_F: I_Soldier_base_F
	{
		weapons[] = {"arifle_SDAR_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_sniper_base_F: I_Soldier_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
	};
	class I_spotter_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_plain_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_03"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_sniper_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_support_base_F: I_Soldier_base_F
	{
		weapons[] = {"zsn_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"zsn_arifle_Mk20_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_support_MG_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_GMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_AMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_AMort_F: I_Soldier_support_base_F
	{
		weapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"zsn_arifle_Mk20C_ACO_pointer_plain_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class ZSN_I_Soldier_recon_base: I_Soldier_base_F
	{
		textSingular = "specop";
		textPlural = "specops";
		nameSound = "veh_infantry_SF_s";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		author = "ZluskeN";
		scope = 0;
		displayName = "Recon";
		vehicleClass = "MenRecon";
		camouflage = 0.6;
		detectSkill = 30;
	};
	class ZSN_I_recon_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Scout";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		cost = 100000;
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_LAT_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Scout (AT)";
		uniformClass = "U_IG_Guerilla1_1";
		backpack = "I_Fieldpack_oli_LAT";
		threat[] = {1,0.6,0.1};
		cost = 150000;
		icon = "iconManAT";
		linkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","launch_NLAW_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","launch_NLAW_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_exp_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Demo Specialist";
		uniformClass = "U_IG_Guerilla1_1";
		backpack = "I_Carryall_oli_Exp";
		canDeactivateMines = 1;
		detectSkill = 80;
		cost = 115000;
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		icon = "iconManExplosive";
		picture = "pictureExplosive";
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_medic_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Paramedic";
		uniformClass = "U_IG_Guerilla1_1";
		attendant = 1;
		cost = 290000;
		backpack = "ZSN_I_AssaultPack_dgtl_ReconMedic";
		icon = "iconManMedic";
		linkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		picture = "pictureHeal";
		weapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20c_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_TL_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Team Leader";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		cost = 440000;
		icon = "iconManLeader";
		linkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_Mk20C_MRCO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_Mk20C_MRCO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_M_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Marksman";
		uniformClass = "U_I_CombatUniform";
		cost = 140000;
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		weapons[] = {"ZSN_srifle_DMR_03_tan_AMS_LP_BI_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_srifle_DMR_03_tan_AMS_LP_BI_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_JTAC_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon JTAC";
		uniformClass = "U_I_CombatUniform";
		cost = 200000;
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_Mk20_GL_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_ACO_pointer_snds_plain_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class ZSN_I_Pathfinder_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Pathfinder";
		uniformClass = "U_I_CombatUniform";
		textSingular = "sniper";
		textPlural = "snipers";
		nameSound = "veh_infantry_sniper_s";
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_srifle_DMR_04_Tan_TWS_LP_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","laserdesignator_02"};
		respawnWeapons[] = {"ZSN_srifle_DMR_04_Tan_TWS_LP_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","laserdesignator_02"};
		magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
		respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
	};
	class I_G_Soldier_base_F: SoldierGB{};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
	{
		weapons[] = {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_M_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_06_olive_MRCO_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_06_olive_MRCO_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_C_Soldier_base_F : I_G_Soldier_base_F{};
	class I_C_Soldier_Para_4_F : I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
	};
	class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
	};
	class O_Soldier_base_F: SoldierEB
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_A_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_A_F: O_Soldier_base_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_support_base_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_Chestrig_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_AAR_F : O_Soldier_support_base_F{};
	class O_T_Soldier_AAR_F : O_Soldier_AAR_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_support_AMG_F : O_Soldier_support_base_F{};
	class O_T_Support_AMG_F : O_support_AMG_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_support_AMort_F : O_Soldier_support_base_F{};
	class O_T_Support_AMort_F : O_support_AMort_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_AAT_F : O_Soldier_support_base_F{};
	class O_T_Soldier_AAT_F : O_Soldier_AAT_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_AAA_F : O_Soldier_AAT_F{};
	class O_T_Soldier_AAA_F : O_Soldier_AAA_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_AR_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_LMG_Mk200_LP_BI_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_Mk200_LP_BI_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_AR_F : O_Soldier_AR_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_medic_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_medic_F: O_medic_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_crew_F: O_Soldier_base_F
	{
		uniformClass = "U_O_SpecopsUniform_blk";
		linkedItems[] = {"V_BandollierB_khk","H_HelmetSpecO_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_HelmetSpecO_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_crew_F: O_crew_F
	{
		uniformClass = "U_O_SpecopsUniform_blk";
		linkedItems[] = {"V_BandollierB_ghex_F","H_HelmetSpecO_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_BandollierB_ghex_F","H_HelmetSpecO_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_engineer_F : O_Soldier_base_F{};
	class O_T_Engineer_F : O_engineer_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_soldier_exp_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_Exp_F : O_soldier_exp_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_GL_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_GL_F : O_Soldier_GL_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessOGL_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_support_GMG_F : O_Soldier_support_base_F{};
	class O_T_Support_GMG_F : O_support_GMG_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_support_MG_F : O_Soldier_support_base_F{};
	class O_T_Support_MG_F : O_support_MG_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_support_Mort_F : O_Soldier_support_base_F{};
	class O_T_Support_Mort_F : O_support_Mort_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_02_F: O_Soldier_base_F{};
	class O_helipilot_F: O_Soldier_02_F
	{
		uniformClass = "U_O_CombatUniform_ocamo";
		linkedItems[] = {"H_HelmetLeaderO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_helipilot_F: O_helipilot_F
	{
		uniformClass = "U_O_T_Soldier_F";
		linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_helicrew_F: O_helipilot_F
	{
		uniformClass = "U_O_CombatUniform_ocamo";
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_helicrew_F: O_helicrew_F
	{
		uniformClass = "U_O_T_Soldier_F";
		linkedItems[] = {"V_TacVest_brn","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_TacVest_brn","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_pilot_F: O_helipilot_F
	{
		uniformClass = "U_O_PilotCoveralls";
	};
	class O_soldier_UAV_F : O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
	};
	class O_soldier_M_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_M_F : O_soldier_M_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_AA_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_AA_F: O_Soldier_AA_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_AT_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_AT_F: O_Soldier_AT_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Officer_F: O_Soldier_base_F{};
	class O_T_Officer_F: O_Officer_F
	{
		weapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
	};
	class O_soldier_PG_F : O_Soldier_base_F{};
	class O_T_Soldier_PG_F : O_soldier_PG_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_soldier_repair_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_Repair_F : O_soldier_repair_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_F: O_Soldier_base_F{};
	class O_Soldier_unarmed_F : O_Soldier_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_T_Soldier_F: O_Soldier_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_T_Soldier_unarmed_F : O_T_Soldier_F
	{
		linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetCrew_O_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetCrew_O_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_Soldier_LAT_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_LAT_F : O_Soldier_LAT_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_SL_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_SL_F : O_Soldier_SL_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_TL_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_TL_F : O_Soldier_TL_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_T_Soldier_UAV_F : O_soldier_UAV_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
	};
	class ZSN_O_Urban_helipilot_F: O_helipilot_F
	{
		author = "ZluskeN";
		scope = 1;
		uniformClass = "U_O_CombatUniform_oucamo";
		linkedItems[] = {"H_HelmetLeaderO_oucamo","V_TacVest_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_oucamo","V_TacVest_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class ZSN_O_Urban_helicrew_F: O_helicrew_F
	{
		author = "ZluskeN";
		scope = 1;
		uniformClass = "U_O_CombatUniform_oucamo";
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_recon_base: O_Soldier_base_F{};
	class O_recon_M_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_recon_LAT_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_recon_JTAC_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_recon_TL_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_recon_TL_F: O_recon_TL_F
	{
		linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Sharpshooter_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_05_hex_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_05_hex_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Pathfinder_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_HeavyGunner_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_Urban_base: O_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_AR_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AAR_F : O_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_LAT_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_AT_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_AAT_F: O_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AA_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_AAA_F: O_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_TL_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_medic_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_SoldierU_SL_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_repair_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_exp_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_engineer_U_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_M_F: O_Soldier_Urban_base
	{
		weapons[] = {"srifle_DMR_01_DMS_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Rangefinder"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_A_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_SoldierU_GL_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		linkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_soldierU_F;
	class O_SoldierU_Unarmed_F: O_soldierU_F
	{
		linkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_srifle_DMR_05_tan_KHS_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_05_tan_KHS_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_MMG_01_tan_ARCO_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_01_tan_ARCO_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class Car_F;
	class MRAP_01_base_F : Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
		};
	};
	class B_MRAP_01_F;
	class B_T_MRAP_01_F : B_MRAP_01_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_MRAP_01_gmg_F;
	class B_T_MRAP_01_gmg_F : B_MRAP_01_gmg_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_MRAP_01_hmg_F;
	class B_T_MRAP_01_hmg_F : B_MRAP_01_hmg_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_01_base_F : Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_01_light_base_F;
	class B_CTRG_LSV_01_light_F : LSV_01_light_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag_red;
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 9;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_01_armed_base_F;
	class B_T_LSV_01_armed_F : LSV_01_armed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_T_LSV_01_armed_CTRG_F : B_T_LSV_01_armed_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 9;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_01_unarmed_base_F;
	class B_T_LSV_01_unarmed_F : LSV_01_unarmed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_T_LSV_01_unarmed_CTRG_F : B_T_LSV_01_unarmed_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 9;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class MRAP_03_base_F : Car_F
	{
		class TransportWeapons 
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_Mk20_plain_F
			{
				count = 2;
				weapon = "arifle_Mk20_plain_F";
			};
		};
		class TransportMagazines
		{
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 12;
			};
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 3;
			};
		};
	};
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F : Wheeled_APC_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class B_T_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class APC_Wheeled_03_base_F : Wheeled_APC_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_Mk20_plain_F
			{
				count = 2;
				weapon = "arifle_Mk20_plain_F";
			};
		};
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 3;
			};
		};
	};
	class Tank_F;
	class APC_Tracked_01_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class _xx_arifle_SPAR_02_snd_F
			{
				weapon = "arifle_SPAR_02_snd_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_APC_Tracked_01_AA_F;
	class B_T_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class B_T_APC_Tracked_01_CRV_F : B_APC_Tracked_01_CRV_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_APC_Tracked_01_rcws_F;
	class B_T_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class APC_Tracked_03_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_Mk20_plain_F
			{
				count = 2;
				weapon = "arifle_Mk20_plain_F";
			};
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_03_F
			{
				weapon = "LMG_03_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 6;
			};
		};
	};
	class MBT_01_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class B_MBT_01_arty_F;
	class B_T_MBT_01_arty_F : B_MBT_01_arty_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class B_T_MBT_01_mlrs_F : B_MBT_01_mlrs_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class B_MBT_01_cannon_F;
	class B_T_MBT_01_cannon_F : B_MBT_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_T_MBT_01_TUSK_F : B_MBT_01_TUSK_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class MBT_03_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_Mk20C_plain_F
			{
				weapon = "arifle_Mk20C_plain_F";
				count = 2;
			};
		};
	};
	class Air;
	class Helicopter;
	class Helicopter_Base_F;
	class Helicopter_Base_H;
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
	};
	class Heli_Attack_01_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
	};
	class Heli_Transport_01_base_F : Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
	};
	class B_CTRG_Heli_Transport_01_sand_F : Heli_Transport_01_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_F
			{
				weapon = "arifle_MXC_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 4;
			};
		};
	};
	class B_CTRG_Heli_Transport_01_tropic_F : Heli_Transport_01_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_khk_F
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 4;
			};
		};
	};
	class Heli_Light_02_base_F;
	class O_Heli_Light_02_v2_F: Heli_Light_02_base_F
	{
		crew = "ZSN_O_Urban_helipilot_F";
	};
	class Heli_Light_02_unarmed_base_F;
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
		crew = "ZSN_O_Urban_helipilot_F";
	};
	class Heli_Attack_02_base_F;
	class O_Heli_Attack_02_black_F: Heli_Attack_02_base_F
	{
		crew = "ZSN_O_Urban_helipilot_F";
	}; 
	class Heli_Transport_02_base_F : Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_Mk20C_plain_F
			{
				weapon = "arifle_Mk20C_plain_F";
				count = 2;
			};
		};
	};
	class Heli_light_03_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_Mk20C_plain_F
			{
				weapon = "arifle_Mk20C_plain_F";
				count = 2;
			};
		};
	};
};
class cfggroups
{
	class Indep
	{
		class IND_F
		{
			class Infantry
			{
				class ZSN_HAF_ReconTeam
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_recon_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_I_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_I_recon_exp_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					name = "Recon Team";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
				class ZSN_HAF_ReconPatrol
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					name = "Recon Patrol";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
				class ZSN_HAF_ReconSentry
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					name = "Recon Sentry";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
				class ZSN_HAF_ReconSquad
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_I_recon_LAT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_I_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_I_recon_exp_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_I_Pathfinder_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					name = "Recon Squad";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
			};
		};
	};
};
//};
