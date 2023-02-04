// Give players a chance to bring the gunship down
_null = BIS_Gunship spawn {

	While {canMove BIS_Gunship}
	Do
		{
			BIS_Gunship setCombatMode "Blue";
			sleep (10 + random 5);
			BIS_Gunship setCombatMode "Red";
			sleep (2 + random 2);
		};
};
/*
_null = BIS_Gunship spawn {

	While {canMove BIS_Gunship}
	Do
		{
			BIS_Gunship removeMagazineTurret ["192Rnd_CMFlare_Chaff_Magazine",[-1]];
			sleep (2 + random 2);
			BIS_Gunship addMagazineTurret ["192Rnd_CMFlare_Chaff_Magazine",[-1]];
			sleep (5 + random 5);
		};
};
*/
