#include	"define.h"


void menu_chargement(void) {

	
	unsigned int	choixChargement;
	
	char
		general[]="bibliotheque/edt_general.csv",
		professeur[]="bibliotheque/edt_professeur.csv",
		promotion[]="bibliotheque/edt_promotion.csv",
		td[]="bibliotheque/edt_td.csv",
		tp[]="bibliotheque/edt_tp.csv",
		type[]="r";
			
	do {
		
		system	("clear");
	
		option_sortie(2);
	
		printf	("\n\n\t\tEmploi du temps - CHARGEMENT\n\n");
		
		printf		("\n\n\t\t|  1  | Import de edt_general.csv");
		printf		("\n\n\t\t|  2  | Import de edt_professeur.csv");
		printf		("\n\n\t\t|  3  | Import edt_promotion.csv");			
		printf		("\n\n\t\t|  4  | Import edt_td.csv");			
		printf		("\n\n\t\t|  5  | Import edt_tp.csv");
		printf		("\n\n\t\t> ");
		scanf		("%d", &choixChargement);
		vider_buffer	();
		
	}while (choixChargement > 6 && choixChargement != EXIT);
		
	switch (choixChargement)  {
	case 1:
		import_edt(general, type);
		break;
		
	case 2:
		import_edt(professeur, type);
		break;
		
	case 3:
		import_edt(promotion, type);
		break;
		
	case 4:
		import_edt(td, type);
		break;
		
	case 5:
		import_edt(tp, type);
		break;

	case EXIT:
		menu_principal();
		break;
		
	default:
		printf	("\n\n\t\tErreur de saisie, veuillez recommencer :\n");
		menu_chargement();
		break;	
	}
}
