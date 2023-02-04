missionNamespace setVariable ["BIS_exp_camp_introTarget", BIS_miller];

{
	private _buildings = nearestTerrainObjects [position _x, ["House"], 150];
	private _building = if (count _buildings > 0) then {_buildings select 0} else {objNull};

	for "_i" from 0 to 3 do
	{
		private _randomDelay = 0.25 + random 0.75;
		private _randomPos = [position _x, 20, random 360] call BIS_fnc_relPos;
		private _shell = "Bo_GBU12_LGB" createVehicle _randomPos;

		sleep _randomDelay;

		[] spawn {sleep 2.5; addCamShake [0.5 + random 0.3, 0.25 + random 0.25, 3 + random 1]};
	};

	if (!isNull _building) then
	{
		_building hideObjectGlobal true;
	};

	deleteVehicle _x;
}
forEach _this;

// Flag
BIS_detonationComplete = true;