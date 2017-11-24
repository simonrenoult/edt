#include"define.h"


void	choix_extraction	(int choix){

	if (choix == 1) { 
		
		FILE *pt_EmploiDuTemps 	= NULL;
		pt_EmploiDuTemps	= fopen("bibliotheque/edt_general.csv", "a");
		
		if (pt_EmploiDuTemps != NULL) type_extraction(pt_EmploiDuTemps, 0);
		else printf("Erreur à l'ouverture du fichier");
			
		fclose	(pt_EmploiDuTemps);
	}
	else if (choix == 2) {
	
		FILE *pt_Professeur 	= NULL;
		pt_Professeur		= fopen("bibliotheque/edt_professeur.csv", "a");
		
		if (pt_Professeur != NULL) type_extraction(pt_Professeur, 1);
		else printf("Erreur à l'ouverture du fichier");
				
		fclose	(pt_Professeur);
	}
	else if (choix == 3) {
	
		FILE *pt_Promotion 	= NULL;
		pt_Promotion		= fopen("bibliotheque/edt_promotion.csv", "a");
		
		if (pt_Promotion != NULL) type_extraction(pt_Promotion, 2);
		else printf("Erreur à l'ouverture du fichier\n\n");
		
		fclose	(pt_Promotion);
	}
	else if (choix == 4) {
	
		FILE *pt_TD 	= NULL;
		pt_TD		= fopen("bibliotheque/edt_td.csv", "a");
		
		if (pt_TD != NULL) type_extraction(pt_TD, 3);
		else printf("Erreur à l'ouverture du fichier");
		
		fclose	(pt_TD);
	}	
	else if (choix == 5) {
	
		FILE *pt_TP 	= NULL;
		pt_TP		= fopen("bibliotheque/edt_tp.csv", "a");
		
		if (pt_TP != NULL) type_extraction(pt_TP, 4);
		else printf("Erreur à l'ouverture du fichier");
		
		fclose	(pt_TP);
	}
	else if (choix == 6) {
	
		FILE *pt_backup	= NULL;
		pt_backup	= fopen("bibliotheque/edt_backup.csv", "w");
		
		if (pt_backup != NULL) type_extraction(pt_backup, 5);
		else printf("Erreur à l'ouverture du fichier void choix_extraction(int) : 6");
		
		fclose	(pt_backup);	
	}
}


void	type_extraction	(FILE *pt_fichier, int val) {

	Cours	TempEDT;
	int	i;

	switch (val) {
	case 0:
		for(i=0;i<size-1;i++) extraction_edt(pt_fichier, i);
		break;
	case 1:
		saisie_enseignant (TempEDT.enseignement.enseignant);
		
		for(i=0;i<size-1;i++) {
			if(strcmp(TempEDT.enseignement.enseignant, EmploiDuTemps[i].enseignement.enseignant) == 0){	
				extraction_edt	(pt_fichier, i);
			}
		}
		break;
	
	case 2:
		saisie_annee	(TempEDT.groupe.annee);
		
		for(i=0;i<size-1;i++) {
			if(TempEDT.groupe.annee == EmploiDuTemps[i].groupe.annee) {
				extraction_edt	(pt_fichier, i);
			}
		}	
		break;
	
	case 3:
		saisie_annee	(TempEDT.groupe.annee);
		saisie_td	(&TempEDT.groupe.td);	
		
		for(i=0;i<size-1;i++) {
			if(strcmp(TempEDT.groupe.annee, EmploiDuTemps[i].groupe.annee) == 0 && ((TempEDT.groupe.td == EmploiDuTemps[i].groupe.td) || EmploiDuTemps[i].groupe.td == 0)) {
				extraction_edt	(pt_fichier, i);
			}
		}			
		break;
		
	case 4:
		saisie_annee	(TempEDT.groupe.annee);
		saisie_td	(&TempEDT.groupe.td);
		saisie_tp	(&TempEDT.groupe.tp, TempEDT.groupe.td);
		
				
		for(i=0;i<size-1;i++) {
			if(strcmp(TempEDT.groupe.annee, EmploiDuTemps[i].groupe.annee) == 0 && ((TempEDT.groupe.td == EmploiDuTemps[i].groupe.td) || EmploiDuTemps[i].groupe.td == 0) && ((TempEDT.groupe.tp == EmploiDuTemps[i].groupe.tp) || EmploiDuTemps[i].groupe.tp == 0)) {
				extraction_edt	(pt_fichier, i);
			}
		}			
		break;
	
	case 5:
		for(i=0;i<size-1;i++) {
			extraction_edt	(pt_fichier, i);
		}					
		break;
		
	default:
		printf("### ERREUR void type_extraction (int)");
		break;
	
	}
}


void	extraction_edt 	(FILE *pt_fichier, int i) {

		fprintf(pt_fichier, "%s\t%s\t%dh%02d\t%dh%02d\t%s\t%d\t%d\t%s\t%s\t%s\n", EmploiDuTemps[i].groupe.annee, EmploiDuTemps[i].jour, EmploiDuTemps[i].heureDebut.heures, EmploiDuTemps[i].heureDebut.minutes, EmploiDuTemps[i].heureFin.heures, EmploiDuTemps[i].heureFin.minutes, EmploiDuTemps[i].enseignement.type, EmploiDuTemps[i].groupe.td, EmploiDuTemps[i].groupe.tp, EmploiDuTemps[i].enseignement.matiere, EmploiDuTemps[i].enseignement.enseignant, EmploiDuTemps[i].enseignement.salle);
			
}
