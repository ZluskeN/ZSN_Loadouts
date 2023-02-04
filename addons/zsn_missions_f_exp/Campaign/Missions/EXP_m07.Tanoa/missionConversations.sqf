// BIS_group_ai setGroupID ["Riker"];
// BIS_group_ai setGroupID ["Grimm"];
// BIS_group_ai setGroupID ["Salvo"];
// BIS_group_ai setGroupID ["Truck"];
// BIS_miller setGroupID ["Miller"];

case "00_Intro":
{
	["00_Intro","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "05_Mark":
{
	["05_Mark","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "10_FindBoss":
{
	["10_FindBoss","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "11_BackPowerOnline":
{
	["11_BackPowerOnline","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "15_ViperForeshadow":
{
	["15_ViperForeshadow","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "20_SecondaryCodes":
{
	["20_SecondaryCodes","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "25_MillerSecondaryCodes":
{
	["25_MillerSecondaryCodes","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "30_MillerMovesToCodes":
{
	["30_MillerMovesToCodes","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "35_TheMeeting":
{
	["35_TheMeeting","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "40_BossDead":
{
	["40_BossDead","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "45_MoveToDevice": {
	["45_MoveToDevice", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "50_SupportTeamStatus": {
	["50_SupportTeamStatus", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "55_ViperReveal": {
	["55_ViperReveal", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "60_SupportTeam": {
	["60_SupportTeam", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "63_MillerTeam": {
	["63_MillerTeam", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
	
	// Play next conversation
	"65_SyndikatMovement" call BIS_fnc_missionConversations;
};

case "65_SyndikatMovement": {
	["65_SyndikatMovement", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "70_AirSupport": {
	["70_AirSupport", "EXP_m07", nil, "SIDE", nil, [BIS_james, BIS_HQ, BIS_miller], 1, true] call BIS_fnc_kbTell;
	sleep 3;
	
	// Execute stronger quake
	BIS_strongEarthquake = true;
};

case "75_DisarmDevice": {
	["75_DisarmDevice", "EXP_m07", [["COM", 0], ["COM", 0]], "SIDE", nil, [BIS_HQ, BIS_miller, BIS_james], 1, true] call BIS_fnc_kbTell;
	
	[] spawn {
		scriptName "BIS_fnc_missionConversations: send Falcon away";
		
		["75_DisarmDevice", "EXP_m07", [["MIL", 0], ["COM", 1]], "SIDE", nil, [BIS_HQ, BIS_miller, BIS_james], 1, true] call BIS_fnc_kbTell;
		
		// Send Falcon's helicopter away
		BIS_falconLeave = true;
		
		["75_DisarmDevice", "EXP_m07", [["FAL", 0]], "SIDE", nil, [BIS_HQ, BIS_miller, BIS_james], 1, true] call BIS_fnc_kbTell;
	};
	
	sleep 2;
	
	// Play music
	[["LeadTrack01_F_EXP", 0.2], "BIS_fnc_EXP_m07_playMusic"] call BIS_fnc_MP;
};

case "80_ProtectMiller": {
	["80_ProtectMiller", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "85_SupportTeamArrives": {
	["85_SupportTeamArrives", "EXP_m07", nil, "SIDE", nil, [BIS_ai_1, BIS_HQ], 1, true] call BIS_fnc_kbTell;
};

case "90_WatchYourFire": {
	["90_WatchYourFire", "EXP_m07", nil, "SIDE", nil, [BIS_james, BIS_ai_1, BIS_miller], 1, true] call BIS_fnc_kbTell;
};

case "95_DeviceDisarmed": {
	["95_DeviceDisarmed", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "96_BothKeysEntered_A": {
	["96_BothKeysEntered", "EXP_m07", [["MIL", 0], ["COM", 0]], "SIDE", nil, [BIS_miller, BIS_HQ, BIS_ai_1, BIS_james], 1, true] call BIS_fnc_kbTell;
	
	// Play next conversation
	"105_CTRG" spawn BIS_fnc_missionConversations;
};

case "96_BothKeysEntered_B": {
	["96_BothKeysEntered", "EXP_m07", [["RIK", 0]], "SIDE", nil, [BIS_miller, BIS_HQ, BIS_ai_1, BIS_james], 1, true] call BIS_fnc_kbTell;
};

case "97_ViperUnitsDown": {
	["97_ViperUnitsDown", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
	
	// Play next conversation
	"100_ExtractionOnTheWay" spawn BIS_fnc_missionConversations;
};

case "100_ExtractionOnTheWay": {
	["100_ExtractionOnTheWay", "EXP_m07", nil, "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
};

case "105_CTRG": {
	["105_CTRG", "EXP_m07", nil, "SIDE", nil, [BIS_miller, BIS_james], 1, true] call BIS_fnc_kbTell;
};

case "107_ProceedToExtract": {
	["107_ProceedToExtract", "EXP_m07", [["MIL", 0], ["MIL", 1]], "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
	["107_ProceedToExtract", "EXP_m07", [["COM", 0], ["COM", 0]], "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
	["107_ProceedToExtract", "EXP_m07", [["COM", 1]], "SIDE", nil, nil, 1, true] spawn BIS_fnc_kbTell;
};

case "110_Outro": {
	["110_Outro", "EXP_m07", [["MIL", 0], ["MIL", 0]], "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
	["110_Outro", "EXP_m07", [["MIL", 1], ["MIL", 1]], "SIDE", nil, nil, 1, true] call BIS_fnc_kbTell;
	["110_Outro", "EXP_m07", [["COM", 0]], "SIDE", nil, nil, 1, true] spawn BIS_fnc_kbTell;
};

case "x00_BossNotHere":
{
	private _sentence = selectRandom ["exp_m07_x00_bossnothere_COM_0", "exp_m07_x00_bossnothere_COM_1"];
	["x00_BossNotHere","EXP_m07", [_sentence, _sentence], "SIDE"] call bis_fnc_kbTell;
};

case "x05_DeviceDisarmed":
{
	["x05_DeviceDisarmed","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x10_GetNearTheDevice":
{
	["x10_GetNearTheDevice","EXP_m07", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x15_Shake":
{
	["x15_Shake","EXP_m07", nil, "SIDE", nil, [BIS_ai_1, BIS_miller, BIS_HQ]] call bis_fnc_kbTell;
};

case "x20_ShakeStrong":
{
	["x20_ShakeStrong","EXP_m07", nil, "SIDE", nil, [BIS_ai_1, BIS_HQ]] call bis_fnc_kbTell;
};