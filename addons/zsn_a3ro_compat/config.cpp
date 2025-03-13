////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_A3RO_Compat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3RO_ACEAX_ACEBI_Edits"};
		skipWhenMissingDependencies = 1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_65_TI_blk_F = 1;
		muzzle_snds_65_TI_ghex_F = 1;
		muzzle_snds_65_TI_hex_F = 1;
	};
};
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_65 : asdg_MuzzleSlot_762
{
	class compatibleItems
	{
		muzzle_snds_65_TI_blk_F = 0;
		muzzle_snds_65_TI_ghex_F = 0;
		muzzle_snds_65_TI_hex_F = 0;
	};
};
class cfgWeapons
{
	class muzzle_snds_M;
	class muzzle_snds_65_TI_blk_F: muzzle_snds_M
	{
		descriptionShort = "Fictional Sound Suppressor<br />Calibre: 5.56x45mm";
		displayName = "HX 556";
	};
	class muzzle_snds_65_TI_hex_F: muzzle_snds_65_TI_blk_F
	{
		displayName = "HX 556 (Hex)";
	};
	class muzzle_snds_65_TI_ghex_F: muzzle_snds_65_TI_blk_F
	{
		displayName = "HX 556 (Green Hex)";
	};
};
