//============================================================================
// Name        : tableaux-07.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Verser un tableau M � deux dimensions L et C dans un tableau
// 				 V � une dimension L*C
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int L, C; 		// dimensions (lignes, colonnes)
	int I, J; 		// indices courants

	// Saisie de nombre de lignes et colonnes :
	cout << "Nombre de lignes   (max.50) : ";
	cin >> L;
	cout << "Nombre de colonnes (max.50) : ";
	cin >> C;

	int T[L][C]; 	// Cr�ation du tableau T sur la base de L et C
	int V[L*C];		// Cr�ation du tableau M � la base du produit L*C

	// Saisie des donn�es :
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << "T[" << I << "][" << J << "] : ";
			cin >> T[I][J];
		}
	}

	// Affichage du tableau T :
	cout << "Tableau donn� : " << endl;
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << T[I][J] << "   ";
		}
		cout << endl;
	}

	// Transfer des �l�ments ligne par ligne :
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			V[I*C+J] = T[I][J];
		}
	}

	// Affichage du tableau V :
	cout << "Tableau r�sultant : " << endl;
	for (I=0; I<L*C; I++) {
		cout << V[I] << "   ";
	}

	return 0;
}
