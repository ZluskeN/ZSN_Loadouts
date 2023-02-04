case "01_Blocking": {
	["01_Blocking","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};

case "05_Empty": {
	["05_Empty","EXP_m04",[["RIK",0],["RIK",0]] , "SIDE"] call bis_fnc_kbTell;
	[] spawn {
		["05_Empty","EXP_m04",[["RIK",1],["RIK", 2]], "SIDE"] call bis_fnc_kbTell;
		sleep 0.5;
		
		["05_Empty","EXP_m04",[["COM",0],["COM", 0]], "SIDE"] call bis_fnc_kbTell;
		
		sleep 4;
		
		["05_Empty","EXP_m04",[["COM",1]], "SIDE"] call bis_fnc_kbTell;
		"10_Attack" call BIS_fnc_missionConversations;
		
		sleep 4;
		
		// Start attack
		BIS_ambush = true;
	};

	sleep 2;

	if (isServer) then {
		// Start feed
		BIS_feed1 = true;
	};
};

case "10_Attack": {
	["10_Attack","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};

case "15_Defeated": {
	["15_Defeated","EXP_m04", nil, "SIDE", nil, [BIS_supportLead, BIS_HQ]] call bis_fnc_kbTell;
	"20_Feed_Start" spawn BIS_fnc_missionConversations;
};

case "20_Feed_Start": {
	// Start second feed
	[] spawn {sleep 1; BIS_feed2 = true};

	["20_Feed_Start","EXP_m04", [["RIK", 0], ["RIK", 1]], "SIDE"] call bis_fnc_kbTell;
	
	sleep 11;
	
	// Play next conversation
	"25_Feed_Explain" spawn BIS_fnc_missionConversations;
};

case "25_Feed_Explain": {
	["25_Feed_Explain","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
	
	sleep 10;
	
	// Play next conversation
	"30_Feed_End" spawn BIS_fnc_missionConversations;
};

case "30_Feed_End": {
	["30_Feed_End","EXP_m04", nil, "SIDE", nil, [BIS_supportLead, BIS_HQ]] call bis_fnc_kbTell;

	if (isServer) then {
		// Start exfil
		BIS_toExfil = true;
	};
};
case "35_Exfil": {
	["35_Exfil","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer) then {
		// Send investigators
		BIS_sendInvestigators = true;
	};
};

case "40_Flares": {
	["40_Flares","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};
//NAJIT A ZNICIT
case "45_Mystery": {
	["45_Mystery","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};

case "50_Near_Exfil": {
	["50_Near_Exfil","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};

case "55_All_In": {
	["55_All_In","EXP_m04", nil, "VEHICLE"] spawn bis_fnc_kbTell;
	sleep 3;

	if (isServer) then {
		// Drive away
		BIS_exfil = true;
	};
};

case "60_Status": {
	["60_Status","EXP_m04", nil, "VEHICLE"] call bis_fnc_kbTell;

	sleep 1;

	if (isServer) then {
		// Start final feed
		BIS_feed3 = true;
	};
};

case "65_Feed_Start": {
	["65_Feed_Start","EXP_m04", nil, "VEHICLE"] call bis_fnc_kbTell;
};

case "70_End": {
	["70_End","EXP_m04", [["LIA", 0], ["LIA", 0]], "SIDE", nil, [BIS_SOF, BIS_HQ]] call bis_fnc_kbTell;
	sleep 0.5;
	
	["70_End","EXP_m04", [["LIA", 1], ["LIA", 1]], "SIDE", nil, [BIS_SOF, BIS_HQ]] call bis_fnc_kbTell;
	["70_End","EXP_m04", [["COM", 0], ["COM", 0]], "SIDE", nil, [BIS_SOF, BIS_HQ]] call bis_fnc_kbTell;
	["70_End","EXP_m04", [["LIA", 2]], "SIDE", nil, [BIS_SOF, BIS_HQ]] call bis_fnc_kbTell;
};

case "x01_Fire": {
	["x01_Fire","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x05_Spotted": {
	["x05_Spotted","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x10_Waiting": {
	["x10_Waiting","EXP_m04", nil, "SIDE"] call bis_fnc_kbTell;
};