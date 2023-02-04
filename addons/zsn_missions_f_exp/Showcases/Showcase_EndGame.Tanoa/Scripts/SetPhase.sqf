// Set correct mission phase
	private ["_phase"];
	_phase = _this;

	disableSerialization;
	If (_phase == 0) Then {["SetStage",[0]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);};
	If (_phase == 1) Then {["SetStage",[1]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);};
	If (_phase == 2) Then {["SetStage",[2]] call (uiNamespace getVariable ["RscHvtPhase_script", {}]);};
