//============================================================================
// Name        : Pointeur-08-a.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Vérifie si une chaîne CH introduite au clavier est un palindrome
//				 b)	en utilisant des pointeurs au lieu des indices numériques :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 /* Déclarations */
	 char CH[101]; /* chaîne donnée    */
	 char *P1,*P2;  /* pointeurs d'aide */
	 int PALI;     /* indicateur logique:          */
	               /* vrai si CH est un palindrome */

	  /* Saisie des données */
	 cout << "Entrez une ligne de texte (max.100 caractères) : " << endl;
	 gets(CH);

	 /* Placer P2 sur la dernière lettre de la chaîne */
	  for (P2=CH; *P2; P2++)
	       ;
	  P2--;

	 /* Contrôler si CH est un palindrome */
	 PALI = 1;
	 for (P1=CH ; PALI && P1<P2 ; P1++,P2--)
	       if (*P1 != *P2) PALI=0;

	  /* Affichage du résultat */
	 if (PALI)
	    cout << "La chaîne \"" << CH << "\" est un palindrome." << endl;
	 else
		 cout << "La chaîne \"" << CH << "\" n\'est pas un palindrome." << endl;
	return 0;
}
