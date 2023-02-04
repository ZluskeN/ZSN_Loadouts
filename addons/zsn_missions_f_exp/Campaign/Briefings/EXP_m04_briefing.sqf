// Briefing for EXP_m04

_subtitles = [
	[ "Mark Cole",									"STR_A3_exp_m04_b01_tanoareport_COR_0"	, 00.50],
	[ "Mark Cole",									"STR_A3_exp_m04_b05_tanoareport_2_COR_0", 12.57],
	[ "Mark Cole",									"STR_A3_exp_m04_b05_tanoareport_2_COR_1", 21.20],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b10_interrupt_LIA_0"   	, 26.58],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b15_situation_1_COM_0" 	, 28.92],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b15_situation_1_LIA_0" 	, 31.13],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b15_situation_1_COM_1" 	, 32.16],

	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b20_situation_2_COM_0" 	, 36.68],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b20_situation_2_COM_1" 	, 39.62],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b20_situation_2_LIA_0" 	, 43.06],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b20_situation_2_COM_2" 	, 43.77],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b20_situation_2_COM_3" 	, 46.81],

	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b25_situation_3_LIA_0"  , 50.79],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b25_situation_3_COM_0"  , 52.54],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b25_situation_3_LIA_1"  , 56.31],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b25_situation_3_COM_1"  , 58.03],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b25_situation_3_LIA_2"  , 59.91],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b25_situation_3_COM_2"  , 60.85],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b25_situation_3_LIA_3"  , 63.43],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b25_situation_3_COM_3"  , 64.05],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b25_situation_3_LIA_4"  , 66.78],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b25_situation_3_COM_4"  , 67.47],

	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b30_situation_4_COM_0"  , 68.73],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b30_situation_4_COM_1"  , 69.85],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b30_situation_4_LIA_0"  , 75.08],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b30_situation_4_COM_2"  , 76.24],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b30_situation_4_LIA_1"  , 77.50],
	
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b35_connect_LIA_0"  	, 78.47],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b35_connect_COM_0"  	, 79.65],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b35_connect_COM_1"  	, 83.79],
	[ "STR_A3_ApexProtocol_callsign_Northstar",		"STR_A3_exp_m04_b35_connect_LIA_1"  	, 88.09],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m04_b35_connect_COM_2"  	, 89.02]
];

_subtitles spawn BIS_fnc_EXP_camp_playSubtitles;