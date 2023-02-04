// OnLoad script

sleep 1;

// Set correct mission phase
	disableSerialization;
        ("RscHvtPhase" call BIS_fnc_rscLayer) cutRsc ["RscHvtPhase", "PLAIN"];
	if (BIS_Phase == 0) then {["SetStage",[0]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);};
	if (BIS_Phase == 1) then {["SetStage",[1]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);};
	if ((BIS_Phase == 2) and !(BIS_TerminalStart) and !(BIS_SchematicsUploaded)) then {["SetStage",[2]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);};
	if ((BIS_Phase == 2) and (BIS_TerminalStart) and !(BIS_SchematicsUploaded)) then {["SetStage",[2]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]); ["ShowDownloadProgress",[true,0,4]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);};
	if ((BIS_Phase == 2) and (BIS_SchematicsUploaded)) then {["SetStage",[2]] call (uiNamespace getVariable ["RscHvtPhase_script", {}])};
