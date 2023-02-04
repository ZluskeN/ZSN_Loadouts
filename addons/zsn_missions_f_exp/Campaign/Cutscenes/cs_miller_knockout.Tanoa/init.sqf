hintSilent format ["HOW TO USE: \nAfter selecting Run animation, you have 20 seconds to watch the scene with VTOL, after that you'll hear sound 3 times, and second after that, Viper guard will knock Miller out."];

_actors = [v1];

{
	_x forceSpeed 0;
} forEach allUnits - [player];

{
	_unit = _x;
	{
		_x disableCollisionWith _unit;
	} forEach _actors - [_unit];
	_unit disableCollisionWith _x;

	{
		_unit disableAI _x;
	} forEach ["MOVE","ANIM","AUTOCOMBAT","AUTOTARGET","TARGET"];
	_unit enableMimics false;

} forEach _actors;

//{_x setPos _pos} forEach _actors;


fn_runAnim = {
	{
		_x forceSpeed -1;
	} forEach allUnits - [player];
	BIS_heli engineOn true;
	
	sleep 10;
	BIS_allIn = true;
	
	sleep 10;
	playSound "hint";
	sleep 1;
	playSound "hint";
	sleep 1;
	playSound "hint";
	sleep 1;
	V1 switchMove "acts_miller_knockout"; //syndikat sarge
	
};

player addAction ["Run animation", {[] spawn fn_runAnim}];


//acts_millerPOV
