//============================================================================
// Name        : Pointeur-10.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Déterminer le nombre de mots contenus dans une chaîne
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 /* Déclarations */
	 char CH[101]; /* chaîne donnée */
	 char *P;      /* pointeur d'aide */
	 int N;        /* nombre des mots */
	 int DANS_MOT; /* indicateur logique: */
	               /* vrai si P pointe à l'intérieur un mot */

	 /* Saisie des données */
	 cout << "Entrez une ligne de texte (max.100 caractères) :" << endl;
	 gets(CH);

	 /* Compter les mots */
	 N=0;
	 DANS_MOT=0;
	 for (P=CH; *P; P++)
	     if (isspace(*P))
	         DANS_MOT=0;
	     else if (!DANS_MOT)
	         {
	          DANS_MOT=1;
	          N++;
	         }

	  /* Affichage du résultat (pour perfectionnistes) */
	 cout << "La chaîne \"" << CH << "\" est formée de " << N << " mot" << ((N==1)?' ':'s');

	 return 0;
}
