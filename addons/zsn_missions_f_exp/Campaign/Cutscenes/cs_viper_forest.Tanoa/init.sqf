BIS_nearMove = false;

0 setFog [0.5, 0.05, 50];

hint "How to use: After running the animation, Miller is looking down to the Warlock location for 5 seconds. Then he notices noise, and look to his right. He see one Viper in the distance, and more are to come.";

_pos = getPos v1;
_actors = [v1,V2];

{
	_x disableAI "move";
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
	sleep 2;
	{
		_x enableIRLasers true;
		_x action ["IRLaserOn", _x];
	} forEach (allUnits - [v1,v2]);

	{
	_x enableAI "move";
	} forEach allUnits - [player];
	
	sleep 8;
	BIS_nearMove = true;
	sleep 6;
	
	V1 switchMove "viper_runLoop"; 
	V2 switchMove "viperSgt_runLoop";
	{
		_x enableIRLasers true;
		_x action ["IRLaserOn", _x];
	} forEach [v1,v2];

	sleep 2;
	V1 playMove "viper_crouchIn"; 
	V2 playMove "viperSgt_crouchIn";
	sleep 1;
	V1 playMove "viper_crouchLoop"; 
	V2 playMove "viperSgt_crouchLoop";
	sleep 1;
	V1 playMove "viper_crouchOut"; 
	V2 playMove "viperSgt_crouchLoop";
	sleep 1;
	V1 playMove "viper_runLoop";
	V2 playMove "viperSgt_runLoop";
};

player addAction ["Run animation", {[] spawn fn_runAnim}];
