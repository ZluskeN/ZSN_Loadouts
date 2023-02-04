execVM "functions\convoy.sqf"; //script controlling Syndikat convoy
execVM "functions\detection.sqf"; //check detection of players
execVM "functions\supportTeamRetreat.sqf"; //check when to order support team to retreat
execVM "functions\tweak_AI.sqf";	//balancing AI in the mission
execVM "functions\dialogTriggers.sqf";	//balancing AI in the mission

// custom loadouts
{[missionNamespace, _x] call BIS_fnc_addRespawnInventory} forEach ["Rifleman_m03", "Grenadier_m03", "MachineGunner_m03", "Medic_m03", "Engineer_m03", "RiflemanAT_m03", "Scout_m03", "Sharpshooter_m03", "Saboteur_m03"];

// Set universal level of fog
0 setFog [0.7, 0.01, 80];
0 setRain 0.2;
300 setRain 1;

// Add respawn
BIS_respawn0 = [
	WEST,
	"BIS_r0",
	localize "STR_A3_ApexProtocol_marker_Insertion"
] call BIS_fnc_addRespawnPosition;