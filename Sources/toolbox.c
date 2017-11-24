#include	"define.h"


void	portail	(void){

	system("clear");
                                                                                 
	printf("\t   ___ __  __ ___ _    ___ ___   ___  _   _   _____ ___ __  __ ___  ___  \n");
	printf("\t  | __|  \\/  | _ \\ |  / _ \\_ _| |   \\| | | | |_   _| __|  \\/  | _ \\/ __| \n");
	printf("\t  | _|| |\\/| |  _/ |_| (_) | |  | |) | |_| |   | | | _|| |\\/| |  _/\\__ \\ \n");
	printf("\t  |___|_|  |_|_| |____\\___/___| |___/ \\___/    |_| |___|_|  |_|_|  |___/ \n\n");

	printf("\t+-------------------------------------------------------------------------+\n");
	printf("\t|Bonjour,                                                                 |\n");
	printf("\t|Vous trouverez dans ce programme le moyen de gérer un emploi du temps. Il|\n");
	printf("\t|vous sera donné la possiblité d'ajouter, supprimer, importer ou exporter |\n");
	printf("\t|des emplois du temps précédemment saisis via ce logiciel ou directement  |\n"); 
	printf("\t|édité depuis votre éditeur de tableurs (Libre Office recommandé).        |\n");
	printf("\t|                                                                         |\n");
	printf("\t|                                                                         |\n");
	printf("\t|Vous pourrez quittez le programme à tout moment en saisissant 999.       |\n");
	printf("\t|Note : À chaque saisie/recherche sont précisées les contraintes entre () |\n");
	printf("\t+-------------------------------------------------------------------------+\n\n");
	
	printf("\tProjet \"Emploi du temps\" réalisé par Simon RENOULT et Kévin RENAULT\n");

	printf("\tAppuez sur Entrée pour continuer ");

	
}

//Actions effectuées à la fermeture du programme
void	cloture_pgm	(void) {

	free(EmploiDuTemps);
}


void	verif		(void) {

	printf("#### VERIF | TEST ####");
	getchar();

}
//Fonction de vérification de chaine
void	verif_chaine	(char chaine[]) {

	printf("#### VERIF | %s ####", chaine);
	getchar();
}


//Fonction de vérification d'entier\n");
void	verif_entier	(int entier) {

	printf("#### VERIF | %d ####", entier);
	getchar();

}


//Fonction d''initialisation de l'EmploiDuTemps
void	init_EDT	(int length) {

	int *pt_size = &size;
	*pt_size = length;
	
	EmploiDuTemps = realloc(EmploiDuTemps, size*sizeof(Cours));
}


//Fonction de saisie d'une chaine via fgets
void	saisie_chaine	(char chaine[]) {
	
	fgets		(chaine, LG_MAX, stdin);
	clear		(chaine);		

	if(strcmp("999", chaine) == 0) menu_principal();
	else if(strcmp("\n", chaine) == 0) confirmation();
}


//Fonction de suppression du caractère '\n' ajouté à chaque fin de fgets
void	clear		(char *chaine) {
	
	char	*p = strchr(chaine, '\n');
	
	if 	(p)	*p = 0;
}
	

//Fonction de vidage du buffer
void	vider_buffer	(void) {

	char chaine[]="test";
	fprintf(stdin, "%s", chaine);
	
   	int 	c = 0;
    	while 	(c != '\n' && c != EOF)	c = getchar();
}


//Affichage encart de sortie + size :
void	option_sortie(int val){

	switch(val){
	case 1:
		printf("\n\n\t\t+------------------------+");
		printf("\n\t\t| %d SORTIE", EXIT); 
		printf("\n\t\t| SIZE %d", size); 		
		printf("\n\t\t+------------------------+");
		break;
	case 2:
		printf("\n\n\t\t+------------------------+");
		printf("\n\t\t| %d Menu principal", EXIT); 
		printf("\n\t\t| SIZE %d", size); 		
		printf("\n\t\t+------------------------+");						
		break;
	default:
		printf("\n\t\tErreur de paramètre dans la fonction void option_sortie (int)");
		break;
	}
}


//Confirmation d'une saisie
void	confirmation	(void) {

	char	choix[3];
	
	do {
		printf("\n\n\t\tEtes vous certain de vouloir effectuer cette opération (oui/non) ? ");
		saisie_chaine (choix);
		
	}while(strcmp(NON, choix) != 0 && strcmp(OUI, choix) != 0);
	
	if (strcmp(NON, choix) == 0) menu_principal();
}


//Fonction de saisie de l'année/promotion
void	saisie_annee	(char chaine[]) {

	do {
		printf		("\n\t\t[*] Promotion concernée (1A ou 2A) : ");
		saisie_chaine	(chaine);
		
	}while	((strcmp("1A", chaine)!= 0) && (strcmp("2A", chaine)!= 0) && (strcmp("999", chaine)!= 0));
	
}


