case "BIS_first": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [localize "STR_A3_exp_m01_taskfirsttext","</marker>","<marker name = 'BIS_first'>"],
				localize "STR_A3_exp_m01_taskfirsttitle",
				""
			],
			"BIS_first",
			true,
			nil,
			true,
			"attack",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_building": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				localize "STR_A3_exp_m01_taskbuildingtext",
				localize "STR_A3_exp_m01_taskbuildingtitle",
				""
			],
			[BIS_table1, true],
			true,
			nil,
			true,
			"search",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_second": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [localize "STR_A3_exp_m01_tasksecondtext","</marker>",("<marker name = '" + BIS_secondMarker + "'>")],
				localize "STR_A3_exp_m01_tasksecondtitle",
				""
			],
			BIS_secondDest,
			true,
			nil,
			true,
			"N",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_tower": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [localize "STR_A3_exp_m01_tasktowertext","</marker>","<marker name = 'BIS_tower'>"],
				localize "STR_A3_exp_m01_tasktowertitle",
				""
			],
			"BIS_tower",
			false,
			nil,
			true,
			"radio",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_final": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [localize "STR_A3_exp_m01_taskfinaltext","</marker>","<marker name = 'BIS_final'>"],
				localize "STR_A3_exp_m01_taskfinaltitle",
				""
			],
			"BIS_final",
			true,
			nil,
			true,
			"T",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this, false] call BIS_fnc_taskSetState;
		};
	};
};