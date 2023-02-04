case "01_Start": {
	["01_Start", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "05_Online": {
	["05_Online", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "10_Spotted": {
	["10_Spotted", "EXP_m01", nil, "SIDE"] call BIS_fnc_kbTell;
	
	// Continue to the next conversation
	"15_Orders" spawn BIS_fnc_missionConversations;
};

case "15_Orders": {
	["15_Orders", "EXP_m01", nil, "DIRECT"] spawn BIS_fnc_kbTell;
};

case "20_Quiet": {
	["20_Quiet", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "23_NotSoQuiet": {
	["23_NotSoQuiet", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "25_Search": {
	["25_Search", "EXP_m01", nil, "SIDE"] call BIS_fnc_kbTell;
	
	// Let players search the building
	BIS_searchBuilding = true;
};

case "30_Weapons": {
	["30_Weapons", "EXP_m01", [["RIK", 0], ["RIK", 0]], "SIDE"] call BIS_fnc_kbTell;
	sleep 0.5;
	["30_Weapons", "EXP_m01", [["GRM", 0]], "SIDE"] call BIS_fnc_kbTell;
	sleep 0.5;
	
	// Play next conversation
	"35_Continue" spawn BIS_fnc_missionConversations;
};

case "35_Continue": {
	["35_Continue", "EXP_m01", [["RIK", 0], ["RIK", 0]], "SIDE"] call BIS_fnc_kbTell;
	["35_Continue", "EXP_m01", [["COM", 0]], "SIDE"] call BIS_fnc_kbTell;
	
	// Move to second location
	BIS_secondMove = true;
};

case "37_CivPop": {
	["37_CivPop", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "40_Paras": {
	["40_Paras", "EXP_m01", [["RIK", 0], ["RIK", 0]], "SIDE"] call BIS_fnc_kbTell;
	sleep 0.5;
	["40_Paras", "EXP_m01", [["GRM", 0], ["GRM", 0]], "SIDE"] call BIS_fnc_kbTell;
	sleep 0.5;
	["40_Paras", "EXP_m01", [["RIK", 1]], "SIDE"] call BIS_fnc_kbTell;
};

case "45_Second": {
	["45_Second", "EXP_m01", [["RIK", 1]], "SIDE"] call BIS_fnc_kbTell;
	
	// Move to final location
	BIS_finalMove = true;
};

case "50_Plan": {
	["50_Plan", "EXP_m01", nil, "SIDE"] call BIS_fnc_kbTell;
	
	// Play next conversation
	"51_PlanAgain" spawn BIS_fnc_missionConversations;
};

case "51_PlanAgain": {
	["51_PlanAgain", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "55_Engage": {
	["55_Engage", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "60_QRF": {
	["60_QRF", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "65_Support_Searched": {
	["65_Support_Searched", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "b01_Move_In_A": {
	["b01_Move_In", "EXP_m05", [["RIK", 0], ["RIK", 0]], "SIDE", nil, [BIS_supportLead]] call BIS_fnc_kbTell;
};

case "b01_Move_In_B": {
	["b01_Move_In", "EXP_m05", [["RIK", 1], ["RIK", 1]], "SIDE", nil, [BIS_supportLead]] call BIS_fnc_kbTell;
};

case "p01_Help_1": {
	["p01_Help_1", "EXP_m01", nil, "DIRECT"] spawn BIS_fnc_kbTell;
};

case "p05_Help_2": {
	["p05_Help_2", "EXP_m01", nil, "DIRECT"] spawn BIS_fnc_kbTell;
};

case "p10_Help_3": {
	["p10_Help_3", "EXP_m01", nil, "DIRECT"] spawn BIS_fnc_kbTell;
};

case "p15_Inside_Building": {
	["p15_Inside_Building", "EXP_m01", nil, "DIRECT"] call BIS_fnc_kbTell;
	
	// Play next conversation
	"p16_NoShootTarget" spawn BIS_fnc_missionConversations;
};

case "p16_NoShootTarget": {
	["p16_NoShootTarget", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "p20_Not_Clear": {
	["p20_Not_Clear", "EXP_m01", nil, "DIRECT"] spawn BIS_fnc_kbTell;
};

case "p25_Untie": {
	["p25_Untie", "EXP_m01", nil, "DIRECT"] spawn BIS_fnc_kbTell;
};

case "p30_Left_Building": {
	["p30_Left_Building", "EXP_m01", nil, "DIRECT"] spawn BIS_fnc_kbTell;
};

case "p35_Rescued": {
	["p35_Rescued", "EXP_m01", nil, "DIRECT"] call BIS_fnc_kbTell;
	
	// Reveal the tower
	BIS_revealTower = true;
};

case "p36_TowerIntel": {
	["p36_TowerIntel", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "p40_Already_Clear": {
	["p40_Already_Clear", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};

case "x00_Orders": {
	["x00_Orders", "EXP_m01", nil, "SIDE"] spawn BIS_fnc_kbTell;
};