//Fonction de saisie de la matière
void	saisie_matiere	(char chaine[]) {

	printf		("\n\t\t[*] Matière (libre) : ");
	saisie_chaine	(chaine);
}


//Fonction de saisie de l'enseignant
void	saisie_enseignant(char chaine []) {

	printf		("\n\t\t[*] Enseignant (libre) : ");
	saisie_chaine	(chaine);
}


//Fonction de saisie de la salle
void	saisie_salle	(char chaine[]) {

	printf		("\n\t\t[*] Salle (libre) : ");
	saisie_chaine	(chaine);
}


//Fonction de saisie du jour
void	saisie_jour	(char chaine[]) {

	do {
		printf		("\n\t\t[*] Jour (Lundi/Mardi/Mercredi/Jeudi/Vendredi/Samedi): ");
		saisie_chaine	(chaine);
		
	}while	(strcmp("Lundi", chaine)!=0 && strcmp("Mardi", chaine)!=0 && strcmp("Mercredi", chaine)!=0 && strcmp("Jeudi", chaine)!=0 && strcmp("Vendredi", chaine)!=0 && strcmp("Samedi", chaine)!=0);
}


//Fonction de saisie du type de cours
void	saisie_type	(char chaine[]){

	do {
		printf		("\n\t\t[*] Type de cours (TD ou TP ou Amphi) : ");
		saisie_chaine	(chaine);
		
	}while	((strcmp("TD", chaine)!=0) && (strcmp("TP", chaine)!=0) && (strcmp("Amphi", chaine)!=0));
}


//Fonction de saisie de l'heure de début
void	saisie_debut	(int *val1, int *val2) {

	int	heure, minute;

	do {		
		printf		("\n\t\t[*] Heure de début (HH:MM) : ");
		scanf		("%2d:%2d", &heure, &minute);
		vider_buffer	();
	    
	}while((heure<8 || heure>20) || (minute!=0 && minute!=15 && minute!=30 && minute!=45));
	
	*val1 = heure;
	*val2 = minute;	
}


//Fonction de saisie de l'heure de fin
void	saisie_fin	(int *val1, int *val2) {

	int	heure, minute;

	do {		
		printf		("\n\t\t[*] Heure de fin (HH:MM) : ");
		scanf		("%2d:%2d", &heure, &minute);
		vider_buffer	();
	    
	}while((heure<8 || heure>20) || (minute!=0 && minute!=15 && minute!=30 && minute!=45));
	
	*val1 = heure;
	*val2 = minute;
}



//Appel de saisies selon le type de cours
void	verif_type (char type[], int *td, int *tp) {

	if ((strcmp("Amphi", type))==0) {
		*td = 0;
		*tp = 0;
	}
	else if ((strcmp("TD", type))==0) {
		saisie_td	(td);
		*tp = 0;
	}
	else if ((strcmp("TP", type))==0) {
		saisie_td	(td);
		saisie_tp	(tp, *td);	
	}
	else printf("ERREUR void verif_type (char[], int*, int*)");
}


//Fonction de saisie d'un TD
void	saisie_td	(int *val) {

	printf		("\n\t\t[*] Groupe (TD) concerné : ");
	scanf		("%1d", val);
	vider_buffer	();
}


//Fonction de saisie d'un TP
void	saisie_tp	(int *val1, int val2) {

	printf		("\n\t\t[*] Groupe (TP) concerné : %d.", val2);
	scanf		("%1d", val1);
	vider_buffer	();
}


