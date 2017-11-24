#include 	<stdio.h>
#include	<string.h>

#define 	LG_MAX	200
#define		EXIT	"exit"
int main (){

	FILE *pt_extraction	= NULL;
	pt_extraction		= fopen ("Extraction.edt", "a+");
	char chaine[LG_MAX]	= "";
	
	
	if (pt_extraction != NULL) {
	
	
		do {
			printf	("De quel professeur voulez-vous extraire l'emploi du temps ?\n");
			fgets	(chaine, LG_MAX, stdin);
			clear	(chaine);

			
			if ((strcmp(EXIT, chaine)) != 0) {
			
				fprintf(pt_extraction, "%s\t%s\t%s\t%s\t\n", Cours.heureDebut, Cours.heureFin, Cours.Enseignement.matiere, Cours.Enseignement.salle, Cours.Enseignement.type);
												
			}
				
		} while	((strcmp(EXIT, chaine)) !=0);
				
				
		/*printf	("Veuillez choisir un enseignant parmis la liste :\n");
				
		 while (fgets(chaine, LG_MAX, pt_fichier) != NULL) {
		
			fgets	(chaine, LG_MAX, pt_fichier);
			printf	("%s\t", chaine);
		
		}*/
		
		fclose(pt_extraction);
		
	}
	else printf("Erreur lors de l'ouverture du fichier");
		
	return 0;

}
