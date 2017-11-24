#include	"define.h"


void	affichage_promotion	(void) {

	Cours		TempEDT;
	int		i;
	
	system		("clear");
	
	option_sortie	(2);
	printf		("\n\n\t\tEmploi du temps - AFFICHAGE PROMOTION :\n\n");
	
	saisie_annee	(TempEDT.groupe.annee);
	
	printf	("\n\n\t\tVoici votre emploi du temps pour la semaine :");	
		
	for (i=0;i<size;i++) {
	
		if (strcmp(TempEDT.groupe.annee, EmploiDuTemps[i].groupe.annee) == 0) {
		
			printf("\n\n\t\t+-----------------------------------------------+");
			printf("\n\t\tEDT de la promotion %s", EmploiDuTemps[i].groupe.annee);
			printf("\n\t\tJour : %s", EmploiDuTemps[i].jour);
			printf("\n\t\tType cours : %s", EmploiDuTemps[i].enseignement.type);
			printf("\n\t\tTD : %d", EmploiDuTemps[i].groupe.td);	
			printf("\n\t\tTP : %d.%d", EmploiDuTemps[i].groupe.td, EmploiDuTemps[i].groupe.tp);
			printf("\n\t\tMatière : %s", EmploiDuTemps[i].enseignement.matiere);
			printf("\n\t\tEnseignant : %s", EmploiDuTemps[i].enseignement.enseignant);
			printf("\n\t\tSalle : %s", EmploiDuTemps[i].enseignement.salle);
			printf("\n\t\tHeure Début : %d:%02d", EmploiDuTemps[i].heureDebut.heures, EmploiDuTemps[i].heureDebut.minutes);
			printf("\n\t\tHeure Fin : %d:%02d",EmploiDuTemps[i].heureFin.heures, EmploiDuTemps[i].heureFin.minutes);
			printf("\n\t\t+-----------------------------------------------+");
			
		} 	
	}
	
	printf	("\n\n\t\tAppuez sur Entrée pour continuer ");
	getchar();

}


void	affichage_td	(void) {

	Cours		TempEDT;
	int		i;

	system		("clear");
	
	option_sortie	(2);	
	printf		("\n\n\t\tEmploi du temps - AFFICHAGE TD :\n\n");
	
	saisie_annee	(TempEDT.groupe.annee);
	saisie_td	(&TempEDT.groupe.td);
	
	printf	("\n\n\t\tVoici votre emploi du temps pour la semaine :");				
				
	for (i=0;i<size;i++) {
	
		if (strcmp(TempEDT.groupe.annee, EmploiDuTemps[i].groupe.annee) == 0 && ((TempEDT.groupe.td == EmploiDuTemps[i].groupe.td) || EmploiDuTemps[i].groupe.td == 0)) {
		
			printf("\n\n\t\t+-----------------------------------------------+");
			printf("\n\t\tEDT du TD %d, promotion %s", EmploiDuTemps[i].groupe.td, EmploiDuTemps[i].groupe.annee);
			printf("\n\t\tJour : %s", EmploiDuTemps[i].jour);
			printf("\n\t\tType cours : %s", EmploiDuTemps[i].enseignement.type);
			printf("\n\t\tMatière : %s", EmploiDuTemps[i].enseignement.matiere);
			printf("\n\t\tEnseignant : %s", EmploiDuTemps[i].enseignement.enseignant);
			printf("\n\t\tSalle : %s", EmploiDuTemps[i].enseignement.salle);
			printf("\n\t\tHeure Début : %d:%02d", EmploiDuTemps[i].heureDebut.heures, EmploiDuTemps[i].heureDebut.minutes);
			printf("\n\t\tHeure Fin : %d:%02d",EmploiDuTemps[i].heureFin.heures, EmploiDuTemps[i].heureFin.minutes);
			printf("\n\t\t+-----------------------------------------------+");
		} 
		
	}
	
	printf	("\n\n\t\tAppuez sur Entrée pour continuer ");
	getchar();

}


