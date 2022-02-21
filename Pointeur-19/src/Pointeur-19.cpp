//============================================================================
// Name        : Pointeur-19.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Date en fran�ais, date en allemand
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 // Tableaux de pointeurs sur des cha�nes de caract�res :
	 char *MFRAN[] = {"\aErreur d'entr�e !", "janvier", "f�vrier",
	                  "mars", "avril", "mai", "juin", "juillet",
	                  "ao�t", "septembre", "octobre", "novembre",
	                  "d�cembre"};
	 char *MDEUT[] = {"\aEingabefehler !", "Januar", "Februar",
	                  "M�rz", "April", "Mai", "Juni", "Juli",
	                  "August", "September", "Oktober", "November",
	                  "Dezember"};

	 int JOUR, MOIS, ANNEE; 		/* donn�es pour la date */
	 int CORRECT; 					/* indicateur logique:
	              	  	  	  	  	*  vrai si la date entr�e est correcte
	              	  	  	  	  	*  */
	 // Saisie des donn�es :
	 do {
		 cout << "Introduisez la date: " << endl;
		 cin >> JOUR >> MOIS >> ANNEE;

		 CORRECT = 1;

		 if (JOUR<0 || JOUR>31 || MOIS<0 || MOIS>12 || ANNEE<0 || ANNEE>3000) {
			 CORRECT=0;
			 puts(MFRAN[0]);
			 puts(MDEUT[0]);
	     }
	 } while (!CORRECT);

	 // Affichage des dates :
	 cout << "Luxembourg, le " << JOUR << ((JOUR==1) ? "er" : "") <<
			 " " <<  MFRAN[MOIS] << " " << ANNEE << endl;
	 cout << "Luxemburg, den " << JOUR << ". " << MDEUT[MOIS] <<
			 " " << ANNEE << endl;

	 return 0;
}
