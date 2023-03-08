////////////////////////////////////////////////////////////////////
//DeRap: zsn_weapons\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Thu Dec 03 22:29:49 2020 : 'file' last modified on Wed Dec 02 21:48:32 2020
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_Loadouts
	{
		units[] = {"ZSN_B_soldierU_F","ZSN_B_SoldierU_Unarmed_F","ZSN_B_soldierU_AR_F","ZSN_B_soldierU_AAR_F","ZSN_B_soldierU_LAT_F","ZSN_B_soldierU_AT_F","ZSN_B_soldierU_AAT_F","ZSN_B_soldierU_AA_F","ZSN_B_soldierU_AAA_F","ZSN_B_soldierU_TL_F","ZSN_B_soldierU_medic_F","ZSN_B_SoldierU_SL_F","ZSN_B_soldierU_repair_F","ZSN_B_soldierU_exp_F","ZSN_B_engineer_U_F","ZSN_B_soldierU_M_F","ZSN_B_soldierU_A_F","ZSN_B_SoldierU_GL_F","ZSN_B_Urban_Sharpshooter_F","ZSN_B_Urban_HeavyGunner_F","O_A_medic_F","O_A_officer_F","O_A_soldier_A_F","O_A_soldier_AA_F","O_A_soldier_AR_F","O_A_soldier_AT_F","O_A_soldier_LAT_F","O_A_soldier_M_F","O_A_soldier_SL_F","ZSN_B_CTRG_LSV_01_black_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Mark","A3_Characters_F_Exp","A3_Characters_F_Jets","A3_Characters_F_Patrol","A3_Characters_F_Orange","A3_Characters_F_Tank_Uniforms","A3_Characters_F_Tank","A3_Armor_F_Tank_AFV_Wheeled_01","A3_Armor_F_Tank_MBT_04","A3_Characters_F_Enoch","cba_jr"};
		magazines[] = {};
	};
};
class Extended_InitPost_EventHandlers
{
	class CAManBase
	{
		class zsn_fixMagazines
		{
			init = "if (isServer) then {_this RemoteExecCall ['zsn_fnc_fixMagazines', _this select 0, true]};";
		};
	};
};
class CfgFunctions
{
	class ZSN
	{
		class Functions
		{
			class fixMagazines
			{
				file = "addons\zsn_weapons\functions\fn_fixmagazines.sqf";
			};
		};
	};
};
class CfgMagazineWells
{
	class CBA_57x28_FN57
	{
		ZSN_mags[] = {"ZSN_20Rnd_570x28_Mag"};
	};
};
class cfgMagazines
{
	class 150Rnd_762x51_Box;
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		ammo = "B_762x51_Tracer_Green";
		count = 100;
		descriptionShort = "Caliber: 7.62x51 mm Tracer - Green<br/>Rounds: 100<br />Used in: Zafir";
		displayName = "7.62 mm 100Rnd Box";
		mass = 33;
	};
	class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box
	{
		descriptionShort = "Caliber: 7.62x51 mm Tracer - Green<br/>Rounds: 100<br />Used in: Zafir";
		displayName = "7.62 mm 100Rnd Tracer (Green) Box";
	};
	class 30Rnd_9x21_Mag;
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		initSpeed = 450;
	};
	class ZSN_20Rnd_570x28_Mag: 16Rnd_9x21_Mag
	{
		ammo = "B_570x28_Ball";
		count = 20;
		initSpeed = 600;
		descriptionShort = "Caliber: 5.7x28 mm<br />Rounds: 20<br />Used in: P57";
		displayName = "5.7 mm 20Rnd Mag";
	};
};
class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		optic_ico_01_black_f = 1;
		optic_ico_01_camo_f = 1;
		optic_ico_01_f = 1;
		optic_ico_01_sand_f = 1;
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class cfgWeapons
{
	class UniformItem;
	class U_B_T_FullGhillie_tna_F;
	class U_I_E_FullGhillie_F: U_B_T_FullGhillie_tna_F
	{
		displayName = "Full Ghillie [LDF]";
		class ItemInfo: UniformItem
		{
			containerClass = "Supply60";
			mass = 80;
			uniformClass = "ZSN_I_E_ghillie_F";
			uniformModel = "-";
		};
	};
	class Rifle_Long_Base_F;
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		descriptionShort = "Light Machine Gun<br />Caliber: 7.62x51 mm";
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_P07_F: Pistol_Base_F
	{
		displayname = "P57 (Tan)";
		magazines[] = {"ZSN_20Rnd_570x28_Mag"};
		magazineWell[] = {"CBA_57x28_FN57"};
		descriptionShort = "Handgun<br />Caliber: 5.7x28 mm";
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.096;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {"muzzle_snds_570"};
			};
		};
	};
	class hgun_P07_Snds_F: hgun_P07_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_570";
				slot = "MuzzleSlot";
			};
		};
	};
	class hgun_P07_khk_F: hgun_P07_F
	{
		displayName = "P57 (Khaki)";
	};
	class hgun_P07_khk_snds_F: hgun_P07_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_570";
				slot = "MuzzleSlot";
			};
		};
	};
	class hgun_P07_blk_F: hgun_P07_F
	{
		displayName = "P57";
	};
	class hgun_P07_blk_snds_F: hgun_P07_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_570";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_TRG20_F;
	class arifle_TRG20_ACO_F: arifle_TRG20_F
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
	class arifle_TRG20_ACO_pointer_F: arifle_TRG20_F
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
	class arifle_TRG20_ACO_Flash_F: arifle_TRG20_F
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
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_TRG21_F;
	class arifle_TRG21_ACO_pointer_F: arifle_TRG21_F
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
	class arifle_TRG21_GL_F;
	class arifle_TRG21_GL_ACO_pointer_F: arifle_TRG21_GL_F
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
				item = "optic_Holosight_khk_F";
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
	class ZSN_arifle_SPAR_01_khk_Holo_FL_F: arifle_SPAR_01_khk_F
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
				item = "acc_flashlight";
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
				item = "optic_Hamr";
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
	class ZSN_arifle_SPAR_01_GL_khk_ACO_F: arifle_SPAR_01_GL_khk_F
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
	class ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F: arifle_SPAR_01_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
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
	class ZSN_arifle_SPAR_03_khk_SOS_LP_BI_F: arifle_SPAR_03_khk_F
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
				item = "bipod_01_F_khk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_01_blk_F;
	class ZSN_arifle_SPAR_01_blk_Hamr_pointer_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_hamr_pointer_snds_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_M";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_ACO_F: arifle_SPAR_01_blk_F
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
	class ZSN_arifle_SPAR_01_blk_ACO_pointer_snds_F: arifle_SPAR_01_blk_F
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
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_M";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_holo_F: arifle_SPAR_01_blk_F
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
	class ZSN_arifle_SPAR_01_blk_Holo_pointer_F: arifle_SPAR_01_blk_F
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
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_holo_FL_F: arifle_SPAR_01_blk_F
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
	class arifle_SPAR_02_blk_F;
	class ZSN_arifle_SPAR_02_blk_pointer_F: arifle_SPAR_02_blk_F
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
	class ZSN_arifle_SPAR_02_blk_ACO_pointer_F: arifle_SPAR_02_blk_F
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
	class ZSN_arifle_SPAR_02_blk_Hamr_pointer_F: arifle_SPAR_02_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_02_blk_Holo_pointer_F: arifle_SPAR_02_blk_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_01_GL_blk_F;
	class ZSN_arifle_SPAR_01_GL_blk_ACO_F: arifle_SPAR_01_GL_blk_F
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
	class ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F: arifle_SPAR_01_GL_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_GL_blk_Holo_pointer_snds_F: arifle_SPAR_01_GL_blk_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_SPAR_03_blk_F;
	class ZSN_arifle_SPAR_03_blk_MOS_LP_BI_snds_F: arifle_SPAR_03_blk_F
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
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_B";
				slot = "MuzzleSlot";
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
	class arifle_MX_GL_F;
	class ZSN_arifle_MX_GL_ERCO_pointer_F: arifle_MX_GL_F
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
	class arifle_MX_SW_F;
	class ZSN_arifle_MX_SW_ERCO_pointer_F: arifle_MX_SW_F
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
			class LinkedItemsUnder
			{
				item = "bipod_01_F_snd";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MXM_F;
	class arifle_MXM_SOS_pointer_F: arifle_MXM_F
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
				item = "bipod_01_f_snd";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MXC_Black_F;
	class ZSN_arifle_MXC_Black_Holo_pointer_F: arifle_MXC_Black_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MXC_Black_Holo_FL_F: arifle_MXC_Black_F
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
	class arifle_MX_Black_F;
	class ZSN_arifle_MX_Black_pointer_F: arifle_MX_Black_F
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
	class ZSN_arifle_MX_Black_Holo_pointer_F: arifle_MX_Black_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
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
	class ZSN_arifle_MX_GL_Black_Holo_pointer_F: arifle_MX_GL_Black_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
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
	class ZSN_arifle_MX_SW_Black_pointer_F: arifle_MX_SW_Black_F
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
	class srifle_DMR_01_F;
	class ZSN_srifle_DMR_01_KHS_LP_BI_F: srifle_DMR_01_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_khs_blk";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_f_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_02_F;
	class ZSN_srifle_DMR_02_AMS_LP_BI_F: srifle_DMR_02_F
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
	class arifle_MXC_khk_F;
	class ZSN_arifle_MXC_khk_ACO_pointer_F: arifle_MXC_khk_F
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
	class arifle_MX_GL_khk_F;
	class ZSN_arifle_MX_GL_khk_ERCO_pointer_F: arifle_MX_GL_khk_F
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
	class arifle_MX_SW_khk_F;
	class ZSN_arifle_MX_SW_khk_ERCO_pointer_F: arifle_MX_SW_khk_F
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
			class LinkedItemsUnder
			{
				item = "bipod_01_F_khk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MSBS65_sand_F;
	class ZSN_arifle_MSBS65_sand_ico_F: arifle_MSBS65_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_sand_ico_pointer_F: arifle_MSBS65_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MSBS65_Mark_sand_F;
	class ZSN_arifle_MSBS65_Mark_sand_SOS_LP_BI_F: arifle_MSBS65_Mark_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_sos";
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
	class arifle_MSBS65_GL_sand_F;
	class ZSN_arifle_MSBS65_GL_sand_ico_pointer_F: arifle_MSBS65_GL_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_GL_sand_aco_pointer_snds_F: arifle_MSBS65_GL_sand_F
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
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_MSBS65_UBS_sand_f;
	class ZSN_arifle_MSBS65_UBS_sand_ico_pointer_f: arifle_MSBS65_UBS_sand_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_black_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_UBS_sand_snds_ico_pointer_f: arifle_MSBS65_UBS_sand_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_black_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_sand_aco_pointer_snds_F: arifle_MSBS65_sand_F
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
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_sand_ICO_pointer_snds_F: arifle_MSBS65_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_black_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_Mark_sand_SOS_LP_BI_snds_F: arifle_MSBS65_Mark_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_sos";
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
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class srifle_DMR_03_F;
	class ZSN_srifle_DMR_03_DMS_LP_BI_F: srifle_DMR_03_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_dms_weathered_f";
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
	class MMG_02_black_F;
	class ZSN_MMG_02_black_ERCO_LP_F: MMG_02_black_F
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
	class ZSN_LMG_03_aco_pointer_F: LMG_03_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
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
				item = "optic_khs_hex";
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
	class ZSN_srifle_DMR_06_olive_khs_F: srifle_DMR_06_olive_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_KHS_old";
				slot = "CowsSlot";
			};
		};
	};
	class hgun_ACPC2_F;
	class ZSN_hgun_ACPC2_flight_F: hgun_ACPC2_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_flashlight_pistol";
				slot = "PointerSlot";
			};
		};
	};
	class SMG_03C_TR_black;
	class ZSN_SMG_03C_TR_black_F: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_holosight_smg_blk_f";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_black_ACO_LP_snds_F: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_holosight_smg_blk_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_570";
				slot = "MuzzleSlot";
			};
		};
	};
	class SMG_03C_TR_camo;
	class ZSN_SMG_03C_TR_camo_F: SMG_03C_TR_camo
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco_grn_smg";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_camo_fl_F: SMG_03C_TR_camo
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco_grn_smg";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_camo_PF_F: SMG_03C_TR_camo
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_mrco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_570";
			};
		};
	};
	class SMG_03C_TR_khaki;
	class ZSN_SMG_03C_TR_khaki_F: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_khk_F";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_ACO_F: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco_smg";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_Holo_pointer_F: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_Holo_FL_F: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_ACO_LP_snds_F: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco_smg";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_570";
				slot = "MuzzleSlot";
			};
		};
	};
	class B_Patrol_Soldier_Pistol_F: hgun_ACPC2_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_acp";
			};
		};
	};
	class arifle_Mk20C_plain_F;
	class B_Patrol_Soldier_Operator_weapon_F: arifle_Mk20C_plain_F
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
				item = "muzzle_snds_m";
			};
		};
	};
	class arifle_Mk20_plain_F;
	class B_Patrol_Soldier_Medic_weapon_F: arifle_Mk20_plain_F
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
				item = "muzzle_snds_m";
			};
		};
	};
	class arifle_Mk20_GL_plain_F;
	class ZSN_B_Patrol_Soldier_Leader_weapon_F: arifle_Mk20_GL_plain_F
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
				item = "muzzle_snds_m";
			};
		};
	};
	class B_Patrol_Soldier_Leader_weapon_F: ZSN_B_Patrol_Soldier_Leader_weapon_F{};
	class srifle_DMR_03_multicam_F;
	class B_Patrol_Soldier_Marksman_weapon_F: srifle_DMR_03_multicam_F
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
				item = "bipod_01_F_mtp";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
		};
	};
	class arifle_SPAR_02_snd_F;
	class B_Patrol_Soldier_Autorifleman_weapon_F: arifle_SPAR_02_snd_F
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
				item = "muzzle_snds_H_MG_blk_F";
			};
		};
	};
	class B_Patrol_Soldier_MachineGunner_weapon_F: ZSN_B_Patrol_Soldier_MachineGunner_weapon_F{};
	class MMG_02_camo_F;
	class B_Patrol_Soldier_HeavyGunner_weapon_F: MMG_02_camo_F
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
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_mtp";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_338_green";
			};
		};
	};
	class B_Patrol_Soldier_Carrier_weapon_F: arifle_SPAR_01_snd_F
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
	class B_Patrol_Soldier_Specialist_weapon_F: arifle_SPAR_01_snd_F
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
	class arifle_MSBS65_GL_camo_F;
	class ZSN_arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class arifle_MSBS65_Mark_camo_F;
	class ZSN_arifle_MSBS65_Mark_camo_F: arifle_MSBS65_Mark_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mrco";
			};
		};
	};
	class arifle_MSBS65_UBS_F;
	class ZSN_arifle_MSBS65_UBS_F: arifle_MSBS65_UBS_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco";
			};
		};
	};
	class arifle_AK12_F;
	class ZSN_arifle_AK12_ACO_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_ARCO_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};
		};
	};
	class ZSN_arifle_AK12_pointer_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class ZSN_arifle_AK12_ACO_pointer_F: arifle_AK12_F
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
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_ARCO_pointer_F: arifle_AK12_F
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
				item = "optic_arco_blk_f";
			};
		};
	};
	class ZSN_arifle_AK12_ACO_pointer_snds_F: arifle_AK12_F
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
				item = "optic_aco_grn";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class ZSN_arifle_AK12_ARCO_pointer_snds_F: arifle_AK12_F
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
				item = "optic_arco_blk_f";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class arifle_AK12U_F;
	class ZSN_arifle_AK12U_ACO_F: arifle_AK12U_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12U_ACO_pointer_F: arifle_AK12U_F
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
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12U_ACO_pointer_snds_F: arifle_AK12U_F
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
				item = "optic_aco_grn";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class arifle_RPK12_F;
	class ZSN_arifle_RPK12_pointer_F: arifle_RPK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_AK12_GL_F;
	class ZSN_arifle_AK12_GL_ACO_F: arifle_AK12_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_GL_ARCO_pointer_F: arifle_AK12_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class ZSN_arifle_AK12_GL_ACO_pointer_snds_F: arifle_AK12_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class arifle_AK12_arid_F;
	class ZSN_arifle_AK12_arid_pointer_F: arifle_AK12_arid_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class ZSN_arifle_AK12_arid_ACO_pointer_F: arifle_AK12_arid_F
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
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_arid_ARCO_pointer_F: arifle_AK12_arid_F
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
				item = "optic_arco_ak_arid_f";
			};
		};
	};
	class arifle_AK12_GL_arid_F;
	class ZSN_arifle_AK12_GL_arid_ACO_F: arifle_AK12_GL_arid_F
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
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_GL_arid_ARCO_pointer_F: arifle_AK12_GL_arid_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_ak_arid_f";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_AK12U_arid_F;
	class ZSN_arifle_AK12U_arid_ACO_pointer_F: arifle_AK12U_arid_F
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
				item = "optic_aco_grn";
			};
		};
	};
	class arifle_RPK12_arid_F;
	class ZSN_arifle_RPK12_arid_pointer_F: arifle_RPK12_arid_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_ARX_blk_F;
	class ZSN_arifle_ARX_blk_MRCO_F: arifle_ARX_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_black_f";
				slot = "CowsSlot";
			};
		};
	};
	class srifle_DMR_07_blk_F;
	class ZSN_srifle_DMR_07_blk_mrco_F: srifle_DMR_07_blk_F
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
	class arifle_CTAR_blk_F;
	class ZSN_arifle_CTAR_blk_mrco_F: arifle_CTAR_blk_F
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
	class ZSN_arifle_CTAR_blk_aco_F: arifle_CTAR_blk_F
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
	class arifle_CTAR_ghex_F;
	class arifle_CTAR_blk_ACO_Pointer_F: arifle_CTAR_ghex_F{};
	class arifle_CTAR_blk_Pointer_F: arifle_CTAR_ghex_F{};
	class arifle_CTAR_blk_ACO_F: arifle_CTAR_ghex_F{};
	class arifle_CTAR_blk_ARCO_Pointer_F: arifle_CTAR_ghex_F
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
	class arifle_CTAR_blk_ARCO_F: arifle_CTAR_ghex_F
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
	class arifle_CTAR_blk_ACO_Pointer_Snds_F: arifle_CTAR_ghex_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_58_ghex_f";
			};
		};
	};
	class arifle_CTAR_blk_ARCO_Pointer_Snds_F: arifle_CTAR_ghex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_arco_ghex_f";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_58_ghex_f";
			};
		};
	};
	class arifle_CTAR_GL_ghex_F;
	class arifle_CTAR_GL_blk_ACO_F: arifle_CTAR_GL_ghex_F{};
	class arifle_CTAR_GL_blk_ARCO_Pointer_F: arifle_CTAR_GL_ghex_F
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
	class arifle_CTAR_GL_blk_ACO_Pointer_Snds_F: arifle_CTAR_GL_ghex_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_58_ghex_f";
			};
		};
	};
	class arifle_CTARS_ghex_F;
	class arifle_CTARS_blk_Pointer_F: arifle_CTARS_ghex_F{};
	class srifle_DMR_07_ghex_F;
	class srifle_DMR_07_blk_DMS_F: srifle_DMR_07_ghex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_dms_ghex_f";
				slot = "CowsSlot";
			};
		};
	};
	class srifle_DMR_07_blk_DMS_Snds_F: srifle_DMR_07_ghex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_dms_ghex_f";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_65_ti_ghex_f";
			};
		};
	};
	class arifle_CTAR_hex_F;
	class arifle_CTAR_blk_flash_F: arifle_CTAR_hex_F{};
	class arifle_CTAR_blk_aco_flash_F: arifle_CTAR_hex_F{};
	class arifle_CTAR_blk_arco_flash_F: arifle_CTAR_hex_F{};
	class arifle_CTAR_GL_hex_F;
	class arifle_CTAR_GL_blk_aco_flash_F: arifle_CTAR_GL_hex_F{};
	class arifle_CTAR_GL_blk_arco_flash_F: arifle_CTAR_GL_hex_F{};
	class arifle_CTARS_hex_F;
	class arifle_CTARS_blk_flash_F: arifle_CTARS_hex_F{};
	class srifle_DMR_07_hex_F;
	class srifle_DMR_07_blk_F_arco_flash_F: srifle_DMR_07_hex_F{};
	class srifle_DMR_04_Tan_F;
	class srifle_DMR_04_DMS_weathered_Kir_F_F: srifle_DMR_04_Tan_F{};
};
class CfgVehicles
{
	class ReammoBox_F;
	class B_supplyCrate_F: ReammoBox_F
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
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
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
			class arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
	};
	class O_supplyCrate_F: B_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 24;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_ak12_F
			{
				weapon = "arifle_ak12_F";
				count = 2;
			};
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_rpk12_F
			{
				weapon = "arifle_rpk12_F";
				count = 1;
			};
		};
	};
	class I_supplyCrate_F: B_supplyCrate_F
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
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 24;
			};
			delete _xx_20Rnd_762x51_Mag;
		};
		class TransportWeapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_F
			{
				weapon = "arifle_MSBS65_sand_F";
				count = 2;
			};
		};
	};
	class I_EAF_supplyCrate_F: I_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_black_mag;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 6;
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 6;
			};
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
			delete _xx_arifle_MSBS65_GL_F;
			class _xx_arifle_Mk20_GL_F
			{
				weapon = "arifle_Mk20_GL_F";
				count = 2;
			};
		};
	};
	class FIA_Box_Base_F;
	class Box_FIA_Wps_F: FIA_Box_Base_F
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
	class Box_FIA_Ammo_F: FIA_Box_Base_F
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
	class NATO_Box_Base: ReammoBox_F{};
	class Box_NATO_WpsSpecial_F: NATO_Box_Base
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
	class Box_T_NATO_WpsSpecial_F: Box_NATO_WpsSpecial_F
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
	class Box_NATO_Ammo_F: NATO_Box_Base
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
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
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
	class EAST_Box_Base: ReammoBox_F{};
	class Box_East_Wps_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 8;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 4;
			};
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
			delete _xx_arifle_Katiba_GL_F;
			class _xx_arifle_AK12_GL_F
			{
				weapon = "arifle_AK12_GL_F";
				count = 2;
			};
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_RPK12_F
			{
				weapon = "arifle_RPK12_F";
				count = 2;
			};
		};
	};
	class Box_East_WpsSpecial_F: EAST_Box_Base
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
	class Box_T_East_WpsSpecial_F: Box_East_WpsSpecial_F
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
	class Box_East_Ammo_F: EAST_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 24;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class IND_Box_Base: ReammoBox_F{};
	class Box_IND_WpsSpecial_F: IND_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_srifle_EBR_F;
			class _xx_arifle_ARX_blk_F
			{
				weapon = "arifle_ARX_blk_F";
				count = 4;
			};
		};
		class TransportMagazines
		{
			delete _xx_5Rnd_127x108_Mag;
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine = "10Rnd_50BW_Mag_F";
				count = 8;
			};
		};
	};
	class Box_EAF_WpsSpecial_F: Box_IND_WpsSpecial_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 4;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag_Tracer;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportItems
		{
			delete _xx_optic_ico_01_f;
		};
	};
	class Box_IND_Wps_F: IND_Box_Base
	{
		class TransportMagazines
		{
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
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 8;
			};
			class _xx_6Rnd_12Gauge_Pellets
			{
				magazine = "6Rnd_12Gauge_Pellets";
				count = 4;
			};
			class _xx_6Rnd_12Gauge_Slug
			{
				magazine = "6Rnd_12Gauge_Slug";
				count = 4;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_F
			{
				weapon = "arifle_MSBS65_sand_F";
				count = 6;
			};
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_UBS_sand_F
			{
				weapon = "arifle_MSBS65_UBS_sand_F";
				count = 2;
			};
			delete _xx_arifle_Mk20_GL_F;
			class _xx_arifle_MSBS65_GL_sand_F
			{
				weapon = "arifle_MSBS65_GL_sand_F";
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
	class Box_EAF_Wps_F: Box_IND_Wps_F
	{
		class TransportMagazines
		{
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 1;
			};
			delete _xx_200Rnd_65x39_cased_Box_Red;
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine = "200Rnd_556x45_Box_Red_F";
				count = 2;
			};
			delete _xx_30Rnd_65x39_caseless_msbs_mag_Tracer;
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 10;
			};
			delete _xx_6Rnd_12Gauge_Pellets;
			delete _xx_6Rnd_12Gauge_Slug;
		};
		class TransportWeapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 4;
			};
			delete _xx_arifle_MSBS65_UBS_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
			delete _xx_arifle_MSBS65_GL_F;
			class _xx_arifle_Mk20_GL_F
			{
				weapon = "arifle_Mk20_GL_F";
				count = 2;
			};
			delete _xx_hgun_Pistol_heavy_01_green_F;
			class _xx_hgun_P07_blk_F
			{
				weapon = "hgun_P07_blk_F";
				count = 1;
			};
			delete _xx_LMG_Mk200_black_BI_F;
			class _xx_LMG_03_F
			{
				weapon = "LMG_03_F";
				count = 2;
			};
			delete _xx_SMG_03_black;
			class _xx_SMG_03C_TR_camo
			{
				weapon = "SMG_03C_TR_camo";
				count = 1;
			};
		};
	};
	class Box_IND_Ammo_F: IND_Box_Base
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
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 24;
			};
			delete _xx_20Rnd_762x51_Mag;
			class _xx_6Rnd_12Gauge_Pellets
			{
				magazine = "6Rnd_12Gauge_Pellets";
				count = 8;
			};
			class _xx_6Rnd_12Gauge_Slug
			{
				magazine = "6Rnd_12Gauge_Slug";
				count = 8;
			};
		};
	};
	class Box_EAF_Ammo_F: Box_IND_Ammo_F
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_black_mag;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 6;
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
			};
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			delete _xx_6Rnd_12Gauge_Pellets;
			delete _xx_6Rnd_12Gauge_Slug;
		};
	};
	class Box_Syndicate_Ammo_F: ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_556x45_Box_F;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 4;
			};
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 12;
			};
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 16;
			};
			class _xx_30Rnd_762x39_Mag_F
			{
				magazine = "30Rnd_762x39_Mag_F";
				count = 20;
			};
		};
	};
	class Box_Syndicate_Wps_F: ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_556x45_Box_F;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 2;
			};
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 6;
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_03_F;
			class _xx_LMG_Mk200_Black_F
			{
				weapon = "LMG_Mk200_Black_F";
				count = 2;
			};
			class _xx_arifle_Katiba_GL_F
			{
				weapon = "arifle_Katiba_GL_F";
				count = 2;
			};
			class _xx_arifle_Katiba_F
			{
				weapon = "arifle_Katiba_F";
				count = 2;
			};
			class _xx_arifle_Katiba_C_F
			{
				weapon = "arifle_Katiba_C_F";
				count = 2;
			};
		};
	};
	class Box_NATO_Wps_F: NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 6;
			};
			delete _xx_arifle_MX_GL_F;
			class _xx_arifle_SPAR_01_GL_khk_F
			{
				weapon = "arifle_SPAR_01_GL_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 2;
			};
			delete _xx_SMG_01_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 1;
			};
			delete _xx_hgun_Pistol_heavy_01_F;
			class _xx_hgun_ACPC2_F
			{
				weapon = "hgun_ACPC2_F";
				count = 1;
			};
			delete _xx_hgun_P07_F;
			class _xx_hgun_P07_khk_F
			{
				weapon = "hgun_P07_khk_F";
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
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 1;
			};
		};
	};
	class Box_T_NATO_Wps_F: Box_NATO_Wps_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 6;
			};
			delete _xx_arifle_MX_GL_khk_F;
			class _xx_arifle_SPAR_01_GL_khk_F
			{
				weapon = "arifle_SPAR_01_GL_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 2;
			};
			delete _xx_hgun_Pistol_heavy_01_F;
			class _xx_hgun_ACPC2_F
			{
				weapon = "hgun_ACPC2_F";
				count = 1;
			};
			delete _xx_SMG_01_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
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
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 1;
			};
		};
	};
	class IG_supplyCrate_F: ReammoBox_F
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
	class C_T_supplyCrate_F: ReammoBox_F
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
	class Box_East_Support_F: East_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_acp;
		};
	};
	class Box_Ind_Support_F: IND_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_L;
			delete _xx_muzzle_snds_M;
			delete _xx_muzzle_snds_B;
			class _xx_muzzle_snds_H
			{
				name = "muzzle_snds_H";
				count = 5;
			};
			class _xx_muzzle_snds_H_MG_blk_F
			{
				name = "muzzle_snds_H_MG_blk_F";
				count = 2;
			};
		};
	};
	class Box_EAF_Support_F: Box_IND_Support_F
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_acp;
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 8;
			};
			class _xx_muzzle_snds_570
			{
				name = "muzzle_snds_570";
				count = 5;
			};
		};
	};
	class Box_NATO_Support_F: NATO_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_acp;
			delete _xx_muzzle_snds_H;
			delete _xx_muzzle_snds_L;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 5;
			};
			class muzzle_snds_570
			{
				name = "muzzle_snds_570";
				count = 5;
			};
		};
	};
	class Box_NATO_Equip_F: ReammoBox_F{};
	class Box_AAF_Equip_F: Box_NATO_Equip_F
	{
		class TransportItems
		{
			class _xx_H_HelmetHBK_chops_F
			{
				name = "H_HelmetHBK_chops_F";
				count = 10;
			};
			class _xx_H_HelmetHBK_ear_F
			{
				name = "H_HelmetHBK_ear_F";
				count = 10;
			};
			class _xx_H_HelmetHBK_headset_F
			{
				name = "H_HelmetHBK_headset_F";
				count = 10;
			};
		};
	};
	class Box_EAF_Equip_F: Box_AAF_Equip_F
	{
		class TransportItems
		{
			delete _xx_H_HelmetHBK_chops_F;
			class _xx_H_HelmetB_black
			{
				name = "H_HelmetB_black";
				count = 10;
			};
			delete _xx_H_HelmetHBK_ear_F;
			class _xx_H_HelmetSpecB_blk
			{
				name = "H_HelmetSpecB_blk";
				count = 10;
			};
			delete _xx_H_HelmetHBK_headset_F;
		};
	};
	class Box_GEN_Equip_F: Box_NATO_Equip_F
	{
		class TransportWeapons
		{
			delete _xx_hgun_P07_F;
			class _xx_hgun_Rook40_F
			{
				weapon = "hgun_Rook40_F";
				count = 6;
			};
			delete _xx_SMG_05_F;
			class _xx_hgun_PDW2000_F
			{
				weapon = "hgun_PDW2000_F";
				count = 6;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_9x21_Mag_SMG_02;
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 24;
			};
		};
		class TransportItems
		{
			delete _xx_acc_flashlight;
			class _xx_optic_yorris
			{
				name = "optic_yorris";
				count = 2;
			};
		};
	};
	class B_TacticalPack_mcamo;
	class B_AssaultPack_mcamo_AAR: B_TacticalPack_mcamo
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
	class B_Carryall_eaf_F;
	class B_Carryall_eaf_IEAAR_F: B_Carryall_eaf_F
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_H;
			delete _xx_bipod_01_F_blk;
			class _xx_muzzle_snds_h_mg_blk_f
			{
				name = "muzzle_snds_h_mg_blk_f";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box_Red;
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine = "200Rnd_556x45_Box_Red_F";
				count = 2;
			};
			delete _xx_200Rnd_65x39_cased_Box_Tracer_Red;
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 1;
			};
		};
	};
	class B_Carryall_eaf_IEAmmo_F: B_Carryall_eaf_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box_Red;
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine = "200Rnd_556x45_Box_Red_F";
				count = 1;
			};
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
			delete _xx_6Rnd_12Gauge_Pellets;
			delete _xx_6Rnd_12Gauge_Slug;
		};
	};
	class B_Carryall_ghex_F;
	class B_Carryall_ghex_OTAAR_AAR_F: B_Carryall_ghex_F
	{
		class TransportItems
		{
			class _xx_muzzle_snds_58_blk_F
			{
				name = "muzzle_snds_58_blk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine = "100Rnd_580x42_Mag_F";
				count = 2;
			};
		};
	};
	class B_Carryall_mcamo;
	class B_AssaultPack_mcamo_Ammo: B_Carryall_mcamo
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
	class B_Carryall_wdl_F;
	class B_Carryall_wdl_BWAmmo_F: B_Carryall_wdl_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_black_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_black_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 1;
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 3;
			};
		};
	};
	class B_Kitbag_rgr;
	class B_Kitbag_rgr_BWAAR: B_Kitbag_rgr
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_black_mag_Tracer;
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
				count = 2;
			};
			delete _xx_100Rnd_65x39_caseless_black_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
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
		};
	};
	class B_Carryall_oli;
	class zsn_B_AssaultPack_cbr_Ammo: B_Carryall_oli
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 4;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 2;
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
				count = 6;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine = "10Rnd_338_Mag";
				count = 2;
			};
		};
	};
	class zsn_B_CTRG_Kitbag_rgr_AAR: B_Kitbag_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_130Rnd_338_Mag
			{
				magazine = "130Rnd_338_Mag";
				count = 2;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 2;
			};
			class _xx_100Rnd_65x39_caseless_mag_Tracer
			{
				magazine = "100Rnd_65x39_caseless_mag_Tracer";
				count = 1;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_338_sand
			{
				name = "muzzle_snds_338_sand";
				count = 1;
			};
			class _xx_muzzle_snds_H_MG_blk_F
			{
				name = "muzzle_snds_H_MG_blk_F";
				count = 1;
			};
			class _xx_bipod_01_F_blk
			{
				name = "bipod_01_F_blk";
				count = 1;
			};
			class _xx_optic_tws_mg
			{
				name = "optic_tws_mg";
				count = 1;
			};
		};
	};
	class B_AssaultPack_blk;
	class ZSN_B_AssaultPack_blk_LAT: B_AssaultPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class ZSN_B_FieldPack_blk_Medic: B_AssaultPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
	};
	class ZSN_B_FieldPack_blk_Repair: B_AssaultPack_blk
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Toolkit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class B_AssaultPack_rgr_CTRGMedic_F;
	class ZSN_B_AssaultPack_sgg_CTRGMedic_F: B_AssaultPack_rgr_CTRGMedic_F
	{
		displayName = "Assault Pack (Sage)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_sgg_co.paa"};
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_sgg_ca.paa";
	};
	class B_Kitbag_rgr_AAR: B_Kitbag_rgr
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 1;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 1;
			};
			delete _xx_100Rnd_65x39_caseless_mag_Tracer;
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_m_snd_F
			{
				name = "muzzle_snds_m_snd_F";
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
	class ZSN_B_Kitbag_rgr_AAR: B_Kitbag_rgr_AAR
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_200Rnd_556x45_Box_Red_F
			{
				magazine = "200Rnd_556x45_Box_Red_F";
				count = 2;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_Tracer_F;
			class _xx_200Rnd_556x45_Box_Tracer_Red_F
			{
				magazine = "200Rnd_556x45_Box_Tracer_Red_F";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_bipod_01_F_blk;
			delete _xx_muzzle_snds_338_sand;
			delete _xx_muzzle_snds_m_snd_F;
			class _xx_muzzle_snds_m
			{
				name = "muzzle_snds_m";
				count = 1;
			};
			class _xx_optic_tws_mg
			{
				name = "optic_tws_mg";
				count = 1;
			};
		};
	};
	class B_Kitbag_rgr_CTRGExp_F;
	class ZSN_B_Kitbag_sgg_CTRGExp_F: B_Kitbag_rgr_CTRGExp_F
	{
		displayName = "Kitbag (Sage)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_sgg_co.paa"};
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_sgg";
	};
	class B_Carryall_ocamo;
	class B_Carryall_ocamo_AAR: B_Carryall_ocamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F
			{
				magazine = "75rnd_762x39_AK12_Mag_Tracer_F";
				count = 2;
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
			class _xx_muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 1;
			};
		};
	};
	class B_FieldPack_cbr_Ammo: B_Carryall_ocamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 1;
			};
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 6;
			};
		};
	};
	class B_Carryall_oucamo;
	class B_Carryall_oucamo_AAR: B_Carryall_oucamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F
			{
				magazine = "75rnd_762x39_AK12_Mag_Tracer_F";
				count = 2;
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
			delete _xx_muzzle_snds_H_MG;
			class _xx_muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 1;
			};
		};
	};
	class B_FieldPack_oucamo_Ammo: B_Carryall_oucamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 6;
			};
		};
	};
	class B_Carryall_oli_BTAmmo_F: B_Carryall_oli
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
	class I_Fieldpack_oli_Ammo: B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 8;
			};
			delete _xx_20Rnd_762x51_Mag;
		};
	};
	class B_AssaultPack_dgtl;
	class ZSN_I_AssaultPack_dgtl_ReconMedic: B_AssaultPack_dgtl
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
	class G_Carryall_Ammo: B_Carryall_oli
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
	class ZSN_G_Carryall_Ammo: G_Carryall_Ammo
	{
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				count = 4;
				name = "FirstAidKit";
			};
		};
		class TransportMagazines
		{
			class _xx_100Rnd_580x42_ghex_Mag_F
			{
				magazine = "100Rnd_580x42_ghex_Mag_F";
				count = 1;
			};
			class _xx_30Rnd_580x42_Mag_F
			{
				magazine = "30Rnd_580x42_Mag_F";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 3;
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
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 1;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 1;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 1;
			};
		};
	};
	class B_TacticalPack_oli;
	class B_TacticalPack_oli_AAR: B_TacticalPack_oli
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_h;
			class _xx_muzzle_snds_H_MG
			{
				name = "muzzle_snds_H_MG";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 2;
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
			delete _xx_150Rnd_762x54_Box;
			class _xx_130Rnd_338_Mag
			{
				magazine = "130Rnd_338_Mag";
				count = 1;
			};
		};
	};
	class B_FieldPack_cbr;
	class B_FieldPack_cb_Bandit_3_F: B_FieldPack_cbr
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
	};
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	class B_Soldier_base_F: SoldierWB
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Soldier_02_f: B_Soldier_base_F{};
	class B_Captain_Jay_F: B_Soldier_02_f
	{
		faction = "BLU_CTRG_F";
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Captain_Pettka_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_03_f: B_Soldier_base_F{};
	class B_Soldier_04_f: B_Soldier_base_F{};
	class B_Soldier_05_f: B_Soldier_base_F{};
	class B_Pilot_F: B_Soldier_05_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
	};
	class B_Fighter_Pilot_F: B_Pilot_F
	{
		weapons[] = {"hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_F: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class B_GEN_Soldier_base_F: B_Soldier_F
	{
		weapons[] = {"hgun_PDW2000_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
	};
	class B_GEN_Commander_F: B_GEN_Soldier_base_F
	{
		weapons[] = {"hgun_PDW2000_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"hgun_PDW2000_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};
	};
	class B_Captain_Dwarden_F: B_GEN_Commander_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_holo_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_holo_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};
	};
	class B_Soldier_lite_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_F: B_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_W_Soldier_F: B_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_W_RadioOperator_F: B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_RadioOperator_F: B_Soldier_F
	{
		backpack = "B_RadioBag_01_mtp_F";
		displayName = "Radio Operator";
		role = "RadioOperator";
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_T_RadioOperator_F: B_T_Soldier_F
	{
		backpack = "B_RadioBag_01_tropic_F";
		displayName = "Radio Operator";
		role = "RadioOperator";
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_CBRN_F: B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_holo_FL_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_holo_FL_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_Soldier_CBRN_F: B_Soldier_F
	{
		backpack = "B_CombinationUnitRespirator_01_F";
		camouflage = 1.6;
		cost = 93000;
		displayName = "CBRN Specialist";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\B_W_Soldier_CBRN_F.jpg";
		icon = "iconManEngineer";
		linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles"};
		picture = "pictureRepair";
		role = "Sapper";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "U_B_CBRN_Suit_01_MTP_F";
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_FL_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_FL_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		class EventHandlers: EventHandlers 
		{
			init = "_unit = _this select 0; (backpackContainer _unit) setObjectTexture [1, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; (backpackContainer _unit) setObjectTexture [2, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; _unit linkItem 'G_AirPurifyingRespirator_01_nofilter_F';";
		};
	};
	class ZSN_B_T_Soldier_CBRN_F: B_T_Soldier_F
	{
		backpack = "B_CombinationUnitRespirator_01_F";
		camouflage = 1.6;
		cost = 93000;
		displayName = "CBRN Specialist";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\B_W_Soldier_CBRN_F.jpg";
		icon = "iconManEngineer";
		linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_tna_F"};
		picture = "pictureRepair";
		role = "Sapper";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "U_B_CBRN_Suit_01_Tropic_F";
		weapons[] = {"ZSN_arifle_SPAR_01_blk_holo_FL_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_holo_FL_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		class EventHandlers: EventHandlers 
		{
			init = "_unit = _this select 0; (backpackContainer _unit) setObjectTexture [1, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; (backpackContainer _unit) setObjectTexture [2, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; _unit linkItem 'G_AirPurifyingRespirator_01_nofilter_F';";
		};
	};
	class B_Soldier_GL_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_GL_F: B_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_ACO_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_ACO_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_W_Soldier_GL_F: B_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_ACO_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_ACO_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_Soldier_AR_F: B_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_LMG_03_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_LMG_03_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_SL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_SL_F: B_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_SL_F: B_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_TL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_W_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_soldier_M_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_khk_SOS_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_khk_SOS_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_M_F: B_soldier_M_F
	{
		weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_M_F: B_soldier_M_F
	{
		weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_LAT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_LAT_F: B_soldier_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_LAT_F: B_soldier_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_LAT2_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_MRAWS_sand_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_MRAWS_sand_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_LAT2_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_MRAWS_olive_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_MRAWS_olive_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_LAT2_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_medic_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_medic_F: B_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_medic_F: B_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_repair_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_repair_F: B_soldier_repair_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_repair_F: B_soldier_repair_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_exp_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_exp_F: B_soldier_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_exp_F: B_soldier_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_A_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_A_F: B_Soldier_A_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_A_F: B_Soldier_A_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AA_F: B_soldier_AA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_AA_F: B_soldier_AA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_engineer_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_engineer_F: B_engineer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_engineer_F: B_engineer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_crew_F: B_Soldier_03_f
	{
		weapons[] = {"SMG_03C_TR_khaki","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_khaki","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Crew_F: B_crew_F
	{
		weapons[] = {"arifle_SPAR_01_blk_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Crew_F: B_crew_F
	{
		weapons[] = {"arifle_SPAR_01_blk_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Officer_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Officer_F: B_Officer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_aco_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_aco_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Officer_F: B_Officer_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_aco_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_aco_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helipilot_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_Helipilot_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Helicrew_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helicrew_F: B_Helicrew_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_Helicrew_F: B_Helicrew_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_diver_base_F: B_Soldier_base_F
	{
		weapons[] = {"arifle_SDAR_F","hgun_P07_blk_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","hgun_P07_blk_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
	};
	class B_Soldier_recon_base: B_Soldier_base_F{};
	class B_recon_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_F: B_recon_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_LAT_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_LAT_F: B_recon_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_blk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_blk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_exp_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_exp_F: B_recon_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_medic_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO_LP_snds_F","hgun_P07_khk_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO_LP_snds_F","hgun_P07_khk_snds_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_medic_F: B_recon_medic_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_ACO_LP_snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_ACO_LP_snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_TL_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_red","30Rnd_556x45_Stanag_Sand_Tracer_red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_red","30Rnd_556x45_Stanag_Sand_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_TL_F: B_recon_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_hamr_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_hamr_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_red","30Rnd_556x45_Stanag_Tracer_red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_recon_M_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_M_F: B_recon_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_blk_MOS_LP_BI_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_blk_MOS_LP_BI_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_JTAC_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_khk_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_recon_JTAC_F: B_recon_JTAC_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Holo_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Holo_pointer_snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_Recon_Sharpshooter_F: B_Soldier_recon_base
	{
		weapons[] = {"srifle_DMR_02_sniper_AMS_LP_S_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_DMR_02_sniper_AMS_LP_S_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
	};
	class B_Soldier_sniper_base_F: B_Soldier_base_F{};
	class B_spotter_F: B_Soldier_sniper_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_khk_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_khk_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_spotter_F: B_spotter_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Hamr_pointer_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Hamr_pointer_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_sniper_F: B_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_sniper_F: B_sniper_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_ghillie_base_F: B_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_camo_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Story_SF_Captain_F: B_Soldier_base_F
	{
		faction = "BLU_CTRG_F";
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Story_Protagonist_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_khk_snds_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_khk_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
	};
	class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F
	{
		faction = "BLU_CTRG_F";
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f
	{
		faction = "BLU_CTRG_F";
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_soldier_M_medic_F: B_Soldier_03_f
	{
		faction = "BLU_CTRG_F";
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_soldier_AR_A_F: B_Soldier_base_F
	{
		faction = "BLU_CTRG_F";
		magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Sharphooter_F: B_Soldier_base_F
	{
		faction = "BLU_CTRG_F";
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
	};
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_khk_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_khk_F"};
	};
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_TL_ard_F: B_CTRG_Soldier_TL_tna_F
	{
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_Exp_ard_F: B_CTRG_Soldier_Exp_tna_F
	{
		backpack = "ZSN_B_Kitbag_sgg_CTRGExp_F";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_PlateCarrierIAGL_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_PlateCarrierIAGL_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_Medic_ard_F: B_CTRG_Soldier_Medic_tna_F
	{
		backpack = "ZSN_B_AssaultPack_sgg_CTRGMedic_F";
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_M_ard_F: B_CTRG_Soldier_M_tna_F
	{
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"arifle_MXM_SOS_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXM_SOS_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_ard_F: B_CTRG_Soldier_tna_F
	{
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_LAT_ard_F: B_CTRG_Soldier_LAT_tna_F
	{
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_NLAW_F","hgun_P07_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_NLAW_F","hgun_P07_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_LAT2_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_MRAWS_olive_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_MRAWS_olive_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_LAT2_ard_F: B_CTRG_Soldier_LAT2_tna_F
	{
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_MRAWS_sand_F","hgun_P07_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","launch_MRAWS_sand_F","hgun_P07_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_SW_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag_tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag_tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_CTRG_Soldier_AR_ard_F: B_CTRG_Soldier_AR_tna_F
	{
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"ZSN_arifle_MX_SW_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag_tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_TacVest_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_GL_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class ZSN_B_CTRG_Soldier_JTAC_ard_F: B_CTRG_Soldier_JTAC_tna_F
	{
		uniformClass = "U_B_CTRG_Soldier_Arid_F";
		editorSubcategory = "EdSubcat_Personnel";
		weapons[] = {"ZSN_arifle_MX_GL_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_ERCO_pointer_F","hgun_P07_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		linkedItems[] = {"H_HelmetB_TI_arid_F","V_PlateCarrierIAGL_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"H_HelmetB_TI_arid_F","V_PlateCarrierIAGL_oli","G_Combat","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_3_F;
	class B_CTRG_Miller_F: B_CTRG_Soldier_3_F
	{
		displayName = "Miller (Pacific)";
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_Soldier_Urban_base: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 0;
		displayName = "Urban";
		vehicleClass = "MenUrban";
		faction = "BLU_CTRG_F";
		editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
		role = "Rifleman";
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		uniformClass = "U_B_CTRG_Soldier_urb_1_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_H"};
	};
	class ZSN_B_soldierU_F: ZSN_B_Soldier_Urban_base
	{
		scope = 2;
		displayName = "Rifleman";
		cost = 100000;
		class EventHandlers;
	};
	class ZSN_B_RadioOperator_U_F: ZSN_B_soldierU_F
	{
		backpack = "B_RadioBag_01_black_F";
		displayName = "Radio Operator";
		role = "RadioOperator";
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_Soldier_U_CBRN_F: ZSN_B_soldierU_F
	{
		backpack = "B_CombinationUnitRespirator_01_F";
		camouflage = 1.6;
		cost = 93000;
		displayName = "CBRN Specialist";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\B_W_Soldier_CBRN_F.jpg";
		icon = "iconManEngineer";
		linkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_PASGT_basic_black_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGogglesB_blk_F"};
		picture = "pictureRepair";
		role = "Sapper";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "U_C_CBRN_Suit_01_Blue_F";
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_FL_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_FL_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		class EventHandlers: EventHandlers 
		{
			init = "_unit = _this select 0; (backpackContainer _unit) setObjectTexture [1, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; (backpackContainer _unit) setObjectTexture [2, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; _unit linkItem 'G_AirPurifyingRespirator_01_nofilter_F';";
		};
	};
	class ZSN_B_SoldierU_Unarmed_F: ZSN_B_soldierU_F
	{
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Balaclava_TI_G_blk_F"};
		role = "Rifleman";
		displayName = "Rifleman (Unarmed)";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class ZSN_B_soldierU_AR_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "machinegunner";
		textPlural = "machinegunners";
		nameSound = "veh_infantry_MG_s";
		scope = 2;
		displayName = "Autorifleman";
		weapons[] = {"ZSN_arifle_MX_SW_Black_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_Black_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 115000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
	};
	class ZSN_B_soldierU_AAR_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Asst. Autorifleman";
		backpack = "zsn_B_CTRG_Kitbag_rgr_AAR";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 95000;
		role = "Assistant";
	};
	class ZSN_B_soldierU_LAT_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		scope = 2;
		displayName = "Rifleman (AT)";
		backpack = "ZSN_B_AssaultPack_blk_LAT";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 180000;
		icon = "iconManAT";
		role = "MissileSpecialist";
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
	};
	class ZSN_B_soldierU_AT_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		scope = 2;
		displayName = "Missile Specialist (AT)";
		backpack = "B_AssaultPack_mcamo_AT";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
	};
	class ZSN_B_soldierU_AAT_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Asst. Missile Specialist (AT)";
		backpack = "I_Carryall_oli_AAT";
		cost = 93000;
		role = "Assistant";
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
	};
	class ZSN_B_soldierU_AA_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		scope = 2;
		displayName = "Missile Specialist (AA)";
		backpack = "B_AssaultPack_mcamo_AA";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_B_Titan_olive_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_B_Titan_olive_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
	};
	class ZSN_B_soldierU_AAA_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "I_Carryall_oli_AAA";
		cost = 94000;
		role = "Assistant";
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
	};
	class ZSN_B_soldierU_TL_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Team Leader";
		weapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI:G_blk_F"};
		cost = 450000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Grenadier";
	};
	class ZSN_B_soldierU_medic_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";
		scope = 2;
		displayName = "Combat Life Saver";
		attendant = 1;
		backpack = "ZSN_B_FieldPack_blk_Medic";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 300000;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
	};
	class ZSN_B_SoldierU_SL_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Squad Leader";
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		cost = 500000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Rifleman";
	};
	class ZSN_B_soldierU_repair_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Repair Specialist";
		cost = 220000;
		camouflage = 1.6;
		backpack = "ZSN_B_FieldPack_blk_Repair";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		engineer = 1;
		detectSkill = 40;
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class ZSN_B_soldierU_exp_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Explosive Specialist";
		cost = 115000;
		camouflage = 1.6;
		backpack = "B_Kitbag_rgr_Exp";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
	};
	class ZSN_B_engineer_U_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		backpack = "I_Carryall_oli_Eng";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class ZSN_B_soldierU_M_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "sniper";
		textPlural = "snipers";
		nameSound = "veh_infantry_sniper_s";
		scope = 2;
		displayName = "Marksman";
		weapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		cost = 150000;
		role = "Marksman";
	};
	class ZSN_B_soldierU_A_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Ammo Bearer";
		cost = 105000;
		role = "Rifleman";
		camouflage = 1.5;
		backpack = "zsn_B_AssaultPack_cbr_Ammo";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
	};
	class ZSN_B_SoldierU_GL_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Grenadier";
		backpack = "B_AssaultPack_blk";
		weapons[] = {"ZSN_arifle_MX_GL_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 130000;
		role = "Grenadier";
		threat[] = {1,0.3,0.1};
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		vehicleClass = "MenUrban";
	};
	class ZSN_B_Urban_Sharpshooter_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "sniper";
		textPlural = "snipers";
		nameSound = "veh_infantry_sniper_s";
		scope = 2;
		displayName = "Sharpshooter";
		role = "Marksman";
		weapons[] = {"ZSN_srifle_DMR_02_AMS_LP_BI_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_02_AMS_LP_BI_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		DLC = "Mark";
	};
	class ZSN_B_Urban_HeavyGunner_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "machinegunner";
		textPlural = "machinegunners";
		nameSound = "veh_infantry_MG_s";
		scope = 2;
		displayName = "Heavy Gunner";
		icon = "iconManMG";
		role = "MachineGunner";
		weapons[] = {"ZSN_MMG_02_black_ERCO_LP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_02_black_ERCO_LP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		DLC = "Mark";
	};
	class B_Soldier_support_base_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_MG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Support_MG_F: B_support_MG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Support_MG_F: B_support_MG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_GMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_GMG_F: B_support_GMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_GMG_F: B_support_GMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_Mort_F: B_support_Mort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_Mort_F: B_support_Mort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_AAR_F;
	class B_T_Soldier_AAR_F: B_soldier_AAR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AAR_F: B_soldier_AAR_F
	{
		backpack = "ZSN_B_Kitbag_rgr_AAR";
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_AMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_AMG_F: B_support_AMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_AMG_F: B_support_AMG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_AMort_F: B_support_AMort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_AMort_F: B_support_AMort_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Sharpshooter_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_EBR_AMS_LP_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_EBR_AMS_LP_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_soldier_AAT_F: B_Soldier_support_base_F{};
	class B_T_Soldier_AAT_F: B_soldier_AAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AAT_F: B_soldier_AAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AAA_F: B_soldier_AAT_F{};
	class B_T_Soldier_AAA_F: B_soldier_AAA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AAA_F: B_soldier_AAA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_PG_F: B_Soldier_base_F{};
	class B_T_Soldier_PG_F: B_soldier_PG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_soldier_UAV_F: B_Soldier_base_F{};
	class B_T_Soldier_UAV_F: B_soldier_UAV_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_W_Soldier_UAV_F: B_soldier_UAV_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Patrol_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_Leader_weapon_F","B_Patrol_Soldier_Pistol_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_Leader_weapon_F","B_Patrol_Soldier_Pistol_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
	};
	class B_Patrol_Soldier_UAV_F: B_soldier_UAV_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_M_F: B_soldier_M_F
	{
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Medic_F: B_medic_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade"};
	};
	class B_Patrol_Soldier_AR_F: B_soldier_AR_F
	{
		magazines[] = {"150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_MG_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_B_Patrol_Soldier_MachineGunner_weapon_F","B_Patrol_Soldier_Pistol_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_B_Patrol_Soldier_MachineGunner_weapon_F","B_Patrol_Soldier_Pistol_F","Throw","Put","Binocular"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_Tracer_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_Tracer_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_HeavyGunner_F: B_Soldier_base_F
	{
		weapons[] = {"MMG_02_sand_RCO_LP_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"MMG_02_sand_RCO_LP_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
	{
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_A_F: B_Soldier_A_F
	{
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_AT_F: B_soldier_AT_F
	{
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Engineer_F: B_engineer_F
	{
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class I_Soldier_Base_F: SoldierGB
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		class EventHandlers;
	};
	class I_E_Soldier_base_F;
	class I_E_Soldier_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		class EventHandlers;
	};
	class I_E_Soldier_lite_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_A_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_GL_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_GL_ACO_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_GL_ACO_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_E_Soldier_AR_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_LMG_03_aco_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_aco_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAR_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAA_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAT_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_UAV_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_SL_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_TL_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_E_Soldier_M_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_03_DMS_LP_BI_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_srifle_DMR_03_DMS_LP_BI_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_LAT_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_LAT2_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AT_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AA_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_eaf_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_eaf_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_medic_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_repair_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_exp_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_engineer_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_crew_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20c_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20c_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_helipilot_F: I_E_Soldier_base_F
	{
		weapons[] = {"SMG_03C_TR_camo","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_camo","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_helicrew_F: I_E_Soldier_base_F
	{
		weapons[] = {"SMG_03C_TR_camo","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_camo","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_officer_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_support_base_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_MG_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_GMG_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_Mort_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_AMG_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_AMort_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_RadioOperator_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Scientist_F: I_E_Soldier_base_F
	{
		weapons[] = {"SMG_03C_TR_hex","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_hex","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_CBRN_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_camo_fl_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_camo_fl_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_PASGT_basic_olive_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_PASGT_basic_olive_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_MP_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_camo_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_camo_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_Pathfinder_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_camo_PF_F","hgun_P07_blk_snds_F","Throw","Put","laserdesignator_02"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_camo_PF_F","hgun_P07_blk_snds_F","Throw","Put","laserdesignator_02"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","Chemlight_blue","Chemlight_blue","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","Chemlight_blue","Chemlight_blue","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
	};
	class ZSN_I_E_Sniper_F: I_E_Soldier_Pathfinder_F
	{
		displayName = "Sniper";
		uniformClass = "U_I_E_Uniform_01_sweater_F";
		weapons[] = {"srifle_LRR_LRPS_F","hgun_P07_blk_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_LRPS_F","hgun_P07_blk_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_TacVest_oli","H_Booniehat_eaf","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_Booniehat_eaf","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class B_T_ghillie_tna_F;
	class ZSN_I_E_ghillie_F: B_T_ghillie_tna_F
	{
		_generalMacro = "I_E_Soldier_base_F";
		side = 2;
		faction = "IND_E_F";
		displayName = "Sniper (Ghillie)";
		genericNames = "EnochMen";
		editorSubcategory = "EdSubcat_Personnel";
		uniformClass = "U_I_E_FullGhillie_F";
		modelSides[] = {2,3};
		identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};
		weapons[] = {"srifle_LRR_LRPS_F","hgun_P07_blk_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_LRPS_F","hgun_P07_blk_snds_F","Throw","Put","Rangefinder"};
		linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_02_F: I_Soldier_base_F{};
	class I_Soldier_03_F: I_Soldier_base_F{};
	class I_Soldier_04_F: I_Soldier_base_F{};
	class I_pilot_F: I_Soldier_04_F
	{
		weapons[] = {"SMG_01_ACO_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShell","SmokeShellGreen","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShell","SmokeShellGreen","Chemlight_green"};
	};
	class I_Fighter_Pilot_F: I_pilot_F
	{
		weapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_RadioOperator_F: I_Soldier_F
	{
		backpack = "B_RadioBag_01_digi_F";
		displayName = "Radio Operator";
		role = "RadioOperator";
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_Soldier_CBRN_F: I_Soldier_base_F
	{
		backpack = "B_CombinationUnitRespirator_01_F";
		camouflage = 1.6;
		cost = 93000;
		displayName = "CBRN Specialist";
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\I_E_Soldier_CBRN_F.jpg";
		icon = "iconManEngineer";
		picture = "pictureRepair";
		role = "Sapper";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "U_I_CBRN_Suit_01_AAF_F";
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"arifle_MSBS65_black_aco_FL_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MSBS65_black_aco_FL_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		class EventHandlers: EventHandlers 
		{
			init = "_unit = _this select 0; (backpackContainer _unit) setObjectTexture [1, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; (backpackContainer _unit) setObjectTexture [2, 'a3\supplies_f_enoch\bags\data\b_cur_01_co.paa']; _unit linkItem 'G_AirPurifyingRespirator_01_nofilter_F';";
		};
	};
	class I_Soldier_lite_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_A_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{
		weapons[] = {"LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_SL_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_UBS_sand_ico_pointer_f","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_UBS_sand_ico_pointer_f","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_M_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_Mark_sand_SOS_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_Mark_sand_SOS_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_NLAW_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_NLAW_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_LAT2_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_MRAWS_sand_rail_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_MRAWS_sand_rail_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AA_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_medic_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_repair_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_exp_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_engineer_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_crew_F: I_Soldier_base_F
	{
		uniformClass = "U_Tank_green_F";
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Story_Crew_F: I_crew_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellGreen"};
	};
	class I_Helipilot_F: I_Soldier_03_F
	{
		weapons[] = {"SMG_01_ACO_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_helicrew_F: I_Helipilot_F
	{
		weapons[] = {"SMG_01_ACO_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_officer_F: I_Soldier_base_F
	{
		weapons[] = {"arifle_MSBS65_sand_f","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		respawnweapons[] = {"arifle_MSBS65_sand_f","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Story_Officer_01_F: I_Officer_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","SmokeShell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","SmokeShell"};
	};
	class I_Captain_Hladas_F: I_Officer_F
	{
		weapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		respawnweapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
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
		weapons[] = {"ZSN_arifle_ARX_blk_MRCO_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"ZSN_arifle_ARX_blk_MRCO_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_03"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_sniper_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_ghillie_base_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_support_base_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_support_MG_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_GMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_AMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_AMort_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
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
		weapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
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
		linkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","launch_NLAW_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","launch_NLAW_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
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
		weapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
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
		linkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		picture = "pictureHeal";
		weapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
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
		weapons[] = {"ZSN_arifle_MSBS65_sand_ICO_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ICO_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
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
		weapons[] = {"ZSN_arifle_MSBS65_Mark_sand_SOS_LP_BI_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_Mark_sand_SOS_LP_BI_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
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
		weapons[] = {"ZSN_arifle_MSBS65_GL_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_sand_aco_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
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
		weapons[] = {"ZSN_arifle_MSBS65_UBS_sand_snds_ico_pointer_f","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_UBS_sand_snds_ico_pointer_f","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_G_Soldier_base_F: SoldierGB{};
	class I_G_Soldier_F: I_G_Soldier_base_F{};
	class ZSN_I_G_Soldier_F: I_G_Soldier_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Survivor_F;
	class ZSN_I_G_Survivor_F: I_G_Survivor_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
	};
	class I_G_Soldier_unarmed_F;
	class ZSN_I_G_Soldier_unarmed_F: I_G_Soldier_unarmed_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
	};
	class I_G_Soldier_lite_F;
	class ZSN_I_G_Soldier_lite_F: I_G_Soldier_lite_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_A_F;
	class ZSN_I_G_Soldier_A_F: I_G_Soldier_A_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_1_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		backpack = "ZSN_G_Carryall_Ammo";
		weapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Sharpshooter_F;
	class ZSN_I_G_Sharpshooter_F: I_G_Sharpshooter_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_2_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"ZSN_srifle_DMR_06_olive_khs_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_srifle_DMR_06_olive_khs_F","Throw","Put"};
	};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_TRG20_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_TRG20_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class ZSN_I_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_2_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"ZSN_arifle_CTAR_blk_aco_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_CTAR_blk_aco_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_TL_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_GL_camo_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_camo_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class ZSN_I_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_2_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_G_Soldier_GL_F;
	class ZSN_I_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_CTAR_GL_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_GL_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_G_Engineer_F;
	class ZSN_I_G_Engineer_F: I_G_Engineer_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"ZSN_arifle_CTAR_blk_aco_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_CTAR_blk_aco_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
	{
		weapons[] = {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class ZSN_I_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_CTARS_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTARS_blk_F","Throw","Put"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Medic_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_MSBS65_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MSBS65_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class ZSN_I_G_Medic_F: I_G_Medic_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_Katiba_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_exp_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_UBS_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_UBS_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class ZSN_I_G_Soldier_exp_F: I_G_Soldier_exp_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_Katiba_C_ACO_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Officer_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_TRG21_MRCO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_MRCO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class ZSN_I_G_Officer_F: I_G_Officer_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_3_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"ZSN_arifle_CTAR_blk_mrco_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_CTAR_blk_mrco_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_M_F: I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_Mark_camo_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_Mark_camo_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class ZSN_I_G_Soldier_M_F: I_G_Soldier_M_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Para_4_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"ZSN_srifle_DMR_07_blk_mrco_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_07_blk_mrco_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_LAT_F;
	class ZSN_I_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Camo_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_CTAR_blk_F","launch_RPG32_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","launch_RPG32_green_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_LAT2_F;
	class ZSN_I_G_Soldier_LAT2_F: I_G_Soldier_LAT2_F
	{
		faction = "IND_C_F";
		uniformClass = "U_I_C_Soldier_Camo_F";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan","G_GUERIL_default"};
		weapons[] = {"arifle_CTAR_blk_F","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class B_G_Soldier_F;
	class I_G_Story_Protagonist_F: B_G_Soldier_F
	{
		weapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class B_G_Story_Guerilla_01_F: B_G_Soldier_F
	{
		weapons[] = {"SMG_05_F","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","MiniGrenade"};
	};
	class I_L_Soldier_Base_F;
	class I_L_Looter_Pistol_F: I_L_Soldier_Base_F
	{
		weapons[] = {"hgun_ACPC2_F","Throw","Put"};
		respawnweapons[] = {"hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
	};
	class I_L_Looter_SMG_F: I_L_Soldier_Base_F
	{
		weapons[] = {"arifle_AKS_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","Chemlight_blue"};
	};
	class I_L_Looter_Rifle_F: I_L_Soldier_Base_F
	{
		weapons[] = {"arifle_AKM_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
	};
	class I_L_Criminal_SMG_F: I_L_Soldier_Base_F
	{
		weapons[] = {"SMG_05_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"SMG_05_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
		respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
	};
	class I_C_Soldier_base_F: I_G_Soldier_base_F{};
	class I_C_Soldier_Para_1_F: I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade"};
	};
	class I_C_Soldier_Para_2_F: I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_C_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade"};
	};
	class B_G_Captain_Ivan_F: I_C_Soldier_Para_2_F
	{
		weapons[] = {"arifle_AKM_F","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_C_Soldier_Para_4_F: I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
	};
	class I_C_Soldier_Para_6_F: I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class I_C_Soldier_Bandit_3_F: I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
	};
	class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F
	{
		weapons[] = {"arifle_AK12_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12_F","Throw","Put"};
	};
	class O_Soldier_base_F: SoldierEB
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_lite_F: SoldierEB
	{
		faction = "OPF_F";
		weapons[] = {"ZSN_arifle_AK12_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_F;
	class ZSN_O_RadioOperator_F: O_Soldier_F
	{
		author = "ZluskeN";
		backpack = "B_RadioBag_01_hex_F";
		displayName = "Radio Operator";
		role = "RadioOperator";
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_T_Soldier_F;
	class ZSN_O_T_RadioOperator_F: O_T_Soldier_F
	{
		author = "ZluskeN";
		backpack = "B_RadioBag_01_ghex_F";
		displayName = "Radio Operator";
		role = "RadioOperator";
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_F;
	class ZSN_O_RadioOperatorU_F: O_soldierU_F
	{
		author = "ZluskeN";
		backpack = "B_RadioBag_01_oucamo_F";
		displayName = "Radio Operator";
		role = "RadioOperator";
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_AR_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_RPK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_RPK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_A_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Officer_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_T_Officer_F: O_Officer_F
	{
		weapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
	};
	class O_medic_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_crew_F: O_Soldier_base_F
	{
		weapons[] = {"arifle_AK12U_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12U_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_T_crew_F: O_crew_F
	{
		weapons[] = {"arifle_CTAR_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_ghex_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_helipilot_F;
	class O_helicrew_F: O_helipilot_F
	{
		weapons[] = {"arifle_AK12U_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12U_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_T_helicrew_F: O_helicrew_F
	{
		weapons[] = {"arifle_CTAR_ghex_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_ghex_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_engineer_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldier_exp_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldier_repair_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldier_UAV_F: O_Soldier_base_F
	{
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_GL_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
	};
	class O_Soldier_AA_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_AT_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_LAT_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_HAT_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_SL_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_TL_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
	};
	class O_Sharpshooter_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_05_hex_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_05_hex_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
	};
	class O_HeavyGunner_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_Soldier_support_base_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_support_AMG_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_AMort_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_GMG_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_Mort_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_MG_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_Soldier_sniper_base_F;
	class O_spotter_F: O_Soldier_sniper_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_recon_base;
	class O_recon_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_recon_exp_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_recon_JTAC_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
	};
	class O_recon_medic_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_recon_TL_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_recon_LAT_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_Urban_base: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AR_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_RPK12_arid_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_RPK12_arid_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Arid_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AAR_F: O_Soldier_Urban_base
	{
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_LAT_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AT_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AAT_F: O_Soldier_Urban_base
	{
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AA_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AAA_F: O_Soldier_Urban_base
	{
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_TL_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_GL_arid_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_arid_ARCO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_M_F: O_Soldier_Urban_base
	{
		weapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
	};
	class O_SoldierU_SL_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_arid_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_AK12_arid_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","30rnd_762x39_AK12_Arid_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_repair_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12U_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_exp_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12U_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_engineer_U_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12U_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_medic_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_arid_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_arid_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_A_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_arid_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_SoldierU_GL_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_arifle_AK12_GL_arid_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_arid_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","30rnd_762x39_AK12_Arid_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_srifle_DMR_05_tan_KHS_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_05_tan_KHS_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
	};
	class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_MMG_01_tan_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_01_tan_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_A_soldier_base_F;
	class O_A_medic_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_officer_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_soldier_A_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_soldier_AA_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_soldier_AR_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_soldier_AT_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_soldier_GL_F: O_A_soldier_base_F
	{
		weapons[] = {"arifle_CTAR_GL_blk_aco_flash_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_GL_blk_aco_flash_F","Throw","Put"};
	};
	class O_A_soldier_LAT_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_soldier_M_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class O_A_soldier_SL_F: O_A_soldier_base_F
	{
		scope = 2;
	};
	class Car_F;
	class Offroad_01_military_base_F;
	class I_E_Offroad_01_F: Offroad_01_military_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
		};
	};
	class Offroad_01_military_covered_base_F;
	class I_E_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
		};
	};
	class Offroad_01_military_comms_base_F;
	class I_E_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
		};
	};
	class MRAP_01_base_F: Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
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
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
			};
		};
	};
	class B_MRAP_01_F;
	class B_T_MRAP_01_F: B_MRAP_01_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_T_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_T_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class MRAP_02_base_F: Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30rnd_762x39_AK12_Mag_F
			{
				magazine = "30rnd_762x39_AK12_Mag_F";
				count = 16;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class LSV_01_base_F: Car_F
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
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_CTRG_LSV_01_light_F: LSV_01_light_base_F
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
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_black_mag
			{
				magazine = "100Rnd_65x39_caseless_black_mag";
				count = 9;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_LSV_01_unarmed_black_F;
	class ZSN_B_CTRG_LSV_01_black_F: B_LSV_01_unarmed_black_F
	{
		scope = 2;
		scopeCurator = 2;
		faction = "BLU_CTRG_F";
		crew = "ZSN_B_CTRG_Soldier_ard_F";
		typicalCargo[] = {"ZSN_B_CTRG_Soldier_ard_F"};
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_snd_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag_red;
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_black_mag
			{
				magazine = "100Rnd_65x39_caseless_black_mag";
				count = 6;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_T_LSV_01_armed_F: LSV_01_armed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class LSV_01_AT_base_F;
	class B_T_LSV_01_AT_F: LSV_01_AT_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_T_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_F
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
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_khaki_mag
			{
				magazine = "100Rnd_65x39_caseless_khaki_mag";
				count = 9;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_T_LSV_01_unarmed_F: LSV_01_unarmed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class B_T_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_F
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
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_khaki_mag
			{
				magazine = "100Rnd_65x39_caseless_khaki_mag";
				count = 9;
			};
			delete _xx_16Rnd_9x21_Mag;
			class _xx_ZSN_20Rnd_570x28_Mag
			{
				magazine = "ZSN_20Rnd_570x28_Mag";
				count = 12;
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
	class LSV_02_base_F: Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30rnd_762x39_AK12_Mag_F
			{
				magazine = "30rnd_762x39_AK12_Mag_F";
				count = 16;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class MRAP_03_base_F: Car_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_f
			{
				count = 2;
				weapon = "arifle_MSBS65_sand_f";
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
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 16;
			};
		};
	};
	class Wheeled_APC_F;
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
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
	class B_T_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
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
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_f
			{
				count = 2;
				weapon = "arifle_MSBS65_sand_f";
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 12;
			};
		};
	};
	class Tank_F;
	class APC_Tracked_01_base_F: Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
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
	class B_T_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
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
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
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
	class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
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
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
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
	class B_T_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
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
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
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
	class APC_Tracked_02_base_F: Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_RPK12_F
			{
				weapon = "arifle_RPK12_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 24;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 8;
			};
		};
	};
	class APC_Tracked_03_base_F: Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_Mk200_BI_F
			{
				weapon = "LMG_Mk200_BI_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 24;
			};
		};
	};
	class I_E_APC_tracked_03_base_F;
	class I_E_APC_tracked_03_cannon_F: I_E_APC_tracked_03_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_arty_F;
	class B_T_MBT_01_arty_F: B_MBT_01_arty_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
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
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class B_T_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
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
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class B_MBT_01_cannon_F;
	class B_T_MBT_01_cannon_F: B_MBT_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
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
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_T_MBT_01_TUSK_F: B_MBT_01_TUSK_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
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
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class MBT_02_base_F: Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class MBT_03_base_F: Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 4;
			};
		};
	};
	class MBT_04_cannon_base_F;
	class O_MBT_04_cannon_F: MBT_04_cannon_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class MBT_04_command_base_F;
	class O_MBT_04_command_F: MBT_04_command_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
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
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_CTRG_Heli_Transport_01_sand_F: Heli_Transport_01_base_F
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
	class B_CTRG_Heli_Transport_01_tropic_F: Heli_Transport_01_base_F
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
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 4;
			};
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 4;
			};
		};
	};
	class Heli_light_02_base_F: Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 4;
			};
		};
	};
	class Heli_light_03_unarmed_base_F;
	class I_E_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F;
	class I_E_Heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class Heli_Transport_04_base_F;
	class O_Heli_Transport_04_box_F: Heli_Transport_04_base_F
	{
		class transportweapons
		{
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_RPK12_F
			{
				weapon = "arifle_RPK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 8;
			};
		};
	};
};
class cfggroups
{
	class West
	{
		class BLU_CTRG_F
		{
			class SpecOps
			{
				name = "Special Forces";
				class ZSN_BI_ViperTeam
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_TL_ard_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_JTAC_ard_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_M_ard_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_Exp_ard_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_LAT2_ard_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_Medic_ard_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					name = "CTRG-13 Team";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class ZSN_B_MotInf_CTRGAssaultTeam
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_LSV_01_black_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_TL_ard_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_LAT2_ard_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_M_ard_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_AR_ard_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_LAT_ard_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_Medic_ard_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					name = "Motorized CTRG-13 Assault";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
				};
				class ZSN_B_MotInf_CTRGReconTeam
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_LSV_01_black_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_TL_ard_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_JTAC_ard_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_M_ard_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_Exp_ard_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_LAT_ard_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_B_CTRG_Soldier_Medic_ard_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					name = "Motorized CTRG-13 Recon";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
				};
			};
			class UInfantry
			{
				name = "Urban Infantry";
				class ZSN_BIA_GuardSquad
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_B_soldierU_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					name = "CQB Squad";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
				};
				class ZSN_BIA_GuardTeam
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					name = "CQB Patrol";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
				};
				class ZSN_BIA_GuardSentry
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					name = "CQB Sentry";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
				};
			};
		};
	};
	class East
	{
		class ZSN_OPF_A_F
		{
			name = "CSAT (Arid)";
			class Infantry
			{
				name = "Infantry";
				class ZSN_O_A_InfSquad
				{
					class Unit0
					{
						side = 0;
						vehicle = "O_A_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_A_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_A_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_A_soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "O_A_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "O_A_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "O_A_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "O_A_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					name = "Rifle Squad";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
				};
				class ZSN_O_A_InfTeam
				{
					class Unit0
					{
						side = 0;
						vehicle = "O_A_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_A_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "O_A_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "O_A_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					name = "Fire Team";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
				};
				class ZSN_O_A_InfSentry
				{
					class Unit0
					{
						side = 0;
						vehicle = "O_A_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "O_A_soldier_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					name = "Sentry";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
				};
			};
		};
	};
	class Indep
	{
		class IND_E_F
		{
			class Infantry
			{
				class ZSN_I_E_SniperTeam
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_E_Sniper_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_E_Soldier_Pathfinder_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					name = "Sniper Team";
					side = 2;
					faction = "IND_E_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
			};
		};
		class IND_C_F
		{
			class Infantry
			{
				class ZSN_I_G_InfSquad_Assault
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_G_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_LAT2_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_I_G_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					name = "Assault Squad";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
				};
				class ZSN_I_G_InfTeam_Light
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_G_soldier_LAT2_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					name = "Patrol Team";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
				};
				class ZSN_IRG_InfAssault
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_G_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_G_Sharpshooter_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_G_Soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_G_Soldier_A_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					name = "Assault Team";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
				};
				class ZSN_IRG_SniperTeam_M
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_G_Sharpshooter_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_G_Soldier_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					name = "Sniper Team";
					side = 2;
					faction = "IND_C_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
			};
		};
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
