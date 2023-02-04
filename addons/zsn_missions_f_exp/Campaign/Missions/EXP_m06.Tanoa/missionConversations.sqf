/*
BIS_miller setGroupID ["Miller"];	// ToDo: localize
*/
case "01_Start": {

	["01_Start","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
	if (isServer) then {
		// Move out
		BIS_meetUp = true;
	};
};

case "03_Patrol": {

	["03_Patrol","EXP_m06", nil, "DIRECT"] call bis_fnc_kbTell;
	
	// Play next conversation
	"05_Surprised" spawn BIS_fnc_missionConversations;

	if (isServer) then {
		// Move out
		BIS_moveOut = true;
	};
};

case "05_Surprised": {
	["05_Surprised","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "10_Patrol_Dead": {

	["10_Patrol_Dead","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer) then {
		// Investigate the drone
		BIS_investigate = true;
	};
};

case "15_Drone_Connect": {

	["15_Drone_Connect","EXP_m06", [["MIL", 0], ["MIL", 1]], "SIDE"] call bis_fnc_kbTell;
};

case "20_Drone_Connected": {

	["20_Drone_Connected","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer) then {
		if (!(BIS_firstUAV)) then {
			// Other drone was accessed first
			private _conversationScript = ["25_Drones_Revealed"] spawn BIS_fnc_missionConversations;
		} else {
			// UAV was accessed first
			private _conversationScript = ["30_UAV_Connected"] spawn BIS_fnc_missionConversations;
		};
	};
};

case "25_Drones_Revealed": {

	["25_Drones_Revealed","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	// Continue to next conversation
	private _conversationScript = ["40_Drones_Attack"] spawn BIS_fnc_missionConversations;
};

case "30_UAV_Connected": {
	["30_UAV_Connected","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer && { BIS_firstUAV }) then {
		// Players connected to the UAV first
		private _conversationScript = ["35_UAV_First"] spawn BIS_fnc_missionConversations;
	};
};

case "35_UAV_First": {
	["35_UAV_First","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	// Continue to next conversation
	private _conversationScript = ["40_Drones_Attack"] spawn BIS_fnc_missionConversations;
};

case "40_Drones_Attack": {
	["40_Drones_Attack","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;


	if (isServer) then {
		// Start the attack
		BIS_CTI = true;
	};
};

case "45_Reveal": {
	["45_Reveal","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "50_Terminal_Spotted": {
	["50_Terminal_Spotted","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "55_UGV_Spotted": {
	["55_UGV_Spotted","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer && { !(BIS_terminalHint) }) then {
		// Remind players that they need a terminal
		BIS_terminalHint = true;
		private _conversationScript = ["65_Terminal_Reminder"] spawn BIS_fnc_missionConversations;
	};
};

case "60_Turret_Spotted": {
	["60_Turret_Spotted","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer && { !(BIS_terminalHint) }) then {
		// Remind players that they need a terminal
		BIS_terminalHint = true;
		private _conversationScript = ["65_Terminal_Reminder"] spawn BIS_fnc_missionConversations;
	};
};

case "65_Terminal_Reminder": {
	["65_Terminal_Reminder","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "70_Drone_Destroyed": {
	["70_Drone_Destroyed","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "75_Corpses": {
	["75_Corpses","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "80_Island_Captured": {
	["80_Island_Captured","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer) then {
		// Start drone self destruct
		BIS_destroyDrones = true;
	};
};

case "85_Self_Destruct": {
	["85_Self_Destruct","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "90_Rendezvous": {
	["90_Rendezvous","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;

	if (isServer) then {
		// Rendezvous
		BIS_RV = true;
	};
};

case "95_Apex": {
	["95_Apex","EXP_m06", nil, "DIRECT"] call bis_fnc_kbTell;

	// Play next conversation
	private _conversationScript = ["105_ApexReport"] spawn BIS_fnc_missionConversations;
};

case "105_ApexReport": {
	["105_ApexReport","EXP_m06", nil, "SIDE", nil, [BIS_miller, BIS_HQ]] call bis_fnc_kbTell;
	sleep 1;

	if (isServer) then {
		// End the mission
		BIS_endMission = true;
		publicVariable "BIS_endMission";
	};
};

case "x01_Skipped_Miller": {
	["x01_Skipped_Miller","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
	
	// Play next conversation
	"05_Surprised" spawn BIS_fnc_missionConversations;
};

case "x05_Skipping_Patrol": {
	["x05_Skipping_Patrol","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x10_Skipping_Drone": {
	["x10_Skipping_Drone","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x15_Skipped": {
	["x15_Skipped","EXP_m06", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x20_Drone_Info": {
	["x20_Drone_Info","EXP_m06", [["MIL", 0], ["MIL", 1]], "SIDE"] call bis_fnc_kbTell;
};
