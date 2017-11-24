#include	"define.h"


void import_edt (char fichier[], char type[]) {

	Cours	TempEDT;
	
	int	i = size-1;
	char	tempEOF[1000];
		
	FILE* pt_fichier = NULL;
	
	pt_fichier = fopen(fichier, type);
	
	if (pt_fichier != NULL) {
	
		while (fgets(tempEOF, sizeof(tempEOF), pt_fichier)!= NULL) {
	
			sscanf(tempEOF, "%s%s%dh%d%dh%d%s%d%d%s%s%s", TempEDT.groupe.annee, TempEDT.jour, &TempEDT.heureDebut.heures, &TempEDT.heureDebut.minutes, &TempEDT.heureFin.heures, &TempEDT.heureFin.minutes, TempEDT.enseignement.type, &TempEDT.groupe.td, &TempEDT.groupe.tp, TempEDT.enseignement.matiere, TempEDT.enseignement.enseignant, TempEDT.enseignement.salle);
					
			contraintes	(TempEDT);	
			
			EmploiDuTemps[i] = TempEDT;
			
			init_EDT(size+1);
			i++;
		}
		
		fclose(pt_fichier);	
	}	
	else {
		printf ("### Erreur à l'ouverture ###");
		getchar();
		menu_principal();
	}
}
