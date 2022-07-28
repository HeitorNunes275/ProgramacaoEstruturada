#include <iostream>
#include <cstdlib>

using namespace std;

void mostraVetor4();

int main(void) {
	
	mostraVetor4();
	return 0;
	
}

void mostraVetor4() {
	
	int v1[20], v2[20], v3[40];
	int j = 0, z = 0;
	
	for (int i=0; i<20; i++) {
		v1[i] = rand()%99;
	}
	
	cout << "Vetor 1: " << endl;
	
	for (int i=0; i<20; i++) {
		cout << v1[i] << " ";
	}
	
	for (int i=0; i<20; i++) {
		v2[i] = rand()%99;
	}
	
	cout << endl << endl <<"Vetor 2: " << endl;
	
	for (int i=0; i<20; i++) {
		cout << v2[i] << " ";
	}
	
	
	for (int i=0; i<40; i++) {
		if (i % 2 == 0) {
			v3[i] = v1[j];
			j +=1;
		}
		else {
			v3[i] = v2[z];
			z += 1;
		}
	}
	
	cout << endl << endl <<"Vetor 3: " << endl;
	
	for (int i=0; i<40; i++) {
		cout << v3[i] << " ";
	}
	
}
