if (isServer) then {
	addMissionEventHandler ["PreloadFinished", {
		{
			if (handGunWeapon _x isKindOf ["hgun_P07_F", configFile >> "CfgWeapons"] && ("16Rnd_9x21_Mag" in magazines _x)) then {
				_magnumber = {_x == "16Rnd_9x21_Mag"} count magazines _x;
				_x removemagazine "16Rnd_9x21_Mag"; 
				_x addHandgunItem "ZSN_20Rnd_570x28_Mag";
				for "_i" from 2 to _magnumber do {
					_x removemagazine "16Rnd_9x21_Mag"; 
					_x addmagazine "ZSN_20Rnd_570x28_Mag";
				};
			};
			if (primaryWeapon _x == "B_Patrol_Soldier_Leader_weapon_F") then {
				_x addPrimaryWeaponItem "muzzle_snds_M";
			};
			if (primaryWeapon _x == "B_Patrol_Soldier_MachineGunner_weapon_F") then {
				_x addPrimaryWeaponItem "muzzle_snds_H_MG_blk_F";
				_x addPrimaryWeaponItem "optic_Holosight_khk_F";
			};
		} forEach allUnits;
	}];
};