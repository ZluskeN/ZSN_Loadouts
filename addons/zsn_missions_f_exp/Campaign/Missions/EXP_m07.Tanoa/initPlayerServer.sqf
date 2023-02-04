params ["_player"];

_player addEventHandler [
	"Fired",
	{	
		if (BIS_startDefense) then {
			// Only execute if the defense was started
			params ["_unit", "_weapon"];
			
			if (_weapon in [primaryWeapon _unit, handgunWeapon _unit, secondaryWeapon _unit]) then {
				// Reveal player to first attackers
				{_x reveal [_unit, 4]} forEach BIS_viper1;
				
				// Reveal players to QRF as well
				if (BIS_deviceDisarmed) then {{_x reveal [_unit, 4]} forEach BIS_viper3};
			};
		};
	}
];