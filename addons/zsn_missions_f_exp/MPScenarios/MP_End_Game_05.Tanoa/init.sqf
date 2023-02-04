missionNamespace setVariable ["BIS_hvt_hqSpeaker", "PHQ"];

setViewDistance 800;
// Delete some trees at helo crash site
{_x hideObjectglobal true} foreach (nearestTerrainObjects [getmarkerpos "marker",["tree"],15]) ;
// Delete bushes at BLUFOR start locations
{_x hideObjectglobal true} foreach (nearestTerrainObjects [getmarkerpos "marker_2",["bush"],10]) ;
{_x hideObjectglobal true} foreach (nearestTerrainObjects [getmarkerpos "marker_3",["bush"],20]) ;

// Let make upload sites indestructible
{_x allowdamage false} foreach (nearestObjects [getmarkerpos "marker_1",["house"],10]);
{_x allowdamage false} foreach (nearestObjects [getmarkerpos "marker_4",["house"],10]);

// Delete some Trees at mortar site
{_x hideObjectglobal true} foreach (nearestTerrainObjects [getmarkerpos "marker_5",["tree"],10]) ;

// Delete Lianas at mortar site
{_x hideObjectglobal true} foreach (nearestTerrainObjects [[10596.1,3646.27,18],[],10]) ;

// Make some space in fence of Moddergat Hotel complex
/*
{_x hideObjectglobal true} foreach (nearestTerrainObjects [getmarkerpos "marker_6",[],3]) ;
{_x hideObjectglobal true} foreach (nearestTerrainObjects [getmarkerpos "marker_7",[],3]) ;
{_x hideObjectglobal true} foreach (nearestTerrainObjects [getmarkerpos "marker_8",[],5]) ;
{_x hideObjectglobal true} foreach (nearestTerrainObjects [[9306.42,4145.59,0.00159979],[],2]) ;
{_x hideObjectglobal true} foreach (nearestTerrainObjects [[9348,4100.31,0.00140429],[],2]) ;
*/
// Moddergat storage junk
{_x hideObjectglobal true} foreach (nearestTerrainObjects [[9449.39,3994.27,0.00143909],[],4]) ;


waitUntil {time > 0};
sleep 60;
enableSentences false;
