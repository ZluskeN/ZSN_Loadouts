// Name this script
scriptName "randomizeBossSave.sqf";

// Campaign common includes
#include "\A3\Missions_F_Exp\Campaign\commonDefines.inc"

// Parameters
// @param: The list of positions in which boss can spawn in format [[<positionASL>, <direction>], [<positionASL>, <direction>]]
params
[
	["_positions", [], [[]]]
];

// Store to profile
profileNamespace setVariable ["BIS_coop_campaign_m07_savedRandomBossPositions", _positions];
saveProfileNamespace;