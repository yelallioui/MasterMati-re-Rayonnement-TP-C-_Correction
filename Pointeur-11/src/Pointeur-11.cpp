//============================================================================
// Name        : Pointeur-11.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Un programme qui compte les occurrences des lettres de l'alphabet
// 				 dans une cha�ne de caract�res CH
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* D�clarations */
	 char CH[101]; 		/* cha�ne donn�e */
	 char *PCH;    		/* pointeur d'aide dans CH  */
	 int ABC[26];  		/* compteurs des diff�rents caract�res */
	 int *PABC;    		/* pointeur d'aide dans ABC */

	 /* Saisie des donn�es */
	 cout << "Entrez une ligne de texte (max.100 caract�res) :" << endl;
	 gets(CH);

	 /* Initialiser le tableau ABC */
	 for (PABC=ABC; PABC<ABC+26; PABC++)
	     *PABC=0;

	 /* Compter les lettres */
	 for (PCH=CH; *PCH; PCH++)
	     {
	      if (*PCH>='A' && *PCH<='Z')
	         (*(ABC+(*PCH-'A')))++; 	/* Fait attention aux parenth�ses ! */
	      if (*PCH>='a' && *PCH<='z')
	         (*(ABC+(*PCH-'a')))++;
	     }

	 /* Affichage des r�sultats */
	 /* (PABC-ABC) est le num�ro de la lettre de l'alphabet. */
	 cout << "La cha�ne \"" << CH << "\" contient : " << endl;
	 for (PABC=ABC; PABC<ABC+26; PABC++)
	     if (*PABC)
	        cout << *PABC << " fois la lettre \'" << (char)('A'+(PABC-ABC)) << "\'" << endl;
	  return 0;
}
