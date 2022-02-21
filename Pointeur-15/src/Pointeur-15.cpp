//============================================================================
// Name        : Pointeur-15.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Que des pointeurs pour :
//					1) Remplir et afficher une matrice
//					2) Afficher la transposé d'une matrice
//					3) Interpréter une matrice comme tableau unidimensionnel
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* Déclarations */
	 int N, M; 				/* dimensions de la matrice */
	 int I, J; 				/* indices courants */

	 /* Saisie des données */
	 cout << "Nombre de lignes   (max.50) : " << endl;
	 cin >> N;
	 cout << "Nombre de colonnes (max.50) : " << endl;
	 cin >> M;

	 // Déclaration de la matrice sur la base de N et M :
	 int A[N][M];

	 /* Lecture de la matrice au clavier */
	 for (I=0; I<N; I++)
	   for (J=0; J<M; J++)
	      {
	       cout << "Elément[" << I << "][" << J << "] : " ;
	       cin >> *((int *)A + N*I + J); 	/* A   : Premier élément de la matrice
	       	   	   	   	   	   	   	   	   	*  N*I : Num de la ligne dans la matrice A
	       	   	   	   	   	   	   	   	   	*  J   : Num de la case dans la ligne (N*I)
	        								*/
	      }

	 /* a) Affichage de la matrice */
	 cout << "Matrice donnée : " << endl;
	 for (I=0; I<N; I++)
	   {
	    for (J=0; J<M; J++)
	        cout << *((int *)A + I*N + J) << "\t";
	    cout << endl;
	   }

	 /* b) Affichage de la transposée de A */
	 cout << "Matrice transposée :" << endl;
	 for (J=0; J<M; J++)
	   {
	    for (I=0; I<N; I++)
	    	cout << *((int *)A + I*N + J) << "\t";
	    cout << endl;
	   }

	 /* c) Interprétation de la matrice comme vecteur : */
	 /* Attention, ce serait une faute grave d'afficher */
	 /*'simplement' les NxM premiers éléments de A !    */
	 cout << "Matrice affichée comme vecteur :" << endl;
	 for (I=0; I<N; I++)
	    for (J=0; J<M; J++)
	    	cout << *((int *)A + I*N + J) << "\t";

	return 0;
}
