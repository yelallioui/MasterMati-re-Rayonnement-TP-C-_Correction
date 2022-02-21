//============================================================================
// Name        : tableaux-02.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//D�claration des variables :
	int N;     		// la dimension du tableau
	int I, J; 		// les compteurs des boucles utilis�es
	int Somme;  	// la somme des �l�ments

	// Saisie des donn�es :
	cout << "Dimension du tableau (max.50) : ";
	cin >> N;

	int T[N]; 		// Cr�ation du tableau � la base de N

	// Remplissage du tableau :
	for (I = 0; I < N; ++I) {
		cout << "Element " << I << " : ";
		cin >> T[I];
	}

	//Affichage du tableau :
	cout << "Tableau donn� : " << endl;
	for (I=0; I<N; I++)
		cout << T[I] << "   ";
	cout << endl;

	// Effacer les z�ros et comprimer :
	 for (I=0, J=0 ; I<N ; I++) {
		 T[J] = T[I];		// Copier tous les �l�ments de I vers J
	     if (T[I]) J++;		// augmenter J pour les �l�ments non nuls.
	 }
	 // Nouvelle dimension du tableau :
	 N = J;

	 // Edition des r�sultats :
	 cout << "Tableau r�sultat :" << endl;
	 for (I=0; I<N; I++)
		 cout << T[I] << "   ";
	 cout << endl;

	return 0;
}
