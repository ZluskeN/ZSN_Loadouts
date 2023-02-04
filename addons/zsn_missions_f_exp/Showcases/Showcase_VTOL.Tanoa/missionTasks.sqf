case "BIS_tskGetIn":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_getIn_desc","</marker>", "<marker name = 'BIS_mrkHangar'>"],
				localize "STR_A3_Showcase_VTOL_tsk_getIn_title",
				""
			],
			[BIS_VTOL,true],
			TRUE,
			18,
			nil,
			"getin"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskTakeOff":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				localize "STR_A3_Showcase_VTOL_tsk_takeOff_desc",
				localize "STR_A3_Showcase_VTOL_tsk_takeOff_title",
				""
			],
			objNull,
			false,
			16,
			nil,
			"takeoff"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskPickup":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_pickup_desc","</marker>", "<marker name = 'BIS_mrkBala'>"],
				localize "STR_A3_Showcase_VTOL_tsk_pickup_title",
				""
			],
			[BIS_Bala,true],
			false,
			14,
			nil,
			"meet"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskParadrop":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_paradrop_desc","</marker>", "<marker name = 'BIS_mrkParadrop'>"],
				localize "STR_A3_Showcase_VTOL_tsk_paradrop_title",
				""
			],
			[BIS_Paradrop,true],
			false,
			12,
			nil,
			"move"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskTaru":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_taru_desc","</marker>", "<marker name = 'BIS_mrkAirfield'>", "<marker name = 'BIS_mrkLijnhaven'>"],
				localize "STR_A3_Showcase_VTOL_tsk_taru_title",
				""
			],
			[BIS_Taru,true],
			false,
			10,
			nil,
			"defend"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskPilots":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_pilots_desc","</marker>", "<marker name = 'BIS_mrkPilots'>"],
				localize "STR_A3_Showcase_VTOL_tsk_pilots_title",
				""
			],
			[BIS_Pilots,true],
			true,
			8,
			nil,
			"search"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskRescue":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_rescue_desc","</marker>", "<marker name = 'BIS_mrkMedical'>"],
				localize "STR_A3_Showcase_VTOL_tsk_rescue_title",
				""
			],
			[BIS_Extraction,true],
			true,
			6,
			nil,
			"heal"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskIFVs":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_ifvs_desc","</marker>", "<marker name = 'BIS_mrkTanouka'>", "<marker name = 'BIS_mrkHarcourt'>", "<marker name = 'BIS_mrkGeorgetown'>"],
				localize "STR_A3_Showcase_VTOL_tsk_ifvs_title",
				""
			],
			objNull,
			false,
			nil,
			nil,
			"destroy"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskGunship":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				localize "STR_A3_Showcase_VTOL_tsk_gunship_desc",
				localize "STR_A3_Showcase_VTOL_tsk_gunship_title",
				""
			],
			objNull,
			true,
			22,
			nil,
			"destroy"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskMaintenance":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_maintenance_desc","</marker>", "<marker name = 'BIS_mrkSupport'>"],
				localize "STR_A3_Showcase_VTOL_tsk_maintenance_title",
				""
			],
			[BIS_Maintenance,true],
			true,
			2,
			nil,
			"use"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskRTB":
{
	if (_taskState == "") then
	{
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_Showcase_VTOL_tsk_rtb_desc","</marker>", "<marker name = 'BIS_mrkHangar'>"],
				localize "STR_A3_Showcase_VTOL_tsk_rtb_title",
				""
			],
			[BIS_Hangar,true],
			true,
			4,
			nil,
			"getout"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};
