//============================================================================
// Name        : Pointeur-07.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Ajouter les �l�ments d'un tableau B � la fin d'un autre tableau A
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* D�clarations */
	 int N, M;        /* dimensions des tableaux */
	 int *PA, *PB; /* pointeurs d'aide     */

	 /* Saisie des donn�es */
	 cout << "Dimension du tableau A (max.50) : ";
	 cin >> N;

	 int A[N];    /* tableau donn� A       */

	 for (PA=A; PA<A+N; PA++)
	     {
	      cout << "El�ment " << PA-A << " : ";
	      cin >> *PA;
	     }

	 cout << "Dimension du tableau B (max.50) : ";
	 cin >> M;

	 int B[M];    /* tableau donn� A       */

	 for (PB=B; PB<B+M; PB++)
	     {
	      cout << "El�ment " << PB-B << " : ";
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

	 /* Copier B � la fin de A */
	  for (PA=A+N,PB=B ; PB<B+M ; PA++,PB++)
	       *PA = *PB;

	  /* Edition du r�sultat */
	  cout << "Tableau r�sultat A : " << endl;
	  for (PA=A; PA<A+N+M; PA++)
		  cout << *PA << "\t";
	  cout << endl;

	return 0;
}
