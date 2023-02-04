case "BIS_miller": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				"STR_A3_EXP_m06_miller_Description",
				"STR_A3_EXP_m06_miller_Title",
				""
			],
			[BIS_miller, true],
			true,
			nil,
			true,
			"move"
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_patrol": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [ localize "STR_A3_EXP_m06_patrol_Description","<marker name = 'BIS_patrol'>","</marker>"],
				"STR_A3_EXP_m06_patrol_Title",
				""
			],
			"BIS_patrol",
			true,
			nil,
			true,
			"attack"
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
		};
	};
};

case "BIS_drone": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				"STR_A3_EXP_m06_drone_Description",
				"STR_A3_EXP_m06_drone_Title",
				""
			],
			[BIS_keyUGV, true],
			true,
			nil,
			true,
			"interact"
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this] call BIS_fnc_taskSetState;
			if (_this == "SUCCEEDED") then {1 call BIS_fnc_EXP_camp_addTickets};
		};
	};
};

case "BIS_CTI": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [localize "STR_A3_EXP_m06_CTI_Description","<marker name = 'BIS_islandCenter'>","</marker>"],
				"STR_A3_EXP_m06_CTI_Title",
				""
			],
			nil,
			true,
			nil,
			true,
			"attack"
		] call BIS_fnc_taskCreate;

		sleep 0.5;

		for "_i" from 1 to 10 do {
			private _parent = _taskID;

			private ["_ID", "_desc", "_title", "_dest", "_type", "_tickets"];

			switch (_i) do {
				// Position 1
				case 1: {
					_ID = "BIS_position1";
					_desc = format [localize "STR_A3_EXP_m06_position1_Description","<marker name = 'BIS_position1'>","</marker>"];
					_title = "STR_A3_EXP_m06_position1_Title";
					_dest = "BIS_position1";
					_type = "T";
				};

				// Positon 2
				case 2: {
					_ID = "BIS_position2";
					_desc = format [localize "STR_A3_EXP_m06_position2_Description","<marker name = 'BIS_position2'>","</marker>"];
					_title = "STR_A3_EXP_m06_position2_Title";
					_dest = "BIS_position2";
					_type = "W";
				};

				// Positon 3
				case 3: {
					_ID = "BIS_position3";
					_desc = format [localize "STR_A3_EXP_m06_position3_Description","<marker name = 'BIS_position3'>","</marker>"];
					_title = "STR_A3_EXP_m06_position3_Title";
					_dest = "BIS_position3";
					_type = "V";
				};

				// Positon 4
				case 4: {
					_ID = "BIS_position4";
					_desc = format [localize "STR_A3_EXP_m06_position4_Description","<marker name = 'BIS_position4'>","</marker>"];
					_title = "STR_A3_EXP_m06_position4_Title";
					_dest = "BIS_position4";
					_type = "N";
				};

				// Positon 5
				case 5: {
					_ID = "BIS_position5";
					_desc = format [localize "STR_A3_EXP_m06_position5_Description","<marker name = 'BIS_position5'>","</marker>"];
					_title = "STR_A3_EXP_m06_position5_Title";
					_dest = "BIS_position5";
					_type = "M";
				};

				// Landing Area
				case 6: {
					_ID = "BIS_landing";
					_desc = format [localize "STR_A3_EXP_m06_landing_Description","<marker name = 'BIS_landing'>","</marker>"];
					_title = "STR_A3_EXP_m06_landing_Title";
					_dest = "BIS_landing";
					_type = "refuel";
				};

				// Technicals parent task
				case 7: {
					_ID = "BIS_technicals";
					_desc = "STR_A3_EXP_m06_technicals_Description";
					_title = "STR_A3_EXP_m06_technicals_Title";
					_dest = objNull;
					_type = "destroy";
				};

				// Technical 1
				case 8: {
					_parent = "BIS_technicals";
					_ID = "BIS_technical1";
					_desc = "STR_A3_EXP_m06_technical1_Description";
					_title = "STR_A3_EXP_m06_technical1_Title";
					_dest = [BIS_technical1, true];
					_type = "target";
				};

				// Technical 2
				case 9: {
					_parent = "BIS_technicals";
					_ID = "BIS_technical2";
					_desc = "STR_A3_EXP_m06_technical2_Description";
					_title = "STR_A3_EXP_m06_technical2_Title";
					_dest = [BIS_technical2, true];
					_type = "target";
				};

				// Technical 3
				case 10: {
					_parent = "BIS_technicals";
					_ID = "BIS_technical3";
					_desc = "STR_A3_EXP_m06_technical3_Description";
					_title = "STR_A3_EXP_m06_technical3_Title";
					_dest = [BIS_technical3, true];
					_type = "target";
				};
			};
			
			// Ensure parent task exists
			waitUntil {_parent call BIS_fnc_taskExists};
			
			// Create task
			private _task = [
				WEST,
				[_ID, _parent],
				[
					_desc,
					_title,
					""
				],
				_dest,
				if (_i == 1) then {true} else {"AUTOASSIGNED"},
				nil,
				false,
				_type
			] call BIS_fnc_taskCreate;
			
			// Add task to array
			BIS_tasks = BIS_tasks + [_task];

			sleep 0.5;
		};
	} else {
		if (typeName _this == typeName []) then {
			// Sub-tasks were completed
			params ["_ID", "_state", ["_notification", true, [true]]];
			[_ID, _state, _notification] call BIS_fnc_taskSetState;
		} else {
			// Island was captured
			[_taskID, _this] call BIS_fnc_taskSetState;
			
			// Only add a ticket if none are left
			if ((WEST call BIS_fnc_respawnTickets) == 0) then {1 call BIS_fnc_EXP_camp_addTickets};
		};
	};
};

case "BIS_RV": {
	if (!(_taskExists)) then {
		[
			WEST,
			_taskID,
			[
				format [localize "STR_A3_EXP_m06_RV_Description","<marker name = 'BIS_RV'>","</marker>"],	// ToDo: localize
				"STR_A3_EXP_m06_RV_Title",	// ToDo: localize
				""	// ToDo: localize
			],
			"BIS_RV",
			true,
			nil,
			true,
			"move",
			true
		] call BIS_fnc_taskCreate;
	} else {
		if (!(_taskCompleted) && { typeName _this == typeName "" }) then {
			[_taskID, _this, false] call BIS_fnc_taskSetState;
		};
	};
};