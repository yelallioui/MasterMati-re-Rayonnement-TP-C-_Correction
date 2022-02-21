//============================================================================
// Name        : tableaux04.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Tableaux dynamiques (vector)
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	//D�claration des variables :
	int N;     						// la dimension du tableau statique
	int I; 							// le compteur des boucles utilis�es
	vector <int> TPOS (0), TNEG(0);	// Les deux tableaux dynamiques

	// Saisie des donn�es :
	cout << "Dimension du tableau (max.50) : ";
	cin >> N;

	int T[N]; 		// Cr�ation du tableau statique � la base de N

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

	// Transfer des donn�es :
	for (I=0; I<N; I++) {
		if (T[I]<0) {
			TNEG.push_back(1);
			TNEG[TNEG.size()-1] = T[I];
		}
		else if (T[I]>0) {
			TPOS.push_back(1);
			TPOS[TPOS.size()-1] = T[I];
		}

	}

	//Affichage du tableau des nombres positifs :
	cout << "Tableau des nombres positifs : " << endl;
	for (I=0; I<TPOS.size(); I++)
		cout << TPOS[I] << "   ";
	cout << endl;

	//Affichage du tableau des nombres n�gatifs :
	cout << "Tableau des nombres n�gatifs : " << endl;
	for (I=0; I<TNEG.size(); I++)
		cout << TNEG[I] << "   ";
	cout << endl;

	return 0;
}
