// BIS_group_ai setGroupID ["Riker"];
// BIS_group_ai setGroupID ["Grimm"];
// BIS_group_ai setGroupID ["Salvo"];
// BIS_group_ai setGroupID ["Truck"];
// BIS_miller setGroupID ["Miller"];

case "00_MoveToBeach":
{
	["00_MoveToBeach","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "05_OnTheMove":
{
	["05_OnTheMove","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "10_ExpositionOne":
{
	["10_ExpositionOne","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "15_ExpositionTwo":
{
	["15_ExpositionTwo","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "20_WaitForBoat":
{
	["20_WaitForBoat","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "25_BoatDestroyed":
{
	["25_BoatDestroyed","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "30_NatoChopper":
{
	["30_NatoChopper","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "35_MoveToLZ":
{
	["35_MoveToLZ","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "40_WhatWasThat":
{
	["40_WhatWasThat","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "45_WhatWasThat2":
{
	["45_WhatWasThat2","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "50_ChopperETA":
{
	["50_ChopperETA","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "55_ChopperHit":
{
	["55_ChopperHit","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "60_PilotLeaves":
{
	["60_PilotLeaves","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "65_TheBoats":
{
	["65_TheBoats","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "70_MoveToBoats":
{
	["70_MoveToBoats","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "73_BoatsSplit" :
{
	["73_BoatsSplit","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "75_EnterTheJungle":
{
	//["75_EnterTheJungle","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
	["75_EnterTheJungle","EXP_m05",[["MIL",0],["MIL",1]] , "SIDE"] call bis_fnc_kbTell;
};

case "80_LeaveTheJungle":
{
	["80_LeaveTheJungle","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "85_AtTheBoats":
{
	["85_AtTheBoats","EXP_m05", nil, "SIDE"] call bis_fnc_kbTell;
};

case "x00_moving":
{
	private _sentence = selectRandom ["exp_m05_x00_moving_RIK_0", "exp_m05_x00_moving_RIK_1", "exp_m05_x00_moving_RIK_2", "exp_m05_x00_moving_RIK_3"];
	["x00_Moving","EXP_m05", [_sentence, _sentence], "SIDE"] call bis_fnc_kbTell;
};

case "x05_Holding":
{
	private _sentence = selectRandom ["exp_m05_x05_holding_RIK_0", "exp_m05_x05_holding_RIK_1", "exp_m05_x05_holding_RIK_2", "exp_m05_x05_holding_RIK_3"];
	["x05_Holding","EXP_m05", [_sentence, _sentence], "SIDE"] call bis_fnc_kbTell;
};

case "x10_KeepMoving":
{
	private _sentence = selectRandom ["exp_m05_x10_keepmoving_RIK_0", "exp_m05_x10_keepmoving_RIK_1", "exp_m05_x10_keepmoving_RIK_2", "exp_m05_x10_keepmoving_RIK_3"];
	["x10_KeepMoving","EXP_m05", [_sentence, _sentence], "SIDE"] call bis_fnc_kbTell;
};

case "x15_KeyStoneSuppressed":
{
	private _sentence = selectRandom ["exp_m05_x15_keystonesuppressed_RIK_0", "exp_m05_x15_keystonesuppressed_RIK_1", "exp_m05_x15_keystonesuppressed_RIK_2", "exp_m05_x15_keystonesuppressed_RIK_3"];
	["x15_KeyStoneSuppressed","EXP_m05", [_sentence, _sentence], "SIDE"] call bis_fnc_kbTell;
};