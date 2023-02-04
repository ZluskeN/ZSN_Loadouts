case "BIS_disarm": {
	if (!(_taskExists)) then {
		[
			WEST,
			[_taskID, "BIS_task_device"],
			[
				localize "STR_A3_Exp_m07_taskDisarmText",
				localize "STR_A3_Exp_m07_taskDisarmTitle",
				""
			],
			[BIS_laptop1, true],
			true,
			nil,
			true,
			"interact",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_viper": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				localize "STR_A3_Exp_m07_taskViperText",
				localize "STR_A3_Exp_m07_taskViperTitle",
				""
			],
			nil,
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_extract": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				localize "STR_A3_Exp_m07_taskEvacText",
				localize "STR_A3_Exp_m07_taskEvacTitle",
				""
			],
			nil,
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};