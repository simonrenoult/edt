#include	"define.h"


void	menu_affichage	(void) {

	unsigned int		choixAffichage;

	do {
		system		("clear");
		
		option_sortie(2);
		
		printf		("\n\n\t\tEmploi du temps - AFFICHAGE\n\n");

		printf		("\n\n\t\t|  1  | Afficher l'emploi du temps d'un étudiant");
		printf		("\n\n\t\t|  2  | Afficher l'emploi du temps d'un professeur");
		printf		("\n\n\t\t> ");
		scanf		("%d", &choixAffichage);
		vider_buffer	();
		
	}while (choixAffichage > 3 && choixAffichage != EXIT);
	
	switch (choixAffichage)  {
	case 0:
		menu_principal();
		break;
		
	case 1:
		menu_affichage_eleve();
		break;
	
	case 2:
		affichage_professeur();
		break;
		
	case EXIT:
		menu_principal();
		break;
		
	default:
		printf ("\n\n\t\tErreur de saisie, veuillez recommencer :\n");
		menu_affichage();
		break;	
	}
}

void	menu_affichage_eleve (void) {

	int		choixAffichageEleve;

	do {
		system		("clear");
	
		option_sortie(2);
	
		printf		("\n\n\t\tEmploi du temps - AFFICHAGE ETUDIANT\n\n");
	
		printf		("\n\n\t\t|  1  | Afficher l'emploi d'une promotion");	
		printf		("\n\n\t\t|  2  | Afficher l'emploi d'un TD");
		printf		("\n\n\t\t|  3  | Afficher l'emploi d'un TP");
		printf		("\n\n\t\t> ");
		scanf		("%d", &choixAffichageEleve);
		vider_buffer	();
	
	}while (choixAffichageEleve > 4 && choixAffichageEleve != EXIT);
	
	switch (choixAffichageEleve)  {
	case 1:
		affichage_promotion();
		break;
	
	case 2:
		affichage_td();
		break;
	
	case 3:
		affichage_tp();
		break;
	
	case EXIT:
		menu_principal();
		break;
			
	default:
		printf		("\n\n\t\tErreur de saisie, veuillez recommencer :\n");
		menu_affichage_eleve();
		break;	
	}
}
