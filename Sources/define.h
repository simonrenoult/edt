#ifndef 	DEFINE_H
#define 	DEFINE_H

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<ctype.h>

#define LG_MAX 	50
#define EXIT	999
#define OUI	"oui"
#define NON	"non"

#include	"structures.h"
#include	"toolbox.h"

#include	"fonctionsAffichage.h"
#include	"fonctionsChargement.h"
#include	"fonctionsEdition.h"
#include	"fonctionsExtraction.h"

#include	"menuAffichage.h"
#include	"menuChargement.h"
#include	"menuEdition.h"
#include	"menuExtraction.h"
#include	"menuPrincipal.h"

//Variables globales : Pointeur/Tableau EmploiDuTemps et variable définissant sa taille.
extern int size;
extern Cours *EmploiDuTemps;

#endif
