//============================================================================
// Name        : Pointeur-17.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Inverser l'ordre des caract�res � l'int�rieur de 5 mots
// 				 � l'aide de deux pointeurs P1 et P2
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 // D�clarations */
	 char TABCH[5][51];			/* tableau de cha�nes de caract�res */
	 char AIDE;        			/* pour la permutation des caract�res */
	 char *P1, *P2;    			/* pointeurs d'aide */
	 int I;            			/* indice courant   */

	 /* TABCH+I est l'adresse de la I-i�me cha�ne du tableau */
	 /* Il vaut mieux convertir TABCH+I en pointeur sur char */
	 /* Saisie des donn�es */
	 cout << "Entrez 5 mots :" << endl;
	 for (I=0; I<5; I++) {
	      cout << "Mot " << I+1 << " (max.50 caract�res) : " << endl;
	      gets((char *)(TABCH + I));
	 }

	 // Inverser l'ordre des caract�res � l'int�rieur des mots
	 for (I=0; I<5; I++) {
	      P1 = P2 = (char *)(TABCH+I);
	      // Placer P2 � la fin de la cha�ne
	      while (*P2)
	             P2++;
	      P2--; // sinon '\0' est plac� au d�but de la cha�ne
	      while (P1<P2) {
	            AIDE = *P1;
	            *P1  = *P2;
	            *P2  = AIDE;
	            P1++;
	            P2--;
	      }
	 }

	 // Affichage des mots invers�s
	 for (I=0; I<5; I++)
	      puts((char *)(TABCH+I));

	return 0;
}
