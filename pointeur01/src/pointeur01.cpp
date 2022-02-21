#include <iostream>
using namespace std;

void fct_1 (int *t, int N);
void fct_2 (int *t, int N);
void fct_3 (int *t, int N);

void afficherTableau(int t[], int N);

int main() {
	int t[10] = {0}; 		// Elements du tableau initialisés à 0
	int N(10);				// Taille du tableau t

	afficherTableau(t, N);	// Affichage de t avant l'appel aux fonctions
	fct_3(t, N);			// Appel de fct_3(), fct_2() ou fct_1()
	afficherTableau(t, N);	// Affichage de t avant l'appel aux fonctions

}

void fct_1 (int t[], int N) {
	for (int i=0; i<N; i++) {
		t[i] = 3;
	}
}

void fct_2 (int t[], int N) {
	for (int i=3; i<N; i++) {
		*(t+i) = 2;
	}
}

void fct_3 (int t[], int N) {
	int * ptr;
	for (ptr = t; ptr<t+N; ptr++) {
		*ptr = 3;
	}
}

void afficherTableau(int t[], int N) {
	for (int i=0; i<N; i++) {
		cout << t[i] << "    ";
	}
	cout << endl;
}
