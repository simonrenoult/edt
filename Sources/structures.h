#ifndef STRUCTURES_H
#define STRUCTURES_H

#include "define.h"


typedef struct Enseignement {

	char	matiere[LG_MAX];
	char 	enseignant[LG_MAX];
	char	type[LG_MAX];
	char 	salle[LG_MAX];	
}Ens;


typedef struct Horaire {

	int	heures;
	int	minutes;		
}Horaire;


typedef struct Groupe {

	char	annee[LG_MAX];
	int	td;
	int	tp;
}Groupe;


typedef struct Cours {
	Ens		enseignement;
	Horaire		heureDebut;
	Horaire		heureFin;
	char		jour[LG_MAX];
	Groupe		groupe;	
}Cours;

#endif
