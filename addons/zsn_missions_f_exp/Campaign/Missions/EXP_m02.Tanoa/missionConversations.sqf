case "01_Start": {
	["01_Start", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "05_Convoy_Update": {
	["05_Convoy_Update", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "10_Watch_Fire": {
	["10_Watch_Fire", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "15_Continue": {
	["15_Continue", "EXP_m02", nil, "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;
};

case "20_No_Touch": {
	_rand = selectRandom [0,1];
	["20_No_Touch", "EXP_m02", [["GRM",_rand],["GRM",_rand]], "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;
};

case "23_LOL": {
	sleep 0.25;
	
	["23_LOL", "EXP_m02", nil, "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;

	sleep 0.5;

	// Play next conversation
	"25_Briefing" spawn BIS_fnc_missionConversations;
};

case "25_Briefing": {
	["25_Briefing", "EXP_m02", [["RIK", 0], ["RIK", 0]], "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;
	sleep 0.75;
	
	["25_Briefing", "EXP_m02", [["RIK", 1], ["RIK", 2]], "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;
	["25_Briefing", "EXP_m02", [["RIK", 3], ["RIK", 3]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	["25_Briefing", "EXP_m02", [["COM", 0], ["COM", 0]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	["25_Briefing", "EXP_m02", [["RIK", 4], ["RIK", 4]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	["25_Briefing", "EXP_m02", [["RIK", 5], ["RIK", 5]], "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;
	["25_Briefing", "EXP_m02", [["RIK", 6], ["RIK", 7]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;

	// Let Support Team member move
	BIS_support1 setBehaviour "AWARE";
	BIS_support1 enableAI "MOVE";
	BIS_support1 forceSpeed 4;
	BIS_demoMove = true;
	
	["25_Briefing", "EXP_m02", [["GRM", 1], ["GRM", 1]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;

	// Move out
	BIS_moveOut = true;
	["25_Briefing", "EXP_m02", [["RIK", 8], ["RIK", 9]], "DIRECT", nil, nil, 1] call BIS_fnc_kbTell;
};

case "30_Plan": {
	["30_Plan", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;

	// Register that the plan was given
	BIS_planGiven = true;
};

case "35_Joke_1": {
	["35_Joke_1", "EXP_m02", [["SAL", 0], ["SAL", 0]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	["35_Joke_1", "EXP_m02", [["SAL", 1], ["SAL", 1]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	["35_Joke_1", "EXP_m02", [["SAL", 2], ["SAL", 2]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	["35_Joke_1", "EXP_m02", [["RIK", 0], ["RIK", 0]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	sleep 0.5;
	
	["35_Joke_1", "EXP_m02", [["SAL", 4]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "60_Charge_Set": {
	["60_Charge_Set", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "65_Convoy_Spotted": {
	["65_Convoy_Spotted", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "70_Hold_Fire": {
	["70_Hold_Fire", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "75_Open_Fire": {
	["75_Open_Fire", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "80_Convoy_Destroyed": {
	["80_Convoy_Destroyed", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	sleep 5;

	// Play next conversation
	"83_WaitOne" spawn BIS_fnc_missionConversations;
};

case "83_WaitOne": {
	["83_WaitOne", "EXP_m02", [["TRK", 0], ["GRM", 0]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	sleep 1;

	["83_WaitOne", "EXP_m02", [["SAL", 0]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	sleep 3;

	// Play next conversation
	"84_NewIntel" spawn BIS_fnc_missionConversations;
};

case "84_NewIntel": {
	["84_NewIntel", "EXP_m02", [["COM", 0], ["RIK", 1]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;

	// Join Support Team member back to group
	BIS_support3 joinAsSilent [BIS_supportGroup, 4];
	BIS_support2 joinAsSilent [BIS_supportGroup, 3];
	BIS_support1 joinAsSilent [BIS_supportGroup, 1];

	BIS_support1 doWatch objNull;

	// Make Support Team disengage
	{
		_x setCaptive true;
		_x disableAI "AUTOCOMBAT";
		_x setCombatMode "BLUE";
		_x setUnitPos "AUTO";
	} forEach BIS_supportUnits;

	// Move to quadbikes
	BIS_supportLeave = true;

	["84_NewIntel", "EXP_m02", [["GRM", 0]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;

	// Start the search
	BIS_seekAndDestroy = true;
};

case "84_2_NewIntel_Comment": {
	["84_2_NewIntel_Comment", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "85_On_Path": {
	["85_On_Path", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "90_Confirmed_Enemy": {
	["90_Confirmed_Enemy", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "95_Search_Wreck": {
	["95_Search_Wreck", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "100_Weapons_Found": {
	["100_Weapons_Found", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;

	if (isServer) then {
		// Move to extract
		BIS_toExtract = true;
	};
};

case "105_Support_Plan": {
	["105_Support_Plan", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
	sleep 7;

	// Play next conversation
	"107_ChineseForeshadow" spawn BIS_fnc_missionConversations;
};
case "107_ChineseForeshadow": {
	["107_ChineseForeshadow", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "110_Helicopter_Ready": {
	["110_Helicopter_Ready", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "115_UAV_Targeting": {
	["115_UAV_Targeting", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "120_UAV_Fired": {
	["120_UAV_Fired", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "125_Weapons_Destroyed": {
	["125_Weapons_Destroyed", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x01_Stalled_RV": {
	["x01_Stalled_RV", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x05_Stalled_Preparing": {
	["x05_Stalled_Preparing", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x10_Stalled_Ambushed": {
	["x10_Stalled_Ambushed", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x15_Ambush_Spatne": {
	_rand = selectRandom [0,1];
	["x15_Ambush_Spatne", "EXP_m02", [["GRM",_rand],["GRM",_rand]], "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};

case "x20_Ambush_Backstop": {
	["x20_Ambush_Backstop", "EXP_m02", nil, "SIDE", nil, nil, 1] call BIS_fnc_kbTell;
};