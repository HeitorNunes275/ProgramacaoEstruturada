#include <iostream>

using namespace std;

void mostraMatriz2();

int main(void) {
	
	mostraMatriz2();
	return 0;
	
}

void mostraMatriz2() {
	
	int m[5][5];
	
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			if (i == j) {
				m[i][j] = 1;
			}
			else {
				m[i][j] = 0;
			}
		}
	}
	
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cout << m[i][j] << " ";	
		}
		cout << endl;
	}
		
	
}
