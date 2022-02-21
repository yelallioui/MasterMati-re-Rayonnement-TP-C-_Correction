//============================================================================
// Name        : tableaux-03.cpp
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
	int Aide;  		// une variable interm�diaire pour effectuer l'�change

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

	// Inverser le tableau :
	for (I=0, J=N-1; I<J; I++, J--) {
		// Echange de T[I] et T[J] :
		Aide = T[I];
		T[I] = T[J];
		T[J] = Aide;
	}

	//Affichage du nouveau tableau :
	cout << "Tableau r�sultat : " << endl;
	for (I=0; I<N; I++)
		cout << T[I] << "   ";
	cout << endl;

	return 0;
}
