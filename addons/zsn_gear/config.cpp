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
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Mark","A3_Characters_F_Exp","A3_Characters_F_Jets","A3_Characters_F_Patrol","A3_Characters_F_Orange","A3_Characters_F_Tank_Uniforms","A3_Characters_F_Tank","A3_Characters_F_Enoch"};
	};
};
class CfgVehicles
{
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	class B_Soldier_base_F;
	class B_Soldier_02_f;
	class B_Soldier_03_f;
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
	class B_W_Crew_F: B_crew_F
	{
		linkedItems[] = {"H_HelmetCrew_I","V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetCrew_I","V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_engineer_F;
	class B_W_Engineer_F: B_engineer_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_helicrew_F;
	class B_W_helicrew_F: B_helicrew_F
	{
		linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_helipilot_F;
	class B_W_helipilot_F: B_helipilot_F
	{
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_medic_F;
	class B_W_medic_F: B_medic_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrierSpec_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrierSpec_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_F;
	class B_W_Soldier_F: B_Soldier_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_W_RadioOperator_F: B_W_Soldier_F
	{
		linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_W_Soldier_CBRN_F: B_W_Soldier_F
	{
		linkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_PlateCarrier1_wdl","H_HelmetB","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","NVGoggles_OPFOR"};
	};
	class B_Soldier_A_F;
	class B_W_Soldier_A_F: B_Soldier_A_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_AA_F;
	class B_W_Soldier_AA_F: B_Soldier_AA_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_AAA_F;
	class B_W_Soldier_AAA_F: B_Soldier_AAA_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_AAR_F;
	class B_W_Soldier_AAR_F: B_Soldier_AAR_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_AAT_F;
	class B_W_Soldier_AAT_F: B_Soldier_AAT_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_AR_F;
	class B_W_Soldier_AR_F: B_Soldier_AR_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier2_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier2_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_AT_F;
	class B_W_Soldier_AT_F: B_Soldier_AT_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_exp_F;
	class B_W_Soldier_exp_F: B_Soldier_exp_F
	{
		linkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_GL_F: B_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] = {"V_PlateCarrierGL_rgr","H_HelmetSpecB_snakeskin","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class B_W_Soldier_GL_F: B_Soldier_GL_F
	{
		linkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_LAT_F;
	class B_W_Soldier_LAT_F: B_Soldier_LAT_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier2_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier2_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_LAT2_F;
	class B_W_Soldier_LAT2_F: B_Soldier_LAT2_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier2_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier2_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_M_F;
	class B_W_Soldier_M_F: B_Soldier_M_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_Repair_F;
	class B_W_Soldier_Repair_F: B_Soldier_Repair_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_PlateCarrier1_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_SL_F;
	class B_W_Soldier_SL_F: B_Soldier_SL_F
	{
		linkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_TL_F;
	class B_W_Soldier_TL_F: B_Soldier_TL_F
	{
		linkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetSpecB_wdl","V_PlateCarrierGL_wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Soldier_UAV_F;
	class B_W_Soldier_UAV_F: B_Soldier_UAV_F
	{
		linkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_plain_wdl","V_PlateCarrier1_wdl","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Support_AMG_F;
	class B_W_Support_AMG_F: B_Support_AMG_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Support_AMort_F;
	class B_W_Support_AMort_F: B_Support_AMort_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Support_GMG_F;
	class B_W_Support_GMG_F: B_Support_GMG_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Support_MG_F;
	class B_W_Support_MG_F: B_Support_MG_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class B_Support_Mort_F;
	class B_W_Support_Mort_F: B_Support_Mort_F
	{
		linkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"H_HelmetB_light_wdl","V_Chestrig_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
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
	class B_T_Helicrew_F: B_Helicrew_F
	{
		linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
	};
	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
	};
	class B_CTRG_soldier_AR_A_F: B_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
	};
	class B_CTRG_Sharphooter_F: B_Soldier_base_F
	{
		faction = "BLU_CTRG_F";
		linkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
	};
	class B_CTRG_soldier_engineer_exp_F : B_Soldier_02_f
	{
		linkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"V_PlateCarrierL_CTRG","H_Cap_khaki_specops_UK","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
	};
	class B_CTRG_soldier_M_medic_F : B_Soldier_03_f
	{
		linkedItems[] = {"V_PlateCarrierH_CTRG","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
		respawnLinkedItems[] = {"V_PlateCarrierH_CTRG","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_gry_F"};
	};
	class I_Soldier_base_F: SoldierGB
	{
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Engineer_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_soldier_M_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_LAT2_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_UAV_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
	};
	class I_Soldier_support_base_F: I_Soldier_base_F
	{
		linkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_support_MG_F: I_Soldier_support_base_F
	{
		linkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_support_GMG_F: I_Soldier_support_base_F
	{
		linkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		linkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_F;
	class I_Soldier_unarmed_F: I_Soldier_F
	{
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_Soldier_02_F;
	class I_Medic_F: I_Soldier_02_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_A_F: I_Soldier_02_F
	{
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_AA_F: I_Soldier_02_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_SL_F: I_Soldier_02_F
	{
		linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_chops_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetHBK_chops_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_Exp_F: I_Soldier_02_F
	{
		linkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIAGL_dgtl","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_Soldier_Repair_F: I_Soldier_02_F
	{
		linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_base_F;
	class I_E_RadioOperator_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_UAV_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","I_E_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","I_E_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Medic_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_Exp_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_SL_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_GL_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_TL_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetSpecB_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_A_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AR_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AAT_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AAA_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AMort_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AMG_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AAR_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AA_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_AT_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_LAT_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_LAT2_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_unarmed_F: I_E_Soldier_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class I_E_Soldier_CBRN_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_Pathfinder_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_Booniehat_eaf","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_Booniehat_eaf","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Engineer_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_Repair_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_soldier_M_F: I_E_Soldier_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Soldier_support_base_F;
	class I_E_Support_Mort_F: I_E_Soldier_support_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Support_MG_F: I_E_Soldier_support_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Support_GMG_F: I_E_Soldier_support_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetB_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Support_AMort_F: I_E_Soldier_support_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class I_E_Support_AMG_F: I_E_Soldier_support_base_F
	{
		linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetSpecB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
	};
	class O_Soldier_base_F: SoldierEB
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_Soldier_A_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_A_F: O_Soldier_A_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_HAT_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_HAT_F: O_Soldier_HAT_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_support_base_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_Chestrig_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_AR_F : O_Soldier_AR_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_medic_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_medic_F: O_medic_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_crew_F: O_Soldier_base_F
	{
		uniformClass = "U_O_SpecopsUniform_blk";
		linkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_Exp_F : O_soldier_exp_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_GL_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
		linkedItems[] = {"H_HelmetLeaderO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_ocamo","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
		linkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
		linkedItems[] = {"V_TacVest_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_hex_F"};
	};
	class O_soldier_M_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_M_F : O_soldier_M_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_AA_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_AA_F: O_Soldier_AA_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_AT_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_LAT_F : O_Soldier_LAT_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_SL_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_T_Soldier_SL_F : O_Soldier_SL_F
	{
		linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
		respawnLinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
	};
	class O_Soldier_TL_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetCrew_O","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
	class O_Soldier_sniper_base_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_Chestrig_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_Soldier_recon_base: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_recon_JTAC_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_recon_M_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_recon_TL_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_HelmetLeaderO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_recon_LAT_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_Pathfinder_F: O_Soldier_recon_base
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetSpecO_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class ZSN_O_Urban_helipilot_F: O_helipilot_F
	{
		author = "ZluskeN";
		scope = 1;
		uniformClass = "U_O_CombatUniform_oucamo";
		linkedItems[] = {"H_HelmetLeaderO_oucamo","V_TacVest_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"H_HelmetLeaderO_oucamo","V_TacVest_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class ZSN_O_Urban_helicrew_F: O_helicrew_F
	{
		author = "ZluskeN";
		scope = 1;
		uniformClass = "U_O_CombatUniform_oucamo";
		linkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_HelmetO_oucamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_Sharpshooter_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
	};
	class O_HeavyGunner_F: O_Soldier_base_F
	{
		linkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_HelmetCrew_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
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
