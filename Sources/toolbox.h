#ifndef TOOLBOX_H
#define TOOLBOX_H
	
	void	portail		(void);	
	
	void	cloture_pgm	(void);
	
	void	verif_chaine	(char []);
	void	verif_entier	(int);
	
	void	init_EDT	(int);
	
	void	saisie_chaine	(char[]);	
	void	vider_buffer	(void);
	void	clear		(char *);
	
	void	saisie_defaut 	(int, int);
	
	void	saisie_annee	(char *);
	void	saisie_matiere	(char *);
	void	saisie_enseignant(char *);
	void	saisie_type	(char *);
	void	saisie_salle	(char *);
	void	saisie_jour	(char *);
	void	saisie_debut	(int *, int *);	
	void	saisie_fin	(int *, int *);
	void	saisie_td	(int *);
	void	saisie_tp	(int *, int);
	void	verif_type	(char *, int *, int *);
	
	void	option_sortie	(int);
	
	void	confirmation	(void);
	
	void	contraintes	(Cours);
	int	verif_midi (int, int, int);

	

	
#endif	
