#include <iostream>
#include <cstdlib> 

using namespace std;

void mostraVetor3();

int main(void) {
	
	mostraVetor3();
	return 0;
	
}

void mostraVetor3() {
	
	int v[40];
	int aux=0;
	
	for (int i=0; i<40; i++) {
		v[i] = rand()%99;		/* Preenchido com valores aleatórios usando a função rand*/
	}
	
	for (int i=0; i<40; i++) {
		cout << v[i] << "|";
	}
	
	for (int i=0; i<40; i++) {
		if (v[i] % 2 == 0) {
			aux += 1;
		}
	}
	
	cout << endl << aux << " numeros pares.";
}
