//============================================================================
// Name        : tableaux01.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Ce programme permet de remplir un tableau par des valeurs entr�es au clavier et affiche le tableau
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//D�claration des variables :
	 int N;     	// la dimension du tableau
	 int Somme;  	// la somme des �l�ments

	 // Saisie des donn�es :
	 cout << "Dimension du tableau (max.50) : ";
	 cin >> N;

	 int T[N]; 		// Cr�ation du tableau � la base de N

	 // Remplissage du tableau :
	 for (int I = 0; I < N; ++I) {
		 cout << "Element " << I << " : ";
		 cin >> T[I];
	 }

	 //Affichage du tableau :
	 cout << "Tableau donn� : " << endl;
	 for (int I=0; I<N; I++)
		 cout << T[I] << "   ";
	 cout << endl;

	 //Calcul de la somme :
	 Somme = 0;
	 for (int I=0; I<N; I++)
		 Somme += T[I];

	 //Affichage du r�sultat :
	 cout << "Somme de �l�ments : " << Somme;

	return 0;
}
