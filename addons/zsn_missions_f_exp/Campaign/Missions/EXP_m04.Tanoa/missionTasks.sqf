case "BIS_capture": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [localize "STR_A3_EXP_m04_capture_Description","</marker>","<marker name = 'BIS_defend'>","<marker name = 'BIS_capture'>"],	// ToDo: localize
				 "STR_A3_EXP_m04_capture_title",	// ToDo: localize
				 "STR_A3_EXP_m04_capture_WP"	// ToDo: localize
			],
			"BIS_capture",
			true,
			nil,
			true,
			"Search",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			switch (toUpper _this) do {
				case "CANCELED": {
					// Warlock missing
					[_taskID, "CANCELED"] call BIS_fnc_taskSetState;
				};
			};
		};
	};
};

case "BIS_defend": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				"STR_A3_EXP_m04_defend_Description",	// ToDo: localize
				"STR_A3_EXP_m04_defend_Title",	// ToDo: localize
				"STR_A3_EXP_m04_defend_WP"	// ToDo: localize
			],
			"BIS_defend",
			true,
			nil,
			true,
			"Defend",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			switch (toUpper _this) do {
				case "SUCCEEDED": {
					// Viper defeated
					[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
				};
			};
		};
	};
};

case "BIS_extract": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				"STR_A3_EXP_m04_extract_Description",	// ToDo: localize
				"STR_A3_EXP_m04_extract_Title",	// ToDo: localize
				"STR_A3_EXP_m04_extract_WP"	// ToDo: localize
			],
			[BIS_extractTruck, true],
			true,
			nil,
			true,
			"Move",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			switch (toUpper _this) do {
				case "SUCCEEDED": {
					// Everyone extracted
					[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
				};
			};
		};
	};
};