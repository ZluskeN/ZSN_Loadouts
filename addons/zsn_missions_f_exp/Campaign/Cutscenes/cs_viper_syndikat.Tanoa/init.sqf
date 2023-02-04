0 setFog [0.5, 0.05, 50];


_pos = [2957.15,6318.81,0];
_actors = [S1,S2,V1,V2];
_nonActors = allUnits - _actors;
nonActors = _nonActors;


{_x forceSpeed 0} forEach allUnits;

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
	{_x forceSpeed -1} forEach allUnits;
	
	sleep 1;
	S2 playMoveNow "Acts_ViperMeeting_D"; //syndikat sarge
	V2 playMoveNow "Acts_ViperMeeting_B";
	V1 playMoveNow "Acts_ViperMeeting_A"; //killing
	S1 playMoveNow "Acts_ViperMeeting_C"; //killed

	[] spawn {
		sleep 13.42;
		V1 switchMove "Acts_ViperMeeting_A_End"; //killing
		sleep 1.41;
		v1 forceWeaponFire [currentWeapon v1, "single"];
		//make everyone look at the killer
		{_x lookAt V1} forEach allUnits;
	};
};

player addAction ["Run animation", {[] spawn fn_runAnim}];
