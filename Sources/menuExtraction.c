#include	"define.h"


void menu_extraction(void) {

	unsigned int	choixExtraction;

	do {
			
		system		("clear");
	
		option_sortie(2);
	
		printf		("\n\n\t\tEmploi du temps - EXTRACTION\n\n");

		printf		("\n\n\t\t|  1  | Extraire l'emploi du temps en mémoire");
		printf		("\n\n\t\t|  2  | Extraire l'emploi du temps d'un professeur");
		printf		("\n\n\t\t|  3  | Extraire l'emploi du temps d'une promotion");			
		printf		("\n\n\t\t|  4  | Extraire l'emploi du temps d'un TD");			
		printf		("\n\n\t\t|  5  | Extraire l'emploi du temps d'un TP");
		printf		("\n\n\t\t> ");
		scanf		("%d", &choixExtraction);
		vider_buffer	();
		
	}while (choixExtraction > 6 && choixExtraction != EXIT);
	
	choix_extraction(choixExtraction);
	
}
