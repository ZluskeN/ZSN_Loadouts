// TODO: Add new Stinger AA missile into the list below after it's ingame (if it's not "M_NAAL_F")

	BIS_Gunship addEventHandler ["HitPart",
		{(If
			(((_this select 0 select 6 select 4) in ["M_Titan_AA","M_NAAL_F"]) or
			(damage BIS_Gunship > 0.75)))
		Then {{_x setdamage 1} forEach (units BIS_grpGunship)}

		}];

// First missile + reveal Raider 3 team
	WaitUntil {BIS_IncomingMissiles == 1};
	If (BIS_Gunship knowsAbout player < 1) then {BIS_Gunship reveal [player,1]};

// Second missile
	WaitUntil {BIS_IncomingMissiles == 2};
	If (BIS_Gunship knowsAbout player < 2) then {BIS_Gunship reveal [player,2]};

// Third missile
	WaitUntil {BIS_IncomingMissiles == 3};
	If (BIS_Gunship knowsAbout player < 3) then {BIS_Gunship reveal [player,3]};
