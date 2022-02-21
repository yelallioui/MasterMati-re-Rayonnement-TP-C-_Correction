//============================================================================
// Name        : Pointeur-13.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Eliminer toutes les lettres d'une chaine CH1 qui apparaissent
// 				 aussi dans une autre chaine CH2
//============================================================================

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	/* Déclarations */
	 char CH1[101], CH2[101]; 		/* chaînes données */
	 char *P1, *P2; 				/* pointeurs d'aide dans CH1 et CH2 */
	 int TROUVE; 					/* indicateur logique: vrai, si le caractère */
	             	 	 	 	 	/* actuel dans CH1 a été trouvé dans CH2.    */

	 /* Saisie des données */
	 cout << "Entrez la première chaîne de caractères (max.100 caractères) :" << endl;
	 gets(CH1);
	 cout << "Entrez la deuxième chaîne de caractères (max.100 caractères) :" << endl;
	 gets(CH2);

	 /* Eliminer les lettres communes
	  	Idée: Parcourir CH2 de gauche à droite et contrôler
	 	pour chaque caractère s'il se trouve aussi dans CH1.
		Si tel est le cas, éliminer le caractère de CH1 à
		l'aide de strcpy.
	 */
	 for (P2=CH2; *P2; P2++)
	     {
	      TROUVE = 0;
	      for (P1=CH1 ; *P1 && !TROUVE ; P1++)
	           if (*P2==*P1)
	               {
	                TROUVE = 1;
	                strcpy(P1, P1+1);
	               }
	     }

	  /* Affichage du résultat */
	 cout << "Chaîne résultat : " << CH1 << endl;

	return 0;
}
