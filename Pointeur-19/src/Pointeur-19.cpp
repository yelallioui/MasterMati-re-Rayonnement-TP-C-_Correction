//============================================================================
// Name        : Pointeur-19.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Date en français, date en allemand
//============================================================================

#include <iostream>
using namespace std;

int main() {
	 // Tableaux de pointeurs sur des chaînes de caractères :
	 char *MFRAN[] = {"\aErreur d'entrée !", "janvier", "février",
	                  "mars", "avril", "mai", "juin", "juillet",
	                  "août", "septembre", "octobre", "novembre",
	                  "décembre"};
	 char *MDEUT[] = {"\aEingabefehler !", "Januar", "Februar",
	                  "März", "April", "Mai", "Juni", "Juli",
	                  "August", "September", "Oktober", "November",
	                  "Dezember"};

	 int JOUR, MOIS, ANNEE; 		/* données pour la date */
	 int CORRECT; 					/* indicateur logique:
	              	  	  	  	  	*  vrai si la date entrée est correcte
	              	  	  	  	  	*  */
	 // Saisie des données :
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
