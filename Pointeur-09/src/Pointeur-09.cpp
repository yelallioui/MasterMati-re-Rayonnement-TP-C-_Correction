//============================================================================
// Name        : Pointeur-09.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : D�terminer la longueur d'une cha�ne CH � l'aide d'un pointeur P
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* D�clarations */
	 char CH[101];  /* cha�ne donn�e   */
	 char *P;       /* pointeur d'aide */

	  /* Saisie des donn�es */
	 cout << "Entrez une ligne de texte (max.100 caract�res) :" << endl;
	 gets(CH);
	 /* Placer le pointeur P � la fin de la cha�ne */
	 for (P=CH; *P; P++)
	      ;
	  /* Affichage du r�sultat */
	 cout << "La cha�ne \"" << CH << "\" est form�e de " << P-CH << " caract�res.";
	return 0;
}
