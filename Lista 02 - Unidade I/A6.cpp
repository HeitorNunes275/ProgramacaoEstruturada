#include <iostream>
#include <cstdlib>

using namespace std;

void mostraMatriz1();

int main(void) {
	
	mostraMatriz1();
	return 0;
	
}

void mostraMatriz1() {
	
	int m[10][10];
	int l,c,aux=0;
	
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			m[i][j] = rand()%99;
		}
	}
	
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			cout << m[i][j] << " ";	
		}
		cout << endl;
	}
	
	for (int i=0; i<10; i++) {
		for (int j=0; j<10; j++) {
			if (aux < m[i][j]) {
				aux = m[i][j];
				l = i;
				c = j;
			}
		}
	}
	
	l +=1; /* Aqui só para iniciar a linha com 1 e não com zero. */
	c +=1; /* Aqui só para iniciar a coluna com 1 e não com zero. */
	
	cout << endl << "O maior valor eh " << aux << ", encontrado na "<< l << " linha e " << c << " coluna. ";
		
	
}
