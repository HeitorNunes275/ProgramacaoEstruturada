#include <iostream>

using namespace std;

void mostraVetor2();

int main(void) {
	
	mostraVetor2();
	return 0;
	
}

void mostraVetor2() {
	int v[16];
	int aux;
	
	for (int i=0; i<16; i++) {
		cin >> v[i];
	}
	
	cout << endl << "Vetor original:" << endl;
	for (int i=0; i<16; i++) {
		cout << v[i] << " ";
	}
	
	for (int i=0; i<8; i++) {
		aux = v[i];
		v[i] = v[i+8];
		v[i+8] = aux;
	}
	
	cout << endl << endl << "Vetor modificado:" << endl;
	for (int i=0; i<16; i++) {
		cout << v[i] << " ";
	}
	
	
}
