//============================================================================
// Name        : Pointeur-08-a.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : V�rifie si une cha�ne CH introduite au clavier est un palindrome
//				 a)	en utilisant uniquement le formalisme tableau
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 /* D�clarations */
	 char CH[101]; /* cha�ne donn�e    */
	 int I,J;      /* indices courants */
	 int PALI;     /* indicateur logique:          */
	               /* vrai si CH est un palindrome */

	  /* Saisie des donn�es */
	 cout << "Entrez une ligne de texte (max.100 caract�res) : " << endl;
	 gets(CH);

	 /* Placer J sur la derni�re lettre de la cha�ne */
	 for(J=0; CH[J]; J++)
	     ;
	 J--;

	 /* Contr�ler si CH est un palindrome */
	 PALI = 1;
	 for (I=0 ; PALI && I<J ; I++,J--)
	      if (CH[I] != CH[J])
	          PALI=0;

	  /* Affichage du r�sultat */
	 if (PALI)
	    cout << "La cha�ne \"" << CH << "\" est un palindrome." << endl;
	 else
		 cout << "La cha�ne \"" << CH << "\" n\'est pas un palindrome." << endl;
	return 0;
}
