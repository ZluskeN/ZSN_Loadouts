// Debriefing for EXP_m01

_subtitles = [
	[ "STR_A3_ApexProtocol_identity_Riker",			"STR_A3_exp_m05_b05_connecting_RIK_0", 01.89],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m05_b05_connecting_COM_0", 06.70],
	[ "STR_A3_ApexProtocol_callsign_Watchtower",	"STR_A3_exp_m05_b10_connected_COM_0", 14.15],
	[ "STR_A3_ApexProtocol_identity_Riker",			"STR_A3_exp_m05_b15_door_RIK_0" 	, 16.18],
	[ "STR_A3_ApexProtocol_identity_Salvo",			"STR_A3_exp_m05_b15_door_SAL_0" 	, 20.71],
	[ "STR_A3_ApexProtocol_identity_Riker",			"STR_A3_exp_m05_b20_flash_RIK_0" 	, 25.35],
	[ "STR_A3_ApexProtocol_identity_Truck",			"STR_A3_exp_m05_b25_breaching_TRK_0", 27.62]
];

private _subs = _subtitles spawn BIS_fnc_EXP_camp_playSubtitles;
waitUntil {scriptDone _subs};

private _time = time + 0.5;
waitUntil {time >= _time};

// Clear subtitles for logo
titleText ["", "PLAIN"];