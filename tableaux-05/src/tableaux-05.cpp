//============================================================================
// Name        : tableaux-05.cpp
// Author      : Youssouf EL ALLIOUI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int L, C; 		// dimensions (lignes, colonnes)
	int I, J; 		// indices courants
	int SOMME (0);		// somme des �l�ments

	// Saisie des donn�es :
	cout << "Nombre de lignes   (max.50) : ";
	cin >> L;
	cout << "Nombre de colonnes (max.50) : ";
	cin >> C;

	int T[L][C]; 		// Cr�ation du tableau � la base de L et C

	// Saisie des donn�es :
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << "T[" << I << "][" << J << "] : ";
			cin >> T[I][J];
		}
	}

	// Affichage du tableau :
	cout << "Tableau donn� : " << endl;
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << T[I][J] << "   ";
		}
		cout << endl;
	}

	// Calcul de la somme :
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			SOMME += T[I][J];
		}
	}

	// Affichage de la somme :
	cout << "Somme des �l�ments : " << SOMME;

	return 0;
}
