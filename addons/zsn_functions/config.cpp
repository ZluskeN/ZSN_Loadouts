
class CfgPatches
{
	class zsn_surrender
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"ace_common"};
	};
};
class CfgFunctions 
{
	class ZSN
	{
		class Functions
		{
			class addarsenal
			{
				file = "\zsn_surrender\functions\fn_addarsenal.sqf";
			};
			class allplayersdead
			{
				file = "\zsn_surrender\functions\fn_allplayersdead.sqf";
			};
			class respawndebug
			{
				file = "\zsn_surrender\functions\fn_respawndebug.sqf";
			};
			class spawnwave_east
			{
				file = "\zsn_surrender\functions\fn_spawnwave_east.sqf";
			};
			class spawnwave_resistance
			{
				file = "\zsn_surrender\functions\fn_spawnwave_resistance.sqf";
			};
			class spawnwave_west
			{
				file = "\zsn_surrender\functions\fn_spawnwave_west.sqf";
			};
			class waverespawn
			{
				file = "\zsn_surrender\functions\fn_waverespawn.sqf";
			};
			class clearweapon
			{
				file = "\zsn_surrender\functions\fn_clearweapon.sqf";
			};
			class loadinventory
			{
				file = "\zsn_surrender\functions\fn_loadinventory.sqf";
			};
			class localplayerinit
			{
				file = "\zsn_surrender\functions\fn_localplayerinit.sqf";
			};
			class safetyfirst
			{
				file = "\zsn_surrender\functions\fn_safetyfirst.sqf";
			};
		};
	};
};