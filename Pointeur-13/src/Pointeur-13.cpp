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
	/* D�clarations */
	 char CH1[101], CH2[101]; 		/* cha�nes donn�es */
	 char *P1, *P2; 				/* pointeurs d'aide dans CH1 et CH2 */
	 int TROUVE; 					/* indicateur logique: vrai, si le caract�re */
	             	 	 	 	 	/* actuel dans CH1 a �t� trouv� dans CH2.    */

	 /* Saisie des donn�es */
	 cout << "Entrez la premi�re cha�ne de caract�res (max.100 caract�res) :" << endl;
	 gets(CH1);
	 cout << "Entrez la deuxi�me cha�ne de caract�res (max.100 caract�res) :" << endl;
	 gets(CH2);

	 /* Eliminer les lettres communes
	  	Id�e: Parcourir CH2 de gauche � droite et contr�ler
	 	pour chaque caract�re s'il se trouve aussi dans CH1.
		Si tel est le cas, �liminer le caract�re de CH1 �
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

	  /* Affichage du r�sultat */
	 cout << "Cha�ne r�sultat : " << CH1 << endl;

	return 0;
}
