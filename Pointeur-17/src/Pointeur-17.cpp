//============================================================================
// Name        : Pointeur-17.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Inverser l'ordre des caractères à l'intérieur de 5 mots
// 				 à l'aide de deux pointeurs P1 et P2
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 // Déclarations */
	 char TABCH[5][51];			/* tableau de chaînes de caractères */
	 char AIDE;        			/* pour la permutation des caractères */
	 char *P1, *P2;    			/* pointeurs d'aide */
	 int I;            			/* indice courant   */

	 /* TABCH+I est l'adresse de la I-ième chaîne du tableau */
	 /* Il vaut mieux convertir TABCH+I en pointeur sur char */
	 /* Saisie des données */
	 cout << "Entrez 5 mots :" << endl;
	 for (I=0; I<5; I++) {
	      cout << "Mot " << I+1 << " (max.50 caractères) : " << endl;
	      gets((char *)(TABCH + I));
	 }

	 // Inverser l'ordre des caractères à l'intérieur des mots
	 for (I=0; I<5; I++) {
	      P1 = P2 = (char *)(TABCH+I);
	      // Placer P2 à la fin de la chaîne
	      while (*P2)
	             P2++;
	      P2--; // sinon '\0' est placé au début de la chaîne
	      while (P1<P2) {
	            AIDE = *P1;
	            *P1  = *P2;
	            *P2  = AIDE;
	            P1++;
	            P2--;
	      }
	 }

	 // Affichage des mots inversés
	 for (I=0; I<5; I++)
	      puts((char *)(TABCH+I));

	return 0;
}
