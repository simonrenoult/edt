#include	"define.h"

int 	size;
Cours 	*EmploiDuTemps;


int main(void)
{
	int	choix;
	
	size = 1;
	EmploiDuTemps = NULL;

	//Initialisation du tableau (taille 1)
	EmploiDuTemps = malloc(size*sizeof(Cours));
	
	portail();
	
	choix = menu_principal();
	
	if(choix == EXIT) return 0;
	
	cloture_pgm();
	
	return 	0;
}