//Contraintes de saisies/import
void	contraintes	(Cours TempEDT) {

	int	i;
	int	heureD = (TempEDT.heureDebut.heures*60)+TempEDT.heureDebut.minutes;
	int	heureF = (TempEDT.heureFin.heures*60)+TempEDT.heureFin.minutes;
	int 	resultat = 0;

	if (TempEDT.heureDebut.heures > TempEDT.heureFin.heures) {
		do {
			system("clear");
			printf("\nConflit dans la copie du champs 'Heure fin/début', appuyez sur 'c' puis Entrée pour continuer ");
		}while(getchar() != 'c');
				
		menu_principal();
	}
	else if(TempEDT.heureDebut.heures == TempEDT.heureFin.heures && TempEDT.heureFin.minutes < TempEDT.heureDebut.minutes) {
		do {
			system("clear");
			printf("\nConflit dans la copie du champs 'Heure fin/début', appuyez sur 'c' puis Entrée pour continuer ");
		}while(getchar() != 'c');
				
		menu_principal();	
	}
	else if (((810 - heureF) < 60) && (heureD - 690) < 60) {
		
		do {			
			printf("\nConflit dans la pause du midi (tableau vide), appuyez sur 'c' pour continuer. ");
			menu_principal();
			
		}while(getchar() != 'c');
	}



	for(i=0;i<size-1;i++) {
	
		if ((strcmp(TempEDT.groupe.annee, EmploiDuTemps[i].groupe.annee) == 0) && (strcmp(TempEDT.jour, EmploiDuTemps[i].jour) == 0)) {
			if ((TempEDT.heureDebut.heures == EmploiDuTemps[i].heureDebut.heures && TempEDT.heureDebut.minutes == EmploiDuTemps[i].heureDebut.minutes) && (TempEDT.heureFin.heures == EmploiDuTemps[i].heureFin.heures && TempEDT.heureFin.minutes == EmploiDuTemps[i].heureFin.minutes)) {
				if(strcmp(TempEDT.enseignement.salle, EmploiDuTemps[i].enseignement.salle) == 0) {
			
					do {
						system("clear");						
						printf("Conflit dans la copie du champs 'salle', appuyez sur 'c' pour continuer. ");	
					}while(getchar() != 'c');
					
					menu_principal();
				}
				else if(strcmp(TempEDT.enseignement.enseignant, EmploiDuTemps[i].enseignement.enseignant) == 0){
			
					do {
						system("clear");						
						printf("Conflit dans la copie du champs 'professeur', appuyez sur 'c' pour continuer. ");	
					}while(getchar() != 'c');
				
					menu_principal();
				}
				else if(TempEDT.groupe.td == EmploiDuTemps[i].groupe.td) {
			
					do {
						system("clear");						
						printf("Conflit dans la copie du champs 'TD', appuyez sur 'c' pour continuer. ");	
					}while(getchar() != 'c');
				
					menu_principal();
				}
				else if(TempEDT.groupe.td == EmploiDuTemps[i].groupe.td && TempEDT.groupe.tp == EmploiDuTemps[i].groupe.tp) {
			
					do {
						system("clear");						
						printf("Conflit dans la copie du champs 'TP', appuyez sur 'c' pour continuer. ");	
					}while(getchar() != 'c');
				
					menu_principal();
				}
				else if(strcmp(TempEDT.enseignement.matiere, EmploiDuTemps[i].enseignement.matiere) == 0) {
				
					do {
						system("clear");						
						printf("Conflit dans la copie du champs 'Matiere', appuyez sur 'c' pour continuer. ");	
					}while(getchar() != 'c');
				
					menu_principal();
				}
				
			
			}
			else if(TempEDT.groupe.td == EmploiDuTemps[i].groupe.td && (TempEDT.groupe.td == EmploiDuTemps[i].groupe.td && TempEDT.groupe.tp == EmploiDuTemps[i].groupe.tp)) {
				
					resultat = verif_midi(heureD, heureF, i);
					
					if(resultat == 1) {
						
						printf("Conflit dans la pause du midi (tableau existant), appuyez sur 'c' pour continuer. ");
						menu_principal();
					
					}
					
			}
			else if(strcmp(TempEDT.enseignement.enseignant, EmploiDuTemps[i].enseignement.enseignant) == 0) {
				
					resultat = verif_midi(heureD, heureF, i);
					
					if(resultat == 1) {
						
						printf("Conflit dans la pause du midi (tableau existant), appuyez sur 'c' pour continuer. ");
						menu_principal();
					
					}
					
			}					
		}
	}
}


int	verif_midi	(int debut, int fin, int i) {

	int a=690; // 11h30 en minutes 
	int b=750; // 12h30 en minutes
	int c=810; // 13h30 en minutes

	for(i=0;i<size-1;i++) {

		if((((EmploiDuTemps[i].heureDebut.heures*60)+ EmploiDuTemps[i].heureDebut.minutes) >= b) || (((EmploiDuTemps[i].heureDebut.heures*60)+ EmploiDuTemps[i].heureDebut.minutes) <= c)) {
		 	c = EmploiDuTemps[i].heureDebut.heures*60+ EmploiDuTemps[i].heureDebut.minutes;
		}
		else if ((((EmploiDuTemps[i].heureFin.heures*60)+ EmploiDuTemps[i].heureFin.minutes) <= b) ||  ((EmploiDuTemps[i].heureFin.heures*60)+ EmploiDuTemps[i].heureFin.minutes) >= a){
			a = EmploiDuTemps[i].heureFin.heures*60+ EmploiDuTemps[i].heureFin.minutes;
		}
		if (fin >= a && debut <= b) {
			if ((c-fin) >= 60 ) return 0; // on retourne 0 si c'est vrai/bon
			else return 1; // on retourne 1 si c'est faux/pas bon ou printf d'erreur et rappel de fonction
			        
		}
		else if (debut <= c && debut >= b){
			if ((debut-a) >=60) return 0;  // on retourne 0 si c'est vrai/bon
			else return 1; // on retourne 1 si c'est faux/pas bon ou printf d'erreur et rappel de fonction
			     	     
		}
	}
	
	return 0;
}

