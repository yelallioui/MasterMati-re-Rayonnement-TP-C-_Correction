//============================================================================
// Name        : Pointeur-11.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Un programme qui compte les occurrences des lettres de l'alphabet
// 				 dans une chaîne de caractères CH
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* Déclarations */
	 char CH[101]; 		/* chaîne donnée */
	 char *PCH;    		/* pointeur d'aide dans CH  */
	 int ABC[26];  		/* compteurs des différents caractères */
	 int *PABC;    		/* pointeur d'aide dans ABC */

	 /* Saisie des données */
	 cout << "Entrez une ligne de texte (max.100 caractères) :" << endl;
	 gets(CH);

	 /* Initialiser le tableau ABC */
	 for (PABC=ABC; PABC<ABC+26; PABC++)
	     *PABC=0;

	 /* Compter les lettres */
	 for (PCH=CH; *PCH; PCH++)
	     {
	      if (*PCH>='A' && *PCH<='Z')
	         (*(ABC+(*PCH-'A')))++; 	/* Fait attention aux parenthèses ! */
	      if (*PCH>='a' && *PCH<='z')
	         (*(ABC+(*PCH-'a')))++;
	     }

	 /* Affichage des résultats */
	 /* (PABC-ABC) est le numéro de la lettre de l'alphabet. */
	 cout << "La chaîne \"" << CH << "\" contient : " << endl;
	 for (PABC=ABC; PABC<ABC+26; PABC++)
	     if (*PABC)
	        cout << *PABC << " fois la lettre \'" << (char)('A'+(PABC-ABC)) << "\'" << endl;
	  return 0;
}
