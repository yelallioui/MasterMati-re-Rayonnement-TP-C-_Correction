//============================================================================
// Name        : Pointeur-09.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Déterminer la longueur d'une chaîne CH à l'aide d'un pointeur P
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* Déclarations */
	 char CH[101];  /* chaîne donnée   */
	 char *P;       /* pointeur d'aide */

	  /* Saisie des données */
	 cout << "Entrez une ligne de texte (max.100 caractères) :" << endl;
	 gets(CH);
	 /* Placer le pointeur P à la fin de la chaîne */
	 for (P=CH; *P; P++)
	      ;
	  /* Affichage du résultat */
	 cout << "La chaîne \"" << CH << "\" est formée de " << P-CH << " caractères.";
	return 0;
}
