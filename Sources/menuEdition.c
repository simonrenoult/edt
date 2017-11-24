#include	"define.h"


void	menu_edition	(void) {

	unsigned int		choixEdition;

	do {
		system		("clear");
		
		option_sortie(2);
		
		printf		("\n\n\t\tEmploi du temps - EDITION\n\n");
	
		printf		("\n\n\t\t| 1 | Insertion d'un champs");	
		printf		("\n\n\t\t| 2 | Suppression d'un champs");
		printf		("\n\n\t\t| 3 | Suppression de tous les champs");		
		printf		("\n\n\t\t> ");	
		scanf		("%d", &choixEdition);
		vider_buffer	();
		
	}while (choixEdition > 4 && choixEdition != EXIT);
	
	switch (choixEdition)  {
	case 1:
		insertion();
		break;
		
	case 2:
		suppression();
		break;
	case 3:
		confirmation();
		EmploiDuTemps = calloc(size, sizeof(Cours)); 
		init_EDT(1);
		break;
	case EXIT:
		menu_principal();
		break;
	default:
		printf		("\n\n\t\tErreur de saisie, veuillez recommencer :\n");
		menu_edition();
		break;	
	}
	
}
