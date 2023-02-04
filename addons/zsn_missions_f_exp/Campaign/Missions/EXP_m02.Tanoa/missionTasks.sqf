case "BIS_RV": {
	if (!(_taskExists)) then {
		[
			true,
			_taskID,
			[
				format [localize "STR_A3_EXP_M02_Tasks_BIS_RV_Description", "</marker>","<marker name = 'BIS_RV'>","<marker name = 'BIS_support'>"],

				localize "STR_A3_EXP_M02_Tasks_BIS_RV_Title",
				""
			],
			"BIS_RV",
			true,
			nil,
			true,
			"talk",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			switch (toUpper _this) do {
				case "SUCCEEDED": {
					// Met with Support Team
					[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
				};
			};
		};
	};
};

case "BIS_ambush": {
	if (!(_taskExists)) then {
		[
			true,
			_taskID,
			[
				format [localize "STR_A3_EXP_M02_Tasks_BIS_Ambush_Description", "</marker>","<marker name = 'BIS_ambush'>"],
				localize "STR_A3_EXP_M02_Tasks_BIS_Ambush_Title",
				""
			],
			"BIS_ambush",
			true,
			nil,
			true,
			"destroy",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			switch (toUpper _this) do {
				case "SUCCEEDED": {
					// Convoy destroyed
					[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
				};
			};
		};
	};
};

case "BIS_investigate": {
	if (!(_taskExists)) then {
		[
			true,
			_taskID,
			[
				format [localize "STR_A3_EXP_M02_Tasks_BIS_Investigate_Description", "</marker>","<marker name = 'BIS_investigate'>"],
				localize "STR_A3_EXP_M02_Tasks_BIS_Investigate_Title",
				""
			],
			"BIS_investigate",
			true,
			nil,
			true,
			"search",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			switch (toUpper _this) do {
				case "SUCCEEDED": {
					// Weapons spotted
					[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
				};
			};
		};
	};
};

case "BIS_exfil": {
	if (!(_taskExists)) then {
		[
			true,
			_taskID,
			[
				format [localize "STR_A3_EXP_M02_Tasks_BIS_Exfil_Description", "</marker>","<marker name = 'BIS_exfil'>"],
				localize "STR_A3_EXP_M02_Tasks_BIS_Exfil_Title",
				""
			],
			"BIS_exfil",
			true,
			nil,
			true,
			"exit",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			switch (toUpper _this) do {
				case "SUCCEEDED": {
					// Players extracted
					[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
				};
			};
		};
	};
};
