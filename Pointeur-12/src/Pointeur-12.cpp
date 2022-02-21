//============================================================================
// Name        : Pointeur-12.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Eliminer toutes les occurrences d'un caract�re C dans une cha�ne CH
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	/* D�clarations */
	 char CH[101]; 			/* cha�ne donn�e */
	 char C;   				/* lettre � �liminer */
	 char *P;  				/* pointeur d'aide dans CH */

	 /* Saisie des donn�es */
	 cout << "Entrez une ligne de texte (max.100 caract�res)  :" << endl;
	 gets(CH);
	 cout << "Entrez le caract�re � �liminer (suivi de Enter) : " << endl;
	 C = getchar();

	 /* Comprimer la cha�ne � l'aide de strcpy */
	 P = CH;
	 while (*P)
	   {
	      if (*P==C)
	          strcpy(P, P+1);
	      else
	    	  P++;
	   }

	  /* Affichage du r�sultat */
	cout << "Cha�ne r�sultat : " << endl << CH;
	return 0;
}
