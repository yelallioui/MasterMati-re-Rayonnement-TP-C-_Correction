//============================================================================
// Name        : Pointeur-06.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Ranger les éléments d'un tableau A du type int dans l'ordre inverse
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* Déclarations */
	 int N;        /* dimension du tableau */
	 int AIDE;     /* pour la permutation  */
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

	 /* Affichage du tableau */
	 for (P1=A; P1<A+N; P1++)
	     cout << *P1 << "\t";
	 cout << endl;

	 /* Inverser le tableau */
	  for (P1=A,P2=A+(N-1); P1<P2; P1++,P2--)
	      {
	       AIDE = *P1;
	       *P1  = *P2;
	       *P2  = AIDE;
	      }

	  /* Edition du résultat */
	  for (P1=A; P1<A+N; P1++)
		     cout << *P1 << "\t";
		 cout << endl;

	 return 0;
}
