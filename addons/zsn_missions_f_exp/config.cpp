////////////////////////////////////////////////////////////////////
//DeRap: missions_f_exp\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Sat Feb 04 18:10:17 2023 : 'file' last modified on Wed Jun 12 13:41:15 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Missions_F_Exp
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Apex - Playable Content";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMissions
{
	class Campaigns
	{
		class Apex
		{
			directory = "A3\Missions_F_Exp\Campaign";
		};
	};
	class MPMissions
	{
		class Apex
		{
			briefingName = "$STR_A3_CoopCampaignName";
			class EXP_m01
			{
				briefingName = "$STR_A3_exp_m01_missionname";
				directory = "a3\missions_f_exp\campaign\missions\exp_m01.tanoa";
			};
			class EXP_m02
			{
				briefingName = "$STR_A3_exp_m02_missionname";
				directory = "a3\missions_f_exp\campaign\missions\exp_m02.tanoa";
			};
			class EXP_m03
			{
				briefingName = "$STR_A3_exp_m03_missionname";
				directory = "a3\missions_f_exp\campaign\missions\exp_m03.tanoa";
			};
			class EXP_m04
			{
				briefingName = "$STR_A3_exp_m04_missionname";
				directory = "a3\missions_f_exp\campaign\missions\exp_m04.tanoa";
			};
			class EXP_m05
			{
				briefingName = "$STR_A3_exp_m05_missionname";
				directory = "a3\missions_f_exp\campaign\missions\exp_m05.tanoa";
			};
			class EXP_m06
			{
				briefingName = "$STR_A3_exp_m06_missionname";
				directory = "a3\missions_f_exp\campaign\missions\exp_m06.tanoa";
			};
			class EXP_m07
			{
				briefingName = "$STR_A3_exp_m07_missionname";
				directory = "a3\missions_f_exp\campaign\missions\exp_m07.tanoa";
			};
		};
		class MP_ZGM_m14
		{
			briefingName = "$STR_A3_MasterTanoa_missionName";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14.Tanoa";
		};
		class MP_ZGM_m14_EAST
		{
			briefingName = "$STR_A3_MasterTanoaO_missionName";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14_east.Tanoa";
		};
		class MP_ZGM_m14_WEST
		{
			briefingName = "$STR_A3_MasterTanoaB_missionName";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14_west.Tanoa";
		};
		class MP_ZGM_m14_GUER
		{
			briefingName = "$STR_A3_MasterTanoaI_missionName";
			directory = "A3\missions_f_exp\mpscenarios\mp_zgm_m14_guer.Tanoa";
		};
		class MP_End_Game_04
		{
			briefingName = "$STR_A3_EndGame04_missionNameLobby";
			directory = "A3\Missions_F_Exp\MPScenarios\MP_End_Game_04.Tanoa";
		};
		class MP_End_Game_05
		{
			briefingName = "$STR_A3_exp_eg_05_missionname";
			directory = "A3\Missions_F_Exp\MPScenarios\MP_End_Game_05.Tanoa";
		};
		class EscapeFromTanoa
		{
			briefingName = "$STR_A3_EscapeFromTanoa_missionName";
			directory = "A3\Missions_F_Exp\MPScenarios\MP_EscapeFromTanoa.Tanoa";
		};
	};
	class Showcases
	{
		displayName = "$STR_A3_CfgMissions_Showcases0";
		class Showcase_EndGame
		{
			directory = "a3\missions_f_exp\showcases\showcase_endgame.tanoa";
			overviewText = "$STR_A3_showcase_endgame_showcase_summary_text";
			briefingName = "$STR_A3_showcase_endgame_mission_name";
			overviewPicture = "a3\Missions_F_Exp\data\img\Showcase_EndGame_overview_CA.paa";
			overviewPictureUnowned = "a3\Missions_F_Exp\data\img\Showcase_EndGame_overview_blackwhite_CA.paa";
		};
		class VTOL
		{
			directory = "a3\missions_f_exp\showcases\showcase_vtol.tanoa";
			overviewText = "$STR_A3_showcase_vtol_showcase_summary_text";
			briefingName = "$STR_A3_showcase_vtol_missionName";
			overviewPicture = "a3\Missions_F_Exp\data\img\Showcase_VTOL_overview_CA.paa";
			overviewPictureUnowned = "a3\Missions_F_Exp\data\img\Showcase_VTOL_overview_blackwhite_CA.paa";
		};
	};
};
class CfgFunctions
{
	class A3_Missions_F_Exp
	{
		tag = "BIS";
		project = "arma3";
		class Campaign
		{
			file = "a3\missions_f_exp\campaign\functions";
			class EXP_camp_IFF{};
			class EXP_camp_balanceGroup{};
			class EXP_camp_hasMissionStarted{};
			class EXP_camp_SITREP{};
			class EXP_camp_setCinematicMode{};
			class EXP_camp_getCinematicMode{};
			class EXP_camp_initClasses{};
			class EXP_camp_initCharacter{};
			class EXP_camp_checkpoint{};
			class EXP_camp_getPlayersGroup{};
			class EXP_camp_playerChecklist{};
			class EXP_camp_replaceVehicles{};
			class EXP_camp_guidedProjectile{};
			class EXP_camp_dynamicAISkill{};
			class EXP_camp_setSkill{};
			class EXP_camp_playTimelineVideo{};
			class EXP_camp_playSubtitles{};
			class EXP_camp_addTickets{};
			class EXP_camp_initDifficulty{};
		};
		class CampaignManager
		{
			file = "a3\missions_f_exp\campaign\functions\manager";
			class EXP_camp_manager{};
			class EXP_camp_manager_setState{};
			class EXP_camp_manager_getState{};
			class EXP_camp_manager_triggerEvent{};
			class EXP_camp_manager_onPlayerRegistered{};
		};
		class CampaignLobby
		{
			file = "a3\missions_f_exp\Lobby\functions";
			class EXP_camp_lobby{};
			class EXP_camp_lobby_clearVars{};
			class EXP_camp_lobby_ctrlSetColor{};
			class EXP_camp_lobby_findHost{};
			class EXP_camp_lobby_getHostSettings{};
			class EXP_camp_lobby_getPlayerSquadName{};
			class EXP_camp_lobby_go{};
			class EXP_camp_lobby_intro{};
			class EXP_camp_lobby_launch{};
			class EXP_camp_lobby_loop{};
			class EXP_camp_lobby_missionCountdown{};
			class EXP_camp_lobby_onLoad{};
			class EXP_camp_lobby_updatePlayerStatus{};
			class EXP_camp_lobby_onUnLoad{};
			class EXP_camp_lobby_playMissionVideo{};
			class EXP_camp_lobby_serverPing{};
			class EXP_camp_lobby_serverUpdate{};
			class EXP_camp_lobby_structuredText{};
			class EXP_camp_lobby_UIMilitaryManager{};
			class EXP_camp_lobby_UIMissionCountdown{};
			class EXP_camp_lobby_UIMissionManager{};
			class EXP_camp_lobby_UIOverlayManager{};
			class EXP_camp_lobby_UIProgressManager{};
			class EXP_camp_lobby_UISettingsManager{};
			class EXP_camp_lobby_updateHostSettings{};
			class EXP_camp_lobby_updateIntel{};
			class EXP_camp_lobby_updateMilitaryEfficiency{};
			class EXP_camp_lobby_updatePlayers{};
			class HEXtoRGB{};
		};
	};
};
class CfgSounds
{
	class EXP_m04_flare
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m04_flare",1.0,1};
		titles[] = {};
	};
	class EXP_m05_dramatic
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m05_dramatic",1.0,1};
		titles[] = {};
	};
	class EXP_m07_lightsOff_01
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m07_lightsoff_01",0.4,1};
		titles[] = {};
	};
	class EXP_m07_lightsOff_02
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m07_lightsoff_02",0.4,1};
		titles[] = {};
	};
	class EXP_m07_lightsOff_03
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m07_lightsoff_03",0.4,1};
		titles[] = {};
	};
	class EXP_m07_lightsOn_01
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m07_lightson_01",0.4,1};
		titles[] = {};
	};
	class EXP_m07_lightsOn_02
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m07_lightson_02",0.4,1};
		titles[] = {};
	};
	class EXP_m07_lightsOn_03
	{
		sound[] = {"a3\missions_f_exp\data\sounds\exp_m07_lightson_03",0.4,1};
		titles[] = {};
	};
};
class CfgMPGameTypes
{
	class Apex
	{
		name = "$STR_a3_cfgmpgametypes_apexprotocol_name";
		shortcut = "$STR_a3_cfgmpgametypes_apexprotocol_shortcut";
		id = 14;
		picture = "a3\missions_f_exp\data\img\exp_overview_co.paa";
		featured = 1;
	};
	class Escape
	{
		name = "$STR_A3_cfgmpgametypes_escape_name";
		shortcut = "$STR_A3_cfgmpgametypes_escape_shortcut";
		id = 22;
		picture = "\a3\Missions_F_Exp\data\Img\MP_EscapeFromTanoa_overview_CA.paa";
		description = "";
		featured = 1;
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class A3_Expansion_Apex_Protocol
		{
			list[] = {"A3_Dubbing_F_Exp","A3_Functions_F_Exp","A3_LanguageMissions_F_Exp","A3_Missions_F_Exp","A3_Missions_F_Exp_Data","A3_Missions_F_Exp_Video","A3_Modules_F_Exp"};
		};
	};
};
class CfgSentences
{
	class EXP_m01
	{
		class 01_Start
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_01_Start.bikb";
			class Sentences
			{
				class exp_m01_01_start_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_01_start_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\01_Start\exp_m01_01_start_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_01_start_COM_0
				{
					textPlain = "$STR_A3_exp_m01_01_start_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\01_Start\exp_m01_01_start_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_Online
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_05_Online.bikb";
			class Sentences
			{
				class exp_m01_05_online_COM_0
				{
					textPlain = "$STR_A3_exp_m01_05_online_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\05_Online\exp_m01_05_online_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_Spotted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_10_Spotted.bikb";
			class Sentences
			{
				class exp_m01_10_spotted_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_10_spotted_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\10_Spotted\exp_m01_10_spotted_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_Orders
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_15_Orders.bikb";
			class Sentences
			{
				class exp_m01_15_orders_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_15_orders_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\15_Orders\exp_m01_15_orders_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_15_orders_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_15_orders_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\15_Orders\exp_m01_15_orders_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_Quiet
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_20_Quiet.bikb";
			class Sentences
			{
				class exp_m01_20_quiet_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_20_quiet_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\20_Quiet\exp_m01_20_quiet_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 23_NotSoQuiet
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_23_NotSoQuiet.bikb";
			class Sentences
			{
				class exp_m01_23_notsoquiet_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_23_notsoquiet_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\23_NotSoQuiet\exp_m01_23_notsoquiet_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_Search
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_25_Search.bikb";
			class Sentences
			{
				class exp_m01_25_search_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_25_search_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\25_Search\exp_m01_25_search_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_Weapons
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_30_Weapons.bikb";
			class Sentences
			{
				class exp_m01_30_weapons_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_30_weapons_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\30_Weapons\exp_m01_30_weapons_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_30_weapons_GRM_0
				{
					textPlain = "$STR_A3_exp_m01_30_weapons_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\30_Weapons\exp_m01_30_weapons_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_Continue
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_35_Continue.bikb";
			class Sentences
			{
				class exp_m01_35_continue_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_35_continue_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\35_Continue\exp_m01_35_continue_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_35_continue_COM_0
				{
					textPlain = "$STR_A3_exp_m01_35_continue_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\35_Continue\exp_m01_35_continue_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 37_CivPop
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_37_CivPop.bikb";
			class Sentences
			{
				class exp_m01_37_civpop_COM_0
				{
					textPlain = "$STR_A3_exp_m01_37_civpop_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\37_CivPop\exp_m01_37_civpop_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_37_civpop_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_37_civpop_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\37_CivPop\exp_m01_37_civpop_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_37_civpop_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_37_civpop_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\37_CivPop\exp_m01_37_civpop_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_Paras
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_40_Paras.bikb";
			class Sentences
			{
				class exp_m01_40_paras_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_40_paras_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\40_Paras\exp_m01_40_paras_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_40_paras_GRM_0
				{
					textPlain = "$STR_A3_exp_m01_40_paras_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\40_Paras\exp_m01_40_paras_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_40_paras_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_40_paras_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\40_Paras\exp_m01_40_paras_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_Second
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_45_Second.bikb";
			class Sentences
			{
				class exp_m01_45_second_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_45_second_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\45_Second\exp_m01_45_second_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_45_second_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_45_second_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\45_Second\exp_m01_45_second_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_45_second_COM_0
				{
					textPlain = "$STR_A3_exp_m01_45_second_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\45_Second\exp_m01_45_second_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_Plan
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_50_Plan.bikb";
			class Sentences
			{
				class exp_m01_50_plan_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_50_plan_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\50_Plan\exp_m01_50_plan_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_50_plan_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_50_plan_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\50_Plan\exp_m01_50_plan_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_50_plan_RIK_2
				{
					textPlain = "$STR_A3_exp_m01_50_plan_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\50_Plan\exp_m01_50_plan_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 51_PlanAgain
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_51_PlanAgain.bikb";
			class Sentences
			{
				class exp_m01_51_planagain_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_51_planagain_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\51_PlanAgain\exp_m01_51_planagain_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_51_planagain_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_51_planagain_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\51_PlanAgain\exp_m01_51_planagain_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_51_planagain_COM_0
				{
					textPlain = "$STR_A3_exp_m01_51_planagain_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\51_PlanAgain\exp_m01_51_planagain_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_Engage
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_55_Engage.bikb";
			class Sentences
			{
				class exp_m01_55_engage_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_55_engage_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\55_Engage\exp_m01_55_engage_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_QRF
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_60_QRF.bikb";
			class Sentences
			{
				class exp_m01_60_qrf_COM_0
				{
					textPlain = "$STR_A3_exp_m01_60_qrf_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\60_QRF\exp_m01_60_qrf_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_Support_Searched
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_65_Support_Searched.bikb";
			class Sentences
			{
				class exp_m01_65_support_searched_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_65_support_searched_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\65_Support_Searched\exp_m01_65_support_searched_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p01_Help_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p01_Help_1.bikb";
			class Sentences
			{
				class exp_m01_p01_help_1_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p01_help_1_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p01_Help_1\exp_m01_p01_help_1_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p05_Help_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p05_Help_2.bikb";
			class Sentences
			{
				class exp_m01_p05_help_2_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p05_help_2_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p05_Help_2\exp_m01_p05_help_2_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p10_Help_3
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p10_Help_3.bikb";
			class Sentences
			{
				class exp_m01_p10_help_3_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p10_help_3_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p10_Help_3\exp_m01_p10_help_3_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p15_Inside_Building
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p15_Inside_Building.bikb";
			class Sentences
			{
				class exp_m01_p15_inside_building_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p15_inside_building_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p15_Inside_Building\exp_m01_p15_inside_building_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p16_NoShootTarget
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p16_NoShootTarget.bikb";
			class Sentences
			{
				class exp_m01_p16_noshoottarget_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_p16_noshoottarget_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p16_NoShootTarget\exp_m01_p16_noshoottarget_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p20_Not_Clear
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p20_Not_Clear.bikb";
			class Sentences
			{
				class exp_m01_p20_not_clear_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p20_not_clear_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p20_Not_Clear\exp_m01_p20_not_clear_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p25_Untie
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p25_Untie.bikb";
			class Sentences
			{
				class exp_m01_p25_untie_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p25_untie_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p25_Untie\exp_m01_p25_untie_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p30_Left_Building
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p30_Left_Building.bikb";
			class Sentences
			{
				class exp_m01_p30_left_building_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p30_left_building_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p30_Left_Building\exp_m01_p30_left_building_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p35_Rescued
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p35_Rescued.bikb";
			class Sentences
			{
				class exp_m01_p35_rescued_POL_0
				{
					textPlain = "$STR_A3_exp_m01_p35_rescued_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p35_Rescued\exp_m01_p35_rescued_POL_0.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_p35_rescued_POL_1
				{
					textPlain = "$STR_A3_exp_m01_p35_rescued_POL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p35_Rescued\exp_m01_p35_rescued_POL_1.ogg"};
					actor = "BIS_cop1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p36_TowerIntel
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p36_TowerIntel.bikb";
			class Sentences
			{
				class exp_m01_p36_towerintel_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_p36_towerintel_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p36_TowerIntel\exp_m01_p36_towerintel_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_p36_towerintel_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_p36_towerintel_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p36_TowerIntel\exp_m01_p36_towerintel_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class p40_Already_Clear
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_p40_Already_Clear.bikb";
			class Sentences
			{
				class exp_m01_p40_already_clear_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_p40_already_clear_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\p40_Already_Clear\exp_m01_p40_already_clear_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x00_Orders
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m01\EXP_m01_x00_Orders.bikb";
			class Sentences
			{
				class exp_m01_x00_orders_RIK_0
				{
					textPlain = "$STR_A3_exp_m01_x00_orders_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\x00_Orders\exp_m01_x00_orders_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m01_x00_orders_RIK_1
				{
					textPlain = "$STR_A3_exp_m01_x00_orders_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m01\x00_Orders\exp_m01_x00_orders_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m02
	{
		class b01_TanoaSituation
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b01_TanoaSituation.bikb";
			class Sentences
			{
				class exp_m02_b01_tanoasituation_AAN_0
				{
					textPlain = "$STR_A3_exp_m02_b01_tanoasituation_AAN_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b01_TanoaSituation\exp_m02_b01_tanoasituation_AAN_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b01_tanoasituation_AAN_1
				{
					textPlain = "$STR_A3_exp_m02_b01_tanoasituation_AAN_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b01_TanoaSituation\exp_m02_b01_tanoasituation_AAN_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b05_TanoaReport
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b05_TanoaReport.bikb";
			class Sentences
			{
				class exp_m02_b05_tanoareport_COR_0
				{
					textPlain = "$STR_A3_exp_m02_b05_tanoareport_COR_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b05_TanoaReport\exp_m02_b05_tanoareport_COR_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b10_VoicesOff
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b10_VoicesOff.bikb";
			class Sentences
			{
				class exp_m02_b10_voicesoff_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b10_voicesoff_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b10_VoicesOff\exp_m02_b10_voicesoff_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b10_voicesoff_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b10_voicesoff_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b10_VoicesOff\exp_m02_b10_voicesoff_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b15_TechGrumble
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b15_TechGrumble.bikb";
			class Sentences
			{
				class exp_m02_b15_techgrumble_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b15_techgrumble_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b15_TechGrumble\exp_m02_b15_techgrumble_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b20_Context_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b20_Context_1.bikb";
			class Sentences
			{
				class exp_m02_b20_context_1_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b20_context_1_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b20_context_1\exp_m02_b20_context_1_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b20_context_1_COM_1
				{
					textPlain = "$STR_A3_exp_m02_b20_context_1_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b20_context_1\exp_m02_b20_context_1_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b20_context_1_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b20_context_1_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b20_context_1\exp_m02_b20_context_1_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b25_Context_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b25_Context_2.bikb";
			class Sentences
			{
				class exp_m02_b25_context_2_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b25_context_2_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b25_context_2\exp_m02_b25_context_2_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b25_context_2_COM_1
				{
					textPlain = "$STR_A3_exp_m02_b25_context_2_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b25_context_2\exp_m02_b25_context_2_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b25_context_2_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b25_context_2_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b25_context_2\exp_m02_b25_context_2_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b25_context_2_LIA_1
				{
					textPlain = "$STR_A3_exp_m02_b25_context_2_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b25_context_2\exp_m02_b25_context_2_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b25_context_2_COM_2
				{
					textPlain = "$STR_A3_exp_m02_b25_context_2_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b25_context_2\exp_m02_b25_context_2_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b30_Context_3
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b30_Context_3.bikb";
			class Sentences
			{
				class exp_m02_b30_context_3_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b30_context_3_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b30_context_3\exp_m02_b30_context_3_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b30_context_3_LIA_1
				{
					textPlain = "$STR_A3_exp_m02_b30_context_3_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b30_context_3\exp_m02_b30_context_3_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b30_context_3_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b30_context_3_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b30_context_3\exp_m02_b30_context_3_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b30_context_3_LIA_2
				{
					textPlain = "$STR_A3_exp_m02_b30_context_3_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b30_context_3\exp_m02_b30_context_3_LIA_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b30_context_3_COM_1
				{
					textPlain = "$STR_A3_exp_m02_b30_context_3_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b30_context_3\exp_m02_b30_context_3_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b30_context_3_LIA_3
				{
					textPlain = "$STR_A3_exp_m02_b30_context_3_LIA_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b30_context_3\exp_m02_b30_context_3_LIA_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b35_Context_4
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b35_Context_4.bikb";
			class Sentences
			{
				class exp_m02_b35_context_4_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b35_context_4_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b35_context_4\exp_m02_b35_context_4_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b35_context_4_LIA_1
				{
					textPlain = "$STR_A3_exp_m02_b35_context_4_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b35_context_4\exp_m02_b35_context_4_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b35_context_4_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b35_context_4_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b35_context_4\exp_m02_b35_context_4_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b35_context_4_LIA_2
				{
					textPlain = "$STR_A3_exp_m02_b35_context_4_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b35_context_4\exp_m02_b35_context_4_LIA_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b35_context_4_COM_1
				{
					textPlain = "$STR_A3_exp_m02_b35_context_4_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b35_context_4\exp_m02_b35_context_4_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b40_Situation_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b40_Situation_1.bikb";
			class Sentences
			{
				class exp_m02_b40_situation_1_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b40_situation_1_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b40_Situation_1\exp_m02_b40_situation_1_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b40_situation_1_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b40_situation_1_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b40_Situation_1\exp_m02_b40_situation_1_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b40_situation_1_COM_1
				{
					textPlain = "$STR_A3_exp_m02_b40_situation_1_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b40_Situation_1\exp_m02_b40_situation_1_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b40_situation_1_LIA_1
				{
					textPlain = "$STR_A3_exp_m02_b40_situation_1_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b40_Situation_1\exp_m02_b40_situation_1_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b40_situation_1_COM_2
				{
					textPlain = "$STR_A3_exp_m02_b40_situation_1_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b40_Situation_1\exp_m02_b40_situation_1_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b40_situation_1_LIA_2
				{
					textPlain = "$STR_A3_exp_m02_b40_situation_1_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b40_Situation_1\exp_m02_b40_situation_1_LIA_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b45_Situation_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b45_Situation_2.bikb";
			class Sentences
			{
				class exp_m02_b45_situation_2_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b45_situation_2_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b45_Situation_2\exp_m02_b45_situation_2_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b45_situation_2_COM_1
				{
					textPlain = "$STR_A3_exp_m02_b45_situation_2_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b45_Situation_2\exp_m02_b45_situation_2_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b45_situation_2_COM_2
				{
					textPlain = "$STR_A3_exp_m02_b45_situation_2_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b45_Situation_2\exp_m02_b45_situation_2_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b45_situation_2_COM_3
				{
					textPlain = "$STR_A3_exp_m02_b45_situation_2_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b45_Situation_2\exp_m02_b45_situation_2_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b45_situation_2_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b45_situation_2_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b45_Situation_2\exp_m02_b45_situation_2_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b45_situation_2_COM_4
				{
					textPlain = "$STR_A3_exp_m02_b45_situation_2_COM_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b45_Situation_2\exp_m02_b45_situation_2_COM_4.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b50_Situation_3
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_b50_Situation_3.bikb";
			class Sentences
			{
				class exp_m02_b50_situation_3_COM_0
				{
					textPlain = "$STR_A3_exp_m02_b50_situation_3_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b50_Situation_3\exp_m02_b50_situation_3_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b50_situation_3_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_b50_situation_3_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b50_Situation_3\exp_m02_b50_situation_3_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b50_situation_3_COM_1
				{
					textPlain = "$STR_A3_exp_m02_b50_situation_3_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b50_Situation_3\exp_m02_b50_situation_3_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b50_situation_3_COM_2
				{
					textPlain = "$STR_A3_exp_m02_b50_situation_3_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b50_Situation_3\exp_m02_b50_situation_3_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b50_situation_3_LIA_1
				{
					textPlain = "$STR_A3_exp_m02_b50_situation_3_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b50_Situation_3\exp_m02_b50_situation_3_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_b50_situation_3_COM_3
				{
					textPlain = "$STR_A3_exp_m02_b50_situation_3_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\b50_Situation_3\exp_m02_b50_situation_3_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 01_Start
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_01_Start.bikb";
			class Sentences
			{
				class exp_m02_01_start_COM_0
				{
					textPlain = "$STR_A3_exp_m02_01_start_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\01_Start\exp_m02_01_start_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_01_start_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_01_start_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\01_Start\exp_m02_01_start_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_01_start_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_01_start_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\01_Start\exp_m02_01_start_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_01_start_COM_1
				{
					textPlain = "$STR_A3_exp_m02_01_start_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\01_Start\exp_m02_01_start_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_Convoy_Update
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_05_Convoy_Update.bikb";
			class Sentences
			{
				class exp_m02_05_convoy_update_COM_0
				{
					textPlain = "$STR_A3_exp_m02_05_convoy_update_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\05_Convoy_Update\exp_m02_05_convoy_update_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_05_convoy_update_COM_1
				{
					textPlain = "$STR_A3_exp_m02_05_convoy_update_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\05_Convoy_Update\exp_m02_05_convoy_update_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_05_convoy_update_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_05_convoy_update_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\05_Convoy_Update\exp_m02_05_convoy_update_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_05_convoy_update_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_05_convoy_update_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\05_Convoy_Update\exp_m02_05_convoy_update_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_Watch_Fire
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_10_Watch_Fire.bikb";
			class Sentences
			{
				class exp_m02_10_watch_fire_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_10_watch_fire_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\10_Watch_Fire\exp_m02_10_watch_fire_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_Continue
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_15_Continue.bikb";
			class Sentences
			{
				class exp_m02_15_continue_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_15_continue_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\15_Continue\exp_m02_15_continue_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_No_Touch
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_20_No_Touch.bikb";
			class Sentences
			{
				class exp_m02_20_no_touch_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_20_no_touch_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\20_No_Touch\exp_m02_20_no_touch_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_20_no_touch_GRM_1
				{
					textPlain = "$STR_A3_exp_m02_20_no_touch_GRM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\20_No_Touch\exp_m02_20_no_touch_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 23_LOL
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_23_LOL.bikb";
			class Sentences
			{
				class exp_m02_23_lol_SAL_0
				{
					textPlain = "$STR_A3_exp_m02_23_lol_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\23_LOL\exp_m02_23_lol_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_23_lol_TRK_0
				{
					textPlain = "$STR_A3_exp_m02_23_lol_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\23_LOL\exp_m02_23_lol_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_23_lol_SAL_1
				{
					textPlain = "$STR_A3_exp_m02_23_lol_SAL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\23_LOL\exp_m02_23_lol_SAL_1.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_23_lol_TRK_1
				{
					textPlain = "$STR_A3_exp_m02_23_lol_TRK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\23_LOL\exp_m02_23_lol_TRK_1.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_Briefing
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_25_Briefing.bikb";
			class Sentences
			{
				class exp_m02_25_briefing_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_TRK_0
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_2
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_3
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_3.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_COM_0
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_4
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_4.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_5
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_5";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_5.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_6
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_6";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_6.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_7
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_7";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_7.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_GRM_1
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_GRM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_8
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_8";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_8.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_25_briefing_RIK_9
				{
					textPlain = "$STR_A3_exp_m02_25_briefing_RIK_9";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\25_Briefing\exp_m02_25_briefing_RIK_9.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_Plan
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_30_Plan.bikb";
			class Sentences
			{
				class exp_m02_30_plan_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_30_plan_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\30_Plan\exp_m02_30_plan_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_30_plan_GRM_1
				{
					textPlain = "$STR_A3_exp_m02_30_plan_GRM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\30_Plan\exp_m02_30_plan_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_30_plan_GRM_2
				{
					textPlain = "$STR_A3_exp_m02_30_plan_GRM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\30_Plan\exp_m02_30_plan_GRM_2.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_Joke_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_35_Joke_1.bikb";
			class Sentences
			{
				class exp_m02_35_joke_1_SAL_0
				{
					textPlain = "$STR_A3_exp_m02_35_joke_1_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\35_Joke_1\exp_m02_35_joke_1_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_35_joke_1_SAL_1
				{
					textPlain = "$STR_A3_exp_m02_35_joke_1_SAL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\35_Joke_1\exp_m02_35_joke_1_SAL_1.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_35_joke_1_SAL_2
				{
					textPlain = "$STR_A3_exp_m02_35_joke_1_SAL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\35_Joke_1\exp_m02_35_joke_1_SAL_2.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_35_joke_1_SAL_3
				{
					textPlain = "$STR_A3_exp_m02_35_joke_1_SAL_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\35_Joke_1\exp_m02_35_joke_1_SAL_3.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_35_joke_1_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_35_joke_1_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\35_Joke_1\exp_m02_35_joke_1_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_35_joke_1_SAL_4
				{
					textPlain = "$STR_A3_exp_m02_35_joke_1_SAL_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\35_Joke_1\exp_m02_35_joke_1_SAL_4.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_Charge_Set
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_60_Charge_Set.bikb";
			class Sentences
			{
				class exp_m02_60_charge_set_COM_0
				{
					textPlain = "$STR_A3_exp_m02_60_charge_set_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\60_Charge_Set\exp_m02_60_charge_set_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_60_charge_set_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_60_charge_set_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\60_Charge_Set\exp_m02_60_charge_set_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_60_charge_set_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_60_charge_set_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\60_Charge_Set\exp_m02_60_charge_set_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_60_charge_set_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_60_charge_set_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\60_Charge_Set\exp_m02_60_charge_set_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_60_charge_set_RIK_2
				{
					textPlain = "$STR_A3_exp_m02_60_charge_set_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\60_Charge_Set\exp_m02_60_charge_set_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_60_charge_set_RIK_3
				{
					textPlain = "$STR_A3_exp_m02_60_charge_set_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\60_Charge_Set\exp_m02_60_charge_set_RIK_3.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_Convoy_Spotted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_65_Convoy_Spotted.bikb";
			class Sentences
			{
				class exp_m02_65_convoy_spotted_TRK_0
				{
					textPlain = "$STR_A3_exp_m02_65_convoy_spotted_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\65_Convoy_Spotted\exp_m02_65_convoy_spotted_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_65_convoy_spotted_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_65_convoy_spotted_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\65_Convoy_Spotted\exp_m02_65_convoy_spotted_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_65_convoy_spotted_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_65_convoy_spotted_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\65_Convoy_Spotted\exp_m02_65_convoy_spotted_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_65_convoy_spotted_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_65_convoy_spotted_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\65_Convoy_Spotted\exp_m02_65_convoy_spotted_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 70_Hold_Fire
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_70_Hold_Fire.bikb";
			class Sentences
			{
				class exp_m02_70_hold_fire_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_70_hold_fire_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\70_Hold_Fire\exp_m02_70_hold_fire_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 75_Open_Fire
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_75_Open_Fire.bikb";
			class Sentences
			{
				class exp_m02_75_open_fire_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_75_open_fire_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\75_Open_Fire\exp_m02_75_open_fire_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 80_Convoy_Destroyed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_80_Convoy_Destroyed.bikb";
			class Sentences
			{
				class exp_m02_80_convoy_destroyed_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_COM_0
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_RIK_2
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_RIK_3
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_RIK_3.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_TRK_0
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_SAL_0
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_RIK_4
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_RIK_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_RIK_4.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_80_convoy_destroyed_COM_1
				{
					textPlain = "$STR_A3_exp_m02_80_convoy_destroyed_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\80_Convoy_Destroyed\exp_m02_80_convoy_destroyed_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 83_WaitOne
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_83_WaitOne.bikb";
			class Sentences
			{
				class exp_m02_83_waitone_TRK_0
				{
					textPlain = "$STR_A3_exp_m02_83_waitone_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\83_WaitOne\exp_m02_83_waitone_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_83_waitone_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_83_waitone_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\83_WaitOne\exp_m02_83_waitone_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_83_waitone_SAL_0
				{
					textPlain = "$STR_A3_exp_m02_83_waitone_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\83_WaitOne\exp_m02_83_waitone_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 84_NewIntel
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_84_NewIntel.bikb";
			class Sentences
			{
				class exp_m02_84_newintel_COM_0
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_LIA_0.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_LIA_1
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_LIA_1.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_COM_1
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_COM_2
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_newintel_RIK_2
				{
					textPlain = "$STR_A3_exp_m02_84_newintel_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_NewIntel\exp_m02_84_newintel_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 84_2_NewIntel_Comment
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_84_2_NewIntel_Comment.bikb";
			class Sentences
			{
				class exp_m02_84_2_newintel_comment_TRK_0
				{
					textPlain = "$STR_A3_exp_m02_84_2_newintel_comment_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_2_NewIntel_Comment\exp_m02_84_2_newintel_comment_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_2_newintel_comment_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_84_2_newintel_comment_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_2_NewIntel_Comment\exp_m02_84_2_newintel_comment_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_2_newintel_comment_GRM_1
				{
					textPlain = "$STR_A3_exp_m02_84_2_newintel_comment_GRM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_2_NewIntel_Comment\exp_m02_84_2_newintel_comment_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_2_newintel_comment_SAL_0
				{
					textPlain = "$STR_A3_exp_m02_84_2_newintel_comment_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_2_NewIntel_Comment\exp_m02_84_2_newintel_comment_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_2_newintel_comment_GRM_2
				{
					textPlain = "$STR_A3_exp_m02_84_2_newintel_comment_GRM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_2_NewIntel_Comment\exp_m02_84_2_newintel_comment_GRM_2.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_84_2_newintel_comment_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_84_2_newintel_comment_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\84_2_NewIntel_Comment\exp_m02_84_2_newintel_comment_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 85_On_Path
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_85_On_Path.bikb";
			class Sentences
			{
				class exp_m02_85_on_path_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_85_on_path_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\85_On_Path\exp_m02_85_on_path_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 90_Confirmed_Enemy
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_90_Confirmed_Enemy.bikb";
			class Sentences
			{
				class exp_m02_90_confirmed_enemy_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_90_confirmed_enemy_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\90_Confirmed_Enemy\exp_m02_90_confirmed_enemy_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 95_Search_Wreck
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_95_Search_Wreck.bikb";
			class Sentences
			{
				class exp_m02_95_search_wreck_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_95_search_wreck_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\95_Search_Wreck\exp_m02_95_search_wreck_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 100_Weapons_Found
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_100_Weapons_Found.bikb";
			class Sentences
			{
				class exp_m02_100_weapons_found_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_100_weapons_found_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\100_Weapons_Found\exp_m02_100_weapons_found_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_100_weapons_found_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_100_weapons_found_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\100_Weapons_Found\exp_m02_100_weapons_found_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_100_weapons_found_COM_0
				{
					textPlain = "$STR_A3_exp_m02_100_weapons_found_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\100_Weapons_Found\exp_m02_100_weapons_found_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 105_Support_Plan
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_105_Support_Plan.bikb";
			class Sentences
			{
				class exp_m02_105_support_plan_COM_0
				{
					textPlain = "$STR_A3_exp_m02_105_support_plan_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\105_Support_Plan\exp_m02_105_support_plan_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_105_support_plan_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_105_support_plan_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\105_Support_Plan\exp_m02_105_support_plan_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_105_support_plan_RIK_1
				{
					textPlain = "$STR_A3_exp_m02_105_support_plan_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\105_Support_Plan\exp_m02_105_support_plan_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 107_ChineseForeshadow
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_107_ChineseForeshadow.bikb";
			class Sentences
			{
				class exp_m02_107_chineseforeshadow_TRK_0
				{
					textPlain = "$STR_A3_exp_m02_107_chineseforeshadow_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\107_ChineseForeshadow\exp_m02_107_chineseforeshadow_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_107_chineseforeshadow_SAL_0
				{
					textPlain = "$STR_A3_exp_m02_107_chineseforeshadow_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\107_ChineseForeshadow\exp_m02_107_chineseforeshadow_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_107_chineseforeshadow_TRK_1
				{
					textPlain = "$STR_A3_exp_m02_107_chineseforeshadow_TRK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\107_ChineseForeshadow\exp_m02_107_chineseforeshadow_TRK_1.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_107_chineseforeshadow_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_107_chineseforeshadow_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\107_ChineseForeshadow\exp_m02_107_chineseforeshadow_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_107_chineseforeshadow_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_107_chineseforeshadow_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\107_ChineseForeshadow\exp_m02_107_chineseforeshadow_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 110_Helicopter_Ready
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_110_Helicopter_Ready.bikb";
			class Sentences
			{
				class exp_m02_110_helicopter_ready_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_110_helicopter_ready_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\110_Helicopter_Ready\exp_m02_110_helicopter_ready_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_110_helicopter_ready_LIA_1
				{
					textPlain = "$STR_A3_exp_m02_110_helicopter_ready_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\110_Helicopter_Ready\exp_m02_110_helicopter_ready_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 115_UAV_Targeting
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_115_UAV_Targeting.bikb";
			class Sentences
			{
				class exp_m02_115_uav_targeting_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_115_uav_targeting_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\115_UAV_Targeting\exp_m02_115_uav_targeting_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 120_UAV_Fired
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_120_UAV_Fired.bikb";
			class Sentences
			{
				class exp_m02_120_uav_fired_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_120_uav_fired_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\120_UAV_Fired\exp_m02_120_uav_fired_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 125_Weapons_Destroyed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_125_Weapons_Destroyed.bikb";
			class Sentences
			{
				class exp_m02_125_weapons_destroyed_LIA_0
				{
					textPlain = "$STR_A3_exp_m02_125_weapons_destroyed_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\125_Weapons_Destroyed\exp_m02_125_weapons_destroyed_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_125_weapons_destroyed_COM_0
				{
					textPlain = "$STR_A3_exp_m02_125_weapons_destroyed_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\125_Weapons_Destroyed\exp_m02_125_weapons_destroyed_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_125_weapons_destroyed_COM_1
				{
					textPlain = "$STR_A3_exp_m02_125_weapons_destroyed_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\125_Weapons_Destroyed\exp_m02_125_weapons_destroyed_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x01_Stalled_RV
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_x01_Stalled_RV.bikb";
			class Sentences
			{
				class exp_m02_x01_stalled_rv_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_x01_stalled_rv_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\x01_Stalled_RV\exp_m02_x01_stalled_rv_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x05_Stalled_Preparing
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_x05_Stalled_Preparing.bikb";
			class Sentences
			{
				class exp_m02_x05_stalled_preparing_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_x05_stalled_preparing_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\x05_Stalled_Preparing\exp_m02_x05_stalled_preparing_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x10_Stalled_Ambushed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_x10_Stalled_Ambushed.bikb";
			class Sentences
			{
				class exp_m02_x10_stalled_ambushed_RIK_0
				{
					textPlain = "$STR_A3_exp_m02_x10_stalled_ambushed_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\x10_Stalled_Ambushed\exp_m02_x10_stalled_ambushed_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x15_Ambush_Spatne
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_x15_Ambush_Spatne.bikb";
			class Sentences
			{
				class exp_m02_x15_ambush_spatne_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_x15_ambush_spatne_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\x15_Ambush_Spatne\exp_m02_x15_ambush_spatne_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m02_x15_ambush_spatne_GRM_1
				{
					textPlain = "$STR_A3_exp_m02_x15_ambush_spatne_GRM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\x15_Ambush_Spatne\exp_m02_x15_ambush_spatne_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x20_Ambush_Backstop
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m02\EXP_m02_x20_Ambush_Backstop.bikb";
			class Sentences
			{
				class exp_m02_x20_ambush_backstop_GRM_0
				{
					textPlain = "$STR_A3_exp_m02_x20_ambush_backstop_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m02\x20_Ambush_Backstop\exp_m02_x20_ambush_backstop_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m03
	{
		class b01_AltisWrapUp
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_b01_AltisWrapUp.bikb";
			class Sentences
			{
				class exp_m03_b01_altiswrapup_AAN_0
				{
					textPlain = "$STR_A3_exp_m03_b01_altiswrapup_AAN_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b01_AltisWrapUp\exp_m03_b01_altiswrapup_AAN_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b01_altiswrapup_AAN_1
				{
					textPlain = "$STR_A3_exp_m03_b01_altiswrapup_AAN_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b01_AltisWrapUp\exp_m03_b01_altiswrapup_AAN_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b10_Interrupt
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_b10_Interrupt.bikb";
			class Sentences
			{
				class exp_m03_b10_interrupt_LIA_0
				{
					textPlain = "$STR_A3_exp_m03_b10_interrupt_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b10_Interrupt\exp_m03_b10_interrupt_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b10_interrupt_COM_0
				{
					textPlain = "$STR_A3_exp_m03_b10_interrupt_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b10_Interrupt\exp_m03_b10_interrupt_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b15_WeaponsCache
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_b15_WeaponsCache.bikb";
			class Sentences
			{
				class exp_m03_b15_weaponscache_LIA_0
				{
					textPlain = "$STR_A3_exp_m03_b15_weaponscache_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b15_WeaponsCache\exp_m03_b15_weaponscache_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b15_weaponscache_COM_0
				{
					textPlain = "$STR_A3_exp_m03_b15_weaponscache_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b15_WeaponsCache\exp_m03_b15_weaponscache_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b15_weaponscache_LIA_1
				{
					textPlain = "$STR_A3_exp_m03_b15_weaponscache_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b15_WeaponsCache\exp_m03_b15_weaponscache_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b15_weaponscache_COM_1
				{
					textPlain = "$STR_A3_exp_m03_b15_weaponscache_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b15_WeaponsCache\exp_m03_b15_weaponscache_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b15_weaponscache_COM_2
				{
					textPlain = "$STR_A3_exp_m03_b15_weaponscache_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b15_WeaponsCache\exp_m03_b15_weaponscache_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b15_weaponscache_LIA_2
				{
					textPlain = "$STR_A3_exp_m03_b15_weaponscache_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b15_WeaponsCache\exp_m03_b15_weaponscache_LIA_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b15_weaponscache_COM_3
				{
					textPlain = "$STR_A3_exp_m03_b15_weaponscache_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b15_WeaponsCache\exp_m03_b15_weaponscache_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b20_Situation_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_b20_Situation_1.bikb";
			class Sentences
			{
				class exp_m03_b20_situation_1_LIA_0
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_1_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_1\exp_m03_b20_situation_1_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_1_COM_0
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_1_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_1\exp_m03_b20_situation_1_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_1_COM_1
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_1_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_1\exp_m03_b20_situation_1_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_1_LIA_1
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_1_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_1\exp_m03_b20_situation_1_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_1_COM_2
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_1_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_1\exp_m03_b20_situation_1_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_1_COM_3
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_1_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_1\exp_m03_b20_situation_1_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b20_Situation_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_b20_Situation_2.bikb";
			class Sentences
			{
				class exp_m03_b20_situation_2_LIA_0
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_2_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_2\exp_m03_b20_situation_2_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_2_COM_0
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_2_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_2\exp_m03_b20_situation_2_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_2_COM_1
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_2_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_2\exp_m03_b20_situation_2_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_2_COM_2
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_2_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_2\exp_m03_b20_situation_2_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_2_COM_3
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_2_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_2\exp_m03_b20_situation_2_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b20_situation_2_LIA_1
				{
					textPlain = "$STR_A3_exp_m03_b20_situation_2_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b20_Situation_2\exp_m03_b20_situation_2_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b25_Situation_3
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_b25_Situation_3.bikb";
			class Sentences
			{
				class exp_m03_b25_situation_3_COM_0
				{
					textPlain = "$STR_A3_exp_m03_b25_situation_3_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b25_Situation_3\exp_m03_b25_situation_3_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b25_situation_3_COM_1
				{
					textPlain = "$STR_A3_exp_m03_b25_situation_3_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b25_Situation_3\exp_m03_b25_situation_3_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b25_situation_3_LIA_0
				{
					textPlain = "$STR_A3_exp_m03_b25_situation_3_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b25_Situation_3\exp_m03_b25_situation_3_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_b25_situation_3_COM_2
				{
					textPlain = "$STR_A3_exp_m03_b25_situation_3_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\b25_Situation_3\exp_m03_b25_situation_3_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 01_Start
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_01_Start.bikb";
			class Sentences
			{
				class exp_m03_01_start_COM_0
				{
					textPlain = "$STR_A3_exp_m03_01_start_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\01_Start\exp_m03_01_start_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_01_start_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_01_start_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\01_Start\exp_m03_01_start_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_01_start_RIK_1
				{
					textPlain = "$STR_A3_exp_m03_01_start_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\01_Start\exp_m03_01_start_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_01_start_COM_1
				{
					textPlain = "$STR_A3_exp_m03_01_start_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\01_Start\exp_m03_01_start_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_01_start_COM_2
				{
					textPlain = "$STR_A3_exp_m03_01_start_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\01_Start\exp_m03_01_start_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_01_start_COM_3
				{
					textPlain = "$STR_A3_exp_m03_01_start_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\01_Start\exp_m03_01_start_COM_3.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_SupportTeamOverwatch
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_05_SupportTeamOverwatch.bikb";
			class Sentences
			{
				class exp_m03_05_supportteamoverwatch_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_05_supportteamoverwatch_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\05_SupportTeamOverwatch\exp_m03_05_supportteamoverwatch_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_05_supportteamoverwatch_RIK_1
				{
					textPlain = "$STR_A3_exp_m03_05_supportteamoverwatch_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\05_SupportTeamOverwatch\exp_m03_05_supportteamoverwatch_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_05_supportteamoverwatch_COM_0
				{
					textPlain = "$STR_A3_exp_m03_05_supportteamoverwatch_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\05_SupportTeamOverwatch\exp_m03_05_supportteamoverwatch_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_05_supportteamoverwatch_COM_1
				{
					textPlain = "$STR_A3_exp_m03_05_supportteamoverwatch_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\05_SupportTeamOverwatch\exp_m03_05_supportteamoverwatch_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 06_SupportTeamChatter
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_06_SupportTeamChatter.bikb";
			class Sentences
			{
				class exp_m03_06_supportteamchatter_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_06_supportteamchatter_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\06_SupportTeamChatter\exp_m03_06_supportteamchatter_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_06_supportteamchatter_GRM_0
				{
					textPlain = "$STR_A3_exp_m03_06_supportteamchatter_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\06_SupportTeamChatter\exp_m03_06_supportteamchatter_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_06_supportteamchatter_COM_0
				{
					textPlain = "$STR_A3_exp_m03_06_supportteamchatter_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\06_SupportTeamChatter\exp_m03_06_supportteamchatter_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_06_supportteamchatter_COM_1
				{
					textPlain = "$STR_A3_exp_m03_06_supportteamchatter_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\06_SupportTeamChatter\exp_m03_06_supportteamchatter_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 07_ConvoyDepart
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_07_ConvoyDepart.bikb";
			class Sentences
			{
				class exp_m03_07_convoydepart_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_07_convoydepart_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\07_ConvoyDepart\exp_m03_07_convoydepart_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_Overwatch
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_10_Overwatch.bikb";
			class Sentences
			{
				class exp_m03_10_overwatch_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_10_overwatch_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\10_Overwatch\exp_m03_10_overwatch_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_10_overwatch_COM_0
				{
					textPlain = "$STR_A3_exp_m03_10_overwatch_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\10_Overwatch\exp_m03_10_overwatch_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_10_overwatch_COM_1
				{
					textPlain = "$STR_A3_exp_m03_10_overwatch_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\10_Overwatch\exp_m03_10_overwatch_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_Detected
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_15_Detected.bikb";
			class Sentences
			{
				class exp_m03_15_detected_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_15_detected_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\15_Detected\exp_m03_15_detected_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_SuppliesDestroyed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_20_SuppliesDestroyed.bikb";
			class Sentences
			{
				class exp_m03_20_suppliesdestroyed_COM_0
				{
					textPlain = "$STR_A3_exp_m03_20_suppliesdestroyed_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\20_SuppliesDestroyed\exp_m03_20_suppliesdestroyed_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_20_suppliesdestroyed_COM_1
				{
					textPlain = "$STR_A3_exp_m03_20_suppliesdestroyed_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\20_SuppliesDestroyed\exp_m03_20_suppliesdestroyed_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_allSuppliesDestroyed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_25_allSuppliesDestroyed.bikb";
			class Sentences
			{
				class exp_m03_25_allsuppliesdestroyed_COM_0
				{
					textPlain = "$STR_A3_exp_m03_25_allsuppliesdestroyed_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\25_allSuppliesDestroyed\exp_m03_25_allsuppliesdestroyed_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_25_allsuppliesdestroyed_COM_1
				{
					textPlain = "$STR_A3_exp_m03_25_allsuppliesdestroyed_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\25_allSuppliesDestroyed\exp_m03_25_allsuppliesdestroyed_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_SupportTeamRetreating
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_30_SupportTeamRetreating.bikb";
			class Sentences
			{
				class exp_m03_30_supportteamretreating_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_30_supportteamretreating_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\30_SupportTeamRetreating\exp_m03_30_supportteamretreating_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_30_supportteamretreating_RIK_1
				{
					textPlain = "$STR_A3_exp_m03_30_supportteamretreating_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\30_SupportTeamRetreating\exp_m03_30_supportteamretreating_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_30_supportteamretreating_COM_0
				{
					textPlain = "$STR_A3_exp_m03_30_supportteamretreating_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\30_SupportTeamRetreating\exp_m03_30_supportteamretreating_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_30_supportteamretreating_COM_1
				{
					textPlain = "$STR_A3_exp_m03_30_supportteamretreating_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\30_SupportTeamRetreating\exp_m03_30_supportteamretreating_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_Reinforcements_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_35_Reinforcements_1.bikb";
			class Sentences
			{
				class exp_m03_35_reinforcements_1_COM_0
				{
					textPlain = "$STR_A3_exp_m03_35_reinforcements_1_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\35_Reinforcements_1\exp_m03_35_reinforcements_1_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_35_reinforcements_1_COM_1
				{
					textPlain = "$STR_A3_exp_m03_35_reinforcements_1_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\35_Reinforcements_1\exp_m03_35_reinforcements_1_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_Reinforcements_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_40_Reinforcements_2.bikb";
			class Sentences
			{
				class exp_m03_40_reinforcements_2_COM_0
				{
					textPlain = "$STR_A3_exp_m03_40_reinforcements_2_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\40_Reinforcements_2\exp_m03_40_reinforcements_2_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_40_reinforcements_2_COM_1
				{
					textPlain = "$STR_A3_exp_m03_40_reinforcements_2_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\40_Reinforcements_2\exp_m03_40_reinforcements_2_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_40_reinforcements_2_COM_2
				{
					textPlain = "$STR_A3_exp_m03_40_reinforcements_2_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\40_Reinforcements_2\exp_m03_40_reinforcements_2_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_support_team_leave
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_50_support_team_leave.bikb";
			class Sentences
			{
				class exp_m03_50_support_team_leave_COM_0
				{
					textPlain = "$STR_A3_exp_m03_50_support_team_leave_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\50_support_team_leave\exp_m03_50_support_team_leave_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_50_support_team_leave_COM_1
				{
					textPlain = "$STR_A3_exp_m03_50_support_team_leave_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\50_support_team_leave\exp_m03_50_support_team_leave_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_reach_observatory
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_55_reach_observatory.bikb";
			class Sentences
			{
				class exp_m03_55_reach_observatory_COM_0
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_55_reach_observatory_COM_1
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_55_reach_observatory_TRK_0
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_55_reach_observatory_SAL_0
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_55_reach_observatory_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_55_reach_observatory_RIK_1
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_55_reach_observatory_COM_2
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_55_reach_observatory_COM_3
				{
					textPlain = "$STR_A3_exp_m03_55_reach_observatory_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\55_reach_observatory\exp_m03_55_reach_observatory_COM_3.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 57_reach_observatory
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_57_reach_observatory.bikb";
			class Sentences
			{
				class exp_m03_57_reach_observatory_TRK_0
				{
					textPlain = "$STR_A3_exp_m03_57_reach_observatory_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\57_reach_observatory\exp_m03_57_reach_observatory_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_57_reach_observatory_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_57_reach_observatory_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\57_reach_observatory\exp_m03_57_reach_observatory_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_57_reach_observatory_GRM_0
				{
					textPlain = "$STR_A3_exp_m03_57_reach_observatory_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\57_reach_observatory\exp_m03_57_reach_observatory_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_57_reach_observatory_SAL_0
				{
					textPlain = "$STR_A3_exp_m03_57_reach_observatory_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\57_reach_observatory\exp_m03_57_reach_observatory_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_57_reach_observatory_RIK_1
				{
					textPlain = "$STR_A3_exp_m03_57_reach_observatory_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\57_reach_observatory\exp_m03_57_reach_observatory_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_57_reach_observatory_RIK_2
				{
					textPlain = "$STR_A3_exp_m03_57_reach_observatory_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\57_reach_observatory\exp_m03_57_reach_observatory_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 58_debriefing
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_58_debriefing.bikb";
			class Sentences
			{
				class exp_m03_58_debriefing_COM_0
				{
					textPlain = "$STR_A3_exp_m03_58_debriefing_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\58_debriefing\exp_m03_58_debriefing_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_58_debriefing_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_58_debriefing_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\58_debriefing\exp_m03_58_debriefing_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_58_debriefing_GRM_0
				{
					textPlain = "$STR_A3_exp_m03_58_debriefing_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\58_debriefing\exp_m03_58_debriefing_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_58_debriefing_COM_1
				{
					textPlain = "$STR_A3_exp_m03_58_debriefing_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\58_debriefing\exp_m03_58_debriefing_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_58_debriefing_SAL_0
				{
					textPlain = "$STR_A3_exp_m03_58_debriefing_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\58_debriefing\exp_m03_58_debriefing_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_LZ
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_60_LZ.bikb";
			class Sentences
			{
				class exp_m03_60_lz_PIL_0
				{
					textPlain = "$STR_A3_exp_m03_60_lz_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_PIL_0.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_PIL_1
				{
					textPlain = "$STR_A3_exp_m03_60_lz_PIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_PIL_1.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_PIL_2
				{
					textPlain = "$STR_A3_exp_m03_60_lz_PIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_PIL_2.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_LIA_0
				{
					textPlain = "$STR_A3_exp_m03_60_lz_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_LIA_0.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_LIA_1
				{
					textPlain = "$STR_A3_exp_m03_60_lz_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_LIA_1.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_RIK_0
				{
					textPlain = "$STR_A3_exp_m03_60_lz_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_PIL_3
				{
					textPlain = "$STR_A3_exp_m03_60_lz_PIL_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_PIL_3.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_PIL_4
				{
					textPlain = "$STR_A3_exp_m03_60_lz_PIL_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_PIL_4.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_SAL_0
				{
					textPlain = "$STR_A3_exp_m03_60_lz_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_PIL_5
				{
					textPlain = "$STR_A3_exp_m03_60_lz_PIL_5";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_PIL_5.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_PIL_6
				{
					textPlain = "$STR_A3_exp_m03_60_lz_PIL_6";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_PIL_6.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_LIA_2
				{
					textPlain = "$STR_A3_exp_m03_60_lz_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_LIA_2.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_60_lz_SAL_1
				{
					textPlain = "$STR_A3_exp_m03_60_lz_SAL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\60_LZ\exp_m03_60_lz_SAL_1.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x01_accident
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_x01_accident.bikb";
			class Sentences
			{
				class exp_m03_x01_accident_COM_0
				{
					textPlain = "$STR_A3_exp_m03_x01_accident_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\x01_accident\exp_m03_x01_accident_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m03_x01_accident_COM_1
				{
					textPlain = "$STR_A3_exp_m03_x01_accident_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\x01_accident\exp_m03_x01_accident_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x02_slow_players
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_x02_slow_players.bikb";
			class Sentences
			{
				class exp_m03_x02_slow_players_PIL_0
				{
					textPlain = "$STR_A3_exp_m03_x02_slow_players_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\x02_slow_players\exp_m03_x02_slow_players_PIL_0.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x03_late_arrival
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m03\EXP_m03_x03_late_arrival.bikb";
			class Sentences
			{
				class exp_m03_x03_late_arrival_PIL_0
				{
					textPlain = "$STR_A3_exp_m03_x03_late_arrival_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m03\x03_late_arrival\exp_m03_x03_late_arrival_PIL_0.ogg"};
					actor = "BIS_PIL";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m04
	{
		class b01_TanoaReport
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b01_TanoaReport.bikb";
			class Sentences
			{
				class exp_m04_b01_tanoareport_COR_0
				{
					textPlain = "$STR_A3_exp_m04_b01_tanoareport_COR_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b01_TanoaReport\exp_m04_b01_tanoareport_COR_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b05_TanoaReport_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b05_TanoaReport_2.bikb";
			class Sentences
			{
				class exp_m04_b05_tanoareport_2_COR_0
				{
					textPlain = "$STR_A3_exp_m04_b05_tanoareport_2_COR_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b05_TanoaReport_2\exp_m04_b05_tanoareport_2_COR_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b05_tanoareport_2_COR_1
				{
					textPlain = "$STR_A3_exp_m04_b05_tanoareport_2_COR_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b05_TanoaReport_2\exp_m04_b05_tanoareport_2_COR_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b10_Interrupt
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b10_Interrupt.bikb";
			class Sentences
			{
				class exp_m04_b10_interrupt_LIA_0
				{
					textPlain = "$STR_A3_exp_m04_b10_interrupt_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b10_Interrupt\exp_m04_b10_interrupt_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b15_Situation_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b15_Situation_1.bikb";
			class Sentences
			{
				class exp_m04_b15_situation_1_COM_0
				{
					textPlain = "$STR_A3_exp_m04_b15_situation_1_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b15_Situation_1\exp_m04_b15_situation_1_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b15_situation_1_LIA_0
				{
					textPlain = "$STR_A3_exp_m04_b15_situation_1_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b15_Situation_1\exp_m04_b15_situation_1_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b15_situation_1_COM_1
				{
					textPlain = "$STR_A3_exp_m04_b15_situation_1_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b15_Situation_1\exp_m04_b15_situation_1_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b15_situation_1_LIA_1
				{
					textPlain = "$STR_A3_exp_m04_b15_situation_1_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b15_Situation_1\exp_m04_b15_situation_1_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b20_Situation_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b20_Situation_2.bikb";
			class Sentences
			{
				class exp_m04_b20_situation_2_COM_0
				{
					textPlain = "$STR_A3_exp_m04_b20_situation_2_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b20_Situation_2\exp_m04_b20_situation_2_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b20_situation_2_COM_1
				{
					textPlain = "$STR_A3_exp_m04_b20_situation_2_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b20_Situation_2\exp_m04_b20_situation_2_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b20_situation_2_LIA_0
				{
					textPlain = "$STR_A3_exp_m04_b20_situation_2_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b20_Situation_2\exp_m04_b20_situation_2_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b20_situation_2_COM_2
				{
					textPlain = "$STR_A3_exp_m04_b20_situation_2_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b20_Situation_2\exp_m04_b20_situation_2_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b20_situation_2_COM_3
				{
					textPlain = "$STR_A3_exp_m04_b20_situation_2_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b20_Situation_2\exp_m04_b20_situation_2_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b25_Situation_3
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b25_Situation_3.bikb";
			class Sentences
			{
				class exp_m04_b25_situation_3_LIA_0
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_COM_0
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_LIA_1
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_COM_1
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_LIA_2
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_LIA_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_COM_2
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_LIA_3
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_LIA_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_LIA_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_COM_3
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_LIA_4
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_LIA_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_LIA_4.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b25_situation_3_COM_4
				{
					textPlain = "$STR_A3_exp_m04_b25_situation_3_COM_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b25_Situation_3\exp_m04_b25_situation_3_COM_4.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b30_Situation_4
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b30_Situation_4.bikb";
			class Sentences
			{
				class exp_m04_b30_situation_4_COM_0
				{
					textPlain = "$STR_A3_exp_m04_b30_situation_4_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b30_Situation_4\exp_m04_b30_situation_4_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b30_situation_4_COM_1
				{
					textPlain = "$STR_A3_exp_m04_b30_situation_4_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b30_Situation_4\exp_m04_b30_situation_4_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b30_situation_4_LIA_0
				{
					textPlain = "$STR_A3_exp_m04_b30_situation_4_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b30_Situation_4\exp_m04_b30_situation_4_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b30_situation_4_COM_2
				{
					textPlain = "$STR_A3_exp_m04_b30_situation_4_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b30_Situation_4\exp_m04_b30_situation_4_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b30_situation_4_LIA_1
				{
					textPlain = "$STR_A3_exp_m04_b30_situation_4_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b30_Situation_4\exp_m04_b30_situation_4_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b35_Connect
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_b35_Connect.bikb";
			class Sentences
			{
				class exp_m04_b35_connect_LIA_0
				{
					textPlain = "$STR_A3_exp_m04_b35_connect_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b35_Connect\exp_m04_b35_connect_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b35_connect_COM_0
				{
					textPlain = "$STR_A3_exp_m04_b35_connect_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b35_Connect\exp_m04_b35_connect_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b35_connect_COM_1
				{
					textPlain = "$STR_A3_exp_m04_b35_connect_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b35_Connect\exp_m04_b35_connect_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b35_connect_LIA_1
				{
					textPlain = "$STR_A3_exp_m04_b35_connect_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b35_Connect\exp_m04_b35_connect_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_b35_connect_COM_2
				{
					textPlain = "$STR_A3_exp_m04_b35_connect_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\b35_Connect\exp_m04_b35_connect_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 01_Blocking
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_01_Blocking.bikb";
			class Sentences
			{
				class exp_m04_01_blocking_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_01_blocking_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\01_Blocking\exp_m04_01_blocking_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_01_blocking_COM_0
				{
					textPlain = "$STR_A3_exp_m04_01_blocking_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\01_Blocking\exp_m04_01_blocking_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_01_blocking_RIK_1
				{
					textPlain = "$STR_A3_exp_m04_01_blocking_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\01_Blocking\exp_m04_01_blocking_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_01_blocking_COM_1
				{
					textPlain = "$STR_A3_exp_m04_01_blocking_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\01_Blocking\exp_m04_01_blocking_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_01_blocking_RIK_2
				{
					textPlain = "$STR_A3_exp_m04_01_blocking_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\01_Blocking\exp_m04_01_blocking_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_Empty
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_05_Empty.bikb";
			class Sentences
			{
				class exp_m04_05_empty_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_05_empty_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\05_Empty\exp_m04_05_empty_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_05_empty_RIK_1
				{
					textPlain = "$STR_A3_exp_m04_05_empty_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\05_Empty\exp_m04_05_empty_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_05_empty_RIK_2
				{
					textPlain = "$STR_A3_exp_m04_05_empty_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\05_Empty\exp_m04_05_empty_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_05_empty_COM_0
				{
					textPlain = "$STR_A3_exp_m04_05_empty_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\05_Empty\exp_m04_05_empty_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_05_empty_COM_1
				{
					textPlain = "$STR_A3_exp_m04_05_empty_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\05_Empty\exp_m04_05_empty_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_Attack
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_10_Attack.bikb";
			class Sentences
			{
				class exp_m04_10_attack_COM_0
				{
					textPlain = "$STR_A3_exp_m04_10_attack_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\10_Attack\exp_m04_10_attack_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_Defeated
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_15_Defeated.bikb";
			class Sentences
			{
				class exp_m04_15_defeated_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_15_defeated_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\15_Defeated\exp_m04_15_defeated_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_15_defeated_COM_0
				{
					textPlain = "$STR_A3_exp_m04_15_defeated_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\15_Defeated\exp_m04_15_defeated_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_15_defeated_RIK_1
				{
					textPlain = "$STR_A3_exp_m04_15_defeated_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\15_Defeated\exp_m04_15_defeated_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_15_defeated_RIK_2
				{
					textPlain = "$STR_A3_exp_m04_15_defeated_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\15_Defeated\exp_m04_15_defeated_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_15_defeated_RIK_3
				{
					textPlain = "$STR_A3_exp_m04_15_defeated_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\15_Defeated\exp_m04_15_defeated_RIK_3.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_Feed_Start
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_20_Feed_Start.bikb";
			class Sentences
			{
				class exp_m04_20_feed_start_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_20_feed_start_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\20_Feed_Start\exp_m04_20_feed_start_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_20_feed_start_RIK_1
				{
					textPlain = "$STR_A3_exp_m04_20_feed_start_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\20_Feed_Start\exp_m04_20_feed_start_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_Feed_Explain
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_25_Feed_Explain.bikb";
			class Sentences
			{
				class exp_m04_25_feed_explain_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_25_feed_explain_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\25_Feed_Explain\exp_m04_25_feed_explain_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_Feed_End
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_30_Feed_End.bikb";
			class Sentences
			{
				class exp_m04_30_feed_end_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_30_feed_end_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\30_Feed_End\exp_m04_30_feed_end_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_30_feed_end_COM_0
				{
					textPlain = "$STR_A3_exp_m04_30_feed_end_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\30_Feed_End\exp_m04_30_feed_end_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_30_feed_end_COM_1
				{
					textPlain = "$STR_A3_exp_m04_30_feed_end_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\30_Feed_End\exp_m04_30_feed_end_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_30_feed_end_RIK_1
				{
					textPlain = "$STR_A3_exp_m04_30_feed_end_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\30_Feed_End\exp_m04_30_feed_end_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_30_feed_end_RIK_2
				{
					textPlain = "$STR_A3_exp_m04_30_feed_end_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\30_Feed_End\exp_m04_30_feed_end_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_30_feed_end_COM_2
				{
					textPlain = "$STR_A3_exp_m04_30_feed_end_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\30_Feed_End\exp_m04_30_feed_end_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_Exfil
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_35_Exfil.bikb";
			class Sentences
			{
				class exp_m04_35_exfil_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_35_exfil_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\35_Exfil\exp_m04_35_exfil_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_Flares
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_40_Flares.bikb";
			class Sentences
			{
				class exp_m04_40_flares_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_40_flares_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\40_Flares\exp_m04_40_flares_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_Mystery
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_45_Mystery.bikb";
			class Sentences
			{
				class exp_m04_45_mystery_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_45_mystery_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\45_Mystery\exp_m04_45_mystery_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_45_mystery_RIK_1
				{
					textPlain = "$STR_A3_exp_m04_45_mystery_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\45_Mystery\exp_m04_45_mystery_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_45_mystery_COM_0
				{
					textPlain = "$STR_A3_exp_m04_45_mystery_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\45_Mystery\exp_m04_45_mystery_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_45_mystery_RIK_2
				{
					textPlain = "$STR_A3_exp_m04_45_mystery_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\45_Mystery\exp_m04_45_mystery_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_45_mystery_COM_1
				{
					textPlain = "$STR_A3_exp_m04_45_mystery_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\45_Mystery\exp_m04_45_mystery_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_45_mystery_RIK_3
				{
					textPlain = "$STR_A3_exp_m04_45_mystery_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\45_Mystery\exp_m04_45_mystery_RIK_3.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_Near_Exfil
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_50_Near_Exfil.bikb";
			class Sentences
			{
				class exp_m04_50_near_exfil_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_50_near_exfil_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\50_Near_Exfil\exp_m04_50_near_exfil_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_All_In
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_55_All_In.bikb";
			class Sentences
			{
				class exp_m04_55_all_in_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_55_all_in_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\55_All_In\exp_m04_55_all_in_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_55_all_in_GRM_0
				{
					textPlain = "$STR_A3_exp_m04_55_all_in_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\55_All_In\exp_m04_55_all_in_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_Status
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_60_Status.bikb";
			class Sentences
			{
				class exp_m04_60_status_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_60_status_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\60_Status\exp_m04_60_status_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_60_status_TRK_0
				{
					textPlain = "$STR_A3_exp_m04_60_status_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\60_Status\exp_m04_60_status_TRK_0.ogg"};
					actor = "BIS_support3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_60_status_SAL_0
				{
					textPlain = "$STR_A3_exp_m04_60_status_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\60_Status\exp_m04_60_status_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_60_status_GRM_0
				{
					textPlain = "$STR_A3_exp_m04_60_status_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\60_Status\exp_m04_60_status_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_Feed_Start
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_65_Feed_Start.bikb";
			class Sentences
			{
				class exp_m04_65_feed_start_SAL_0
				{
					textPlain = "$STR_A3_exp_m04_65_feed_start_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\65_Feed_Start\exp_m04_65_feed_start_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 70_End
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_70_End.bikb";
			class Sentences
			{
				class exp_m04_70_end_LIA_0
				{
					textPlain = "$STR_A3_exp_m04_70_end_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\70_End\exp_m04_70_end_LIA_0.ogg"};
					actor = "BIS_SOF";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_70_end_LIA_1
				{
					textPlain = "$STR_A3_exp_m04_70_end_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\70_End\exp_m04_70_end_LIA_1.ogg"};
					actor = "BIS_SOF";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_70_end_COM_0
				{
					textPlain = "$STR_A3_exp_m04_70_end_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\70_End\exp_m04_70_end_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_70_end_LIA_2
				{
					textPlain = "$STR_A3_exp_m04_70_end_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\70_End\exp_m04_70_end_LIA_2.ogg"};
					actor = "BIS_SOF";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x01_Fire
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_x01_Fire.bikb";
			class Sentences
			{
				class exp_m04_x01_fire_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_x01_fire_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\x01_Fire\exp_m04_x01_fire_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_x01_fire_RIK_1
				{
					textPlain = "$STR_A3_exp_m04_x01_fire_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\x01_Fire\exp_m04_x01_fire_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x05_Spotted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_x05_Spotted.bikb";
			class Sentences
			{
				class exp_m04_x05_spotted_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_x05_spotted_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\x05_Spotted\exp_m04_x05_spotted_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x10_Waiting
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_x10_Waiting.bikb";
			class Sentences
			{
				class exp_m04_x10_waiting_RIK_0
				{
					textPlain = "$STR_A3_exp_m04_x10_waiting_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\x10_Waiting\exp_m04_x10_waiting_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class f01_Viper_Reveal
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_f01_Viper_Reveal.bikb";
			class Sentences
			{
				class exp_m04_f01_viper_reveal_VIP_0
				{
					textPlain = "$STR_A3_exp_m04_f01_viper_reveal_VIP_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f01_Viper_Reveal\exp_m04_f01_viper_reveal_VIP_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f01_viper_reveal_VIP_1
				{
					textPlain = "$STR_A3_exp_m04_f01_viper_reveal_VIP_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f01_Viper_Reveal\exp_m04_f01_viper_reveal_VIP_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f01_viper_reveal_VIP_2
				{
					textPlain = "$STR_A3_exp_m04_f01_viper_reveal_VIP_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f01_Viper_Reveal\exp_m04_f01_viper_reveal_VIP_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f01_viper_reveal_VIP_3
				{
					textPlain = "$STR_A3_exp_m04_f01_viper_reveal_VIP_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f01_Viper_Reveal\exp_m04_f01_viper_reveal_VIP_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class f05_Viper_Syndikat
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04\EXP_m04_f05_Viper_Syndikat.bikb";
			class Sentences
			{
				class exp_m04_f05_viper_syndikat_FRE_0
				{
					textPlain = "$STR_A3_exp_m04_f05_viper_syndikat_FRE_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f05_Viper_Syndikat\exp_m04_f05_viper_syndikat_FRE_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f05_viper_syndikat_FRE_1
				{
					textPlain = "$STR_A3_exp_m04_f05_viper_syndikat_FRE_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f05_Viper_Syndikat\exp_m04_f05_viper_syndikat_FRE_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f05_viper_syndikat_FRE_2
				{
					textPlain = "$STR_A3_exp_m04_f05_viper_syndikat_FRE_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f05_Viper_Syndikat\exp_m04_f05_viper_syndikat_FRE_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f05_viper_syndikat_FRE_3
				{
					textPlain = "$STR_A3_exp_m04_f05_viper_syndikat_FRE_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f05_Viper_Syndikat\exp_m04_f05_viper_syndikat_FRE_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f05_viper_syndikat_VIP_0
				{
					textPlain = "$STR_A3_exp_m04_f05_viper_syndikat_VIP_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f05_Viper_Syndikat\exp_m04_f05_viper_syndikat_VIP_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f05_viper_syndikat_VIP_1
				{
					textPlain = "$STR_A3_exp_m04_f05_viper_syndikat_VIP_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f05_Viper_Syndikat\exp_m04_f05_viper_syndikat_VIP_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_f05_viper_syndikat_VIP_2
				{
					textPlain = "$STR_A3_exp_m04_f05_viper_syndikat_VIP_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m04\f05_Viper_Syndikat\exp_m04_f05_viper_syndikat_VIP_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m04_sp
	{
		class pre01_Orders
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_pre01_Orders.bikb";
			class Sentences
			{
				class exp_m04_sp_pre01_orders_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre01_orders_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre01_Orders\exp_m04_sp_pre01_orders_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_pre01_orders_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre01_orders_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre01_Orders\exp_m04_sp_pre01_orders_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class pre02_Spooked
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_pre02_Spooked.bikb";
			class Sentences
			{
				class exp_m04_sp_pre02_spooked_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre02_spooked_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre02_Spooked\exp_m04_sp_pre02_spooked_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_pre02_spooked_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre02_spooked_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre02_Spooked\exp_m04_sp_pre02_spooked_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_pre02_spooked_GRM_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre02_spooked_GRM_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre02_Spooked\exp_m04_sp_pre02_spooked_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_pre02_spooked_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre02_spooked_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre02_Spooked\exp_m04_sp_pre02_spooked_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class pre03_Fire
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_pre03_Fire.bikb";
			class Sentences
			{
				class exp_m04_sp_pre03_fire_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre03_fire_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre03_Fire\exp_m04_sp_pre03_fire_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class pre04_allDead
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_pre04_allDead.bikb";
			class Sentences
			{
				class exp_m04_sp_pre04_alldead_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre04_alldead_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre04_allDead\exp_m04_sp_pre04_alldead_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class pre05_Blocking
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_pre05_Blocking.bikb";
			class Sentences
			{
				class exp_m04_sp_pre05_blocking_KNX_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre05_blocking_KNX_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre05_Blocking\exp_m04_sp_pre05_blocking_KNX_0.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_pre05_blocking_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre05_blocking_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre05_Blocking\exp_m04_sp_pre05_blocking_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_pre05_blocking_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_pre05_blocking_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\pre05_Blocking\exp_m04_sp_pre05_blocking_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 01_ArrivedAtBlocking
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_01_ArrivedAtBlocking.bikb";
			class Sentences
			{
				class exp_m04_sp_01_arrivedatblocking_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_01_arrivedatblocking_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\01_ArrivedAtBlocking\exp_m04_sp_01_arrivedatblocking_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_01_arrivedatblocking_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_01_arrivedatblocking_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\01_ArrivedAtBlocking\exp_m04_sp_01_arrivedatblocking_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_01_arrivedatblocking_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_01_arrivedatblocking_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\01_ArrivedAtBlocking\exp_m04_sp_01_arrivedatblocking_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 051_LostComms
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_051_LostComms.bikb";
			class Sentences
			{
				class exp_m04_sp_051_lostcomms_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_051_lostcomms_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\051_LostComms\exp_m04_sp_051_lostcomms_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_051_lostcomms_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_051_lostcomms_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\051_LostComms\exp_m04_sp_051_lostcomms_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_051_lostcomms_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_051_lostcomms_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\051_LostComms\exp_m04_sp_051_lostcomms_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_051_lostcomms_RIK_2
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_051_lostcomms_RIK_2";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\051_LostComms\exp_m04_sp_051_lostcomms_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_Attack
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_10_Attack.bikb";
			class Sentences
			{
				class exp_m04_sp_10_attack_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_10_attack_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\10_Attack\exp_m04_sp_10_attack_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 12_TruckHit
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_12_TruckHit.bikb";
			class Sentences
			{
				class exp_m04_sp_12_truckhit_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_12_truckhit_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\12_TruckHit\exp_m04_sp_12_truckhit_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 13_LSVs
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_13_LSVs.bikb";
			class Sentences
			{
				class exp_m04_sp_13_lsvs_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_13_lsvs_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\13_LSVs\exp_m04_sp_13_lsvs_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 14_Recovered
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_14_Recovered.bikb";
			class Sentences
			{
				class exp_m04_sp_14_recovered_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_14_recovered_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\14_Recovered\exp_m04_sp_14_recovered_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_14_recovered_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_14_recovered_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\14_Recovered\exp_m04_sp_14_recovered_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 31_FindRaider2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_31_FindRaider2.bikb";
			class Sentences
			{
				class exp_m04_sp_31_findraider2_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_31_findraider2_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\31_FindRaider2\exp_m04_sp_31_findraider2_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_31_findraider2_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_31_findraider2_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\31_FindRaider2\exp_m04_sp_31_findraider2_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_31_findraider2_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_31_findraider2_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\31_FindRaider2\exp_m04_sp_31_findraider2_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_31_findraider2_RIK_2
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_31_findraider2_RIK_2";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\31_FindRaider2\exp_m04_sp_31_findraider2_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_31_findraider2_RIK_3
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_31_findraider2_RIK_3";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\31_FindRaider2\exp_m04_sp_31_findraider2_RIK_3.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_31_findraider2_RIK_4
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_31_findraider2_RIK_4";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\31_FindRaider2\exp_m04_sp_31_findraider2_RIK_4.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 32_CallingRaider2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_32_CallingRaider2.bikb";
			class Sentences
			{
				class exp_m04_sp_32_callingraider2_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_32_callingraider2_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\32_CallingRaider2\exp_m04_sp_32_callingraider2_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_32_callingraider2_GRM_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_32_callingraider2_GRM_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\32_CallingRaider2\exp_m04_sp_32_callingraider2_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 33_r2response
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_33_r2response.bikb";
			class Sentences
			{
				class exp_m04_sp_33_r2response_KNX_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_33_r2response_KNX_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\33_r2response\exp_m04_sp_33_r2response_KNX_0.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_33_r2response_KNX_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_33_r2response_KNX_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\33_r2response\exp_m04_sp_33_r2response_KNX_1.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_33_r2response_KNX_2
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_33_r2response_KNX_2";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\33_r2response\exp_m04_sp_33_r2response_KNX_2.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_33_r2response_KNX_3
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_33_r2response_KNX_3";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\33_r2response\exp_m04_sp_33_r2response_KNX_3.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_33_r2response_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_33_r2response_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\33_r2response\exp_m04_sp_33_r2response_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 37_Report_1
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_37_Report_1.bikb";
			class Sentences
			{
				class exp_m04_sp_37_report_1_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_37_report_1_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\37_Report_1\exp_m04_sp_37_report_1_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_37_report_1_GRM_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_37_report_1_GRM_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\37_Report_1\exp_m04_sp_37_report_1_GRM_1.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_37_report_1_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_37_report_1_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\37_Report_1\exp_m04_sp_37_report_1_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_37_report_1_GRM_2
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_37_report_1_GRM_2";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\37_Report_1\exp_m04_sp_37_report_1_GRM_2.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_37_report_1_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_37_report_1_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\37_Report_1\exp_m04_sp_37_report_1_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_37_report_1_RIK_2
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_37_report_1_RIK_2";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\37_Report_1\exp_m04_sp_37_report_1_RIK_2.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 39_Report_3
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_39_Report_3.bikb";
			class Sentences
			{
				class exp_m04_sp_39_report_3_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_39_report_3_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\39_Report_3\exp_m04_sp_39_report_3_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_39_report_3_KNX_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_39_report_3_KNX_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\39_Report_3\exp_m04_sp_39_report_3_KNX_0.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 41_R2Found
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_41_R2Found.bikb";
			class Sentences
			{
				class exp_m04_sp_41_r2found_KNX_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_41_r2found_KNX_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\41_R2Found\exp_m04_sp_41_r2found_KNX_0.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_41_r2found_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_41_r2found_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\41_R2Found\exp_m04_sp_41_r2found_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_41_r2found_KNX_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_41_r2found_KNX_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\41_R2Found\exp_m04_sp_41_r2found_KNX_1.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 43_atTruck
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m04_sp\EXP_m04_sp_43_atTruck.bikb";
			class Sentences
			{
				class exp_m04_sp_43_attruck_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_43_attruck_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\43_atTruck\exp_m04_sp_43_attruck_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_43_attruck_KNX_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_43_attruck_KNX_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\43_atTruck\exp_m04_sp_43_attruck_KNX_0.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m04_sp_43_attruck_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m04_sp_43_attruck_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m04_sp\43_atTruck\exp_m04_sp_43_attruck_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m05
	{
		class b01_Move_In
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b01_Move_In.bikb";
			class Sentences
			{
				class exp_m05_b01_move_in_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b01_move_in_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b01_Move_In\exp_m05_b01_move_in_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b01_move_in_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_b01_move_in_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b01_Move_In\exp_m05_b01_move_in_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b05_Connecting
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b05_Connecting.bikb";
			class Sentences
			{
				class exp_m05_b05_connecting_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b05_connecting_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b05_Connecting\exp_m05_b05_connecting_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b05_connecting_COM_0
				{
					textPlain = "$STR_A3_exp_m05_b05_connecting_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b05_Connecting\exp_m05_b05_connecting_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b10_Connected
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b10_Connected.bikb";
			class Sentences
			{
				class exp_m05_b10_connected_COM_0
				{
					textPlain = "$STR_A3_exp_m05_b10_connected_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b10_Connected\exp_m05_b10_connected_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b15_Door
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b15_Door.bikb";
			class Sentences
			{
				class exp_m05_b15_door_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b15_door_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b15_Door\exp_m05_b15_door_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b15_door_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_b15_door_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b15_Door\exp_m05_b15_door_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b20_Flash
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b20_Flash.bikb";
			class Sentences
			{
				class exp_m05_b20_flash_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b20_flash_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b20_Flash\exp_m05_b20_flash_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b25_Breaching
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b25_Breaching.bikb";
			class Sentences
			{
				class exp_m05_b25_breaching_TRK_0
				{
					textPlain = "$STR_A3_exp_m05_b25_breaching_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b25_Breaching\exp_m05_b25_breaching_TRK_0.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b30_Contact
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b30_Contact.bikb";
			class Sentences
			{
				class exp_m05_b30_contact_TRK_0
				{
					textPlain = "$STR_A3_exp_m05_b30_contact_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b30_Contact\exp_m05_b30_contact_TRK_0.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b30_contact_TRK_1
				{
					textPlain = "$STR_A3_exp_m05_b30_contact_TRK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b30_Contact\exp_m05_b30_contact_TRK_1.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b35_Man_Down
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b35_Man_Down.bikb";
			class Sentences
			{
				class exp_m05_b35_man_down_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_b35_man_down_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b35_Man_Down\exp_m05_b35_man_down_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b35_man_down_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b35_man_down_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b35_Man_Down\exp_m05_b35_man_down_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b35_man_down_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_b35_man_down_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b35_Man_Down\exp_m05_b35_man_down_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b40_Flash_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b40_Flash_2.bikb";
			class Sentences
			{
				class exp_m05_b40_flash_2_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b40_flash_2_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b40_Flash_2\exp_m05_b40_flash_2_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b40_Flash_3
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b40_Flash_3.bikb";
			class Sentences
			{
				class exp_m05_b40_flash_3_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b40_flash_3_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b40_Flash_3\exp_m05_b40_flash_3_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b45_Clear
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b45_Clear.bikb";
			class Sentences
			{
				class exp_m05_b45_clear_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b45_clear_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b45_Clear\exp_m05_b45_clear_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b45_clear_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_b45_clear_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b45_Clear\exp_m05_b45_clear_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b50_Reveal
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_b50_Reveal.bikb";
			class Sentences
			{
				class exp_m05_b50_reveal_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_b50_reveal_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b50_Reveal\exp_m05_b50_reveal_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b50_reveal_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_b50_reveal_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b50_Reveal\exp_m05_b50_reveal_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_b50_reveal_COM_0
				{
					textPlain = "$STR_A3_exp_m05_b50_reveal_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\b50_Reveal\exp_m05_b50_reveal_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 00_MoveToBeach
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_00_MoveToBeach.bikb";
			class Sentences
			{
				class exp_m05_00_movetobeach_COM_0
				{
					textPlain = "$STR_A3_exp_m05_00_movetobeach_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\00_MoveToBeach\exp_m05_00_movetobeach_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_00_movetobeach_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_00_movetobeach_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\00_MoveToBeach\exp_m05_00_movetobeach_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_00_movetobeach_COM_1
				{
					textPlain = "$STR_A3_exp_m05_00_movetobeach_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\00_MoveToBeach\exp_m05_00_movetobeach_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_OnTheMove
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_05_OnTheMove.bikb";
			class Sentences
			{
				class exp_m05_05_onthemove_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_05_onthemove_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_05_onthemove_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_05_onthemove_GRM_1
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_GRM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_GRM_1.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_05_onthemove_TRK_0
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_TRK_0.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_05_onthemove_TRK_1
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_TRK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_TRK_1.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_05_onthemove_SAL_1
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_SAL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_SAL_1.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_05_onthemove_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_05_onthemove_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\05_OnTheMove\exp_m05_05_onthemove_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_ExpositionOne
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_10_ExpositionOne.bikb";
			class Sentences
			{
				class exp_m05_10_expositionone_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_10_expositionone_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\10_ExpositionOne\exp_m05_10_expositionone_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_10_expositionone_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_10_expositionone_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\10_ExpositionOne\exp_m05_10_expositionone_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_10_expositionone_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_10_expositionone_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\10_ExpositionOne\exp_m05_10_expositionone_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_10_expositionone_SAL_1
				{
					textPlain = "$STR_A3_exp_m05_10_expositionone_SAL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\10_ExpositionOne\exp_m05_10_expositionone_SAL_1.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_10_expositionone_MIL_1
				{
					textPlain = "$STR_A3_exp_m05_10_expositionone_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\10_ExpositionOne\exp_m05_10_expositionone_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_ExpositionTwo
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_15_ExpositionTwo.bikb";
			class Sentences
			{
				class exp_m05_15_expositiontwo_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_15_expositiontwo_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\15_ExpositionTwo\exp_m05_15_expositiontwo_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_15_expositiontwo_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_15_expositiontwo_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\15_ExpositionTwo\exp_m05_15_expositiontwo_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_15_expositiontwo_TRK_0
				{
					textPlain = "$STR_A3_exp_m05_15_expositiontwo_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\15_ExpositionTwo\exp_m05_15_expositiontwo_TRK_0.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_15_expositiontwo_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_15_expositiontwo_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\15_ExpositionTwo\exp_m05_15_expositiontwo_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_WaitForBoat
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_20_WaitForBoat.bikb";
			class Sentences
			{
				class exp_m05_20_waitforboat_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_20_waitforboat_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\20_WaitForBoat\exp_m05_20_waitforboat_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_20_waitforboat_COM_0
				{
					textPlain = "$STR_A3_exp_m05_20_waitforboat_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\20_WaitForBoat\exp_m05_20_waitforboat_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_BoatDestroyed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_25_BoatDestroyed.bikb";
			class Sentences
			{
				class exp_m05_25_boatdestroyed_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_25_boatdestroyed_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\25_BoatDestroyed\exp_m05_25_boatdestroyed_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_25_boatdestroyed_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_25_boatdestroyed_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\25_BoatDestroyed\exp_m05_25_boatdestroyed_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_25_boatdestroyed_COM_0
				{
					textPlain = "$STR_A3_exp_m05_25_boatdestroyed_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\25_BoatDestroyed\exp_m05_25_boatdestroyed_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_25_boatdestroyed_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_25_boatdestroyed_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\25_BoatDestroyed\exp_m05_25_boatdestroyed_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_25_boatdestroyed_COM_1
				{
					textPlain = "$STR_A3_exp_m05_25_boatdestroyed_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\25_BoatDestroyed\exp_m05_25_boatdestroyed_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_25_boatdestroyed_RIK_2
				{
					textPlain = "$STR_A3_exp_m05_25_boatdestroyed_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\25_BoatDestroyed\exp_m05_25_boatdestroyed_RIK_2.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_NatoChopper
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_30_NatoChopper.bikb";
			class Sentences
			{
				class exp_m05_30_natochopper_COM_0
				{
					textPlain = "$STR_A3_exp_m05_30_natochopper_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\30_NatoChopper\exp_m05_30_natochopper_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_30_natochopper_COM_1
				{
					textPlain = "$STR_A3_exp_m05_30_natochopper_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\30_NatoChopper\exp_m05_30_natochopper_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_MoveToLZ
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_35_MoveToLZ.bikb";
			class Sentences
			{
				class exp_m05_35_movetolz_LIA_0
				{
					textPlain = "$STR_A3_exp_m05_35_movetolz_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\35_MoveToLZ\exp_m05_35_movetolz_LIA_0.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_35_movetolz_COM_0
				{
					textPlain = "$STR_A3_exp_m05_35_movetolz_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\35_MoveToLZ\exp_m05_35_movetolz_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_35_movetolz_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_35_movetolz_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\35_MoveToLZ\exp_m05_35_movetolz_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_WhatWasThat
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_40_WhatWasThat.bikb";
			class Sentences
			{
				class exp_m05_40_whatwasthat_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_40_whatwasthat_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\40_WhatWasThat\exp_m05_40_whatwasthat_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_40_whatwasthat_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_40_whatwasthat_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\40_WhatWasThat\exp_m05_40_whatwasthat_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_40_whatwasthat_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_40_whatwasthat_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\40_WhatWasThat\exp_m05_40_whatwasthat_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_40_whatwasthat_MIL_1
				{
					textPlain = "$STR_A3_exp_m05_40_whatwasthat_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\40_WhatWasThat\exp_m05_40_whatwasthat_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_40_whatwasthat_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_40_whatwasthat_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\40_WhatWasThat\exp_m05_40_whatwasthat_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_40_whatwasthat_MIL_2
				{
					textPlain = "$STR_A3_exp_m05_40_whatwasthat_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\40_WhatWasThat\exp_m05_40_whatwasthat_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_WhatWasThat2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_45_WhatWasThat2.bikb";
			class Sentences
			{
				class exp_m05_45_whatwasthat2_TRK_0
				{
					textPlain = "$STR_A3_exp_m05_45_whatwasthat2_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\45_WhatWasThat2\exp_m05_45_whatwasthat2_TRK_0.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_45_whatwasthat2_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_45_whatwasthat2_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\45_WhatWasThat2\exp_m05_45_whatwasthat2_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_45_whatwasthat2_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_45_whatwasthat2_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\45_WhatWasThat2\exp_m05_45_whatwasthat2_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_45_whatwasthat2_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_45_whatwasthat2_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\45_WhatWasThat2\exp_m05_45_whatwasthat2_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_ChopperETA
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_50_ChopperETA.bikb";
			class Sentences
			{
				class exp_m05_50_choppereta_LIA_0
				{
					textPlain = "$STR_A3_exp_m05_50_choppereta_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\50_ChopperETA\exp_m05_50_choppereta_LIA_0.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_ChopperHit
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_55_ChopperHit.bikb";
			class Sentences
			{
				class exp_m05_55_chopperhit_PIL_0
				{
					textPlain = "$STR_A3_exp_m05_55_chopperhit_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\55_ChopperHit\exp_m05_55_chopperhit_PIL_0.ogg"};
					actor = "BIS_chopperD";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_PilotLeaves
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_60_PilotLeaves.bikb";
			class Sentences
			{
				class exp_m05_60_pilotleaves_PIL_0
				{
					textPlain = "$STR_A3_exp_m05_60_pilotleaves_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\60_PilotLeaves\exp_m05_60_pilotleaves_PIL_0.ogg"};
					actor = "BIS_chopperD";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_60_pilotleaves_LIA_0
				{
					textPlain = "$STR_A3_exp_m05_60_pilotleaves_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\60_PilotLeaves\exp_m05_60_pilotleaves_LIA_0.ogg"};
					actor = "BIS_LIA";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_60_pilotleaves_PIL_1
				{
					textPlain = "$STR_A3_exp_m05_60_pilotleaves_PIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\60_PilotLeaves\exp_m05_60_pilotleaves_PIL_1.ogg"};
					actor = "BIS_chopperD";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_60_pilotleaves_COM_0
				{
					textPlain = "$STR_A3_exp_m05_60_pilotleaves_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\60_PilotLeaves\exp_m05_60_pilotleaves_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_TheBoats
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_65_TheBoats.bikb";
			class Sentences
			{
				class exp_m05_65_theboats_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_65_theboats_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\65_TheBoats\exp_m05_65_theboats_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_65_theboats_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_65_theboats_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\65_TheBoats\exp_m05_65_theboats_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_65_theboats_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_65_theboats_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\65_TheBoats\exp_m05_65_theboats_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_65_theboats_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_65_theboats_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\65_TheBoats\exp_m05_65_theboats_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_65_theboats_RIK_2
				{
					textPlain = "$STR_A3_exp_m05_65_theboats_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\65_TheBoats\exp_m05_65_theboats_RIK_2.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_65_theboats_COM_0
				{
					textPlain = "$STR_A3_exp_m05_65_theboats_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\65_TheBoats\exp_m05_65_theboats_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_65_theboats_MIL_1
				{
					textPlain = "$STR_A3_exp_m05_65_theboats_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\65_TheBoats\exp_m05_65_theboats_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 70_MoveToBoats
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_70_MoveToBoats.bikb";
			class Sentences
			{
				class exp_m05_70_movetoboats_TRK_0
				{
					textPlain = "$STR_A3_exp_m05_70_movetoboats_TRK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\70_MoveToBoats\exp_m05_70_movetoboats_TRK_0.ogg"};
					actor = "BIS_ai_4";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_70_movetoboats_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_70_movetoboats_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\70_MoveToBoats\exp_m05_70_movetoboats_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_70_movetoboats_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_70_movetoboats_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\70_MoveToBoats\exp_m05_70_movetoboats_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 73_BoatsSplit
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_73_BoatsSplit.bikb";
			class Sentences
			{
				class exp_m05_73_boatssplit_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_73_boatssplit_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\73_BoatsSplit\exp_m05_73_boatssplit_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_73_boatssplit_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_73_boatssplit_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\73_BoatsSplit\exp_m05_73_boatssplit_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 75_EnterTheJungle
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_75_EnterTheJungle.bikb";
			class Sentences
			{
				class exp_m05_75_enterthejungle_MIL_0
				{
					textPlain = "$STR_A3_exp_m05_75_enterthejungle_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\75_EnterTheJungle\exp_m05_75_enterthejungle_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_75_enterthejungle_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_75_enterthejungle_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\75_EnterTheJungle\exp_m05_75_enterthejungle_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_75_enterthejungle_MIL_1
				{
					textPlain = "$STR_A3_exp_m05_75_enterthejungle_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\75_EnterTheJungle\exp_m05_75_enterthejungle_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_75_enterthejungle_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_75_enterthejungle_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\75_EnterTheJungle\exp_m05_75_enterthejungle_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 80_LeaveTheJungle
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_80_LeaveTheJungle.bikb";
			class Sentences
			{
				class exp_m05_80_leavethejungle_GRM_0
				{
					textPlain = "$STR_A3_exp_m05_80_leavethejungle_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\80_LeaveTheJungle\exp_m05_80_leavethejungle_GRM_0.ogg"};
					actor = "BIS_ai_2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_80_leavethejungle_SAL_0
				{
					textPlain = "$STR_A3_exp_m05_80_leavethejungle_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\80_LeaveTheJungle\exp_m05_80_leavethejungle_SAL_0.ogg"};
					actor = "BIS_ai_3";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_80_leavethejungle_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_80_leavethejungle_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\80_LeaveTheJungle\exp_m05_80_leavethejungle_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_80_leavethejungle_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_80_leavethejungle_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\80_LeaveTheJungle\exp_m05_80_leavethejungle_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 85_AtTheBoats
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_85_AtTheBoats.bikb";
			class Sentences
			{
				class exp_m05_85_attheboats_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_85_attheboats_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\85_AtTheBoats\exp_m05_85_attheboats_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_85_attheboats_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_85_attheboats_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\85_AtTheBoats\exp_m05_85_attheboats_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x00_Moving
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_x00_Moving.bikb";
			class Sentences
			{
				class exp_m05_x00_moving_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_x00_moving_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x00_Moving\exp_m05_x00_moving_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x00_moving_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_x00_moving_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x00_Moving\exp_m05_x00_moving_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x00_moving_RIK_2
				{
					textPlain = "$STR_A3_exp_m05_x00_moving_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x00_Moving\exp_m05_x00_moving_RIK_2.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x00_moving_RIK_3
				{
					textPlain = "$STR_A3_exp_m05_x00_moving_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x00_Moving\exp_m05_x00_moving_RIK_3.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x05_Holding
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_x05_Holding.bikb";
			class Sentences
			{
				class exp_m05_x05_holding_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_x05_holding_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x05_Holding\exp_m05_x05_holding_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x05_holding_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_x05_holding_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x05_Holding\exp_m05_x05_holding_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x05_holding_RIK_2
				{
					textPlain = "$STR_A3_exp_m05_x05_holding_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x05_Holding\exp_m05_x05_holding_RIK_2.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x05_holding_RIK_3
				{
					textPlain = "$STR_A3_exp_m05_x05_holding_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x05_Holding\exp_m05_x05_holding_RIK_3.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x10_KeepMoving
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_x10_KeepMoving.bikb";
			class Sentences
			{
				class exp_m05_x10_keepmoving_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_x10_keepmoving_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x10_KeepMoving\exp_m05_x10_keepmoving_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x10_keepmoving_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_x10_keepmoving_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x10_KeepMoving\exp_m05_x10_keepmoving_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x10_keepmoving_RIK_2
				{
					textPlain = "$STR_A3_exp_m05_x10_keepmoving_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x10_KeepMoving\exp_m05_x10_keepmoving_RIK_2.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x10_keepmoving_RIK_3
				{
					textPlain = "$STR_A3_exp_m05_x10_keepmoving_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x10_KeepMoving\exp_m05_x10_keepmoving_RIK_3.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x15_KeyStoneSuppressed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05\EXP_m05_x15_KeyStoneSuppressed.bikb";
			class Sentences
			{
				class exp_m05_x15_keystonesuppressed_RIK_0
				{
					textPlain = "$STR_A3_exp_m05_x15_keystonesuppressed_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x15_KeyStoneSuppressed\exp_m05_x15_keystonesuppressed_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x15_keystonesuppressed_RIK_1
				{
					textPlain = "$STR_A3_exp_m05_x15_keystonesuppressed_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x15_KeyStoneSuppressed\exp_m05_x15_keystonesuppressed_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x15_keystonesuppressed_RIK_2
				{
					textPlain = "$STR_A3_exp_m05_x15_keystonesuppressed_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x15_KeyStoneSuppressed\exp_m05_x15_keystonesuppressed_RIK_2.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_x15_keystonesuppressed_RIK_3
				{
					textPlain = "$STR_A3_exp_m05_x15_keystonesuppressed_RIK_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m05\x15_KeyStoneSuppressed\exp_m05_x15_keystonesuppressed_RIK_3.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m05_sp
	{
		class y1_warning
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05_sp\EXP_m05_sp_y1_warning.bikb";
			class Sentences
			{
				class exp_m05_sp_y1_warning_KNX_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y1_warning_KNX_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y1_warning\exp_m05_sp_y1_warning_KNX_0.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class y2_grimmCovering
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05_sp\EXP_m05_sp_y2_grimmCovering.bikb";
			class Sentences
			{
				class exp_m05_sp_y2_grimmcovering_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y2_grimmcovering_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y2_grimmCovering\exp_m05_sp_y2_grimmcovering_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class y10_moveBack
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05_sp\EXP_m05_sp_y10_moveBack.bikb";
			class Sentences
			{
				class exp_m05_sp_y10_moveback_KNX_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y10_moveback_KNX_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y10_moveBack\exp_m05_sp_y10_moveback_KNX_0.ogg"};
					actor = "BIS_r2_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y10_moveback_WAT_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y10_moveback_WAT_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y10_moveBack\exp_m05_sp_y10_moveback_WAT_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y10_moveback_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y10_moveback_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y10_moveBack\exp_m05_sp_y10_moveback_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y10_moveback_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y10_moveback_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y10_moveBack\exp_m05_sp_y10_moveback_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y10_moveback_WAT_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y10_moveback_WAT_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y10_moveBack\exp_m05_sp_y10_moveback_WAT_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class y17_strike
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05_sp\EXP_m05_sp_y17_strike.bikb";
			class Sentences
			{
				class exp_m05_sp_y17_strike_RIK_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y17_strike_RIK_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y17_strike\exp_m05_sp_y17_strike_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y17_strike_RIK_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y17_strike_RIK_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y17_strike\exp_m05_sp_y17_strike_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class y19_splash
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05_sp\EXP_m05_sp_y19_splash.bikb";
			class Sentences
			{
				class exp_m05_sp_y19_splash_WAT_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_WAT_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_WAT_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y19_splash_WAT_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_WAT_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_WAT_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y19_splash_WAT_2
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_WAT_2";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_WAT_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y19_splash_WAT_3
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_WAT_3";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_WAT_3.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y19_splash_WAT_4
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_WAT_4";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_WAT_4.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y19_splash_WAT_5
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_WAT_5";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_WAT_5.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y19_splash_WAT_6
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_WAT_6";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_WAT_6.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y19_splash_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y19_splash_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y19_splash\exp_m05_sp_y19_splash_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class y20_reinforcements
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05_sp\EXP_m05_sp_y20_reinforcements.bikb";
			class Sentences
			{
				class exp_m05_sp_y20_reinforcements_wat_0
				{
					text = "Raider 1, be advised, we're seeing a lot of movement here - you're compromised. Syndikat are converging on your position. Relocate or drop the hammer, out.";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y20_reinforcements\exp_m05_sp_y20_reinforcements_wat_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class y25_boats
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m05_sp\EXP_m05_sp_y25_boats.bikb";
			class Sentences
			{
				class exp_m05_sp_y25_boats_GRM_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y25_boats_GRM_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y25_boats\exp_m05_sp_y25_boats_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y25_boats_WAT_0
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y25_boats_WAT_0";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y25_boats\exp_m05_sp_y25_boats_WAT_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m05_sp_y25_boats_WAT_1
				{
					text = "";
					textPlain = "$STR_A3_exp_m05_sp_y25_boats_WAT_1";
					speech[] = {"\a3\dubbing_f_exp\exp_m05_sp\y25_boats\exp_m05_sp_y25_boats_WAT_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m06
	{
		class b01_BriefingStart
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b01_BriefingStart.bikb";
			class Sentences
			{
				class exp_m06_b01_briefingstart_COM_0
				{
					textPlain = "$STR_A3_exp_m06_b01_briefingstart_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b01_BriefingStart\exp_m06_b01_briefingstart_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b01_briefingstart_LIA_0
				{
					textPlain = "$STR_A3_exp_m06_b01_briefingstart_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b01_BriefingStart\exp_m06_b01_briefingstart_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b05_MillerIntro
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b05_MillerIntro.bikb";
			class Sentences
			{
				class exp_m06_b05_millerintro_COM_0
				{
					textPlain = "$STR_A3_exp_m06_b05_millerintro_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b05_MillerIntro\exp_m06_b05_millerintro_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b05_millerintro_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_b05_millerintro_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b05_MillerIntro\exp_m06_b05_millerintro_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b05_millerintro_COM_1
				{
					textPlain = "$STR_A3_exp_m06_b05_millerintro_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b05_MillerIntro\exp_m06_b05_millerintro_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b05_millerintro_LIA_0
				{
					textPlain = "$STR_A3_exp_m06_b05_millerintro_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b05_MillerIntro\exp_m06_b05_millerintro_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b05_millerintro_COM_2
				{
					textPlain = "$STR_A3_exp_m06_b05_millerintro_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b05_MillerIntro\exp_m06_b05_millerintro_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b10_CSATConnection
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b10_CSATConnection.bikb";
			class Sentences
			{
				class exp_m06_b10_csatconnection_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_b10_csatconnection_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b10_CSATConnection\exp_m06_b10_csatconnection_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b10_csatconnection_LIA_0
				{
					textPlain = "$STR_A3_exp_m06_b10_csatconnection_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b10_CSATConnection\exp_m06_b10_csatconnection_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b10_csatconnection_COM_0
				{
					textPlain = "$STR_A3_exp_m06_b10_csatconnection_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b10_CSATConnection\exp_m06_b10_csatconnection_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b10_csatconnection_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_b10_csatconnection_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b10_CSATConnection\exp_m06_b10_csatconnection_MIL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b10_csatconnection_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_b10_csatconnection_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b10_CSATConnection\exp_m06_b10_csatconnection_MIL_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b15_CSATAgenda
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b15_CSATAgenda.bikb";
			class Sentences
			{
				class exp_m06_b15_csatagenda_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_b15_csatagenda_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b15_CSATAgenda\exp_m06_b15_csatagenda_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b15_csatagenda_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_b15_csatagenda_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b15_CSATAgenda\exp_m06_b15_csatagenda_MIL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b15_csatagenda_LIA_0
				{
					textPlain = "$STR_A3_exp_m06_b15_csatagenda_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b15_CSATAgenda\exp_m06_b15_csatagenda_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b15_csatagenda_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_b15_csatagenda_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b15_CSATAgenda\exp_m06_b15_csatagenda_MIL_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b15_csatagenda_COM_0
				{
					textPlain = "$STR_A3_exp_m06_b15_csatagenda_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b15_CSATAgenda\exp_m06_b15_csatagenda_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b20_ProjectEastwind
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b20_ProjectEastwind.bikb";
			class Sentences
			{
				class exp_m06_b20_projecteastwind_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_b20_projecteastwind_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b20_ProjectEastwind\exp_m06_b20_projecteastwind_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b20_projecteastwind_COM_0
				{
					textPlain = "$STR_A3_exp_m06_b20_projecteastwind_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b20_ProjectEastwind\exp_m06_b20_projecteastwind_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b20_projecteastwind_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_b20_projecteastwind_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b20_ProjectEastwind\exp_m06_b20_projecteastwind_MIL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b20_projecteastwind_LIA_0
				{
					textPlain = "$STR_A3_exp_m06_b20_projecteastwind_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b20_ProjectEastwind\exp_m06_b20_projecteastwind_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b20_projecteastwind_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_b20_projecteastwind_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b20_ProjectEastwind\exp_m06_b20_projecteastwind_MIL_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b20_projecteastwind_MIL_3
				{
					textPlain = "$STR_A3_exp_m06_b20_projecteastwind_MIL_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b20_ProjectEastwind\exp_m06_b20_projecteastwind_MIL_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b20_projecteastwind_MIL_4
				{
					textPlain = "$STR_A3_exp_m06_b20_projecteastwind_MIL_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b20_ProjectEastwind\exp_m06_b20_projecteastwind_MIL_4.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b23_ViperBlackSite
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b23_ViperBlackSite.bikb";
			class Sentences
			{
				class exp_m06_b23_viperblacksite_LIA_0
				{
					textPlain = "$STR_A3_exp_m06_b23_viperblacksite_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b23_ViperBlackSite\exp_m06_b23_viperblacksite_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b23_viperblacksite_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_b23_viperblacksite_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b23_ViperBlackSite\exp_m06_b23_viperblacksite_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b23_viperblacksite_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_b23_viperblacksite_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b23_ViperBlackSite\exp_m06_b23_viperblacksite_MIL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b23_viperblacksite_LIA_1
				{
					textPlain = "$STR_A3_exp_m06_b23_viperblacksite_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b23_ViperBlackSite\exp_m06_b23_viperblacksite_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b25_OnMission
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b25_OnMission.bikb";
			class Sentences
			{
				class exp_m06_b25_onmission_COM_0
				{
					textPlain = "$STR_A3_exp_m06_b25_onmission_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b25_OnMission\exp_m06_b25_onmission_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b25_onmission_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_b25_onmission_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b25_OnMission\exp_m06_b25_onmission_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b25_onmission_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_b25_onmission_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b25_OnMission\exp_m06_b25_onmission_MIL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b25_onmission_COM_1
				{
					textPlain = "$STR_A3_exp_m06_b25_onmission_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b25_OnMission\exp_m06_b25_onmission_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b30_GreenLight
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_b30_GreenLight.bikb";
			class Sentences
			{
				class exp_m06_b30_greenlight_LIA_0
				{
					textPlain = "$STR_A3_exp_m06_b30_greenlight_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b30_GreenLight\exp_m06_b30_greenlight_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b30_greenlight_COM_0
				{
					textPlain = "$STR_A3_exp_m06_b30_greenlight_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b30_GreenLight\exp_m06_b30_greenlight_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_b30_greenlight_COM_1
				{
					textPlain = "$STR_A3_exp_m06_b30_greenlight_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\b30_GreenLight\exp_m06_b30_greenlight_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 01_Start
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_01_Start.bikb";
			class Sentences
			{
				class exp_m06_01_start_COM_0
				{
					textPlain = "$STR_A3_exp_m06_01_start_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\01_Start\exp_m06_01_start_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_01_start_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_01_start_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\01_Start\exp_m06_01_start_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_01_start_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_01_start_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\01_Start\exp_m06_01_start_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 03_Patrol
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_03_Patrol.bikb";
			class Sentences
			{
				class exp_m06_03_patrol_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_03_patrol_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\03_Patrol\exp_m06_03_patrol_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_03_patrol_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_03_patrol_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\03_Patrol\exp_m06_03_patrol_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_Surprised
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_05_Surprised.bikb";
			class Sentences
			{
				class exp_m06_05_surprised_RIK_0
				{
					textPlain = "$STR_A3_exp_m06_05_surprised_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\05_Surprised\exp_m06_05_surprised_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_05_surprised_RIK_1
				{
					textPlain = "$STR_A3_exp_m06_05_surprised_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\05_Surprised\exp_m06_05_surprised_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_Patrol_Dead
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_10_Patrol_Dead.bikb";
			class Sentences
			{
				class exp_m06_10_patrol_dead_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_10_patrol_dead_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\10_Patrol_Dead\exp_m06_10_patrol_dead_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_10_patrol_dead_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_10_patrol_dead_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\10_Patrol_Dead\exp_m06_10_patrol_dead_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_Drone_Connect
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_15_Drone_Connect.bikb";
			class Sentences
			{
				class exp_m06_15_drone_connect_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_15_drone_connect_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\15_Drone_Connect\exp_m06_15_drone_connect_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_15_drone_connect_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_15_drone_connect_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\15_Drone_Connect\exp_m06_15_drone_connect_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_15_drone_connect_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_15_drone_connect_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\15_Drone_Connect\exp_m06_15_drone_connect_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_Drone_Connected
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_20_Drone_Connected.bikb";
			class Sentences
			{
				class exp_m06_20_drone_connected_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_20_drone_connected_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\20_Drone_Connected\exp_m06_20_drone_connected_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_Drones_Revealed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_25_Drones_Revealed.bikb";
			class Sentences
			{
				class exp_m06_25_drones_revealed_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_25_drones_revealed_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\25_Drones_Revealed\exp_m06_25_drones_revealed_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_25_drones_revealed_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_25_drones_revealed_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\25_Drones_Revealed\exp_m06_25_drones_revealed_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_UAV_Connected
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_30_UAV_Connected.bikb";
			class Sentences
			{
				class exp_m06_30_uav_connected_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_30_uav_connected_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\30_UAV_Connected\exp_m06_30_uav_connected_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_UAV_First
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_35_UAV_First.bikb";
			class Sentences
			{
				class exp_m06_35_uav_first_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_35_uav_first_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\35_UAV_First\exp_m06_35_uav_first_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_Drones_Attack
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_40_Drones_Attack.bikb";
			class Sentences
			{
				class exp_m06_40_drones_attack_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_40_drones_attack_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\40_Drones_Attack\exp_m06_40_drones_attack_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_40_drones_attack_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_40_drones_attack_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\40_Drones_Attack\exp_m06_40_drones_attack_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_40_drones_attack_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_40_drones_attack_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\40_Drones_Attack\exp_m06_40_drones_attack_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_Reveal
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_45_Reveal.bikb";
			class Sentences
			{
				class exp_m06_45_reveal_COM_0
				{
					textPlain = "$STR_A3_exp_m06_45_reveal_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\45_Reveal\exp_m06_45_reveal_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_45_reveal_COM_1
				{
					textPlain = "$STR_A3_exp_m06_45_reveal_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\45_Reveal\exp_m06_45_reveal_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_45_reveal_SAL_0
				{
					textPlain = "$STR_A3_exp_m06_45_reveal_SAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\45_Reveal\exp_m06_45_reveal_SAL_0.ogg"};
					actor = "BIS_support2";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_45_reveal_GRM_0
				{
					textPlain = "$STR_A3_exp_m06_45_reveal_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\45_Reveal\exp_m06_45_reveal_GRM_0.ogg"};
					actor = "BIS_support1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_45_reveal_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_45_reveal_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\45_Reveal\exp_m06_45_reveal_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_45_reveal_COM_2
				{
					textPlain = "$STR_A3_exp_m06_45_reveal_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\45_Reveal\exp_m06_45_reveal_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_45_reveal_COM_3
				{
					textPlain = "$STR_A3_exp_m06_45_reveal_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\45_Reveal\exp_m06_45_reveal_COM_3.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_Terminal_Spotted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_50_Terminal_Spotted.bikb";
			class Sentences
			{
				class exp_m06_50_terminal_spotted_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_50_terminal_spotted_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\50_Terminal_Spotted\exp_m06_50_terminal_spotted_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_UGV_Spotted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_55_UGV_Spotted.bikb";
			class Sentences
			{
				class exp_m06_55_ugv_spotted_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_55_ugv_spotted_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\55_UGV_Spotted\exp_m06_55_ugv_spotted_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_55_ugv_spotted_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_55_ugv_spotted_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\55_UGV_Spotted\exp_m06_55_ugv_spotted_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_Turret_Spotted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_60_Turret_Spotted.bikb";
			class Sentences
			{
				class exp_m06_60_turret_spotted_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_60_turret_spotted_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\60_Turret_Spotted\exp_m06_60_turret_spotted_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_60_turret_spotted_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_60_turret_spotted_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\60_Turret_Spotted\exp_m06_60_turret_spotted_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_Terminal_Reminder
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_65_Terminal_Reminder.bikb";
			class Sentences
			{
				class exp_m06_65_terminal_reminder_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_65_terminal_reminder_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\65_Terminal_Reminder\exp_m06_65_terminal_reminder_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 70_Drone_Destroyed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_70_Drone_Destroyed.bikb";
			class Sentences
			{
				class exp_m06_70_drone_destroyed_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_70_drone_destroyed_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\70_Drone_Destroyed\exp_m06_70_drone_destroyed_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 75_Corpses
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_75_Corpses.bikb";
			class Sentences
			{
				class exp_m06_75_corpses_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_75_corpses_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\75_Corpses\exp_m06_75_corpses_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_75_corpses_RIK_0
				{
					textPlain = "$STR_A3_exp_m06_75_corpses_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\75_Corpses\exp_m06_75_corpses_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_75_corpses_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_75_corpses_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\75_Corpses\exp_m06_75_corpses_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_75_corpses_RIK_1
				{
					textPlain = "$STR_A3_exp_m06_75_corpses_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\75_Corpses\exp_m06_75_corpses_RIK_1.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_75_corpses_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_75_corpses_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\75_Corpses\exp_m06_75_corpses_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 80_Island_Captured
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_80_Island_Captured.bikb";
			class Sentences
			{
				class exp_m06_80_island_captured_COM_0
				{
					textPlain = "$STR_A3_exp_m06_80_island_captured_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\80_Island_Captured\exp_m06_80_island_captured_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 85_Self_Destruct
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_85_Self_Destruct.bikb";
			class Sentences
			{
				class exp_m06_85_self_destruct_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_85_self_destruct_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\85_Self_Destruct\exp_m06_85_self_destruct_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_85_self_destruct_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_85_self_destruct_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\85_Self_Destruct\exp_m06_85_self_destruct_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 90_Rendezvous
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_90_Rendezvous.bikb";
			class Sentences
			{
				class exp_m06_90_rendezvous_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_90_rendezvous_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\90_Rendezvous\exp_m06_90_rendezvous_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_90_rendezvous_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_90_rendezvous_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\90_Rendezvous\exp_m06_90_rendezvous_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_90_rendezvous_COM_0
				{
					textPlain = "$STR_A3_exp_m06_90_rendezvous_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\90_Rendezvous\exp_m06_90_rendezvous_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_90_rendezvous_COM_1
				{
					textPlain = "$STR_A3_exp_m06_90_rendezvous_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\90_Rendezvous\exp_m06_90_rendezvous_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 95_Apex
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_95_Apex.bikb";
			class Sentences
			{
				class exp_m06_95_apex_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_95_apex_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\95_Apex\exp_m06_95_apex_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_95_apex_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_95_apex_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\95_Apex\exp_m06_95_apex_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_95_apex_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_95_apex_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\95_Apex\exp_m06_95_apex_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_95_apex_MIL_3
				{
					textPlain = "$STR_A3_exp_m06_95_apex_MIL_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\95_Apex\exp_m06_95_apex_MIL_3.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 105_ApexReport
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_105_ApexReport.bikb";
			class Sentences
			{
				class exp_m06_105_apexreport_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_105_apexreport_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\105_ApexReport\exp_m06_105_apexreport_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_105_apexreport_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_105_apexreport_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\105_ApexReport\exp_m06_105_apexreport_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_105_apexreport_COM_0
				{
					textPlain = "$STR_A3_exp_m06_105_apexreport_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\105_ApexReport\exp_m06_105_apexreport_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_105_apexreport_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_105_apexreport_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\105_ApexReport\exp_m06_105_apexreport_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x01_Skipped_Miller
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_x01_Skipped_Miller.bikb";
			class Sentences
			{
				class exp_m06_x01_skipped_miller_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_x01_skipped_miller_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x01_Skipped_Miller\exp_m06_x01_skipped_miller_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_x01_skipped_miller_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_x01_skipped_miller_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x01_Skipped_Miller\exp_m06_x01_skipped_miller_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x05_Skipping_Patrol
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_x05_Skipping_Patrol.bikb";
			class Sentences
			{
				class exp_m06_x05_skipping_patrol_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_x05_skipping_patrol_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x05_Skipping_Patrol\exp_m06_x05_skipping_patrol_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x10_Skipping_Drone
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_x10_Skipping_Drone.bikb";
			class Sentences
			{
				class exp_m06_x10_skipping_drone_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_x10_skipping_drone_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x10_Skipping_Drone\exp_m06_x10_skipping_drone_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x15_Skipped
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_x15_Skipped.bikb";
			class Sentences
			{
				class exp_m06_x15_skipped_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_x15_skipped_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x15_Skipped\exp_m06_x15_skipped_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x20_Drone_Info
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m06\EXP_m06_x20_Drone_Info.bikb";
			class Sentences
			{
				class exp_m06_x20_drone_info_MIL_0
				{
					textPlain = "$STR_A3_exp_m06_x20_drone_info_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x20_Drone_Info\exp_m06_x20_drone_info_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_x20_drone_info_MIL_1
				{
					textPlain = "$STR_A3_exp_m06_x20_drone_info_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x20_Drone_Info\exp_m06_x20_drone_info_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m06_x20_drone_info_MIL_2
				{
					textPlain = "$STR_A3_exp_m06_x20_drone_info_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m06\x20_Drone_Info\exp_m06_x20_drone_info_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class EXP_m07
	{
		class b01_SosovuSecured
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b01_SosovuSecured.bikb";
			class Sentences
			{
				class exp_m07_b01_sosovusecured_COM_0
				{
					textPlain = "$STR_A3_exp_m07_b01_sosovusecured_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b01_SosovuSecured\exp_m07_b01_sosovusecured_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b01_sosovusecured_COM_1
				{
					textPlain = "$STR_A3_exp_m07_b01_sosovusecured_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b01_SosovuSecured\exp_m07_b01_sosovusecured_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b01_sosovusecured_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_b01_sosovusecured_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b01_SosovuSecured\exp_m07_b01_sosovusecured_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b01_sosovusecured_COM_2
				{
					textPlain = "$STR_A3_exp_m07_b01_sosovusecured_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b01_SosovuSecured\exp_m07_b01_sosovusecured_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b05_BasilExposition
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b05_BasilExposition.bikb";
			class Sentences
			{
				class exp_m07_b05_basilexposition_COM_0
				{
					textPlain = "$STR_A3_exp_m07_b05_basilexposition_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b05_BasilExposition\exp_m07_b05_basilexposition_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b05_basilexposition_COM_1
				{
					textPlain = "$STR_A3_exp_m07_b05_basilexposition_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b05_BasilExposition\exp_m07_b05_basilexposition_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b05_basilexposition_COM_2
				{
					textPlain = "$STR_A3_exp_m07_b05_basilexposition_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b05_BasilExposition\exp_m07_b05_basilexposition_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b05_basilexposition_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_b05_basilexposition_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b05_BasilExposition\exp_m07_b05_basilexposition_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b05_basilexposition_COM_3
				{
					textPlain = "$STR_A3_exp_m07_b05_basilexposition_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b05_BasilExposition\exp_m07_b05_basilexposition_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b10_BadNews
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b10_BadNews.bikb";
			class Sentences
			{
				class exp_m07_b10_badnews_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_b10_badnews_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b10_BadNews\exp_m07_b10_badnews_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b10_badnews_COM_0
				{
					textPlain = "$STR_A3_exp_m07_b10_badnews_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b10_BadNews\exp_m07_b10_badnews_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b10_badnews_COM_1
				{
					textPlain = "$STR_A3_exp_m07_b10_badnews_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b10_BadNews\exp_m07_b10_badnews_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b10_badnews_LIA_1
				{
					textPlain = "$STR_A3_exp_m07_b10_badnews_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b10_BadNews\exp_m07_b10_badnews_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b10_badnews_LIA_2
				{
					textPlain = "$STR_A3_exp_m07_b10_badnews_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b10_BadNews\exp_m07_b10_badnews_LIA_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b10_badnews_COM_2
				{
					textPlain = "$STR_A3_exp_m07_b10_badnews_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b10_BadNews\exp_m07_b10_badnews_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b15_WarlockDeal
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b15_WarlockDeal.bikb";
			class Sentences
			{
				class exp_m07_b15_warlockdeal_WAR_0
				{
					textPlain = "$STR_A3_exp_m07_b15_warlockdeal_WAR_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15_WarlockDeal\exp_m07_b15_warlockdeal_WAR_0.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b15_warlockdeal_WAR_1
				{
					textPlain = "$STR_A3_exp_m07_b15_warlockdeal_WAR_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15_WarlockDeal\exp_m07_b15_warlockdeal_WAR_1.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b15_warlockdeal_WAR_2
				{
					textPlain = "$STR_A3_exp_m07_b15_warlockdeal_WAR_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15_WarlockDeal\exp_m07_b15_warlockdeal_WAR_2.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b15_warlockdeal_WAR_3
				{
					textPlain = "$STR_A3_exp_m07_b15_warlockdeal_WAR_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15_WarlockDeal\exp_m07_b15_warlockdeal_WAR_3.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b15b_WarlockDeal_Translate
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b15b_WarlockDeal_Translate.bikb";
			class Sentences
			{
				class exp_m07_b15b_warlockdeal_translate_WAR_0
				{
					textPlain = "$STR_A3_exp_m07_b15b_warlockdeal_translate_WAR_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15b_WarlockDeal_Translate\exp_m07_b15b_warlockdeal_translate_WAR_0.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b15b_warlockdeal_translate_WAR_1
				{
					textPlain = "$STR_A3_exp_m07_b15b_warlockdeal_translate_WAR_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15b_WarlockDeal_Translate\exp_m07_b15b_warlockdeal_translate_WAR_1.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b15b_warlockdeal_translate_WAR_2
				{
					textPlain = "$STR_A3_exp_m07_b15b_warlockdeal_translate_WAR_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15b_WarlockDeal_Translate\exp_m07_b15b_warlockdeal_translate_WAR_2.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b15b_warlockdeal_translate_WAR_3
				{
					textPlain = "$STR_A3_exp_m07_b15b_warlockdeal_translate_WAR_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b15b_WarlockDeal_Translate\exp_m07_b15b_warlockdeal_translate_WAR_3.ogg"};
					actor = "WAR";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b20_UpToSpeed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b20_UpToSpeed.bikb";
			class Sentences
			{
				class exp_m07_b20_uptospeed_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_b20_uptospeed_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b20_UpToSpeed\exp_m07_b20_uptospeed_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b20_uptospeed_LIA_1
				{
					textPlain = "$STR_A3_exp_m07_b20_uptospeed_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b20_UpToSpeed\exp_m07_b20_uptospeed_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b20_uptospeed_COM_0
				{
					textPlain = "$STR_A3_exp_m07_b20_uptospeed_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b20_UpToSpeed\exp_m07_b20_uptospeed_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b20_uptospeed_COM_1
				{
					textPlain = "$STR_A3_exp_m07_b20_uptospeed_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b20_UpToSpeed\exp_m07_b20_uptospeed_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b25_WarlockPlan
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b25_WarlockPlan.bikb";
			class Sentences
			{
				class exp_m07_b25_warlockplan_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_MIL_2
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_LIA_1
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_MIL_3
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_MIL_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_MIL_3.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_LIA_2
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_LIA_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_LIA_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_COM_0
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b25_warlockplan_MIL_4
				{
					textPlain = "$STR_A3_exp_m07_b25_warlockplan_MIL_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b25_WarlockPlan\exp_m07_b25_warlockplan_MIL_4.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class b30_SilentStrike
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_b30_SilentStrike.bikb";
			class Sentences
			{
				class exp_m07_b30_silentstrike_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_b30_silentstrike_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b30_SilentStrike\exp_m07_b30_silentstrike_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b30_silentstrike_COM_0
				{
					textPlain = "$STR_A3_exp_m07_b30_silentstrike_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b30_SilentStrike\exp_m07_b30_silentstrike_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b30_silentstrike_COM_1
				{
					textPlain = "$STR_A3_exp_m07_b30_silentstrike_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b30_SilentStrike\exp_m07_b30_silentstrike_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b30_silentstrike_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_b30_silentstrike_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b30_SilentStrike\exp_m07_b30_silentstrike_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b30_silentstrike_COM_2
				{
					textPlain = "$STR_A3_exp_m07_b30_silentstrike_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b30_SilentStrike\exp_m07_b30_silentstrike_COM_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b30_silentstrike_LIA_1
				{
					textPlain = "$STR_A3_exp_m07_b30_silentstrike_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b30_SilentStrike\exp_m07_b30_silentstrike_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_b30_silentstrike_COM_3
				{
					textPlain = "$STR_A3_exp_m07_b30_silentstrike_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\b30_SilentStrike\exp_m07_b30_silentstrike_COM_3.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 00_Intro
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_00_Intro.bikb";
			class Sentences
			{
				class exp_m07_00_intro_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_00_intro_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\00_Intro\exp_m07_00_intro_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_00_intro_COM_0
				{
					textPlain = "$STR_A3_exp_m07_00_intro_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\00_Intro\exp_m07_00_intro_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_00_intro_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_00_intro_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\00_Intro\exp_m07_00_intro_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_00_intro_COM_1
				{
					textPlain = "$STR_A3_exp_m07_00_intro_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\00_Intro\exp_m07_00_intro_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_Mark
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_05_Mark.bikb";
			class Sentences
			{
				class exp_m07_05_mark_COM_0
				{
					textPlain = "$STR_A3_exp_m07_05_mark_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\05_Mark\exp_m07_05_mark_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_FindBoss
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_10_FindBoss.bikb";
			class Sentences
			{
				class exp_m07_10_findboss_COM_0
				{
					textPlain = "$STR_A3_exp_m07_10_findboss_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\10_FindBoss\exp_m07_10_findboss_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_10_findboss_COM_1
				{
					textPlain = "$STR_A3_exp_m07_10_findboss_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\10_FindBoss\exp_m07_10_findboss_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 11_BackPowerOnline
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_11_BackPowerOnline.bikb";
			class Sentences
			{
				class exp_m07_11_backpoweronline_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_11_backpoweronline_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\11_BackPowerOnline\exp_m07_11_backpoweronline_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_11_backpoweronline_COM_0
				{
					textPlain = "$STR_A3_exp_m07_11_backpoweronline_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\11_BackPowerOnline\exp_m07_11_backpoweronline_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_11_backpoweronline_COM_1
				{
					textPlain = "$STR_A3_exp_m07_11_backpoweronline_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\11_BackPowerOnline\exp_m07_11_backpoweronline_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_11_backpoweronline_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_11_backpoweronline_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\11_BackPowerOnline\exp_m07_11_backpoweronline_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_11_backpoweronline_RIK_1
				{
					textPlain = "$STR_A3_exp_m07_11_backpoweronline_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\11_BackPowerOnline\exp_m07_11_backpoweronline_RIK_1.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_11_backpoweronline_COM_2
				{
					textPlain = "$STR_A3_exp_m07_11_backpoweronline_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\11_BackPowerOnline\exp_m07_11_backpoweronline_COM_2.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_ViperForeshadow
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_15_ViperForeshadow.bikb";
			class Sentences
			{
				class exp_m07_15_viperforeshadow_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_15_viperforeshadow_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\15_ViperForeshadow\exp_m07_15_viperforeshadow_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_15_viperforeshadow_COM_0
				{
					textPlain = "$STR_A3_exp_m07_15_viperforeshadow_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\15_ViperForeshadow\exp_m07_15_viperforeshadow_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_SecondaryCodes
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_20_SecondaryCodes.bikb";
			class Sentences
			{
				class exp_m07_20_secondarycodes_COM_0
				{
					textPlain = "$STR_A3_exp_m07_20_secondarycodes_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\20_SecondaryCodes\exp_m07_20_secondarycodes_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_20_secondarycodes_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_20_secondarycodes_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\20_SecondaryCodes\exp_m07_20_secondarycodes_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_20_secondarycodes_COM_1
				{
					textPlain = "$STR_A3_exp_m07_20_secondarycodes_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\20_SecondaryCodes\exp_m07_20_secondarycodes_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_20_secondarycodes_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_20_secondarycodes_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\20_SecondaryCodes\exp_m07_20_secondarycodes_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_20_secondarycodes_COM_2
				{
					textPlain = "$STR_A3_exp_m07_20_secondarycodes_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\20_SecondaryCodes\exp_m07_20_secondarycodes_COM_2.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_20_secondarycodes_COM_3
				{
					textPlain = "$STR_A3_exp_m07_20_secondarycodes_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\20_SecondaryCodes\exp_m07_20_secondarycodes_COM_3.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_20_secondarycodes_MIL_2
				{
					textPlain = "$STR_A3_exp_m07_20_secondarycodes_MIL_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\20_SecondaryCodes\exp_m07_20_secondarycodes_MIL_2.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_MillerSecondaryCodes
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_25_MillerSecondaryCodes.bikb";
			class Sentences
			{
				class exp_m07_25_millersecondarycodes_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_25_millersecondarycodes_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\25_MillerSecondaryCodes\exp_m07_25_millersecondarycodes_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_MillerMovesToCodes
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_30_MillerMovesToCodes.bikb";
			class Sentences
			{
				class exp_m07_30_millermovestocodes_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_30_millermovestocodes_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\30_MillerMovesToCodes\exp_m07_30_millermovestocodes_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_30_millermovestocodes_COM_0
				{
					textPlain = "$STR_A3_exp_m07_30_millermovestocodes_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\30_MillerMovesToCodes\exp_m07_30_millermovestocodes_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_30_millermovestocodes_COM_1
				{
					textPlain = "$STR_A3_exp_m07_30_millermovestocodes_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\30_MillerMovesToCodes\exp_m07_30_millermovestocodes_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_30_millermovestocodes_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_30_millermovestocodes_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\30_MillerMovesToCodes\exp_m07_30_millermovestocodes_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_30_millermovestocodes_COM_2
				{
					textPlain = "$STR_A3_exp_m07_30_millermovestocodes_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\30_MillerMovesToCodes\exp_m07_30_millermovestocodes_COM_2.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_TheMeeting
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_35_TheMeeting.bikb";
			class Sentences
			{
				class exp_m07_35_themeeting_COM_0
				{
					textPlain = "$STR_A3_exp_m07_35_themeeting_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\35_TheMeeting\exp_m07_35_themeeting_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_35_themeeting_COM_1
				{
					textPlain = "$STR_A3_exp_m07_35_themeeting_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\35_TheMeeting\exp_m07_35_themeeting_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_BossDead
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_40_BossDead.bikb";
			class Sentences
			{
				class exp_m07_40_bossdead_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_40_bossdead_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\40_BossDead\exp_m07_40_bossdead_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_40_bossdead_COM_0
				{
					textPlain = "$STR_A3_exp_m07_40_bossdead_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\40_BossDead\exp_m07_40_bossdead_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_MoveToDevice
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_45_MoveToDevice.bikb";
			class Sentences
			{
				class exp_m07_45_movetodevice_COM_0
				{
					textPlain = "$STR_A3_exp_m07_45_movetodevice_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\45_MoveToDevice\exp_m07_45_movetodevice_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_45_movetodevice_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_45_movetodevice_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\45_MoveToDevice\exp_m07_45_movetodevice_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_SupportTeamStatus
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_50_SupportTeamStatus.bikb";
			class Sentences
			{
				class exp_m07_50_supportteamstatus_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_50_supportteamstatus_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\50_SupportTeamStatus\exp_m07_50_supportteamstatus_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_50_supportteamstatus_COM_0
				{
					textPlain = "$STR_A3_exp_m07_50_supportteamstatus_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\50_SupportTeamStatus\exp_m07_50_supportteamstatus_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_ViperReveal
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_55_ViperReveal.bikb";
			class Sentences
			{
				class exp_m07_55_viperreveal_COM_0
				{
					textPlain = "$STR_A3_exp_m07_55_viperreveal_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\55_ViperReveal\exp_m07_55_viperreveal_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_55_viperreveal_COM_1
				{
					textPlain = "$STR_A3_exp_m07_55_viperreveal_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\55_ViperReveal\exp_m07_55_viperreveal_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_55_viperreveal_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_55_viperreveal_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\55_ViperReveal\exp_m07_55_viperreveal_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_55_viperreveal_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_55_viperreveal_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\55_ViperReveal\exp_m07_55_viperreveal_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_SupportTeam
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_60_SupportTeam.bikb";
			class Sentences
			{
				class exp_m07_60_supportteam_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_60_supportteam_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\60_SupportTeam\exp_m07_60_supportteam_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_60_supportteam_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_60_supportteam_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\60_SupportTeam\exp_m07_60_supportteam_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_60_supportteam_COM_0
				{
					textPlain = "$STR_A3_exp_m07_60_supportteam_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\60_SupportTeam\exp_m07_60_supportteam_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 63_MillerTeam
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_63_MillerTeam.bikb";
			class Sentences
			{
				class exp_m07_63_millerteam_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_63_millerteam_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\63_MillerTeam\exp_m07_63_millerteam_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_63_millerteam_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_63_millerteam_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\63_MillerTeam\exp_m07_63_millerteam_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_63_millerteam_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_63_millerteam_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\63_MillerTeam\exp_m07_63_millerteam_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_SyndikatMovement
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_65_SyndikatMovement.bikb";
			class Sentences
			{
				class exp_m07_65_syndikatmovement_COM_0
				{
					textPlain = "$STR_A3_exp_m07_65_syndikatmovement_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\65_SyndikatMovement\exp_m07_65_syndikatmovement_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_65_syndikatmovement_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_65_syndikatmovement_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\65_SyndikatMovement\exp_m07_65_syndikatmovement_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_65_syndikatmovement_COM_1
				{
					textPlain = "$STR_A3_exp_m07_65_syndikatmovement_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\65_SyndikatMovement\exp_m07_65_syndikatmovement_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_65_syndikatmovement_COM_2
				{
					textPlain = "$STR_A3_exp_m07_65_syndikatmovement_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\65_SyndikatMovement\exp_m07_65_syndikatmovement_COM_2.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 70_AirSupport
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_70_AirSupport.bikb";
			class Sentences
			{
				class exp_m07_70_airsupport_FAL_0
				{
					textPlain = "$STR_A3_exp_m07_70_airsupport_FAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\70_AirSupport\exp_m07_70_airsupport_FAL_0.ogg"};
					actor = "BIS_pilot";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_70_airsupport_COM_0
				{
					textPlain = "$STR_A3_exp_m07_70_airsupport_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\70_AirSupport\exp_m07_70_airsupport_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_70_airsupport_COM_1
				{
					textPlain = "$STR_A3_exp_m07_70_airsupport_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\70_AirSupport\exp_m07_70_airsupport_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_70_airsupport_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_70_airsupport_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\70_AirSupport\exp_m07_70_airsupport_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_70_airsupport_FAL_1
				{
					textPlain = "$STR_A3_exp_m07_70_airsupport_FAL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\70_AirSupport\exp_m07_70_airsupport_FAL_1.ogg"};
					actor = "BIS_pilot";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 75_DisarmDevice
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_75_DisarmDevice.bikb";
			class Sentences
			{
				class exp_m07_75_disarmdevice_COM_0
				{
					textPlain = "$STR_A3_exp_m07_75_disarmdevice_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\75_DisarmDevice\exp_m07_75_disarmdevice_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_75_disarmdevice_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_75_disarmdevice_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\75_DisarmDevice\exp_m07_75_disarmdevice_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_75_disarmdevice_COM_1
				{
					textPlain = "$STR_A3_exp_m07_75_disarmdevice_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\75_DisarmDevice\exp_m07_75_disarmdevice_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_75_disarmdevice_FAL_0
				{
					textPlain = "$STR_A3_exp_m07_75_disarmdevice_FAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\75_DisarmDevice\exp_m07_75_disarmdevice_FAL_0.ogg"};
					actor = "BIS_pilot";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_75_disarmdevice_COM_2
				{
					textPlain = "$STR_A3_exp_m07_75_disarmdevice_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\75_DisarmDevice\exp_m07_75_disarmdevice_COM_2.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 80_ProtectMiller
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_80_ProtectMiller.bikb";
			class Sentences
			{
				class exp_m07_80_protectmiller_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_80_protectmiller_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\80_ProtectMiller\exp_m07_80_protectmiller_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_80_protectmiller_COM_0
				{
					textPlain = "$STR_A3_exp_m07_80_protectmiller_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\80_ProtectMiller\exp_m07_80_protectmiller_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 85_SupportTeamArrives
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_85_SupportTeamArrives.bikb";
			class Sentences
			{
				class exp_m07_85_supportteamarrives_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_85_supportteamarrives_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\85_SupportTeamArrives\exp_m07_85_supportteamarrives_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_85_supportteamarrives_COM_0
				{
					textPlain = "$STR_A3_exp_m07_85_supportteamarrives_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\85_SupportTeamArrives\exp_m07_85_supportteamarrives_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 90_WatchYourFire
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_90_WatchYourFire.bikb";
			class Sentences
			{
				class exp_m07_90_watchyourfire_FAL_0
				{
					textPlain = "$STR_A3_exp_m07_90_watchyourfire_FAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\90_WatchYourFire\exp_m07_90_watchyourfire_FAL_0.ogg"};
					actor = "BIS_pilot";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_90_watchyourfire_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_90_watchyourfire_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\90_WatchYourFire\exp_m07_90_watchyourfire_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_90_watchyourfire_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_90_watchyourfire_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\90_WatchYourFire\exp_m07_90_watchyourfire_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_90_watchyourfire_FAL_1
				{
					textPlain = "$STR_A3_exp_m07_90_watchyourfire_FAL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\90_WatchYourFire\exp_m07_90_watchyourfire_FAL_1.ogg"};
					actor = "BIS_pilot";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_90_watchyourfire_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_90_watchyourfire_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\90_WatchYourFire\exp_m07_90_watchyourfire_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 95_DeviceDisarmed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_95_DeviceDisarmed.bikb";
			class Sentences
			{
				class exp_m07_95_devicedisarmed_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_95_devicedisarmed_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\95_DeviceDisarmed\exp_m07_95_devicedisarmed_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_95_devicedisarmed_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_95_devicedisarmed_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\95_DeviceDisarmed\exp_m07_95_devicedisarmed_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 96_BothKeysEntered
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_96_BothKeysEntered.bikb";
			class Sentences
			{
				class exp_m07_96_bothkeysentered_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_96_bothkeysentered_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\96_BothKeysEntered\exp_m07_96_bothkeysentered_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_96_bothkeysentered_COM_0
				{
					textPlain = "$STR_A3_exp_m07_96_bothkeysentered_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\96_BothKeysEntered\exp_m07_96_bothkeysentered_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_96_bothkeysentered_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_96_bothkeysentered_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\96_BothKeysEntered\exp_m07_96_bothkeysentered_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_96_bothkeysentered_FAL_0
				{
					textPlain = "$STR_A3_exp_m07_96_bothkeysentered_FAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\96_BothKeysEntered\exp_m07_96_bothkeysentered_FAL_0.ogg"};
					actor = "BIS_pilot";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_96_bothkeysentered_COM_1
				{
					textPlain = "$STR_A3_exp_m07_96_bothkeysentered_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\96_BothKeysEntered\exp_m07_96_bothkeysentered_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 97_ViperUnitsDown
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_97_ViperUnitsDown.bikb";
			class Sentences
			{
				class exp_m07_97_viperunitsdown_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_97_viperunitsdown_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\97_ViperUnitsDown\exp_m07_97_viperunitsdown_RIK_0.ogg"};
					actor = "BIS_ai_1";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_97_viperunitsdown_COM_0
				{
					textPlain = "$STR_A3_exp_m07_97_viperunitsdown_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\97_ViperUnitsDown\exp_m07_97_viperunitsdown_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 100_ExtractionOnTheWay
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_100_ExtractionOnTheWay.bikb";
			class Sentences
			{
				class exp_m07_100_extractionontheway_COM_0
				{
					textPlain = "$STR_A3_exp_m07_100_extractionontheway_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\100_ExtractionOnTheWay\exp_m07_100_extractionontheway_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 105_CTRG
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_105_CTRG.bikb";
			class Sentences
			{
				class exp_m07_105_ctrg_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_105_ctrg_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\105_CTRG\exp_m07_105_ctrg_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_105_ctrg_FAL_0
				{
					textPlain = "$STR_A3_exp_m07_105_ctrg_FAL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\105_CTRG\exp_m07_105_ctrg_FAL_0.ogg"};
					actor = "BIS_pilot";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_105_ctrg_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_105_ctrg_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\105_CTRG\exp_m07_105_ctrg_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 107_ProceedToExtract
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_107_ProceedToExtract.bikb";
			class Sentences
			{
				class exp_m07_107_proceedtoextract_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_107_proceedtoextract_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\107_ProceedToExtract\exp_m07_107_proceedtoextract_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_107_proceedtoextract_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_107_proceedtoextract_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\107_ProceedToExtract\exp_m07_107_proceedtoextract_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_107_proceedtoextract_COM_0
				{
					textPlain = "$STR_A3_exp_m07_107_proceedtoextract_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\107_ProceedToExtract\exp_m07_107_proceedtoextract_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_107_proceedtoextract_COM_1
				{
					textPlain = "$STR_A3_exp_m07_107_proceedtoextract_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\107_ProceedToExtract\exp_m07_107_proceedtoextract_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 110_Outro
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_110_Outro.bikb";
			class Sentences
			{
				class exp_m07_110_outro_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_110_outro_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\110_Outro\exp_m07_110_outro_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_110_outro_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_110_outro_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\110_Outro\exp_m07_110_outro_MIL_1.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_110_outro_COM_0
				{
					textPlain = "$STR_A3_exp_m07_110_outro_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\110_Outro\exp_m07_110_outro_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x00_BossNotHere
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_x00_BossNotHere.bikb";
			class Sentences
			{
				class exp_m07_x00_bossnothere_COM_0
				{
					textPlain = "$STR_A3_exp_m07_x00_bossnothere_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x00_BossNotHere\exp_m07_x00_bossnothere_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_x00_bossnothere_COM_1
				{
					textPlain = "$STR_A3_exp_m07_x00_bossnothere_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x00_BossNotHere\exp_m07_x00_bossnothere_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x05_DeviceDisarmed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_x05_DeviceDisarmed.bikb";
			class Sentences
			{
				class exp_m07_x05_devicedisarmed_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_x05_devicedisarmed_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x05_DeviceDisarmed\exp_m07_x05_devicedisarmed_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x10_GetNearTheDevice
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_x10_GetNearTheDevice.bikb";
			class Sentences
			{
				class exp_m07_x10_getnearthedevice_COM_0
				{
					textPlain = "$STR_A3_exp_m07_x10_getnearthedevice_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x10_GetNearTheDevice\exp_m07_x10_getnearthedevice_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x15_Shake
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_x15_Shake.bikb";
			class Sentences
			{
				class exp_m07_x15_shake_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_x15_shake_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x15_Shake\exp_m07_x15_shake_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_x15_shake_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_x15_shake_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x15_Shake\exp_m07_x15_shake_MIL_0.ogg"};
					actor = "BIS_miller";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_x15_shake_COM_0
				{
					textPlain = "$STR_A3_exp_m07_x15_shake_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x15_Shake\exp_m07_x15_shake_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_x15_shake_COM_1
				{
					textPlain = "$STR_A3_exp_m07_x15_shake_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x15_Shake\exp_m07_x15_shake_COM_1.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x20_ShakeStrong
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_x20_ShakeStrong.bikb";
			class Sentences
			{
				class exp_m07_x20_shakestrong_RIK_0
				{
					textPlain = "$STR_A3_exp_m07_x20_shakestrong_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x20_ShakeStrong\exp_m07_x20_shakestrong_RIK_0.ogg"};
					actor = "BIS_supportLead";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_x20_shakestrong_COM_0
				{
					textPlain = "$STR_A3_exp_m07_x20_shakestrong_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\x20_ShakeStrong\exp_m07_x20_shakestrong_COM_0.ogg"};
					actor = "BIS_hq";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class xSyndikatCalm_Translate
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_xSyndikatCalm_Translate.bikb";
			class Sentences
			{
				class exp_m07_xsyndikatcalm_translate_FRE_0
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatcalm_translate_FRE_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatCalm_Translate\exp_m07_xsyndikatcalm_translate_FRE_0.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatcalm_translate_FRE_1
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatcalm_translate_FRE_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatCalm_Translate\exp_m07_xsyndikatcalm_translate_FRE_1.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatcalm_translate_FRE_2
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatcalm_translate_FRE_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatCalm_Translate\exp_m07_xsyndikatcalm_translate_FRE_2.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatcalm_translate_FRE_3
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatcalm_translate_FRE_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatCalm_Translate\exp_m07_xsyndikatcalm_translate_FRE_3.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatcalm_translate_FRE_4
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatcalm_translate_FRE_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatCalm_Translate\exp_m07_xsyndikatcalm_translate_FRE_4.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class xSyndikatAlarm_Translate
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_xSyndikatAlarm_Translate.bikb";
			class Sentences
			{
				class exp_m07_xsyndikatalarm_translate_FRE_0
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatalarm_translate_FRE_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatAlarm_Translate\exp_m07_xsyndikatalarm_translate_FRE_0.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatalarm_translate_FRE_1
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatalarm_translate_FRE_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatAlarm_Translate\exp_m07_xsyndikatalarm_translate_FRE_1.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatalarm_translate_FRE_2
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatalarm_translate_FRE_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatAlarm_Translate\exp_m07_xsyndikatalarm_translate_FRE_2.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatalarm_translate_FRE_3
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatalarm_translate_FRE_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatAlarm_Translate\exp_m07_xsyndikatalarm_translate_FRE_3.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_xsyndikatalarm_translate_FRE_4
				{
					textPlain = "$STR_A3_exp_m07_xsyndikatalarm_translate_FRE_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\xSyndikatAlarm_Translate\exp_m07_xsyndikatalarm_translate_FRE_4.ogg"};
					actor = "XXXXXXXX";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o01_ApexSoundBite_Revelation
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o01_ApexSoundBite_Revelation.bikb";
			class Sentences
			{
				class exp_m07_o01_apexsoundbite_revelation_AAN_0
				{
					textPlain = "$STR_A3_exp_m07_o01_apexsoundbite_revelation_AAN_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o01_ApexSoundBite_Revelation\exp_m07_o01_apexsoundbite_revelation_AAN_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o01_apexsoundbite_revelation_AAN_1
				{
					textPlain = "$STR_A3_exp_m07_o01_apexsoundbite_revelation_AAN_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o01_ApexSoundBite_Revelation\exp_m07_o01_apexsoundbite_revelation_AAN_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o05_ApexSoundBite_Summit
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o05_ApexSoundBite_Summit.bikb";
			class Sentences
			{
				class exp_m07_o05_apexsoundbite_summit_COR_0
				{
					textPlain = "$STR_A3_exp_m07_o05_apexsoundbite_summit_COR_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o05_ApexSoundBite_Summit\exp_m07_o05_apexsoundbite_summit_COR_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o05_apexsoundbite_summit_COR_1
				{
					textPlain = "$STR_A3_exp_m07_o05_apexsoundbite_summit_COR_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o05_ApexSoundBite_Summit\exp_m07_o05_apexsoundbite_summit_COR_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o16_ApexSoundBite_VoicesOff
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o16_ApexSoundBite_VoicesOff.bikb";
			class Sentences
			{
				class exp_m07_o16_apexsoundbite_voicesoff_COM_0
				{
					textPlain = "$STR_A3_exp_m07_o16_apexsoundbite_voicesoff_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o16_ApexSoundBite_VoicesOff\exp_m07_o16_apexsoundbite_voicesoff_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o16_apexsoundbite_voicesoff_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_o16_apexsoundbite_voicesoff_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o16_ApexSoundBite_VoicesOff\exp_m07_o16_apexsoundbite_voicesoff_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o16_apexsoundbite_voicesoff_COM_1
				{
					textPlain = "$STR_A3_exp_m07_o16_apexsoundbite_voicesoff_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o16_ApexSoundBite_VoicesOff\exp_m07_o16_apexsoundbite_voicesoff_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o16_apexsoundbite_voicesoff_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_o16_apexsoundbite_voicesoff_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o16_ApexSoundBite_VoicesOff\exp_m07_o16_apexsoundbite_voicesoff_MIL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o10_ApexSoundBite_Justice
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o10_ApexSoundBite_Justice.bikb";
			class Sentences
			{
				class exp_m07_o10_apexsoundbite_justice_AAN_0
				{
					textPlain = "$STR_A3_exp_m07_o10_apexsoundbite_justice_AAN_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o10_ApexSoundBite_Justice\exp_m07_o10_apexsoundbite_justice_AAN_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o10_apexsoundbite_justice_AAN_1
				{
					textPlain = "$STR_A3_exp_m07_o10_apexsoundbite_justice_AAN_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o10_ApexSoundBite_Justice\exp_m07_o10_apexsoundbite_justice_AAN_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o13_ApexSoundBite_Lies
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o13_ApexSoundBite_Lies.bikb";
			class Sentences
			{
				class exp_m07_o13_apexsoundbite_lies_POL_0
				{
					textPlain = "$STR_A3_exp_m07_o13_apexsoundbite_lies_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o13_ApexSoundBite_Lies\exp_m07_o13_apexsoundbite_lies_POL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o13_apexsoundbite_lies_POL_1
				{
					textPlain = "$STR_A3_exp_m07_o13_apexsoundbite_lies_POL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o13_ApexSoundBite_Lies\exp_m07_o13_apexsoundbite_lies_POL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o13b_ApexSoundBite_Lies_Translate
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o13b_ApexSoundBite_Lies_Translate.bikb";
			class Sentences
			{
				class exp_m07_o13b_apexsoundbite_lies_translate_POL_0
				{
					textPlain = "$STR_A3_exp_m07_o13b_apexsoundbite_lies_translate_POL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o13b_ApexSoundBite_Lies_Translate\exp_m07_o13b_apexsoundbite_lies_translate_POL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o13b_apexsoundbite_lies_translate_POL_1
				{
					textPlain = "$STR_A3_exp_m07_o13b_apexsoundbite_lies_translate_POL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o13b_ApexSoundBite_Lies_Translate\exp_m07_o13b_apexsoundbite_lies_translate_POL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o15_ApexSoundBite_Emergency
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o15_ApexSoundBite_Emergency.bikb";
			class Sentences
			{
				class exp_m07_o15_apexsoundbite_emergency_COR_0
				{
					textPlain = "$STR_A3_exp_m07_o15_apexsoundbite_emergency_COR_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o15_ApexSoundBite_Emergency\exp_m07_o15_apexsoundbite_emergency_COR_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o16_ApexSoundBite_VoicesOff_2
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o16_ApexSoundBite_VoicesOff_2.bikb";
			class Sentences
			{
				class exp_m07_o16_apexsoundbite_voicesoff_2_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_o16_apexsoundbite_voicesoff_2_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o16_ApexSoundBite_VoicesOff_2\exp_m07_o16_apexsoundbite_voicesoff_2_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o17_ApexSoundBite_Question
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o17_ApexSoundBite_Question.bikb";
			class Sentences
			{
				class exp_m07_o17_apexsoundbite_question_TAB_0
				{
					textPlain = "$STR_A3_exp_m07_o17_apexsoundbite_question_TAB_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o17_ApexSoundBite_Question\exp_m07_o17_apexsoundbite_question_TAB_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o17_apexsoundbite_question_TAB_1
				{
					textPlain = "$STR_A3_exp_m07_o17_apexsoundbite_question_TAB_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o17_ApexSoundBite_Question\exp_m07_o17_apexsoundbite_question_TAB_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o17_apexsoundbite_question_TAB_2
				{
					textPlain = "$STR_A3_exp_m07_o17_apexsoundbite_question_TAB_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o17_ApexSoundBite_Question\exp_m07_o17_apexsoundbite_question_TAB_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o17b_ApexSoundBite_Question_Translate
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o17b_ApexSoundBite_Question_Translate.bikb";
			class Sentences
			{
				class exp_m07_o17b_apexsoundbite_question_translate_TAB_0
				{
					textPlain = "$STR_A3_exp_m07_o17b_apexsoundbite_question_translate_TAB_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o17b_ApexSoundBite_Question_Translate\exp_m07_o17b_apexsoundbite_question_translate_TAB_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o17b_apexsoundbite_question_translate_TAB_1
				{
					textPlain = "$STR_A3_exp_m07_o17b_apexsoundbite_question_translate_TAB_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o17b_ApexSoundBite_Question_Translate\exp_m07_o17b_apexsoundbite_question_translate_TAB_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o17b_apexsoundbite_question_translate_TAB_2
				{
					textPlain = "$STR_A3_exp_m07_o17b_apexsoundbite_question_translate_TAB_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o17b_ApexSoundBite_Question_Translate\exp_m07_o17b_apexsoundbite_question_translate_TAB_2.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o20_Commentary
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o20_Commentary.bikb";
			class Sentences
			{
				class exp_m07_o20_commentary_COM_0
				{
					textPlain = "$STR_A3_exp_m07_o20_commentary_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o20_Commentary\exp_m07_o20_commentary_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o20_commentary_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_o20_commentary_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o20_Commentary\exp_m07_o20_commentary_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o20_commentary_COM_1
				{
					textPlain = "$STR_A3_exp_m07_o20_commentary_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o20_Commentary\exp_m07_o20_commentary_COM_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class o25_Stinger
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\EXP_m07\EXP_m07_o25_Stinger.bikb";
			class Sentences
			{
				class exp_m07_o25_stinger_LIA_0
				{
					textPlain = "$STR_A3_exp_m07_o25_stinger_LIA_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o25_Stinger\exp_m07_o25_stinger_LIA_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o25_stinger_COM_0
				{
					textPlain = "$STR_A3_exp_m07_o25_stinger_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o25_Stinger\exp_m07_o25_stinger_COM_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o25_stinger_LIA_1
				{
					textPlain = "$STR_A3_exp_m07_o25_stinger_LIA_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o25_Stinger\exp_m07_o25_stinger_LIA_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o25_stinger_MIL_0
				{
					textPlain = "$STR_A3_exp_m07_o25_stinger_MIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o25_Stinger\exp_m07_o25_stinger_MIL_0.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class exp_m07_o25_stinger_MIL_1
				{
					textPlain = "$STR_A3_exp_m07_o25_stinger_MIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\exp_m07\o25_Stinger\exp_m07_o25_stinger_MIL_1.ogg"};
					actor = "BIS";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class Showcase_EndGame
	{
		class 01_Prologue
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_01_Prologue.bikb";
			class Sentences
			{
				class showcase_endgame_01_prologue_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_01_prologue_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\01_Prologue\showcase_endgame_01_prologue_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_01_prologue_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_01_prologue_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\01_Prologue\showcase_endgame_01_prologue_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_FOBTaken
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_05_FOBTaken.bikb";
			class Sentences
			{
				class showcase_endgame_05_fobtaken_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_05_fobtaken_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\05_FOBTaken\showcase_endgame_05_fobtaken_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_05_fobtaken_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_05_fobtaken_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\05_FOBTaken\showcase_endgame_05_fobtaken_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_05_fobtaken_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_05_fobtaken_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\05_FOBTaken\showcase_endgame_05_fobtaken_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_05_fobtaken_PIL_0
				{
					textPlain = "$STR_A3_showcase_endgame_05_fobtaken_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\05_FOBTaken\showcase_endgame_05_fobtaken_PIL_0.ogg"};
					actor = "BIS_November";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_05_fobtaken_COM_2
				{
					textPlain = "$STR_A3_showcase_endgame_05_fobtaken_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\05_FOBTaken\showcase_endgame_05_fobtaken_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_MindYourHeads
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_10_MindYourHeads.bikb";
			class Sentences
			{
				class showcase_endgame_10_mindyourheads_PIL_0
				{
					textPlain = "$STR_A3_showcase_endgame_10_mindyourheads_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\10_MindYourHeads\showcase_endgame_10_mindyourheads_PIL_0.ogg"};
					actor = "BIS_November";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_10_mindyourheads_PIL_1
				{
					textPlain = "$STR_A3_showcase_endgame_10_mindyourheads_PIL_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\10_MindYourHeads\showcase_endgame_10_mindyourheads_PIL_1.ogg"};
					actor = "BIS_November";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_Reinforcements
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_15_Reinforcements.bikb";
			class Sentences
			{
				class showcase_endgame_15_reinforcements_PIL_0
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_PIL_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_PIL_0.ogg"};
					actor = "BIS_November";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_15_reinforcements_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_15_reinforcements_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_15_reinforcements_COM_2
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_15_reinforcements_COM_3
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_COM_3.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_15_reinforcements_COM_4
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_COM_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_COM_4.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_15_reinforcements_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_15_reinforcements_GRM_0
				{
					textPlain = "$STR_A3_showcase_endgame_15_reinforcements_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\15_Reinforcements\showcase_endgame_15_reinforcements_GRM_0.ogg"};
					actor = "BIS_Charlie";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_Intel01Taken
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_20_Intel01Taken.bikb";
			class Sentences
			{
				class showcase_endgame_20_intel01taken_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_20_intel01taken_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\20_Intel01Taken\showcase_endgame_20_intel01taken_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_20_intel01taken_RIK_1
				{
					textPlain = "$STR_A3_showcase_endgame_20_intel01taken_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\20_Intel01Taken\showcase_endgame_20_intel01taken_RIK_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_20_intel01taken_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_20_intel01taken_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\20_Intel01Taken\showcase_endgame_20_intel01taken_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_20_intel01taken_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_20_intel01taken_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\20_Intel01Taken\showcase_endgame_20_intel01taken_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_Intel02Taken
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_25_Intel02Taken.bikb";
			class Sentences
			{
				class showcase_endgame_25_intel02taken_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_25_intel02taken_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\25_Intel02Taken\showcase_endgame_25_intel02taken_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_25_intel02taken_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_25_intel02taken_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\25_Intel02Taken\showcase_endgame_25_intel02taken_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_25_intel02taken_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_25_intel02taken_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\25_Intel02Taken\showcase_endgame_25_intel02taken_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_SchematicsRevealed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_30_SchematicsRevealed.bikb";
			class Sentences
			{
				class showcase_endgame_30_schematicsrevealed_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_30_schematicsrevealed_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\30_SchematicsRevealed\showcase_endgame_30_schematicsrevealed_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_30_schematicsrevealed_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_30_schematicsrevealed_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\30_SchematicsRevealed\showcase_endgame_30_schematicsrevealed_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_30_schematicsrevealed_COM_2
				{
					textPlain = "$STR_A3_showcase_endgame_30_schematicsrevealed_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\30_SchematicsRevealed\showcase_endgame_30_schematicsrevealed_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_30_schematicsrevealed_COM_3
				{
					textPlain = "$STR_A3_showcase_endgame_30_schematicsrevealed_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\30_SchematicsRevealed\showcase_endgame_30_schematicsrevealed_COM_3.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_30_schematicsrevealed_COM_4
				{
					textPlain = "$STR_A3_showcase_endgame_30_schematicsrevealed_COM_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\30_SchematicsRevealed\showcase_endgame_30_schematicsrevealed_COM_4.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_30_schematicsrevealed_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_30_schematicsrevealed_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\30_SchematicsRevealed\showcase_endgame_30_schematicsrevealed_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_30_schematicsrevealed_GRM_0
				{
					textPlain = "$STR_A3_showcase_endgame_30_schematicsrevealed_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\30_SchematicsRevealed\showcase_endgame_30_schematicsrevealed_GRM_0.ogg"};
					actor = "BIS_Charlie";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_CharlieReady
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_35_CharlieReady.bikb";
			class Sentences
			{
				class showcase_endgame_35_charlieready_GRM_0
				{
					textPlain = "$STR_A3_showcase_endgame_35_charlieready_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\35_CharlieReady\showcase_endgame_35_charlieready_GRM_0.ogg"};
					actor = "BIS_Charlie";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_35_charlieready_GRM_1
				{
					textPlain = "$STR_A3_showcase_endgame_35_charlieready_GRM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\35_CharlieReady\showcase_endgame_35_charlieready_GRM_1.ogg"};
					actor = "BIS_Charlie";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_CharlieAttack
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_40_CharlieAttack.bikb";
			class Sentences
			{
				class showcase_endgame_40_charlieattack_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_40_charlieattack_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\40_CharlieAttack\showcase_endgame_40_charlieattack_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_40_charlieattack_GRM_0
				{
					textPlain = "$STR_A3_showcase_endgame_40_charlieattack_GRM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\40_CharlieAttack\showcase_endgame_40_charlieattack_GRM_0.ogg"};
					actor = "BIS_Charlie";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_SchematicsTaken
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_45_SchematicsTaken.bikb";
			class Sentences
			{
				class showcase_endgame_45_schematicstaken_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_45_schematicstaken_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\45_SchematicsTaken\showcase_endgame_45_schematicstaken_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_45_schematicstaken_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_45_schematicstaken_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\45_SchematicsTaken\showcase_endgame_45_schematicstaken_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_45_schematicstaken_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_45_schematicstaken_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\45_SchematicsTaken\showcase_endgame_45_schematicstaken_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_45_schematicstaken_COM_2
				{
					textPlain = "$STR_A3_showcase_endgame_45_schematicstaken_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\45_SchematicsTaken\showcase_endgame_45_schematicstaken_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 46_Bombardment
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_46_Bombardment.bikb";
			class Sentences
			{
				class showcase_endgame_46_bombardment_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_46_bombardment_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\46_Bombardment\showcase_endgame_46_bombardment_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_UploadStarted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_50_UploadStarted.bikb";
			class Sentences
			{
				class showcase_endgame_50_uploadstarted_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_50_uploadstarted_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\50_UploadStarted\showcase_endgame_50_uploadstarted_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_50_uploadstarted_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_50_uploadstarted_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\50_UploadStarted\showcase_endgame_50_uploadstarted_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_SchematicsUploaded
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_55_SchematicsUploaded.bikb";
			class Sentences
			{
				class showcase_endgame_55_schematicsuploaded_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_55_schematicsuploaded_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\55_SchematicsUploaded\showcase_endgame_55_schematicsuploaded_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_55_schematicsuploaded_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_55_schematicsuploaded_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\55_SchematicsUploaded\showcase_endgame_55_schematicsuploaded_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_55_schematicsuploaded_COM_1
				{
					textPlain = "$STR_A3_showcase_endgame_55_schematicsuploaded_COM_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\55_SchematicsUploaded\showcase_endgame_55_schematicsuploaded_COM_1.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_55_schematicsuploaded_COM_2
				{
					textPlain = "$STR_A3_showcase_endgame_55_schematicsuploaded_COM_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\55_SchematicsUploaded\showcase_endgame_55_schematicsuploaded_COM_2.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_55_schematicsuploaded_COM_3
				{
					textPlain = "$STR_A3_showcase_endgame_55_schematicsuploaded_COM_3";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\55_SchematicsUploaded\showcase_endgame_55_schematicsuploaded_COM_3.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_55_schematicsuploaded_COM_4
				{
					textPlain = "$STR_A3_showcase_endgame_55_schematicsuploaded_COM_4";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\55_SchematicsUploaded\showcase_endgame_55_schematicsuploaded_COM_4.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_GunshipDown
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_60_GunshipDown.bikb";
			class Sentences
			{
				class showcase_endgame_60_gunshipdown_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_60_gunshipdown_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\60_GunshipDown\showcase_endgame_60_gunshipdown_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_60_gunshipdown_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_60_gunshipdown_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\60_GunshipDown\showcase_endgame_60_gunshipdown_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 61_GunshipFled
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_61_GunshipFled.bikb";
			class Sentences
			{
				class showcase_endgame_61_gunshipfled_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_61_gunshipfled_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\61_GunshipFled\showcase_endgame_61_gunshipfled_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_61_gunshipfled_RIK_1
				{
					textPlain = "$STR_A3_showcase_endgame_61_gunshipfled_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\61_GunshipFled\showcase_endgame_61_gunshipfled_RIK_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_61_gunshipfled_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_61_gunshipfled_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\61_GunshipFled\showcase_endgame_61_gunshipfled_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 62_GunshipRTB
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_62_GunshipRTB.bikb";
			class Sentences
			{
				class showcase_endgame_62_gunshiprtb_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_62_gunshiprtb_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\62_GunshipRTB\showcase_endgame_62_gunshiprtb_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_62_gunshiprtb_RIK_1
				{
					textPlain = "$STR_A3_showcase_endgame_62_gunshiprtb_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\62_GunshipRTB\showcase_endgame_62_gunshiprtb_RIK_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_62_gunshiprtb_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_62_gunshiprtb_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\62_GunshipRTB\showcase_endgame_62_gunshiprtb_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x01_CharlieDown
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\Showcase_EndGame\Showcase_EndGame_x01_CharlieDown.bikb";
			class Sentences
			{
				class showcase_endgame_x01_charliedown_RIK_0
				{
					textPlain = "$STR_A3_showcase_endgame_x01_charliedown_RIK_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\x01_CharlieDown\showcase_endgame_x01_charliedown_RIK_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_x01_charliedown_RIK_1
				{
					textPlain = "$STR_A3_showcase_endgame_x01_charliedown_RIK_1";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\x01_CharlieDown\showcase_endgame_x01_charliedown_RIK_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_x01_charliedown_RIK_2
				{
					textPlain = "$STR_A3_showcase_endgame_x01_charliedown_RIK_2";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\x01_CharlieDown\showcase_endgame_x01_charliedown_RIK_2.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_endgame_x01_charliedown_COM_0
				{
					textPlain = "$STR_A3_showcase_endgame_x01_charliedown_COM_0";
					text = "";
					speech[] = {"\a3\dubbing_f_exp\showcase_endgame\x01_CharlieDown\showcase_endgame_x01_charliedown_COM_0.ogg"};
					actor = "BIS_HQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class Showcase_VTOL
	{
		class 01_Prologue
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_01_Prologue.bikb";
			class Sentences
			{
				class showcase_vtol_01_prologue_XIA_0
				{
					text = "$STR_A3_showcase_vtol_01_prologue_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\01_Prologue\showcase_vtol_01_prologue_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_GotIn
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_05_GotIn.bikb";
			class Sentences
			{
				class showcase_vtol_05_gotin_XIA_0
				{
					text = "$STR_A3_showcase_vtol_05_gotin_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\05_GotIn\showcase_vtol_05_gotin_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_05_gotin_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_05_gotin_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\05_GotIn\showcase_vtol_05_gotin_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_05_gotin_XIA_1
				{
					text = "$STR_A3_showcase_vtol_05_gotin_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\05_GotIn\showcase_vtol_05_gotin_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_05_gotin_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_05_gotin_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\05_GotIn\showcase_vtol_05_gotin_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_05_gotin_PHQ_2
				{
					text = "$STR_A3_showcase_vtol_05_gotin_PHQ_2";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\05_GotIn\showcase_vtol_05_gotin_PHQ_2.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_05_gotin_XIA_2
				{
					text = "$STR_A3_showcase_vtol_05_gotin_XIA_2";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\05_GotIn\showcase_vtol_05_gotin_XIA_2.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 06_AirTraffic
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_06_AirTraffic.bikb";
			class Sentences
			{
				class showcase_vtol_06_airtraffic_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_06_airtraffic_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\06_AirTraffic\showcase_vtol_06_airtraffic_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_06_airtraffic_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_06_airtraffic_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\06_AirTraffic\showcase_vtol_06_airtraffic_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_06_airtraffic_XIA_0
				{
					text = "$STR_A3_showcase_vtol_06_airtraffic_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\06_AirTraffic\showcase_vtol_06_airtraffic_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 07_Runway17
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_07_Runway17.bikb";
			class Sentences
			{
				class showcase_vtol_07_runway17_XIA_0
				{
					text = "$STR_A3_showcase_vtol_07_runway17_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\07_Runway17\showcase_vtol_07_runway17_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_07_runway17_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_07_runway17_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\07_Runway17\showcase_vtol_07_runway17_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_07_runway17_XIA_1
				{
					text = "$STR_A3_showcase_vtol_07_runway17_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\07_Runway17\showcase_vtol_07_runway17_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 08_Runway35
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_08_Runway35.bikb";
			class Sentences
			{
				class showcase_vtol_08_runway35_XIA_0
				{
					text = "$STR_A3_showcase_vtol_08_runway35_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\08_Runway35\showcase_vtol_08_runway35_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_08_runway35_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_08_runway35_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\08_Runway35\showcase_vtol_08_runway35_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_08_runway35_XIA_1
				{
					text = "$STR_A3_showcase_vtol_08_runway35_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\08_Runway35\showcase_vtol_08_runway35_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_08_runway35_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_08_runway35_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\08_Runway35\showcase_vtol_08_runway35_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_08_runway35_PHQ_2
				{
					text = "$STR_A3_showcase_vtol_08_runway35_PHQ_2";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\08_Runway35\showcase_vtol_08_runway35_PHQ_2.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_08_runway35_XIA_2
				{
					text = "$STR_A3_showcase_vtol_08_runway35_XIA_2";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\08_Runway35\showcase_vtol_08_runway35_XIA_2.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_InTheAir
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_10_InTheAir.bikb";
			class Sentences
			{
				class showcase_vtol_10_intheair_XIA_0
				{
					text = "$STR_A3_showcase_vtol_10_intheair_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\10_InTheAir\showcase_vtol_10_intheair_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_10_intheair_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_10_intheair_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\10_InTheAir\showcase_vtol_10_intheair_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_10_intheair_XIA_1
				{
					text = "$STR_A3_showcase_vtol_10_intheair_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\10_InTheAir\showcase_vtol_10_intheair_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_GetIn
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_15_GetIn.bikb";
			class Sentences
			{
				class showcase_vtol_15_getin_XIA_0
				{
					text = "$STR_A3_showcase_vtol_15_getin_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\15_GetIn\showcase_vtol_15_getin_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_15_getin_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_15_getin_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\15_GetIn\showcase_vtol_15_getin_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_AllIn
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_20_AllIn.bikb";
			class Sentences
			{
				class showcase_vtol_20_allin_XIA_0
				{
					text = "$STR_A3_showcase_vtol_20_allin_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\20_AllIn\showcase_vtol_20_allin_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_20_allin_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_20_allin_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\20_AllIn\showcase_vtol_20_allin_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_20_allin_XIA_1
				{
					text = "$STR_A3_showcase_vtol_20_allin_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\20_AllIn\showcase_vtol_20_allin_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_Nearby
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_25_Nearby.bikb";
			class Sentences
			{
				class showcase_vtol_25_nearby_XIA_0
				{
					text = "$STR_A3_showcase_vtol_25_nearby_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\25_Nearby\showcase_vtol_25_nearby_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 26_Params
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_26_Params.bikb";
			class Sentences
			{
				class showcase_vtol_26_params_XIA_0
				{
					text = "$STR_A3_showcase_vtol_26_params_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\26_Params\showcase_vtol_26_params_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_JumpOut
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_30_JumpOut.bikb";
			class Sentences
			{
				class showcase_vtol_30_jumpout_XIA_0
				{
					text = "$STR_A3_showcase_vtol_30_jumpout_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\30_JumpOut\showcase_vtol_30_jumpout_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_Paradropped
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_35_Paradropped.bikb";
			class Sentences
			{
				class showcase_vtol_35_paradropped_XIA_0
				{
					text = "$STR_A3_showcase_vtol_35_paradropped_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\35_Paradropped\showcase_vtol_35_paradropped_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_35_paradropped_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_35_paradropped_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\35_Paradropped\showcase_vtol_35_paradropped_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_35_paradropped_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_35_paradropped_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\35_Paradropped\showcase_vtol_35_paradropped_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_35_paradropped_PHQ_2
				{
					text = "$STR_A3_showcase_vtol_35_paradropped_PHQ_2";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\35_Paradropped\showcase_vtol_35_paradropped_PHQ_2.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_35_paradropped_XIA_1
				{
					text = "$STR_A3_showcase_vtol_35_paradropped_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\35_Paradropped\showcase_vtol_35_paradropped_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_TaruStart
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_40_TaruStart.bikb";
			class Sentences
			{
				class showcase_vtol_40_tarustart_XIA_0
				{
					text = "$STR_A3_showcase_vtol_40_tarustart_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\40_TaruStart\showcase_vtol_40_tarustart_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_40_tarustart_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_40_tarustart_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\40_TaruStart\showcase_vtol_40_tarustart_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_40_tarustart_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_40_tarustart_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\40_TaruStart\showcase_vtol_40_tarustart_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_40_tarustart_XIA_1
				{
					text = "$STR_A3_showcase_vtol_40_tarustart_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\40_TaruStart\showcase_vtol_40_tarustart_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 41_Pawnee
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_41_Pawnee.bikb";
			class Sentences
			{
				class showcase_vtol_41_pawnee_XIA_0
				{
					text = "$STR_A3_showcase_vtol_41_pawnee_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\41_Pawnee\showcase_vtol_41_pawnee_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 42_PawneeDown
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_42_PawneeDown.bikb";
			class Sentences
			{
				class showcase_vtol_42_pawneedown_XIA_0
				{
					text = "$STR_A3_showcase_vtol_42_pawneedown_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\42_PawneeDown\showcase_vtol_42_pawneedown_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_TaruDone
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_45_TaruDone.bikb";
			class Sentences
			{
				class showcase_vtol_45_tarudone_XIA_0
				{
					text = "$STR_A3_showcase_vtol_45_tarudone_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\45_TaruDone\showcase_vtol_45_tarudone_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_45_tarudone_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_45_tarudone_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\45_TaruDone\showcase_vtol_45_tarudone_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_45_tarudone_XIA_1
				{
					text = "$STR_A3_showcase_vtol_45_tarudone_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\45_TaruDone\showcase_vtol_45_tarudone_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_Rescue
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_50_Rescue.bikb";
			class Sentences
			{
				class showcase_vtol_50_rescue_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_50_rescue_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\50_Rescue\showcase_vtol_50_rescue_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_50_rescue_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_50_rescue_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\50_Rescue\showcase_vtol_50_rescue_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_50_rescue_XIA_0
				{
					text = "$STR_A3_showcase_vtol_50_rescue_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\50_Rescue\showcase_vtol_50_rescue_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_50_rescue_PHQ_2
				{
					text = "$STR_A3_showcase_vtol_50_rescue_PHQ_2";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\50_Rescue\showcase_vtol_50_rescue_PHQ_2.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 51_GetInPilots
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_51_GetInPilots.bikb";
			class Sentences
			{
				class showcase_vtol_51_getinpilots_XIA_0
				{
					text = "$STR_A3_showcase_vtol_51_getinpilots_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\51_GetInPilots\showcase_vtol_51_getinpilots_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_PilotsIn
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_55_PilotsIn.bikb";
			class Sentences
			{
				class showcase_vtol_55_pilotsin_XIA_0
				{
					text = "$STR_A3_showcase_vtol_55_pilotsin_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\55_PilotsIn\showcase_vtol_55_pilotsin_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_55_pilotsin_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_55_pilotsin_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\55_PilotsIn\showcase_vtol_55_pilotsin_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_55_pilotsin_XIA_1
				{
					text = "$STR_A3_showcase_vtol_55_pilotsin_XIA_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\55_PilotsIn\showcase_vtol_55_pilotsin_XIA_1.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_Rescued
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_60_Rescued.bikb";
			class Sentences
			{
				class showcase_vtol_60_rescued_XIA_0
				{
					text = "$STR_A3_showcase_vtol_60_rescued_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\60_Rescued\showcase_vtol_60_rescued_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_60_rescued_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_60_rescued_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\60_Rescued\showcase_vtol_60_rescued_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_Home
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_65_Home.bikb";
			class Sentences
			{
				class showcase_vtol_65_home_XIA_0
				{
					text = "$STR_A3_showcase_vtol_65_home_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\65_Home\showcase_vtol_65_home_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 70_GunshipSpotted
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_70_GunshipSpotted.bikb";
			class Sentences
			{
				class showcase_vtol_70_gunshipspotted_XIA_0
				{
					text = "$STR_A3_showcase_vtol_70_gunshipspotted_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\70_GunshipSpotted\showcase_vtol_70_gunshipspotted_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 75_GunshipDestroyed
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_75_GunshipDestroyed.bikb";
			class Sentences
			{
				class showcase_vtol_75_gunshipdestroyed_XIA_0
				{
					text = "$STR_A3_showcase_vtol_75_gunshipdestroyed_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\75_GunshipDestroyed\showcase_vtol_75_gunshipdestroyed_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 80_RTB
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_80_RTB.bikb";
			class Sentences
			{
				class showcase_vtol_80_rtb_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_80_rtb_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\80_RTB\showcase_vtol_80_rtb_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_80_rtb_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_80_rtb_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\80_RTB\showcase_vtol_80_rtb_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_80_rtb_PHQ_2
				{
					text = "$STR_A3_showcase_vtol_80_rtb_PHQ_2";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\80_RTB\showcase_vtol_80_rtb_PHQ_2.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_80_rtb_PHQ_3
				{
					text = "$STR_A3_showcase_vtol_80_rtb_PHQ_3";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\80_RTB\showcase_vtol_80_rtb_PHQ_3.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 81_RTBCompleted
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_81_RTBCompleted.bikb";
			class Sentences
			{
				class showcase_vtol_81_rtbcompleted_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_81_rtbcompleted_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\81_RTBCompleted\showcase_vtol_81_rtbcompleted_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_81_rtbcompleted_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_81_rtbcompleted_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\81_RTBCompleted\showcase_vtol_81_rtbcompleted_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_81_rtbcompleted_XIA_0
				{
					text = "$STR_A3_showcase_vtol_81_rtbcompleted_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\81_RTBCompleted\showcase_vtol_81_rtbcompleted_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 82_RTBUncompleted
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_82_RTBUncompleted.bikb";
			class Sentences
			{
				class showcase_vtol_82_rtbuncompleted_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_82_rtbuncompleted_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\82_RTBUncompleted\showcase_vtol_82_rtbuncompleted_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_82_rtbuncompleted_PHQ_1
				{
					text = "$STR_A3_showcase_vtol_82_rtbuncompleted_PHQ_1";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\82_RTBUncompleted\showcase_vtol_82_rtbuncompleted_PHQ_1.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_82_rtbuncompleted_XIA_0
				{
					text = "$STR_A3_showcase_vtol_82_rtbuncompleted_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\82_RTBUncompleted\showcase_vtol_82_rtbuncompleted_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 84_IFVDestroyed
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_84_IFVDestroyed.bikb";
			class Sentences
			{
				class showcase_vtol_84_ifvdestroyed_XIA_0
				{
					text = "$STR_A3_showcase_vtol_84_ifvdestroyed_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\84_IFVDestroyed\showcase_vtol_84_ifvdestroyed_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_84_ifvdestroyed_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_84_ifvdestroyed_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\84_IFVDestroyed\showcase_vtol_84_ifvdestroyed_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 85_IFVsDestroyed
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_85_IFVsDestroyed.bikb";
			class Sentences
			{
				class showcase_vtol_85_ifvsdestroyed_XIA_0
				{
					text = "$STR_A3_showcase_vtol_85_ifvsdestroyed_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\85_IFVsDestroyed\showcase_vtol_85_ifvsdestroyed_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_85_ifvsdestroyed_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_85_ifvsdestroyed_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\85_IFVsDestroyed\showcase_vtol_85_ifvsdestroyed_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x01_XianKO
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x01_XianKO.bikb";
			class Sentences
			{
				class showcase_vtol_x01_xianko_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x01_xianko_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x01_XianKO\showcase_vtol_x01_xianko_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x05_FF
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x05_FF.bikb";
			class Sentences
			{
				class showcase_vtol_x05_ff_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x05_ff_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x05_FF\showcase_vtol_x05_ff_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x10_TaruFar
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x10_TaruFar.bikb";
			class Sentences
			{
				class showcase_vtol_x10_tarufar_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_x10_tarufar_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x10_TaruFar\showcase_vtol_x10_tarufar_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x11_TaruClose
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x11_TaruClose.bikb";
			class Sentences
			{
				class showcase_vtol_x11_taruclose_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x11_taruclose_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x11_TaruClose\showcase_vtol_x11_taruclose_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x15_ParatroopersDead
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x15_ParatroopersDead.bikb";
			class Sentences
			{
				class showcase_vtol_x15_paratroopersdead_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x15_paratroopersdead_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x15_ParatroopersDead\showcase_vtol_x15_paratroopersdead_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_x15_paratroopersdead_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_x15_paratroopersdead_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x15_ParatroopersDead\showcase_vtol_x15_paratroopersdead_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x20_TaruDead
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x20_TaruDead.bikb";
			class Sentences
			{
				class showcase_vtol_x20_tarudead_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x20_tarudead_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x20_TaruDead\showcase_vtol_x20_tarudead_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_x20_tarudead_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_x20_tarudead_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x20_TaruDead\showcase_vtol_x20_tarudead_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x25_PilotsDead
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x25_PilotsDead.bikb";
			class Sentences
			{
				class showcase_vtol_x25_pilotsdead_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x25_pilotsdead_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x25_PilotsDead\showcase_vtol_x25_pilotsdead_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_x25_pilotsdead_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_x25_pilotsdead_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x25_PilotsDead\showcase_vtol_x25_pilotsdead_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x30_Damaged
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x30_Damaged.bikb";
			class Sentences
			{
				class showcase_vtol_x30_damaged_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x30_damaged_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x30_Damaged\showcase_vtol_x30_damaged_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_x30_damaged_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_x30_damaged_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x30_Damaged\showcase_vtol_x30_damaged_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x32_LowFuel
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x32_LowFuel.bikb";
			class Sentences
			{
				class showcase_vtol_x32_lowfuel_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x32_lowfuel_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x32_LowFuel\showcase_vtol_x32_lowfuel_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_x32_lowfuel_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_x32_lowfuel_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x32_LowFuel\showcase_vtol_x32_lowfuel_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class x33_Ready
		{
			priority = 0;
			file = "\a3\missions_f_Exp\kb\Showcase_VTOL\Showcase_VTOL_x33_Ready.bikb";
			class Sentences
			{
				class showcase_vtol_x33_ready_XIA_0
				{
					text = "$STR_A3_showcase_vtol_x33_ready_XIA_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x33_Ready\showcase_vtol_x33_ready_XIA_0.ogg"};
					actor = "BIS_Player";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class showcase_vtol_x33_ready_PHQ_0
				{
					text = "$STR_A3_showcase_vtol_x33_ready_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\showcase_vtol\x33_Ready\showcase_vtol_x33_ready_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
	class MP_End_Game_Systems
	{
		class 01_Wait
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_01_Wait.bikb";
			class Sentences
			{
				class mp_end_game_systems_01_wait_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_01_wait_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\01_Wait\mp_end_game_systems_01_wait_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_01_wait_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_01_wait_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\01_Wait\mp_end_game_systems_01_wait_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_01_wait_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_01_wait_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\01_Wait\mp_end_game_systems_01_wait_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 03_Start
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_03_Start.bikb";
			class Sentences
			{
				class mp_end_game_systems_03_start_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_03_start_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\03_Start\mp_end_game_systems_03_start_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_03_start_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_03_start_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\03_Start\mp_end_game_systems_03_start_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_03_start_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_03_start_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\03_Start\mp_end_game_systems_03_start_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 05_EndGood
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_05_EndGood.bikb";
			class Sentences
			{
				class mp_end_game_systems_05_endgood_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_05_endgood_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\05_EndGood\mp_end_game_systems_05_endgood_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_05_endgood_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_05_endgood_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\05_EndGood\mp_end_game_systems_05_endgood_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_05_endgood_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_05_endgood_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\05_EndGood\mp_end_game_systems_05_endgood_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 07_EndBad
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_07_EndBad.bikb";
			class Sentences
			{
				class mp_end_game_systems_07_endbad_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_07_endbad_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\07_EndBad\mp_end_game_systems_07_endbad_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_07_endbad_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_07_endbad_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\07_EndBad\mp_end_game_systems_07_endbad_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_07_endbad_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_07_endbad_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\07_EndBad\mp_end_game_systems_07_endbad_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 10_FobControl
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_10_FobControl.bikb";
			class Sentences
			{
				class mp_end_game_systems_10_fobcontrol_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_10_fobcontrol_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\10_FobControl\mp_end_game_systems_10_fobcontrol_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_10_fobcontrol_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_10_fobcontrol_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\10_FobControl\mp_end_game_systems_10_fobcontrol_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_10_fobcontrol_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_10_fobcontrol_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\10_FobControl\mp_end_game_systems_10_fobcontrol_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 15_IntelRetrieved
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_15_IntelRetrieved.bikb";
			class Sentences
			{
				class mp_end_game_systems_15_intelretrieved_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_15_intelretrieved_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\15_IntelRetrieved\mp_end_game_systems_15_intelretrieved_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_15_intelretrieved_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_15_intelretrieved_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\15_IntelRetrieved\mp_end_game_systems_15_intelretrieved_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_15_intelretrieved_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_15_intelretrieved_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\15_IntelRetrieved\mp_end_game_systems_15_intelretrieved_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 17_IntelWanted
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_17_IntelWanted.bikb";
			class Sentences
			{
				class mp_end_game_systems_17_intelwanted_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_17_intelwanted_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\17_IntelWanted\mp_end_game_systems_17_intelwanted_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_17_intelwanted_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_17_intelwanted_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\17_IntelWanted\mp_end_game_systems_17_intelwanted_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_17_intelwanted_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_17_intelwanted_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\17_IntelWanted\mp_end_game_systems_17_intelwanted_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 18_IntelRevealed
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_18_IntelRevealed.bikb";
			class Sentences
			{
				class mp_end_game_systems_18_intelrevealed_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_18_intelrevealed_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\18_IntelRevealed\mp_end_game_systems_18_intelrevealed_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_18_intelrevealed_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_18_intelrevealed_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\18_IntelRevealed\mp_end_game_systems_18_intelrevealed_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_18_intelrevealed_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_18_intelrevealed_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\18_IntelRevealed\mp_end_game_systems_18_intelrevealed_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 20_IntelShouldDestroy
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_20_IntelShouldDestroy.bikb";
			class Sentences
			{
				class mp_end_game_systems_20_intelshoulddestroy_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_20_intelshoulddestroy_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\20_IntelShouldDestroy\mp_end_game_systems_20_intelshoulddestroy_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_20_intelshoulddestroy_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_20_intelshoulddestroy_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\20_IntelShouldDestroy\mp_end_game_systems_20_intelshoulddestroy_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_20_intelshoulddestroy_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_20_intelshoulddestroy_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\20_IntelShouldDestroy\mp_end_game_systems_20_intelshoulddestroy_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 25_EndGameStart
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_25_EndGameStart.bikb";
			class Sentences
			{
				class mp_end_game_systems_25_endgamestart_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_25_endgamestart_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\25_EndGameStart\mp_end_game_systems_25_endgamestart_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_25_endgamestart_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_25_endgamestart_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\25_EndGameStart\mp_end_game_systems_25_endgamestart_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_25_endgamestart_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_25_endgamestart_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\25_EndGameStart\mp_end_game_systems_25_endgamestart_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 30_PickupSchematicsFirst
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_30_PickupSchematicsFirst.bikb";
			class Sentences
			{
				class mp_end_game_systems_30_pickupschematicsfirst_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_30_pickupschematicsfirst_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\30_PickupSchematicsFirst\mp_end_game_systems_30_pickupschematicsfirst_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_30_pickupschematicsfirst_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_30_pickupschematicsfirst_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\30_PickupSchematicsFirst\mp_end_game_systems_30_pickupschematicsfirst_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_30_pickupschematicsfirst_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_30_pickupschematicsfirst_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\30_PickupSchematicsFirst\mp_end_game_systems_30_pickupschematicsfirst_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 35_PreventUpload
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_35_PreventUpload.bikb";
			class Sentences
			{
				class mp_end_game_systems_35_preventupload_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_35_preventupload_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\35_PreventUpload\mp_end_game_systems_35_preventupload_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_35_preventupload_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_35_preventupload_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\35_PreventUpload\mp_end_game_systems_35_preventupload_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_35_preventupload_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_35_preventupload_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\35_PreventUpload\mp_end_game_systems_35_preventupload_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 40_PickupSchematics
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_40_PickupSchematics.bikb";
			class Sentences
			{
				class mp_end_game_systems_40_pickupschematics_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_40_pickupschematics_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\40_PickupSchematics\mp_end_game_systems_40_pickupschematics_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_40_pickupschematics_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_40_pickupschematics_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\40_PickupSchematics\mp_end_game_systems_40_pickupschematics_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_40_pickupschematics_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_40_pickupschematics_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\40_PickupSchematics\mp_end_game_systems_40_pickupschematics_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 45_PreventUpload
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_45_PreventUpload.bikb";
			class Sentences
			{
				class mp_end_game_systems_45_preventupload_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_45_preventupload_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\45_PreventUpload\mp_end_game_systems_45_preventupload_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_45_preventupload_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_45_preventupload_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\45_PreventUpload\mp_end_game_systems_45_preventupload_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_45_preventupload_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_45_preventupload_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\45_PreventUpload\mp_end_game_systems_45_preventupload_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 50_Upload
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_50_Upload.bikb";
			class Sentences
			{
				class mp_end_game_systems_50_upload_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_50_upload_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\50_Upload\mp_end_game_systems_50_upload_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_50_upload_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_50_upload_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\50_Upload\mp_end_game_systems_50_upload_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_50_upload_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_50_upload_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\50_Upload\mp_end_game_systems_50_upload_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 55_EnemyHasSchematics
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_55_EnemyHasSchematics.bikb";
			class Sentences
			{
				class mp_end_game_systems_55_enemyhasschematics_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_55_enemyhasschematics_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\55_EnemyHasSchematics\mp_end_game_systems_55_enemyhasschematics_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_55_enemyhasschematics_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_55_enemyhasschematics_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\55_EnemyHasSchematics\mp_end_game_systems_55_enemyhasschematics_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_55_enemyhasschematics_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_55_enemyhasschematics_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\55_EnemyHasSchematics\mp_end_game_systems_55_enemyhasschematics_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 60_SchematicsFound
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_60_SchematicsFound.bikb";
			class Sentences
			{
				class mp_end_game_systems_60_schematicsfound_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_60_schematicsfound_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\60_SchematicsFound\mp_end_game_systems_60_schematicsfound_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_60_schematicsfound_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_60_schematicsfound_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\60_SchematicsFound\mp_end_game_systems_60_schematicsfound_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_60_schematicsfound_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_60_schematicsfound_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\60_SchematicsFound\mp_end_game_systems_60_schematicsfound_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 65_NoRespawn
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_65_NoRespawn.bikb";
			class Sentences
			{
				class mp_end_game_systems_65_norespawn_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_65_norespawn_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\65_NoRespawn\mp_end_game_systems_65_norespawn_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_65_norespawn_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_65_norespawn_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\65_NoRespawn\mp_end_game_systems_65_norespawn_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_65_norespawn_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_65_norespawn_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\65_NoRespawn\mp_end_game_systems_65_norespawn_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 70_AquireIntel
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_70_AquireIntel.bikb";
			class Sentences
			{
				class mp_end_game_systems_70_aquireintel_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_70_aquireintel_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\70_AquireIntel\mp_end_game_systems_70_aquireintel_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_70_aquireintel_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_70_aquireintel_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\70_AquireIntel\mp_end_game_systems_70_aquireintel_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_70_aquireintel_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_70_aquireintel_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\70_AquireIntel\mp_end_game_systems_70_aquireintel_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 75_IntelAquired
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_75_IntelAquired.bikb";
			class Sentences
			{
				class mp_end_game_systems_75_intelaquired_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_75_intelaquired_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\75_IntelAquired\mp_end_game_systems_75_intelaquired_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_75_intelaquired_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_75_intelaquired_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\75_IntelAquired\mp_end_game_systems_75_intelaquired_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_75_intelaquired_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_75_intelaquired_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\75_IntelAquired\mp_end_game_systems_75_intelaquired_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 80_SchematicsDropped
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_80_SchematicsDropped.bikb";
			class Sentences
			{
				class mp_end_game_systems_80_schematicsdropped_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_80_schematicsdropped_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\80_SchematicsDropped\mp_end_game_systems_80_schematicsdropped_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_80_schematicsdropped_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_80_schematicsdropped_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\80_SchematicsDropped\mp_end_game_systems_80_schematicsdropped_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_80_schematicsdropped_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_80_schematicsdropped_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\80_SchematicsDropped\mp_end_game_systems_80_schematicsdropped_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
		class 85_SchematicsSecured
		{
			priority = 0;
			file = "\a3\missions_f_exp\kb\MP_End_Game_Systems\MP_End_Game_Systems_85_SchematicsSecured.bikb";
			class Sentences
			{
				class mp_end_game_systems_85_schematicssecured_BHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_85_schematicssecured_BHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\85_SchematicsSecured\mp_end_game_systems_85_schematicssecured_BHQ_0.ogg"};
					actor = "BIS_BHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_85_schematicssecured_OHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_85_schematicssecured_OHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\85_SchematicsSecured\mp_end_game_systems_85_schematicssecured_OHQ_0.ogg"};
					actor = "BIS_OHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
				class mp_end_game_systems_85_schematicssecured_PHQ_0
				{
					text = "$STR_A3_mp_end_game_systems_85_schematicssecured_PHQ_0";
					speech[] = {"\a3\dubbing_f_exp\mp_end_game_systems\85_SchematicsSecured\mp_end_game_systems_85_schematicssecured_PHQ_0.ogg"};
					actor = "BIS_PHQ";
					variant = "";
					variantText = "";
					class Arguments{};
				};
			};
			class Arguments{};
			class Special{};
			startWithVocal[] = {"hour"};
			startWithConsonant[] = {"europe","university"};
		};
	};
};
class CfgWorldList
{
	class Tanoa{};
};
