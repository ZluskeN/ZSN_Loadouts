// Show upload widget, set it to 120 seconds
disableSerialization;
BIS_UploadTime = 0;

// ("RscHvtPhase" call BIS_fnc_rscLayer) cutRsc ["RscHvtPhase", "PLAIN"];
["ShowDownloadProgress",[true,0,4]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);

// Animate the Terminal - open
[BIS_Terminal, 3] call BIS_fnc_DataTerminalAnimate;

sleep 1;

While
	{
		BIS_UploadTime < 1
	}
Do
	{
		["SetProgress",[BIS_UploadTime]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);
        	BIS_UploadTime = BIS_UploadTime + 0.01;
		sleep 1.2;
	};

WaitUntil {BIS_UploadTime >= 1};

BIS_SchematicsUploaded = true;

["HideDownloadProgress"] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);

// Animate the Terminal - close
[BIS_Terminal, 0] call BIS_fnc_DataTerminalAnimate;
