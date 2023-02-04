// Eject from the heli

private ["_heli", "_group","_unit"];
_heli = _this select 0;
_group = _this select 1;

for "_i" from 0 to (count units _group - 1) do
{
	_unit = units _group select _i;
	_unit action ["Eject", _heli];
	unassignVehicle _unit;
	_unit leaveVehicle _heli;
};
