if (isServer) then {
	{
		_handgun = handGunWeapon _x;
		if (_handgun isKindOf ["hgun_P07_F", configFile >> "CfgWeapons"] && ("16Rnd_9x21_Mag" in magazines _x)) then {
			_magnumber = {_x == "16Rnd_9x21_Mag"} count magazines _x;
			_x removemagazine "16Rnd_9x21_Mag"; 
			_x addHandgunItem "ZSN_20Rnd_570x28_Mag";
			for "_i" from 2 to _magnumber do {
				_x removemagazine "16Rnd_9x21_Mag"; 
				_x addmagazine "ZSN_20Rnd_570x28_Mag";
			};
		};
	} forEach allUnits;
};