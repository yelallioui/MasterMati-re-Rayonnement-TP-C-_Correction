//============================================================================
// Name        : Pointeur-10.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : D�terminer le nombre de mots contenus dans une cha�ne
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 /* D�clarations */
	 char CH[101]; /* cha�ne donn�e */
	 char *P;      /* pointeur d'aide */
	 int N;        /* nombre des mots */
	 int DANS_MOT; /* indicateur logique: */
	               /* vrai si P pointe � l'int�rieur un mot */

	 /* Saisie des donn�es */
	 cout << "Entrez une ligne de texte (max.100 caract�res) :" << endl;
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

	  /* Affichage du r�sultat (pour perfectionnistes) */
	 cout << "La cha�ne \"" << CH << "\" est form�e de " << N << " mot" << ((N==1)?' ':'s');

	 return 0;
}
