////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_FiveseveN
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ZSN_Loadouts"};
	};
};
class cfgWeapons
{
	class SMG_03C_TR_khaki;
	class ZSN_SMG_03C_TR_khaki: SMG_03C_TR_khaki
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
	class ZSN_SMG_03C_TR_khaki_ACO: SMG_03C_TR_khaki
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
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class SMG_03C_TR_black;
	class ZSN_SMG_03C_TR_black: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class B_Patrol_Soldier_Operator_weapon_F: SMG_03C_TR_black
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
				item = "muzzle_snds_570";
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
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
		};
	};
	class NATO_Box_Base : ReammoBox_F{};
	class Box_NATO_Ammo_F : NATO_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
		};
	};
	class Box_NATO_Wps_F : NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_hgun_PDW2000_F;
			class SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Box_T_NATO_Wps_F : Box_NATO_Wps_F
	{
		class TransportWeapons
		{
			delete _xx_hgun_PDW2000_F;
			class SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_9x21_Mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Box_NATO_Support_F : NATO_Box_Base
	{
		class TransportItems
		{
			class muzzle_snds_570
			{
				name = "muzzle_snds_570";
				count = 5;
			};
		};
	};
	class Box_Syndicate_Wps_F : ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 2;	
			};
		};
		class TransportWeapons
		{
			class _xx_hgun_PDW2000_snds_F
			{
				weapon = "hgun_PDW2000_snds_F";
				count = 2;
			};
		};
	};
	class Box_Syndicate_Ammo_F : ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 6;	
			};
		};
	};
	class I_C_Soldier_base_F;
	class I_C_Soldier_Bandit_7_F : I_C_Soldier_base_F
	{
		weapons[] = {"hgun_PDW2000_snds_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","MiniGrenade","MiniGrenade"};
	};
	class B_Soldier_02_f;
	class B_Captain_Pettka_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_05_f;
	class B_Pilot_F : B_Soldier_05_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_black","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
	};
	class B_Soldier_base_F;
	class B_soldier_exp_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_exp_F: B_soldier_exp_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AA_F: B_soldier_AA_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_Soldier_03_f;
	class B_engineer_F : B_Soldier_03_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_engineer_F : B_engineer_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_crew_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_T_Crew_F: B_crew_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_P07_khk_F","Throw","Put"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Soldier_04_f;
	class B_Helipilot_F: B_Soldier_04_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helipilot_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Helicrew_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helicrew_F: B_Helicrew_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Soldier_support_base_F;
	class B_support_MG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Support_MG_F: B_support_MG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_support_GMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_GMG_F: B_support_GMG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_Mort_F: B_support_Mort_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_support_AMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_AMG_F: B_support_AMG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_AMort_F: B_support_AMort_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
	};
	class B_soldier_UAV_F;
	class B_Patrol_Soldier_UAV_F: B_soldier_UAV_F
	{
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class Tank_F;
	class MBT_01_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_arty_F;
	class B_T_MBT_01_arty_F : B_MBT_01_arty_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class B_T_MBT_01_mlrs_F : B_MBT_01_mlrs_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_cannon_F;
	class B_T_MBT_01_cannon_F : B_MBT_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_T_MBT_01_TUSK_F : B_MBT_01_TUSK_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Helicopter_Base_F;
	class Helicopter_Base_H;
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Attack_01_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Transport_01_base_F : Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
};
