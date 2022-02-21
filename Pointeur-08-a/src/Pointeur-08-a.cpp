//============================================================================
// Name        : Pointeur-08-a.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Vérifie si une chaîne CH introduite au clavier est un palindrome
//				 a)	en utilisant uniquement le formalisme tableau
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 /* Déclarations */
	 char CH[101]; /* chaîne donnée    */
	 int I,J;      /* indices courants */
	 int PALI;     /* indicateur logique:          */
	               /* vrai si CH est un palindrome */

	  /* Saisie des données */
	 cout << "Entrez une ligne de texte (max.100 caractères) : " << endl;
	 gets(CH);

	 /* Placer J sur la dernière lettre de la chaîne */
	 for(J=0; CH[J]; J++)
	     ;
	 J--;

	 /* Contrôler si CH est un palindrome */
	 PALI = 1;
	 for (I=0 ; PALI && I<J ; I++,J--)
	      if (CH[I] != CH[J])
	          PALI=0;

	  /* Affichage du résultat */
	 if (PALI)
	    cout << "La chaîne \"" << CH << "\" est un palindrome." << endl;
	 else
		 cout << "La chaîne \"" << CH << "\" n\'est pas un palindrome." << endl;
	return 0;
}
