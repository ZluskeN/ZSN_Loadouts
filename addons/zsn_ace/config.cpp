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
class CfgVehicles
{
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
};
