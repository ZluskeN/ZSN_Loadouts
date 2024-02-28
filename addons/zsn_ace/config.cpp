////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_ACE_Gear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Mark","A3_Characters_F_Exp","A3_Characters_F_Jets","A3_Characters_F_Patrol","A3_Characters_F_Orange","ZSN_Loadouts"};
	};
};
class CfgMagazineWells
{
	class CBA_556x45_STANAG
	{
		ZSN_mags[] = {"ZSN_30Rnd_556x45_Stanag_Sand_M995_AP_mag"};
	};
	class CBA_556x45_STANAG_2D_XL
	{
		ZSN_mags[] = {"ZSN_150Rnd_556x45_Drum_M995_AP_mag","ZSN_150Rnd_556x45_Drum_Sand_M995_AP_mag"};
	};
};
class cfgMagazines
{
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag;
	class ZSN_30Rnd_556x45_Stanag_Sand_M995_AP_mag: ACE_30Rnd_556x45_Stanag_M995_AP_mag
	{
		author = "ZluskeN";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
		displayName = "5.56 mm 30Rnd Sand Mag (M995 AP)";
	};
	class 150Rnd_556x45_Drum_Mag_F;
	class ZSN_150Rnd_556x45_Drum_M995_AP_mag: 150Rnd_556x45_Drum_Mag_F
	{
		author = "ZluskeN";
		ammo = "ACE_556x45_Ball_M995_AP";
		descriptionShort = "Caliber: 5.56x45 mm NATO (M995 AP)<br />Rounds: 30";
		displayName = "5.56 mm 30Rnd Mag (M995 AP)";
		displayNameShort = "5.56 mm AP";
		initSpeed = 875;
	};
	class ZSN_150Rnd_556x45_Drum_Sand_M995_AP_mag: ZSN_150Rnd_556x45_Drum_M995_AP_mag
	{
		author = "ZluskeN";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"};
		picture = "\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Sand_Mag_F_CA.paa";
		displayName = "5.56 mm 150Rnd Sand Mag (M995 AP)";
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class B_supplyCrate_F: ReammoBox_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 24;
			};
		};
	};
	class NATO_Box_Base;
	class Box_NATO_Ammo_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 24;
			};
		};
	};
	class Box_NATO_Wps_F: NATO_Box_Base
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 8;
			};
		};
	};
	class Box_T_NATO_Wps_F: Box_NATO_Wps_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 8;
			};
		};
	};
	class B_Carryall_mcamo;
	class B_AssaultPack_mcamo_Ammo: B_Carryall_mcamo
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 6;
			};
		};
	};
	class B_Carryall_wdl_F;
	class B_Carryall_wdl_BWAmmo_F: B_Carryall_wdl_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 6;
			};
		};
	};
	class B_Carryall_oli;
	class B_Carryall_oli_BTAmmo_F: B_Carryall_oli
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 6;
			};
		};
	};
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	class B_Soldier_base_F: SoldierWB
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_Soldier_02_f: B_Soldier_base_F{};
	class B_Story_Protagonist_F : B_Soldier_02_f
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_khk_F"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_khk_F"};
	};
	class B_CTRG_Soldier_TL_tna_F;
	class ZSN_B_CTRG_Soldier_TL_ard_F: B_CTRG_Soldier_TL_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_Exp_tna_F;
	class ZSN_B_CTRG_Soldier_Exp_ard_F: B_CTRG_Soldier_Exp_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_Medic_tna_F;
	class ZSN_B_CTRG_Soldier_Medic_ard_F: B_CTRG_Soldier_Medic_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_M_tna_F;
	class ZSN_B_CTRG_Soldier_M_ard_F: B_CTRG_Soldier_M_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_tna_F;
	class ZSN_B_CTRG_Soldier_ard_F: B_CTRG_Soldier_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_LAT_tna_F;
	class ZSN_B_CTRG_Soldier_LAT_ard_F: B_CTRG_Soldier_LAT_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_LAT2_tna_F;
	class ZSN_B_CTRG_Soldier_LAT2_ard_F: B_CTRG_Soldier_LAT2_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_AR_tna_F;
	class ZSN_B_CTRG_Soldier_AR_ard_F: B_CTRG_Soldier_AR_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class B_CTRG_Soldier_JTAC_tna_F;
	class ZSN_B_CTRG_Soldier_JTAC_ard_F: B_CTRG_Soldier_JTAC_tna_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H_snd_F"};
	};
	class ZSN_B_Soldier_Urban_base: B_Soldier_base_F
	{
 		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","muzzle_snds_H"};
	};
	class B_Soldier_support_base_F: B_Soldier_base_F{};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
	};
	class B_Soldier_03_f: B_Soldier_base_F{};
	class B_Soldier_TL_F: B_Soldier_03_f{};
	class B_Patrol_Soldier_TL_F: B_Soldier_TL_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_soldier_UAV_F : B_Soldier_base_F{};
	class B_Patrol_Soldier_UAV_F: B_soldier_UAV_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_soldier_M_F: B_Soldier_base_F{};
	class B_Patrol_Soldier_M_F: B_soldier_M_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_medic_F: B_Soldier_02_f{};
	class B_Patrol_Medic_F: B_medic_F
	{
		Items[] = {"ACE_Chemlight_Shield"};
 		RespawnItems[] = {"ACE_Chemlight_Shield"};
	};
	class B_Soldier_AR_F: B_Soldier_02_F{};
	class B_Patrol_Soldier_AR_F: B_soldier_AR_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_Patrol_Soldier_MG_F: B_soldier_AR_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_HeavyGunner_F;
	class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_Soldier_A_F: B_Soldier_base_F{};
	class B_Patrol_Soldier_A_F: B_Soldier_A_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_soldier_AT_F: B_Soldier_base_F{};
	class B_Patrol_Soldier_AT_F: B_soldier_AT_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_engineer_F : B_Soldier_03_f{};
	class B_Patrol_Engineer_F: B_engineer_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class B_Soldier_F;
	class B_W_Soldier_F: B_Soldier_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_W_RadioOperator_F: B_W_Soldier_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_CBRN_F: B_W_Soldier_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_GL_F;
	class B_W_Soldier_GL_F: B_Soldier_GL_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_Soldier_SL_F;
	class B_W_Soldier_SL_F: B_Soldier_SL_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_TL_F: B_Soldier_TL_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_soldier_LAT_F;
	class B_W_Soldier_LAT_F: B_soldier_LAT_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_LAT2_F: B_Soldier_base_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_medic_F: B_medic_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_repair_F;
	class B_W_soldier_repair_F: B_soldier_repair_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_exp_F;
	class B_W_soldier_exp_F: B_soldier_exp_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_A_F: B_Soldier_A_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_AT_F: B_soldier_AT_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AA_F;
	class B_W_soldier_AA_F: B_soldier_AA_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_engineer_F: B_engineer_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_crew_F;
	class B_W_Crew_F: B_crew_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Officer_F;
	class B_W_Officer_F: B_Officer_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Helicrew_F;
	class B_W_Helicrew_F: B_Helicrew_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_support_MG_F;
	class B_W_Support_MG_F: B_support_MG_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_GMG_F;
	class B_W_support_GMG_F: B_support_GMG_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_Mort_F: B_support_Mort_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AAR_F;
	class B_W_Soldier_AAR_F: B_soldier_AAR_F
	{
		backpack = "ZSN_B_Kitbag_rgr_AAR";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_AMG_F;
	class B_W_support_AMG_F: B_support_AMG_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_AMort_F: B_support_AMort_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AAT_F;
	class B_W_Soldier_AAT_F: B_soldier_AAT_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AAA_F;
	class B_W_Soldier_AAA_F: B_soldier_AAA_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_UAV_F: B_soldier_UAV_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","ZSN_20Rnd_570x28_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class I_Soldier_base_F: SoldierGB
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class ZSN_I_Soldier_recon_base;
	class ZSN_I_recon_exp_F: ZSN_I_Soldier_recon_base
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_Clacker","ACE_DefusalKit"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_Clacker","ACE_DefusalKit"};
	};
	class I_officer_F: I_Soldier_base_F{};
	class I_Story_Officer_01_F: I_Officer_F
	{
		Items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class I_Soldier_support_base_F: I_Soldier_base_F{};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
	};
	class I_support_AMort_F: I_Soldier_support_base_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
	};
	class I_G_Soldier_base_F: SoldierGB
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class I_G_Soldier_F: I_G_Soldier_base_F{};
	class B_G_Soldier_F : I_G_Soldier_F{};
	class I_G_Story_Protagonist_F : B_G_Soldier_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class O_Soldier_base_F: SoldierEB
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
	};
	class O_Soldier_support_base_F: O_Soldier_base_F{};
	class O_support_Mort_F : O_Soldier_support_base_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
	};
	class O_support_AMort_F : O_Soldier_support_base_F
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_RangeTable_82mm","ACE_MapTools"};
	};
 	class O_V_Soldier_base_F : O_Soldier_base_F
 	{
 		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 	};
	class O_V_Soldier_Exp_hex_F : O_V_Soldier_base_F
 	{
 		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 	};
	class O_V_Soldier_Medic_hex_F : O_V_Soldier_base_F
 	{
 		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 	};
	class O_V_Soldier_M_hex_F : O_V_Soldier_base_F
 	{
 		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 	};
	class O_V_Soldier_LAT_hex_F : O_V_Soldier_base_F
 	{
 		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 	};
	class O_V_Soldier_JTAC_hex_F : O_V_Soldier_base_F
 	{
 		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield"};
 	};
	class ZSN_B_soldierU_exp_F : ZSN_B_Soldier_Urban_base
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_Clacker","ACE_DefusalKit","muzzle_snds_H"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_Clacker","ACE_DefusalKit","muzzle_snds_H"};
	};
	class ZSN_B_engineer_U_F : ZSN_B_Soldier_Urban_base
	{
		Items[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_Clacker","ACE_DefusalKit","muzzle_snds_H"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","ACE_Chemlight_Shield","ACE_Clacker","ACE_DefusalKit","muzzle_snds_H"};
	};
	class Car_F;
	class MRAP_01_base_F: Car_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class B_MRAP_01_F;
	class B_T_MRAP_01_F: B_MRAP_01_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class B_MRAP_01_gmg_F;
	class B_T_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class B_MRAP_01_hmg_F;
	class B_T_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class LSV_01_base_F: Car_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class LSV_01_armed_base_F;
	class B_T_LSV_01_armed_F: LSV_01_armed_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class LSV_01_AT_base_F;
	class B_T_LSV_01_AT_F: LSV_01_AT_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class LSV_01_unarmed_base_F;
	class B_T_LSV_01_unarmed_F: LSV_01_unarmed_base_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 16;
			};
		};
	};
	class Wheeled_APC_F;
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 12;
			};
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class B_T_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 12;
			};
		};
	};
	class Tank_F;
	class APC_Tracked_01_base_F: Tank_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 24;
			};
		};
	};
	class B_APC_Tracked_01_AA_F;
	class B_T_APC_Tracked_01_AA_F: B_APC_Tracked_01_AA_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 24;
			};
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 24;
			};
		};
	};
	class B_APC_Tracked_01_rcws_F;
	class B_T_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 24;
			};
		};
	};
	class B_MBT_01_arty_F;
	class B_T_MBT_01_arty_F: B_MBT_01_arty_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class B_T_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
		};
	};
	class B_MBT_01_cannon_F;
	class B_T_MBT_01_cannon_F: B_MBT_01_cannon_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_T_MBT_01_TUSK_F: B_MBT_01_TUSK_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 4;
			};
		};
	};
};
