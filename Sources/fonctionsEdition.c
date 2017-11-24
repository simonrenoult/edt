#include	"define.h"


void insertion	(void) {

	Cours	TempEDT;

	system		("clear");
	
	printf		("\n\n\t\tEmploi du temps - EDITION INSERTION CHAMPS\n\n");		
	
	saisie_annee	  (TempEDT.groupe.annee);	
	saisie_matiere 	  (TempEDT.enseignement.matiere);			
	saisie_enseignant (TempEDT.enseignement.enseignant);	
	saisie_salle	  (TempEDT.enseignement.salle);	
	saisie_jour	  (TempEDT.jour);		
	saisie_debut	  (&TempEDT.heureDebut.heures, &TempEDT.heureDebut.minutes);		
	saisie_fin	  (&TempEDT.heureFin.heures, &TempEDT.heureFin.minutes);
	saisie_type	  (TempEDT.enseignement.type);
		
	verif_type	  (TempEDT.enseignement.type, &TempEDT.groupe.td, &TempEDT.groupe.tp);
	
	contraintes(TempEDT);
	
	EmploiDuTemps[size-1] = TempEDT;
	
	init_EDT(size+1);
}


void	suppression(void) {


	Cours		TempEDT;
	int		i, j;

	system		("clear");
	
	printf		("\n\n\t\tEmploi du temps - EDITION SUPPRESSION CHAMPS\n\n");		
	
	saisie_annee	(TempEDT.groupe.annee);	
	saisie_jour	(TempEDT.jour);	
	saisie_type	(TempEDT.enseignement.type);		
	verif_type	(TempEDT.enseignement.type, &TempEDT.groupe.td, &TempEDT.groupe.tp);	
	saisie_debut	(&TempEDT.heureDebut.heures, &TempEDT.heureDebut.minutes);
		
	for (i=0;i<size;i++) {
	
		if (strcmp(EmploiDuTemps[i].groupe.annee, TempEDT.groupe.annee) == 0 && EmploiDuTemps[i].groupe.td == TempEDT.groupe.td && EmploiDuTemps[i].groupe.tp == TempEDT.groupe.tp && strcmp(EmploiDuTemps[i].jour, TempEDT.jour) == 0  &&  EmploiDuTemps[i].heureDebut.heures == TempEDT.heureDebut.heures && EmploiDuTemps[i].heureDebut.minutes == TempEDT.heureDebut.minutes) 
		{		
			//Trouver l'indice de la case à supprimer
			for (j=i;j<size;j++) {
		
				EmploiDuTemps[j] = EmploiDuTemps[j+1];
			}
		
			init_EDT(size-1);
		}
	}	
}
