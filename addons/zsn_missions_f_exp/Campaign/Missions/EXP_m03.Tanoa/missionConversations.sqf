case "01_Start": {
	["01_Start", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "05_SupportTeamOverwatch": {
	["05_SupportTeamOverwatch", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "06_SupportTeamChatter": {
	["06_SupportTeamChatter", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "10_Overwatch": {
	["10_Overwatch", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "07_ConvoyDepart": {
	["07_ConvoyDepart", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "15_Detected": {
	["15_Detected", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "20_SuppliesDestroyed": {
	["20_SuppliesDestroyed", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "25_allSuppliesDestroyed": {
	["25_allSuppliesDestroyed", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "30_SupportTeamRetreating": {
	["30_SupportTeamRetreating", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "35_Reinforcements_1": {
	["35_Reinforcements_1", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "40_Reinforcements_2": {
	["40_Reinforcements_2", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "50_support_team_leave": {
	["50_support_team_leave", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "55_reach_observatory": {
	["55_reach_observatory", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "57_reach_observatory": {
	["57_reach_observatory", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "58_debriefing": {
	["58_debriefing", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "60_LZ": {

	if (!BIS_lsvInLz) then {
		["60_LZ", "EXP_m03", [["PIL", 0], ["PIL", 0]], "DIRECT", nil, [BIS_m2, BIS_supportLead, BIS_LIA, BIS_support2], 1] call BIS_fnc_kbTell;
		["60_LZ", "EXP_m03", [["PIL", 1], ["PIL", 1]], "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;
	} else {
		["60_LZ", "EXP_m03", [["PIL", 0], ["PIL", 0]], "DIRECT", nil, [BIS_m2, BIS_supportLead, BIS_LIA, BIS_support2], 1] call BIS_fnc_kbTell;
	};

	["60_LZ", "EXP_m03", [["PIL", 2], ["SAL", 1]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x01_accident": {
	["x01_accident", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x02_slow_players": {
	["x02_slow_players", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x03_late_arrival": {
	["x03_late_arrival", "EXP_m03", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};
