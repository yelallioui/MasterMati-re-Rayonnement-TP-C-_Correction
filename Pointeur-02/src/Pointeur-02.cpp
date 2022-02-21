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
	/* Déclarations */
	 int A[100], B[50]; 	/* tableaux */
	 int N, M;  			/* dimensions des tableaux */
	 int I;     			/* indice courant */

	 /* Saisie des données */
	 cout << "Dimension du tableau A (max.50) : ";
	 cin >> N;
	 for (I=0; I<N; I++) {
	      cout << "Elément " << I << " : ";
	      cin >> *(A+I);
	 }
	 cout << "Dimension du tableau B (max.50) : ";

	 cin >> M;
	 for (I=0; I<M; I++) {
		 cout << "Elément " << I << " : ";
		 cin >> *(B+I);
	 }
	 /* Affichage des tableaux */
	 printf("Tableau donné A :\n");
	 for (I=0; I<N; I++)
	      cout << *(A+I) << " ";
	 cout << endl;
	 cout << "Tableau donné B :\n";
	 for (I=0; I<M; I++)
	      cout << *(B+I) << " ";
	 cout << endl;
	 /* Copie de B à la fin de A */
	 for (I=0; I<M; I++)
	       *(A+N+I) = *(B+I);
	 /* Nouvelle dimension de A */
	 N += M;
	  /* Edition du résultat */
	 printf("Tableau résultat A :\n");
	 for (I=0; I<N; I++)
	       cout << *(A+I) << " ";
	 cout << endl;
	 return 0;
}
