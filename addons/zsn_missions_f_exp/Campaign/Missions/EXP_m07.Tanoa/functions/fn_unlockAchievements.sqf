"Attempt to unlock achievement ExpWarlockDown started" call BIS_fnc_log;

if (getStatValue "ExpWarlockDown" == 0) then
{
	setStatValue ["ExpWarlockDown", 1];
	"Achievement successfully unlocked (ExpWarlockDown)" call BIS_fnc_log;
}
else
{
	"Achievement (ExpWarlockDown) already unlocked" call BIS_fnc_log;
};