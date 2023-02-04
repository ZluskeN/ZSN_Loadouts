case "BIS_tskFOB": {
	if (_taskState == "") then {
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_showcase_endgame_taskfobtext","</marker>", "<marker name = 'BIS_mrkFOB'>"],
				localize "STR_A3_showcase_endgame_taskfobtitle",
				""
			],
			(getMarkerPos "BIS_mrkFOB"),
			TRUE,
			nil,
			nil,
			"attack"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskReinforcements": {
	if (_taskState == "") then {
		[
			BIS_player,
			_taskID,
			[
				localize "STR_A3_showcase_endgame_taskreinftext",
				localize "STR_A3_showcase_endgame_taskreinftitle",
				""
			],
			(getMarkerPos "BIS_mrkReinforcements"),
			TRUE,
			nil,
			nil,
			"meet"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskIntel01": {
	if (_taskState == "") then {
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_showcase_endgame_taskintel01text" ,"</marker>", "<marker name = 'BIS_mrkIntel01'>"],
				localize "STR_A3_showcase_endgame_taskintel01title",
				""
			],
			[BIS_Intel01Objective,true],
			TRUE,
			nil,
			nil,
			"intel"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskIntel02": {
	if (_taskState == "") then {
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_showcase_endgame_taskintel02text" ,"</marker>", "<marker name = 'BIS_mrkIntel02'>"],
				localize "STR_A3_showcase_endgame_taskintel02title",
				""
			],
			[BIS_Intel02Objective,true],
			TRUE,
			nil,
			nil,
			"intel"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskSchematics": {
	if (_taskState == "") then {
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_showcase_endgame_taskschematicstext", "</marker>", "<marker name = 'BIS_mrkSchematics'>"],
				localize "STR_A3_showcase_endgame_taskschematicstitle",
				""
			],
			[BIS_Schematics,true],
			TRUE,
			nil,
			nil,
			"download"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskUpload": {
	if (_taskState == "") then {
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_showcase_endgame_taskuploadtext", "</marker>", "<marker name = 'BIS_mrkFOB'>"],
				localize "STR_A3_showcase_endgame_taskuploadtitle",
				""
			],
			[(getPos BIS_Terminal select 0), (getPos BIS_Terminal select 1), 1],
			TRUE,
			nil,
			nil,
			"interact"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};

case "BIS_tskGunship": {
	if (_taskState == "") then {
		[
			BIS_player,
			_taskID,
			[
				format [localize "STR_A3_showcase_endgame_taskgunshiptext", "</marker>", "<marker name = 'BIS_mrkAmmo'>"],
				localize "STR_A3_showcase_endgame_taskgunshiptitle",
				""
			],
			objNull,
			TRUE,
			nil,
			nil,
			"destroy"
		] call BIS_fnc_taskCreate
	} else {
		if (_this == "Current") then {_taskID call BIS_fnc_taskSetCurrent} else {[_taskID, _this] call BIS_fnc_taskSetState}
	}
};