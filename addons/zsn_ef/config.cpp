////////////////////////////////////////////////////////////////////
//DeRap: zsn_weapons\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Thu Dec 03 22:29:49 2020 : 'file' last modified on Wed Dec 02 21:48:32 2020
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_Loadouts_EF
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_Jets","EF_Marines","EF_AAF","ZSN_Loadouts"};
		magazines[] = {};
	};
};
class cfgMagazines
{
	class 100Rnd_65x39_caseless_mag;
	class EF_100Rnd_65x39_caseless_coy_mag: 100Rnd_65x39_caseless_mag
	{
		descriptionShort = "Caliber: 6.5x39 mm<br />Rounds: 60<br />Used in: MX/C/M/SW/3GL/AR";
		displayName = "6.5 mm 60Rnd Coyote Mag";
	};
	class 100Rnd_65x39_caseless_mag_Tracer;
	class EF_100Rnd_65x39_caseless_coy_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 60<br />Used in: MX/C/M/SW/3GL/AR";
		displayName = "6.5 mm 60Rnd Tracer Coyote Mag";
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class EF_I_Soldier_MP: I_soldier_F
	{
		weapons[] = {"arifle_MSBS65_black_aco_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MSBS65_black_aco_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class B_Helipilot_F;
	class B_Deck_Crew_F: B_Helipilot_F
	{
		uniformClass = "EF_U_B_CrewCoveralls_Navy";
		linkedItems[] = {"V_DeckCrew_yellow_F","EF_H_HelmetCrew_Yellow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_DeckCrew_yellow_F","EF_H_HelmetCrew_Yellow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class EF_B_Navy_FlightDeckCrew: B_Helipilot_F
	{
		linkedItems[] = {"V_DeckCrew_white_F","EF_H_HelmetCrew_Yellow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_DeckCrew_white_F","EF_H_HelmetCrew_Yellow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class EF_B_Navy_WellDeckCrew: EF_B_Navy_FlightDeckCrew
	{
		linkedItems[] = {"V_DeckCrew_white_F","EF_H_HelmetCrew_White","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_DeckCrew_white_F","EF_H_HelmetCrew_White","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	class EF_B_Marine_Des_Base_3;
	class EF_B_Marine_AR_Des: EF_B_Marine_Des_Base_3
	{
		magazines[] = {"EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag_Tracer","EF_100Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag_Tracer","EF_100Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class EF_B_Marine_Crew_Des: EF_B_Marine_Des_Base_3
	{
		linkedItems[] = {"EF_V_AAV_Coy","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
		respawnLinkedItems[] = {"EF_V_AAV_Coy","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
	};
	class EF_B_Marine_Wdl_Base_3;
	class EF_B_Marine_AR_Wdl: EF_B_Marine_Wdl_Base_3
	{
		magazines[] = {"EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag_Tracer","EF_100Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag_Tracer","EF_100Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class EF_B_Marine_Crew_Wdl: EF_B_Marine_Wdl_Base_3
	{
		linkedItems[] = {"EF_V_AAV_Coy","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
		respawnLinkedItems[] = {"EF_V_AAV_Coy","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
	};
};