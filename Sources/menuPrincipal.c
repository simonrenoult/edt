#include	"define.h"


int menu_principal(void) {

	int	menuSuivant;

	do {
		vider_buffer	();
		system		("clear");
		
		option_sortie	(1);

		printf	("\n\n\t\tEmploi du temps\n\n\n\n");
		
		printf		("\t\t|  1  | AFFICHAGE\n\n");
		printf		("\t\t|  2  | EDITION\n\n");
		printf		("\t\t|  3  | EXTRACTION\n\n");
		printf		("\t\t|  4  | CHARGEMENT\n\n");
		printf		("\t\tQuel est votre choix ?\n\n");
		printf		("\t\t> ");
		scanf		("%d", &menuSuivant);
		vider_buffer	();
		
		switch(menuSuivant) {
		case 1:
			menu_affichage();
			break;
		case 2:
			menu_edition();
			break;
		case 3:
			menu_extraction();
			break;
		case 4:
			menu_chargement();
			break;
		case EXIT:
			return menuSuivant;
			break;
		default:
			printf("\n\n\t\tErreur de saisie, veuillez recommencer :");
			menu_principal();
			break;
		}
	
	}while(1);
	
	return menuSuivant;
}
