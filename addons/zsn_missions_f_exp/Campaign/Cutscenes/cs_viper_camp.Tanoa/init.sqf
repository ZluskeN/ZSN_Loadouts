_actors = [s1, s2, v1];
{
	_unit = _x;
	{
		_x disableCollisionWith _unit;
	} forEach nearestObjects [_unit, [], 20];
	{
		_x disableCollisionWith _unit;
	} forEach nearestObjects [_unit, [], 20];
	//_unit disableCollisionWith _x;

	{
		_unit disableAI _x;
	} forEach ["MOVE","ANIM","AUTOCOMBAT","AUTOTARGET","TARGET"];
	_unit enableMimics false;

} forEach _actors;

fn_runAnim = {
	sleep 1;
	s1 switchMove "Acts_SyndikatAmbush_A";
	s2 switchMove "Acts_SyndikatAmbush_C";
	v1 switchMove "Acts_SyndikatAmbush_B";
	
	[] spawn {
		sleep 12.2;
		s1 forceWeaponFire [currentWeapon s1, "single"];
	};
	[] spawn {
		sleep 22.6;
		s1 forceWeaponFire [currentWeapon s1, "single"];
	};
	[] spawn {
		sleep 35.8;
		s1 forceWeaponFire [currentWeapon s1, "single"];
	};
};

player addAction ["Run animation", {[] spawn fn_runAnim}];

