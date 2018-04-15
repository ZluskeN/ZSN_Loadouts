////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_Gear
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Mark","A3_Characters_F_Exp","A3_Characters_F_Jets","A3_Characters_F_Patrol","A3_Characters_F_Orange","A3_Characters_F_Tank"};
	};
};
class CfgVehicles
{
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	class B_Soldier_base_F: SoldierWB{};
	class B_Soldier_03_f: B_Soldier_base_F{};
	class B_crew_F: B_Soldier_03_f
	{
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_T_Crew_F: B_crew_F
	{
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_Soldier_04_f: B_Soldier_base_F{};
	class B_Helipilot_F: B_Soldier_04_f{};
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
	class B_Helicrew_F: B_Helipilot_F{};
	class B_T_Helicrew_F: B_Helicrew_F
	{
		linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
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
	class O_Soldier_HAT_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_Soldier_HAT_F: O_Soldier_HAT_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
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
	class O_Soldier_AHAT_F;
	class O_T_Soldier_AHAT_F: O_Soldier_AHAT_F
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
		linkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_T_crew_F: O_crew_F
	{
		uniformClass = "U_O_SpecopsUniform_blk";
		linkedItems[] = {"V_BandollierB_ghex_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"V_BandollierB_ghex_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
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
	class O_Sharpshooter_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_HeavyGunner_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class O_Soldier_Urban_base: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_LAT_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_AT_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_AA_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_TL_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_SoldierU_SL_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_exp_F : O_Soldier_Urban_base
	{
		linkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_M_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_SoldierU_GL_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_HarnessOGL_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
	{
		linkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_urb_F"};
	};
	class O_soldierU_F;
	class O_SoldierU_Unarmed_F: O_soldierU_F
	{
		linkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_gry","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
};
