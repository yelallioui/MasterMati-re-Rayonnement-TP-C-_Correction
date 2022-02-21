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
	/* D�clarations */
	 int N;        /* dimension du tableau */
	 int X;        /* valeur � �liminer    */
	 int *P1, *P2; /* pointeurs d'aide     */

	 /* Saisie des donn�es */
	 cout << "Dimension du tableau (max.50) : ";
	 cin >> N;

	 int A[N];    /* tableau donn�        */

	 for (P1=A; P1<A+N; P1++)
	     {
	      cout << "El�ment " << P1-A << " : ";
	      cin >> *P1;
	     }

	 cout << "Introduire l'�l�ment X � �liminer du tableau : ";
	 cin >> X;

	 /* Affichage du tableau */
	 for (P1=A; P1<A+N; P1++)
	     cout << *P1 << "\t";
	 cout << endl;

	 /* Effacer toutes les occurrences de X et comprimer :  */
	 /* Copier tous les �l�ments de P1 vers P2 et augmenter */
	 /* P2 pour tous les �l�ments diff�rents de X.          */
	 for (P1=P2=A; P1<A+N; P1++)
	     {
	      *P2 = *P1;
	      if (*P2 != X)
	           P2++;
	     }

	  /* Nouvelle dimension de A */
	 N = P2-A;

	  /* Edition du r�sultat */
	 for (P1=A; P1<A+N; P1++)
	     cout << *P1 << "\t";
	 cout << endl;

	 return 0;
}
