// force sectator noise cancel if respawned
if (missionNamespace getVariable ["BIS_RscRespawnControlsMap_respawnEventHandler_noiseCancel", -1] < 0) then
{
	preloadTitleRsc ["RscNoise", "BLACK"];
	missionNamespace setVariable ["BIS_RscRespawnControlsMap_respawnEventHandler_noiseCancel", player addEventHandler ["Respawn", 
	{
		"SPECTATOR_UNAVAILABLE" cutFadeOut 0;
	}]];
};

// prevent auto respawn hack
removeMissionEventHandler ["EachFrame", missionNamespace getVariable ["BIS_RscRespawnControlsMap_spectateEventHandler_countdown", -1]];

// player list?
missionNamespace setVariable ["BIS_respSpecLists", true];

if (_mode == "spectate") exitWith 
{
	// prevent auto respawn hack
	if (playerrespawntime < 3600) then
	{
		missionNamespace setVariable ["BIS_RscRespawnControlsMap_spectateEventHandler_countdown", addMissionEventHandler ["EachFrame", 
		{
			if (playerRespawnTime > 0) exitWith {};
			
			removeMissionEventHandler ["EachFrame", _thisEventHandler];
			uiNamespace setVariable ["BIS_RscRespawnControls_CountDone", true];
			missionNamespace setVariable ["BIS_RscRespawnControlsMap_spectateEventHandler_countdown", nil];
			setPlayerRespawnTime 99999;
		}]];
	};
	
	private _allowAI = missionNamespace getVariable ["BIS_EGSpectator_allowAiSwitch", true];
	private _groups = ["GetTargetGroups"] call (missionNamespace getVariable "BIS_fnc_EGSpectator");
	private _canSpectate = {{alive _x && {isPlayer _x || _allowAI}} count units _x > 0} count _groups > 0;
	if (!_canSpectate) then {"SPECTATOR_UNAVAILABLE" cutRsc ["RscNoise", "BLACK"]};
	
	{(uiNamespace getVariable _x) ctrlShow false} count [
		"BIS_RscRespawnControlsSpectate_ctrlHeaderRespawnButton",
		"BIS_RscRespawnControlsSpectate_ctrlRoleTitle",
		"BIS_RscRespawnControlsSpectate_ctrlRoleList",
		"BIS_RscRespawnControlsSpectate_ctrlRoleBackground",
		"BIS_RscRespawnControlsSpectate_ctrlLocTitle",
		"BIS_RscRespawnControlsSpectate_ctrlLocList",
		"BIS_RscRespawnControlsSpectate_ctrlLocBackground",
		"BIS_RscRespawnControlsSpectate_ctrlGearTitle",
		"BIS_RscRespawnControlsSpectate_ctrlComboLoadout",
		"BIS_RscRespawnControlsSpectate_ctrlGearBackground",
		"BIS_RscRespawnControlsSpectate_ctrlHeaderBackground",
		"BIS_RscRespawnControlsSpectate_ctrlButtonDetails",
		"BIS_RscRespawnControlsSpectate_ctrlPicturePrimaryWeapon",
		"BIS_RscRespawnControlsSpectate_ctrlPictureSecondaryWeapon",
		"BIS_RscRespawnControlsSpectate_ctrlPictureOptics",
		"BIS_RscRespawnControlsSpectate_ctrlPictureItem",
		"BIS_RscRespawnControlsSpectate_ctrlBackgroundPrimaryWeapon",
		"BIS_RscRespawnControlsSpectate_ctrlBackgroundSecondaryWeapon",
		"BIS_RscRespawnControlsSpectate_ctrlBackgroundOptics",
		"BIS_RscRespawnControlsSpectate_ctrlBackgroundItem",
		"BIS_RscRespawnControlsSpectate_ctrlCounterText",
		"BIS_RscRespawnControlsSpectate_ctrlTeamText",
		"BIS_RscRespawnControlsSpectate_ctrlTicketsText",
		"BIS_RscRespawnControlsSpectate_ctrlCounter",
		"BIS_RscRespawnControlsSpectate_ctrlTeam",
		"BIS_RscRespawnControlsSpectate_ctrlTickets",
		"BIS_RscRespawnControlsSpectate_ctrlAutorespawn",
		"BIS_RscRespawnControlsSpectate_ctrlWarning",
		"BIS_RscRespawnControlsSpectate_ctrlLocDisabled",
		"BIS_RscRespawnControlsSpectate_ctrlRoleDisabled",
		"BIS_RscRespawnControlsSpectate_ctrlLoadoutDisabled"
	];
	
	with uiNamespace do
	{
		[] spawn (missionNamespace getVariable "BIS_fnc_showRespawnMenuPosition");
		[] spawn (missionNamespace getVariable "BIS_fnc_showRespawnMenuInventory");
		["close"] spawn (missionNamespace getVariable "BIS_fnc_showRespawnMenuInventoryDetails")
	};
	
	//override
	true
};
