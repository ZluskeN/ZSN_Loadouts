BIS_fnc_camp_unlockAchievement = {
	if (getStatValue "ExpFirestarter" == 0) then {
		0 = setStatValue ["ExpFirestarter", 1];
		"Achievement successfully unlocked (ExpFirestarter)" call BIS_fnc_log;
	} else {
		"Achievement (ExpFirestarter) already unlocked" call BIS_fnc_log;
	};
};