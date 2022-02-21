//============================================================================
// Name        : Pointeur-05.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Eliminer toutes les occurrences d'une variable X dans un tableau A
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* Déclarations */
	 int N;        /* dimension du tableau */
	 int X;        /* valeur à éliminer    */
	 int *P1, *P2; /* pointeurs d'aide     */

	 /* Saisie des données */
	 cout << "Dimension du tableau (max.50) : ";
	 cin >> N;

	 int A[N];    /* tableau donné        */

	 for (P1=A; P1<A+N; P1++)
	     {
	      cout << "Elément " << P1-A << " : ";
	      cin >> *P1;
	     }

	 cout << "Introduire l'élément X à éliminer du tableau : ";
	 cin >> X;

	 /* Affichage du tableau */
	 for (P1=A; P1<A+N; P1++)
	     cout << *P1 << "\t";
	 cout << endl;

	 /* Effacer toutes les occurrences de X et comprimer :  */
	 /* Copier tous les éléments de P1 vers P2 et augmenter */
	 /* P2 pour tous les éléments différents de X.          */
	 for (P1=P2=A; P1<A+N; P1++)
	     {
	      *P2 = *P1;
	      if (*P2 != X)
	           P2++;
	     }

	  /* Nouvelle dimension de A */
	 N = P2-A;

	  /* Edition du résultat */
	 for (P1=A; P1<A+N; P1++)
	     cout << *P1 << "\t";
	 cout << endl;

	 return 0;
}
