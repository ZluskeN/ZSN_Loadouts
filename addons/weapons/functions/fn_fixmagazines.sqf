params ["_unit"];
if (handGunWeapon _unit isKindOf ["hgun_P07_F", configFile >> "CfgWeapons"] && ("16Rnd_9x21_Mag" in magazines _unit)) then {
	_magnumber = {_x == "16Rnd_9x21_Mag"} count magazines _unit;
	_unit removemagazine "16Rnd_9x21_Mag"; 
	_unit addHandgunItem "ZSN_20Rnd_570x28_Mag";
	for "_i" from 2 to _magnumber do {
		_unit removemagazine "16Rnd_9x21_Mag"; 
		_unit addmagazine "ZSN_20Rnd_570x28_Mag";
	};
};