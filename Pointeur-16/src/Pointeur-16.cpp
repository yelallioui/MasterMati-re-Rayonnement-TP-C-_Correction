//============================================================================
// Name        : Pointeur-16.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Que des pointeurs pour calculer la multiplication de 2 matrices
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* D�clarations */
	 int N, M, P;   		/* dimensions des matrices */
	 int I, J, K;   		/* indices courants */

	  /* Saisie des donn�es de la matrice A */
	 cout << "Matrice A :" << endl;
	 cout << "Nombre de lignes de A (max.50) : " << endl;
	 cin >> N;
	 cout << "Nombre de colonnes de A (max.50) : " << endl;
	 cin >> M;

	 // D�claration de la matrice A sur la base des dimensions N et M :
	 int A[N][M];

	 // Remplissage des deux matrices A et B :
	 cout << "Saisie de la matrice A :" << endl;
	 for (I=0; I<N; I++) {
	   for (J=0; J<M; J++) {
	       cout << "El�ment[" << I << "][" << J << "] : " ;
	       cin >> *((int *)A + N*I + J); 	/* A   : Premier �l�ment de la matrice
	       	   	   	   	   	   	   	   	   	*  N*I : Num de la ligne dans la matrice A
	       	   	   	   	   	   	   	   	   	*  J   : Num de la case dans la ligne (N*I)
	        								*/
	    }
	 }

	  /* Saisie des donn�es de la matrice B */
	 cout << "Matrice B :" << endl;
	 cout << "Nombre de lignes de B (max.50) : " << M << endl;
	 cout << "Nombre de colonnes de B (max.50) : " << endl;
	 cin >> P;

	 // D�claration de la matrice B sur la base des dimensions M et P :
	 int B[M][P];

	 // Remplissage des deux matrices A et B :
	 cout << "Saisie de la matrice A :" << endl;
	 for (I=0; I<M; I++) {
	   for (J=0; J<P; J++) {
	       cout << "El�ment[" << I << "][" << J << "] : " ;
	       cin >> *((int *)B + M*I + J); 	/* A   : Premier �l�ment de la matrice
	       	   	   	   	   	   	   	   	   	*  N*I : Num de la ligne dans la matrice A
	       	   	   	   	   	   	   	   	   	*  J   : Num de la case dans la ligne (N*I)
	        								*/
	    }
	 }

	 /* Affichage de la matrice A */
	 cout << "Matrice donn�e A : " << endl;
	 for (I=0; I<N; I++)
	   {
	    for (J=0; J<M; J++)
	        cout << *((int *)A + I*N + J) << "\t";
	    cout << endl;
	   }

	 /* Affichage de la matrice B */
	 cout << "Matrice donn�e B : " << endl;
	 for (I=0; I<M; I++)
	   {
	    for (J=0; J<P; J++)
	        cout << *((int *)B + I*M + J) << "\t";
	    cout << endl;
	   }

	 /* Affectation du r�sultat de la multiplication � C */
	 int C[N][P];
	 for (I=0; I<N; I++)
	    for (J=0; J<P; J++) {
	        *((int *)C + I*N+ J)=0;
	        for (K=0; K<M; K++)
	        	*((int*)C + I*N + J) += *((int*)A + I*N + K) * *((int*)B + K*M + J);
	    }

	 /* Edition du r�sultat */
	 /* Affichage de la matrice A */
	 cout << "Matrice donn�e C : " << endl;
	 for (I=0; I<N; I++)
	   {
	    for (J=0; J<P; J++)
	        cout << *((int *)C + I*N + J) << "\t";
	    cout << endl;
	   }

	return 0;
}
