//============================================================================
// Name        : Pointeur-02.cpp
// Author      : Youssouf EL ALLIOUI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* D�clarations */
	 int A[100], B[50]; 	/* tableaux */
	 int N, M;  			/* dimensions des tableaux */
	 int I;     			/* indice courant */

	 /* Saisie des donn�es */
	 cout << "Dimension du tableau A (max.50) : ";
	 cin >> N;
	 for (I=0; I<N; I++) {
	      cout << "El�ment " << I << " : ";
	      cin >> *(A+I);
	 }
	 cout << "Dimension du tableau B (max.50) : ";

	 cin >> M;
	 for (I=0; I<M; I++) {
		 cout << "El�ment " << I << " : ";
		 cin >> *(B+I);
	 }
	 /* Affichage des tableaux */
	 printf("Tableau donn� A :\n");
	 for (I=0; I<N; I++)
	      cout << *(A+I) << " ";
	 cout << endl;
	 cout << "Tableau donn� B :\n";
	 for (I=0; I<M; I++)
	      cout << *(B+I) << " ";
	 cout << endl;
	 /* Copie de B � la fin de A */
	 for (I=0; I<M; I++)
	       *(A+N+I) = *(B+I);
	 /* Nouvelle dimension de A */
	 N += M;
	  /* Edition du r�sultat */
	 printf("Tableau r�sultat A :\n");
	 for (I=0; I<N; I++)
	       cout << *(A+I) << " ";
	 cout << endl;
	 return 0;
}
