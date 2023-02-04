#define CUSTOM_RESPAWN_INVENTORY
#include "\a3\Missions_F_Curator\MPScenarios\MP_ZGM_m11.Altis\initServer.sqf"

[west,"b_t_soldier_f"] call bis_fnc_addrespawninventory;
[east,"o_t_soldier_f"] call bis_fnc_addrespawninventory;
[resistance,"i_c_soldier_para_1_f"] call bis_fnc_addrespawninventory;

//--- Autorifleman
[west,"b_t_soldier_ar_f"] call bis_fnc_addrespawninventory;
[east,"o_t_soldier_ar_f"] call bis_fnc_addrespawninventory;
[resistance,"I_C_Soldier_Para_4_F"] call bis_fnc_addrespawninventory;

//--- Grenadier
[west,"b_t_soldier_gl_f"] call bis_fnc_addrespawninventory;
[east,"o_t_soldier_gl_f"] call bis_fnc_addrespawninventory;
[resistance,"I_C_Soldier_Para_6_F"] call bis_fnc_addrespawninventory;

//--- Marksman (not available, Syndicat doesn't have any)
//[west,"b_t_soldier_m_f"] call bis_fnc_addrespawninventory;
//[east,"o_t_soldier_m_f"] call bis_fnc_addrespawninventory;
//[resistance,""] call bis_fnc_addrespawninventory;

//--- Light AT soldier
[west,"b_t_soldier_lat_f"] call bis_fnc_addrespawninventory;
[east,"o_t_soldier_lat_f"] call bis_fnc_addrespawninventory;
[resistance,"I_C_Soldier_Para_5_F"] call bis_fnc_addrespawninventory;