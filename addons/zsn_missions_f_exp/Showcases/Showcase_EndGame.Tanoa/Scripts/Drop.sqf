/*
	Aerial vehicle paradrop
		select 0 = Name of the air transport vehicle.
		select 1 = Vehicle which will be dropped, either name (of already existing one) or classname to create a new one.
		select 2 = (OPTIONAL) Vertical offset from the transport to avoid collision. Default is 4 meters.
		select 3 = (OPTIONAL) Time it takes for the parachute to open and start slowing the cargo down. Default is 4 seconds (because of the long opening animation of the default parachute).
		select 4 = (OPTIONAL) Classname of the parachute. Default is "B_Parachute_02_F".
*/

// Params
	params
	[
		["_transport",objNull,[objNull]],
		["_cargo",objNull,[objNull,""]],
		["_offsetZ",4,[999]],
		["_parachuteDeployDelay",4,[999]],
		["_parachute","B_Parachute_02_F",[""]]
	];

// Check for validity
	If (isNull _transport) ExitWith {["PARADROP: Non-existing transport vehicle used!"] call BIS_fnc_log};
	If ((_cargo isEqualType objNull) and {isNull _cargo}) ExitWith {["PARADROP: Non-existing cargo used!"] call BIS_fnc_log};
	If ((_cargo isEqualType "") and {!(isClass (configFile >> "CfgVehicles" >> _cargo))}) ExitWith {["PARADROP: Non-existing classname for cargo used!"] call BIS_fnc_log};
	If (_offsetZ < 2) ExitWith {["PARADROP: Vertical offset is too low for the drop, 2m is minimum."] call BIS_fnc_log};
	If (_parachuteDeployDelay < 0) ExitWith {["PARADROP: Parachute deploy delay cannot be lower than 0 seconds!"] call BIS_fnc_log};
	If ((_parachute isEqualType "") and {!(isClass (configFile >> "CfgVehicles" >> _parachute))}) ExitWith {["PARADROP: Non-existing classname for parachute used!"] call BIS_fnc_log};
	If !(_transport isKindOf "Air") ExitWith {["PARADROP: Only air vehicles can paradrop cargo!"] call BIS_fnc_log};
	If
		!(
			(_cargo isKindOf "Car") or
			(_cargo isKindOf "Tank") or
			(_cargo isKindOf "Air") or
			(_cargo isKindOf "Ship")
		)
	ExitWith {["PARADROP: Only vehicles can be paradropped!"] call BIS_fnc_log};

// If the classname of the cargo is used, create it, otherwise teleport already existing one. "Eject" if from the transport afterwards.
	If (_cargo isEqualType "")
	Then
	{
		_cargo = _cargo createVehicle [(getPosATL _transport select 0), (getPosATL _transport select 1), ((getPosATL _transport select 2) - (_offsetZ))];

	};

	_cargo setPosATL [(getPosATL _transport select 0), (getPosATL _transport select 1), ((getPosATL _transport select 2) - (_offsetZ))];
	_cargo setDir (getDir _transport);
	_cargo setVectorUp [0,0,1];
	_cargo setVelocity [((velocity _transport select 0) * 0.5), ((velocity _transport select 1) * 0.5), ((velocity _transport select 2) * 0.5)];

// Attach the parachute to the cargo
	sleep 0.01;

	_parachute = _parachute createVehicle (getPosATL _cargo);
	_parachute setPos (getPosATL _cargo);
	_parachute attachTo [_cargo,[0,0,0]];

// Delay until the parachute is opened and starts slowing the cargo down
	sleep _parachuteDeployDelay;

// Slow down the cargo until it's falling down at the approximate speed of how the (default) parachute descends
	While
	{
		speed _cargo >= 15
	}
	Do
	{
		_cargo setVelocity [((velocity _cargo select 0) *0.995), ((velocity _cargo select 1) *0.995), ((velocity _cargo select 2) *0.995)];
		sleep 0.001;
	};

	WaitUntil {speed _cargo < 15};

// Deatch the parachute from cargo and attach the cargo to the parachute and let the engine do the rest
	detach _parachute;
	_cargo attachTo [_parachute,[0,0,0]];

// Detach the cargo when above ground or water
	WaitUntil {(getPosATL _cargo select 2 < 0.5) or (getPosASL _cargo select 2 < 0.5)};
	detach _cargo;
