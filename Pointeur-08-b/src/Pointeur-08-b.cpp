//============================================================================
// Name        : Pointeur-08-a.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : V�rifie si une cha�ne CH introduite au clavier est un palindrome
//				 b)	en utilisant des pointeurs au lieu des indices num�riques :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 /* D�clarations */
	 char CH[101]; /* cha�ne donn�e    */
	 char *P1,*P2;  /* pointeurs d'aide */
	 int PALI;     /* indicateur logique:          */
	               /* vrai si CH est un palindrome */

	  /* Saisie des donn�es */
	 cout << "Entrez une ligne de texte (max.100 caract�res) : " << endl;
	 gets(CH);

	 /* Placer P2 sur la derni�re lettre de la cha�ne */
	  for (P2=CH; *P2; P2++)
	       ;
	  P2--;

	 /* Contr�ler si CH est un palindrome */
	 PALI = 1;
	 for (P1=CH ; PALI && P1<P2 ; P1++,P2--)
	       if (*P1 != *P2) PALI=0;

	  /* Affichage du r�sultat */
	 if (PALI)
	    cout << "La cha�ne \"" << CH << "\" est un palindrome." << endl;
	 else
		 cout << "La cha�ne \"" << CH << "\" n\'est pas un palindrome." << endl;
	return 0;
}
