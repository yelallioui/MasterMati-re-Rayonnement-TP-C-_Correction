//============================================================================
// Name        : Pointeur-07.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Ajouter les éléments d'un tableau B à la fin d'un autre tableau A
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* Déclarations */
	 int N, M;        /* dimensions des tableaux */
	 int *PA, *PB; /* pointeurs d'aide     */

	 /* Saisie des données */
	 cout << "Dimension du tableau A (max.50) : ";
	 cin >> N;

	 int A[N];    /* tableau donné A       */

	 for (PA=A; PA<A+N; PA++)
	     {
	      cout << "Elément " << PA-A << " : ";
	      cin >> *PA;
	     }

	 cout << "Dimension du tableau B (max.50) : ";
	 cin >> M;

	 int B[M];    /* tableau donné A       */

	 for (PB=B; PB<B+M; PB++)
	     {
	      cout << "Elément " << PB-B << " : ";
	      cin >> *PB;
	     }

	 /* Affichage des tableaux */
	 cout << "Tableau A : " << endl;
	 for (PA=A; PA<A+N; PA++)
	     cout << *PA << "\t";
	 cout << endl;
	 cout << "Tableau B : " << endl;
	 for (PB=B; PB<B+N; PB++)
	     cout << *PB << "\t";
	 cout << endl;

	 /* Copier B à la fin de A */
	  for (PA=A+N,PB=B ; PB<B+M ; PA++,PB++)
	       *PA = *PB;

	  /* Edition du résultat */
	  cout << "Tableau résultat A : " << endl;
	  for (PA=A; PA<A+N+M; PA++)
		  cout << *PA << "\t";
	  cout << endl;

	return 0;
}
