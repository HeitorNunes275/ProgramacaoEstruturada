#include <iostream>

using namespace std;

void mostraVetor5();

int main(void) {
	
	mostraVetor5();
	return 0;
	
}

void mostraVetor5() {
	
	int v[10];
	
	for (int i=0; i<10; i++) {
		cin >> v[i];
	}
	
	cout << endl << "Valores repetidos: ";
	
	for (int i=0; i<10; i++) {
		for (int j=i+1; j<10; j++) {
			if (v[i] == v[j]) {
				cout << v[i] << " ";
			}
		}
	}
}
