// run once
if (isNil {missionNamespace getVariable "BIS_handleRespawnMenu_subjectModified"}) then
{
	missionNamespace setVariable ["BIS_handleRespawnMenu_subjectModified", true];
	
	//preload "Log" subject
	player createDiarySubject ["log", localize "STR_UI_DIARY_TITLE"];

	uiNamespace setVariable ["BIS_handleRespawnMenu_fnc_selectDefaultMenuItem", compileFinal 
	'
		if (!_this) exitWith
		{
			(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbSetCurSel 0;	
			mapAnimAdd [0, 0.05, player];
			mapAnimCommit;
			true
		};
		if (!isNil {uiNamespace getVariable "BIS_handleRespawnMenu_graphicsItemText"}) then
		{
			for "_i" from 0 to lbSize (uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") - 1 do 
			{
				if ((uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbText _i == (uiNamespace getVariable "BIS_handleRespawnMenu_graphicsItemText")) exitWith 
				{
					(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbSetCurSel _i;
					true
				};
				false
			};
		};
	'];
	
	uiNamespace setVariable ["BIS_RscMissionScreen", displayNull];
	uiNamespace setVariable ["BIS_handleRespawnMenu_mapDisplay", findDisplay 12];
	uiNamespace setVariable ["BIS_handleRespawnMenu_introVideoCtrl", (uiNamespace getVariable "BIS_handleRespawnMenu_mapDisplay") displayCtrl 1100];
	uiNamespace setVariable ["BIS_handleRespawnMenu_introGraphicsCtrl", (uiNamespace getVariable "BIS_handleRespawnMenu_mapDisplay") displayCtrl 1101];
	uiNamespace setVariable ["BIS_handleRespawnMenu_introBackgroundCtrl", (uiNamespace getVariable "BIS_handleRespawnMenu_mapDisplay") displayCtrl 1102];
	uiNamespace setVariable ["BIS_handleRespawnMenu_subjectTabCtrl", (uiNamespace getVariable "BIS_handleRespawnMenu_mapDisplay") displayCtrl 1001];
	
	// stop video when map is closed
	addMissionEventHandler ["Map", 
	{
		if (!isNull (uiNamespace getVariable "BIS_RscMissionScreen") && !(_this select 0)) then
		{
			// stop video
			(uiNamespace getVariable "BIS_RscMissionScreen") displayCtrl 1100 ctrlSetText "";
			"BIS_handleRespawnMenu_videoLayer" cutFadeOut 0;
			(uiNamespace getVariable "BIS_handleRespawnMenu_introVideoCtrl") ctrlShow false;
			
			// stop subtitles if running
			terminate (uiNamespace getVariable ["BIS_handleRespawnMenu_subtitlesHandle", scriptNull]);
			titleText ["", "PLAIN"];
			
			// select default menu item
			(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbSetCurSel 0;
		};
	}];

	private _cfgBriefing = getMissionConfig "CfgBriefing";

	// add separator only if there is video or graphics item
	if (!isNull (_cfgBriefing >> "separator") && {isClass (_cfgBriefing >> "introVideo") || isClass (_cfgBriefing >> "introGraphics")}) then
	{
		uiNamespace setVariable ["BIS_handleRespawnMenu_separatorItemText", getText (_cfgBriefing >> "separator")];
		player createDiarySubject ["separator", uiNamespace getVariable "BIS_handleRespawnMenu_separatorItemText"];
		
		// avoid selecting the separator
		(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") ctrlAddEventHandler ["LBSelChanged", 
		{
			if (_this select 0 lbText (_this select 1) == (uiNamespace getVariable "BIS_handleRespawnMenu_separatorItemText")) exitWith 
			{
				_nextItem = (_this select 1) + 1;
				if (_nextItem < lbSize (_this select 0)) then
				{
					_this select 0 lbSetCurSel _nextItem;
				};
			};
			
		}];
	};
	
	if (isClass (_cfgBriefing >> "introVideo")) then
	{
		// adjust countdown depending on the video length
		_introVideoDuration = getNumber (_cfgBriefing >> "introVideo" >> "duration");
		
		(uiNamespace getVariable "BIS_handleRespawnMenu_introVideoCtrl") ctrlSetText getText (_cfgBriefing >> "introVideo" >> "file");
		uiNamespace setVariable ["BIS_handleRespawnMenu_videoItemText", getText (_cfgBriefing >> "introVideo" >> "menuItem")];
		player createDiarySubject ["video", uiNamespace getVariable "BIS_handleRespawnMenu_videoItemText"];
		
		// handle Video click
		(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") ctrlAddEventHandler ["LBSelChanged", 
		{
			if (_this select 0 lbText (_this select 1) == (uiNamespace getVariable "BIS_handleRespawnMenu_videoItemText")) exitWith 
			{
				private _cfgIntroVideo = getMissionConfig "CfgBriefing" >> "introVideo";
				
				(uiNamespace getVariable "BIS_handleRespawnMenu_introBackgroundCtrl") ctrlShow true;
				(uiNamespace getVariable "BIS_handleRespawnMenu_introVideoCtrl") ctrlShow true;

				"BIS_handleRespawnMenu_videoLayer" cutRsc ["RscMissionScreen", "PLAIN"];
				
				(uiNamespace getVariable "BIS_RscMissionScreen") displayCtrl 1100 ctrlSetPosition [0,0,0,0];
				(uiNamespace getVariable "BIS_RscMissionScreen") displayCtrl 1100 ctrlCommit 0;
				(uiNamespace getVariable "BIS_RscMissionScreen") displayCtrl 1100 ctrlAddEventHandler ["VideoStopped", {(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbSetCurSel 0}];
				(uiNamespace getVariable "BIS_RscMissionScreen") displayCtrl 1100 ctrlSetText getText (_cfgIntroVideo >> "file");
				
				// if subtitles exist, play them too
				if (!isNull (_cfgIntroVideo >> "subtitles") && isNull (uiNamespace getVariable ["BIS_handleRespawnMenu_subtitlesHandle", scriptNull])) then
				{
					uiNamespace setVariable ["BIS_handleRespawnMenu_subtitlesHandle", call compile preprocessFileLineNumbers getText (_cfgIntroVideo >> "subtitles")];
				};
			};
			
			// stop video
			(uiNamespace getVariable "BIS_RscMissionScreen") displayCtrl 1100 ctrlSetText "";
			"BIS_handleRespawnMenu_videoLayer" cutFadeOut 0;
			(uiNamespace getVariable "BIS_handleRespawnMenu_introVideoCtrl") ctrlShow false;
			
			// stop subtitles if running
			terminate (uiNamespace getVariable ["BIS_handleRespawnMenu_subtitlesHandle", scriptNull]);
			titleText ["", "PLAIN"];
		}];
		
		(uiNamespace getVariable "BIS_handleRespawnMenu_introVideoCtrl") ctrlAddEventHandler ["VideoStopped", 
		{
			// select item 0 when playback finished
			(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") lbSetCurSel 0;
		}];
		
	};

	if (isClass (_cfgBriefing >> "introGraphics")) then
	{
		(uiNamespace getVariable "BIS_handleRespawnMenu_introGraphicsCtrl") ctrlSetText getText (_cfgBriefing >> "introGraphics" >> "file");

		uiNamespace setVariable ["BIS_handleRespawnMenu_graphicsItemText", getText (_cfgBriefing >> "introGraphics" >> "menuItem")];
		player createDiarySubject ["graphics", uiNamespace getVariable "BIS_handleRespawnMenu_graphicsItemText"];
		
		
		// handle Graphics click
		(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") ctrlAddEventHandler ["LBSelChanged", 
		{
			if (_this select 0 lbText (_this select 1) == (uiNamespace getVariable "BIS_handleRespawnMenu_graphicsItemText")) exitWith 
			{
				(uiNamespace getVariable "BIS_handleRespawnMenu_introBackgroundCtrl") ctrlShow true;
				(uiNamespace getVariable "BIS_handleRespawnMenu_introGraphicsCtrl") ctrlShow true;
			};
		
			(uiNamespace getVariable "BIS_handleRespawnMenu_introGraphicsCtrl") ctrlShow false;
		}];
		
		// subject item does not appear immediately on the list (bug?)
		_showDeployButton spawn 
		{
			waitUntil 
			{
				// select default subject item
				_this call (uiNamespace getVariable "BIS_handleRespawnMenu_fnc_selectDefaultMenuItem");
			};
		};
	};
	
	// hide video and graphics background as other items are selected
	(uiNamespace getVariable "BIS_handleRespawnMenu_subjectTabCtrl") ctrlAddEventHandler ["LBSelChanged", 
	{
		if (ctrlShown (uiNamespace getVariable "BIS_handleRespawnMenu_introBackgroundCtrl")) then
		{
			if !(
				_this select 1 in [uiNamespace getVariable "BIS_handleRespawnMenu_graphicsItemText", uiNamespace getVariable "BIS_handleRespawnMenu_videoItemText"] 
			) 
			then
			{
				(uiNamespace getVariable "BIS_handleRespawnMenu_introBackgroundCtrl") ctrlShow false;
			};
		};
	}];
}
else
{
	// select default subject item
	_showDeployButton call (uiNamespace getVariable "BIS_handleRespawnMenu_fnc_selectDefaultMenuItem");
};