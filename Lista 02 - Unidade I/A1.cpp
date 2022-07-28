#include <iostream>
using namespace std;

void mostraVetor();

int main(void) {

	mostraVetor();
	return 0;
		
}

void mostraVetor() {
	int v[10];
	int c = 1;
	
	for (int i=0; i<10; i++) {
		v[i] = c;
		c += 2;
	}
	
	for (int i=0; i<10; i++) {
		cout << v[i] << " ";
	}
}


