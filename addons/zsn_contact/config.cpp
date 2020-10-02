////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_Contact
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_Loadouts","A3_Characters_F_Contact"};
	};
};
class cfgWeapons
{
	class arifle_SPAR_01_GL_blk_F;
	class ZSN_arifle_SPAR_01_GL_blk_RCO_pointer_EMP_F: arifle_SPAR_01_GL_blk_F
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
				item = "acc_pointer_IR_Broken";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_02_blk_F;
	class ZSN_arifle_SPAR_02_blk_pointer_EMP_F: arifle_SPAR_02_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR_broken";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_02_blk_FL_EMP_F: arifle_SPAR_02_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_02_blk_RCO_pointer_EMP_F: arifle_SPAR_02_blk_F
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
				item = "acc_pointer_IR_Broken";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_02_blk_RCO_FL_F: arifle_SPAR_02_blk_F
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
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_02_blk_ACO_FL_F: arifle_SPAR_02_blk_F
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
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_03_blk_F;
	class ZSN_arifle_SPAR_03_blk_MOS_LP_BI_F: arifle_SPAR_03_blk_F
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
				item = "acc_pointer_IR_broken";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_Blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class LMG_03_F;
	class ZSN_LMG_03_Pointer_EMP_F: LMG_03_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR_broken";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_LMG_03_FL_EMP_F: LMG_03_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
		};
	};
	class srifle_DMR_03_F;
	class ZSN_srifle_DMR_03_SOS_FL_BI_EMP_F: srifle_DMR_03_F
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
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class SMG_03C_TR_camo;
	class ZSN_SMG_03C_TR_camo_FL_EMP: SMG_03C_TR_camo
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_Mk20_GL_F;
	class ZSN_arifle_Mk20_GL_FL_EMP_F: arifle_Mk20_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
		};
	};
	class zsn_arifle_Mk20_GL_MRCO_FL_EMP_F: arifle_Mk20_GL_F
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
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_Mk20_F;
	class ZSN_arifle_Mk20_FL_EMP_F: arifle_Mk20_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_Mk20_MRCO_FL_EMP_F: arifle_Mk20_F
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
				item = "acc_flashlight_broken";
				slot = "PointerSlot";
			};
		};
	};
};
class CfgVehicles
{
	class B_W_Soldier_F;
	class B_W_Story_Soldier_01_F : B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Chemlight_blue","Chemlight_blue","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Chemlight_blue","Chemlight_blue","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_wdl","H_HelmetB_plain_wdl","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier2_wdl","H_HelmetB_plain_wdl","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_W_Story_Protagonist_01_F : B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_FL_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_FL_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Chemlight_blue","Chemlight_blue","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Chemlight_blue","Chemlight_blue","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB_plain_wdl","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB_plain_wdl","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_W_Story_Instructor_01_F : B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_FL_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_ACO_FL_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_W_Story_Leader_01_F : B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_RCO_FL_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_RCO_FL_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","B_IR_Grenade","B_IR_Grenade","Chemlight_blue","Chemlight_blue","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange"};
		respawnMagazines[] = {"ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","B_IR_Grenade","B_IR_Grenade","Chemlight_blue","Chemlight_blue","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange"};
		linkedItems[] = {"V_PlateCarrierGL_wdl","H_HelmetSpecB_wdl","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_wdl","H_HelmetSpecB_wdl","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_W_Soldier_EMP_F : B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_RadioOperator_F;
	class B_W_RadioOperator_EMP_F : B_W_RadioOperator_F
	{
		weapons[] = {"arifle_SPAR_01_GL_blk_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_Soldier_CBRN_F;
	class B_W_Soldier_CBRN_EMP_F : B_W_Soldier_CBRN_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_Soldier_GL_F;
	class B_W_Soldier_GL_EMP_F: B_W_Soldier_GL_F
	{
		weapons[] = {"arifle_SPAR_01_GL_blk_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_Soldier_AR_F;
	class B_W_Soldier_AR_EMP_F: B_W_Soldier_AR_F
	{
		weapons[] = {"ZSN_LMG_03_Pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_Pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_Soldier_SL_F;
	class B_W_Soldier_SL_EMP_F: B_W_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_RCO_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_RCO_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_Soldier_TL_F;
	class B_W_Soldier_TL_EMP_F: B_W_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_RCO_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_RCO_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_soldier_M_F;
	class B_W_soldier_M_EMP_F: B_W_soldier_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_blk_MOS_LP_BI_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_blk_MOS_LP_BI_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_soldier_LAT2_F;
	class B_W_soldier_LAT2_EMP_F: B_W_soldier_LAT2_F
	{
		displayName = "Rifleman (Light AT)";
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_medic_F;
	class B_W_medic_EMP_F: B_W_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
	};
	class B_W_Soldier_A_F;
	class B_W_Soldier_A_EMP_F: B_W_Soldier_A_F
	{
		faction = "BLU_W_EMP_F";
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_EMP_F","hgun_P07_blk_F","Throw","Put"};
	};
	class I_E_Soldier_F;
	class I_E_Soldier_EMP_F: I_E_Soldier_F
	{
		weapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_GL_F;
	class I_E_Soldier_GL_EMP_F: I_E_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_AR_F;
	class I_E_Soldier_AR_EMP_F: I_E_Soldier_AR_F
	{
		weapons[] = {"ZSN_LMG_03_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_SL_F;
	class I_E_Soldier_SL_EMP_F: I_E_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_Mk20_MRCO_FL_EMP_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_MRCO_FL_EMP_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_TL_F;
	class I_E_Soldier_TL_EMP_F: I_E_Soldier_TL_F
	{
		weapons[] = {"zsn_arifle_Mk20_GL_MRCO_FL_EMP_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"zsn_arifle_Mk20_GL_MRCO_FL_EMP_F","hgun_P07_blk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_M_F;
	class I_E_Soldier_M_EMP_F: I_E_Soldier_M_F
	{
		weapons[] = {"ZSN_srifle_DMR_03_SOS_FL_BI_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_srifle_DMR_03_SOS_FL_BI_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_LAT2_F;
	class I_E_Soldier_LAT2_EMP_F: I_E_Soldier_LAT2_F
	{
		weapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_medic_F;
	class I_E_medic_EMP_F: I_E_medic_F
	{
		weapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_RadioOperator_F;
	class I_E_RadioOperator_EMP_F: I_E_RadioOperator_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_CBRN_F;
	class I_E_Soldier_CBRN_EMP_F: I_E_Soldier_CBRN_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_camo_FL_EMP","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_camo_FL_EMP","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Deserter_base_F;
	class I_E_Militiaman_SMG_F: I_E_Deserter_base_F
	{
		weapons[] = {"SMG_03C_TR_camo","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_camo","Throw","Put"};
	};
	class I_E_Deserter_GL_F: I_E_Deserter_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_GL_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_GL_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Deserter_Rifle_F: I_E_Deserter_base_F
	{
		weapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_Mk20_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Deserter_AR_F: I_E_Deserter_base_F
	{
		weapons[] = {"ZSN_LMG_03_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_FL_EMP_F","hgun_P07_blk_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellGreen","Chemlight_Blue","Chemlight_Blue"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};