//============================================================================
// Name        : Pointeur-12.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Eliminer toutes les occurrences d'un caractère C dans une chaîne CH
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	/* Déclarations */
	 char CH[101]; 			/* chaîne donnée */
	 char C;   				/* lettre à éliminer */
	 char *P;  				/* pointeur d'aide dans CH */

	 /* Saisie des données */
	 cout << "Entrez une ligne de texte (max.100 caractères)  :" << endl;
	 gets(CH);
	 cout << "Entrez le caractère à éliminer (suivi de Enter) : " << endl;
	 C = getchar();

	 /* Comprimer la chaîne à l'aide de strcpy */
	 P = CH;
	 while (*P)
	   {
	      if (*P==C)
	          strcpy(P, P+1);
	      else
	    	  P++;
	   }

	  /* Affichage du résultat */
	cout << "Chaîne résultat : " << endl << CH;
	return 0;
}