void	affichage_tp	(void) {

	Cours		TempEDT;
	int		i;
	
	system		("clear");
	
	option_sortie	(2);	
	printf		("\n\n\t\tEmploi du temps - AFFICHAGE TP :\n\n");
	
	saisie_annee	(TempEDT.groupe.annee);
	saisie_td	(&TempEDT.groupe.td);
	saisie_tp	(&TempEDT.groupe.tp, TempEDT.groupe.td);
	
	printf	("\n\n\t\tVoici votre emploi du temps pour la semaine :");
				
	for (i=0;i<size;i++) {
	
		if (strcmp(TempEDT.groupe.annee, EmploiDuTemps[i].groupe.annee) == 0 && ((TempEDT.groupe.td == EmploiDuTemps[i].groupe.td) || EmploiDuTemps[i].groupe.td == 0) && ((TempEDT.groupe.tp == EmploiDuTemps[i].groupe.tp) || EmploiDuTemps[i].groupe.tp == 0)) {
		
			printf("\n\n\t\t+-----------------------------------------------+");
			printf("\n\t\tEDT du TP %d.%d, promotion %s", EmploiDuTemps[i].groupe.td, EmploiDuTemps[i].groupe.tp, EmploiDuTemps[i].groupe.annee);
			printf("\n\t\tJour : %s", EmploiDuTemps[i].jour);
			printf("\n\t\tType cours : %s", EmploiDuTemps[i].enseignement.type);
			printf("\n\t\tMatière : %s", EmploiDuTemps[i].enseignement.matiere);
			printf("\n\t\tEnseignant : %s", EmploiDuTemps[i].enseignement.enseignant);
			printf("\n\t\tSalle : %s", EmploiDuTemps[i].enseignement.salle);
			printf("\n\t\tHeure Début : %d:%02d", EmploiDuTemps[i].heureDebut.heures, EmploiDuTemps[i].heureDebut.minutes);
			printf("\n\t\tHeure Fin : %d:%02d",EmploiDuTemps[i].heureFin.heures, EmploiDuTemps[i].heureFin.minutes);
			printf("\n\t\t+-----------------------------------------------+");
		} 
		
	}
	
	printf	("\n\n\t\tAppuez sur Entrée pour continuer ");
	getchar();
}


void	affichage_professeur	(void){

	Cours		TempEDT;
	int		i;
		
	system		("clear");
	
	option_sortie	(2);			
	printf		("\n\n\t\tEmploi du temps - AFFICHAGE PROFESSEUR :");
	
	saisie_enseignant(TempEDT.enseignement.enseignant);
				
	printf		("\n\n\t\tVoici votre emploi du temps pour la semaine :");	

	for (i=0;i<size;i++) {
	
		if (strcmp(TempEDT.enseignement.enseignant, EmploiDuTemps[i].enseignement.enseignant) == 0) {
		
			printf("\n\n\t\t+-----------------------------------------------+");
			printf("\n\t\tEDT de l'enseignant %s", TempEDT.enseignement.enseignant);
			printf("\n\t\tJour : %s", EmploiDuTemps[i].jour);
			printf("\n\t\tType cours : %s", EmploiDuTemps[i].enseignement.type);
			printf("\n\t\tMatière : %s", EmploiDuTemps[i].enseignement.matiere);
			printf("\n\t\tSalle : %s", EmploiDuTemps[i].enseignement.salle);
			printf("\n\t\tHeure Début : %d:%02d", EmploiDuTemps[i].heureDebut.heures, EmploiDuTemps[i].heureDebut.minutes);
			printf("\n\t\tHeure Fin : %d:%02d",EmploiDuTemps[i].heureFin.heures, EmploiDuTemps[i].heureFin.minutes);
			printf("\n\t\t+-----------------------------------------------+");
		} 
		
	}
	
	printf	("\n\n\t\tAppuez sur Entrée pour continuer ");
	getchar();

}
