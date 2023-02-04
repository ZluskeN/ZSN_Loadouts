case "BIS_evac":
{
	[
		WEST,
		"BIS_evacuate",
		["STR_A3_Exp_m05_Evacuate_Description", "STR_A3_Exp_m05_Evacuate_Title", "STR_A3_Exp_m05_Evacuate_Marker"],
		objNull,
		false,
		-1,
		false,
		""
	]
	call BIS_fnc_taskCreate;
};

case "BIS_beach" :
{
	[
		WEST,
		["BIS_beach", "BIS_evacuate"],
		["STR_A3_Exp_m05_Beach_Description", "STR_A3_Exp_m05_Beach_Title", "STR_A3_Exp_m05_Beach_Marker"],
		[BIS_task_1, true],
		true,
		1,
		true,
		""
	]
	call BIS_fnc_taskCreate;
};

case "BIS_beach_success" :
{
	[
		"BIS_beach",
		"SUCCEEDED",
		true
	]
	call BIS_fnc_taskSetState;
};

case "BIS_extractBoat" :
{
	[
		WEST,
		["BIS_extractBoat", "BIS_evacuate"],
		["STR_A3_Exp_m05_ExtractBoat_Description", "STR_A3_Exp_m05_ExtractBoat_Title", "STR_A3_Exp_m05_ExtractBoat_Marker"],
		[BIS_boat, true],
		true,
		2,
		true,
		""
	]
	call BIS_fnc_taskCreate;
};

case "BIS_extractBoat_cancel" :
{
	[
		"BIS_extractBoat",
		"CANCELED",
		true
	]
	call BIS_fnc_taskSetState;
};

case "BIS_lz" :
{
	[
		WEST,
		["BIS_lz", "BIS_evacuate"],
		["STR_A3_Exp_m05_Lz_Description", "STR_A3_Exp_m05_Lz_Title", "STR_A3_Exp_m05_Lz_Marker"],
		[BIS_task_2, true],
		true,
		3,
		true,
		""
	]
	call BIS_fnc_taskCreate;
};

case "BIS_lz_success" :
{
	[
		"BIS_lz",
		"SUCCEEDED",
		true
	]
	call BIS_fnc_taskSetState;
};

case "BIS_boardChopper" :
{
	[
		WEST,
		["BIS_boardChopper", "BIS_evacuate"],
		["STR_A3_Exp_m05_BoardChopper_Description", "STR_A3_Exp_m05_BoardChopper_Title", "STR_A3_Exp_m05_BoardChopper_Marker"],
		[BIS_task_2, true],
		true,
		4,
		true,
		""
	]
	call BIS_fnc_taskCreate;
};

case "BIS_boardChopper_cancel" :
{
	[
		"BIS_boardChopper",
		"CANCELED",
		true
	]
	call BIS_fnc_taskSetState;
};

case "BIS_extract" :
{
	[
		WEST,
		["BIS_extract", "BIS_evacuate"],
		["STR_A3_Exp_m05_Extract_Description", "STR_A3_Exp_m05_Extract_Title", "STR_A3_Exp_m05_Extract_Marker"],
		[BIS_task_3, true],
		true,
		5,
		true,
		""
	]
	call BIS_fnc_taskCreate;
};

case "BIS_extract_success" :
{
	[
		"BIS_extract",
		"SUCCEEDED",
		true
	]
	call BIS_fnc_taskSetState;
};