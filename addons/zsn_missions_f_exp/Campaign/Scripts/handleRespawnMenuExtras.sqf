#include "\A3\ui_f\hpp\defineResinclDesign.inc"

//_currentTaskText = "Current Task"; //ToDo: Localize
//_allTasksText = "All Tasks"; //ToDo: Localize

// get difficulty settings revive
_reviveSetting = missionNamespace getVariable ["#xdrev", 1];
_reviveOption = toUpper localize ([
	"STR_A3_RscDisplayCampaignLobby_Always",
	"STR_A3_RscDisplayCampaignLobby_FirstAidKit",
	"STR_A3_RscDisplayCampaignLobby_MedicOnly",
	"STR_A3_RscDisplayCampaignLobby_Disabled"
] select _reviveSetting);
_reviveOptionColor = [
	CAMPAIGN_LOBBY_COLOR_BLUE, 
	CAMPAIGN_LOBBY_COLOR_YELLOW,
	CAMPAIGN_LOBBY_COLOR_ORANGE,
	CAMPAIGN_LOBBY_COLOR_RED
] select _reviveSetting;

// get difficulty settings respawn
_respawnSetting = missionNamespace getVariable ["#xdres", 1];
_respawnOption = toUpper localize ([
	"STR_A3_RscDisplayCampaignLobby_Always",
	"STR_A3_RscDisplayCampaignLobby_Limited",
	"STR_A3_RscDisplayCampaignLobby_Disabled"
] select _respawnSetting);
_respawnOptionColor = [
	CAMPAIGN_LOBBY_COLOR_BLUE, 
	CAMPAIGN_LOBBY_COLOR_ORANGE,
	CAMPAIGN_LOBBY_COLOR_RED
] select _respawnSetting;

// disabled respawn, set max tickets to 0
if (_respawnSetting == 2) then {_maxRespawnTickets = 0};

_topTipLeftText = "";
_topTipRightText = "";
_reviveTitle = localize "STR_A3_Revive"; // REVIVE
_respawnTitle = localize "STR_A3_RscRespawnControls_Respawn"; // RESPAWN
_controlsGroupCtrl = uiNamespace getVariable "BIS_RscRespawnControlsMap_ctrlControlsGroup";

// top tip
_topTipBackgroundCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_OVERHEADERBACKGROUND;
_topTipLeftCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_OVERHEADERLEFT;
_topTipRightCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_OVERHEADERRIGHT;
_topTipBackgroundCtrl ctrlShow _showDeployButton;
_topTipRightCtrl ctrlShow _showDeployButton;
_topTipLeftCtrl ctrlShow _showDeployButton;

call
{
	if (_showDeployButton) exitWith
	{
		// Compose translatable strings
		_reviveTipOption = [
			format [localize "STR_A3_handleRespawnMenuExtras_Revive1", "<t color='#%1' font='PuristaMedium'>", "</t>"],
			format [localize "STR_A3_handleRespawnMenuExtras_Revive2", "<t color='#%1' font='PuristaMedium'>", "</t>"],
			format [localize "STR_A3_handleRespawnMenuExtras_Revive3", "<t color='#%1' font='PuristaMedium'>", "</t>"],
			format [localize "STR_A3_handleRespawnMenuExtras_Revive4", "<t color='#%1' font='PuristaMedium'>", "</t>"]
		];
		
		_respawnTipOption = [
			format [localize "STR_A3_handleRespawnMenuExtras_Respawn1", "<t color='#%1' font='PuristaMedium'>", "</t>"],
			format [localize "STR_A3_handleRespawnMenuExtras_Respawn2", "<t color='#%1' font='PuristaMedium'>", "</t>", "<t color='#%1' font='PuristaMedium'>", "%3"],
			format [localize "STR_A3_handleRespawnMenuExtras_Respawn3", "<t color='#%1' font='PuristaMedium'>", "</t>"]
		];
		
		{
			private _strings = [];
			private _align = "left";
			if (_forEachIndex == 1) then {_align = "right"};
			
			// Add remaining formatting
			{_strings pushBack ("<t align='" + _align + "' color='#%2' font='PuristaMedium'>" + _x + "</t>")} forEach _x;
			
			// Store in correct arrays
			if (_forEachIndex == 0) then {_reviveTipOption = _strings} else {_respawnTipOption = _strings};
		} forEach [_reviveTipOption, _respawnTipOption];
		
		// deploy
		_reviveTipOption = _reviveTipOption select _reviveSetting;
		_respawnTipOption = _respawnTipOption select _respawnSetting;
		
		_topTipLeftCtrl ctrlSetStructuredText parseText format 
		[
			_reviveTipOption, 
			ALPHA_75 + _reviveOptionColor, 
			"AAFFFFFF"
		];
		
		_topTipRightCtrl ctrlSetStructuredText parseText format 
		[
			_respawnTipOption, 
			ALPHA_75 + _respawnOptionColor, 
			"AAFFFFFF", 
			_maxRespawnTickets
		];
	};
};

// revive info
_reviveInfoCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_REVIVEINFO;
_reviveInfoCtrl ctrlSetBackgroundColor [0.6,0.6,0.6,0.6];
_reviveInfoCtrl ctrlShow true;

_reviveInfoTitleCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_REVIVEINFO_TITLE;
_reviveInfoTitleCtrl ctrlSetStructuredText parseText format 
[
	"<t align='right' shadow='0' font='PuristaMedium'><t size='1.2'>%1</t></t>", 
	toUpper _reviveTitle
];
_reviveInfoTitleCtrl ctrlShow true;

_reviveInfoOptionCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_REVIVEINFO_OPTION;
_reviveInfoOptionCtrl ctrlSetStructuredText parseText format 
[
	"<t align='right' shadow='0' font='PuristaMedium'><t size='0.9' color='#%2'>%1</t></t>", 
	toUpper _reviveOption,
	ALPHA_75 + _reviveOptionColor
];
_reviveInfoOptionCtrl ctrlShow true;

// respawn info
_respawnInfoCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_RESPAWNINFO;
_respawnInfoCtrl ctrlSetBackgroundColor [0.6,0.6,0.6,0.6];
_respawnInfoCtrl ctrlShow true;

_respawnInfoTitleCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_RESPAWNINFO_TITLE;
_respawnInfoTitleCtrl ctrlSetStructuredText parseText format 
[
	"<t align='left' shadow='0' font='PuristaMedium'><t size='1.2'>%1</t></t>",
	toUpper _respawnTitle
];
_respawnInfoTitleCtrl ctrlShow true;

_respawnInfoOptionCtrl = _controlsGroupCtrl controlsGroupCtrl IDC_RSCRESPAWNCONTROLS_RESPAWNINFO_OPTION;
_respawnInfoOptionCtrl ctrlSetStructuredText parseText format 
[
	"<t align='left' shadow='0' font='PuristaMedium'><t size='0.9' color='#%2'>%1</t></t>",
	toUpper _respawnOption,
	ALPHA_75 + _respawnOptionColor
];
_respawnInfoOptionCtrl ctrlShow true;
