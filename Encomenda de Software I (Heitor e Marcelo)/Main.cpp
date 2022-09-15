#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void unidade(int valor);
void dezena(int valor, int valor2);
void centena(int valor, int valor2, int valor3);
void milhar(int valor, int valor2, int valor3, int valor4, int valor5, int valor6);

int main() {
	
	fstream arquivo;
	arquivo.open("Numerais.txt", fstream::in);
	string linhaNome;
	float aux = 1;
	
	float valor=0;
	int centavos=0, reais=0, resto=0, cent=0, decimal[6], centimal[2];

	int CD[] = {100000, 10000, 1000, 100, 10, 1};
	int CDc[] = {10, 1};

	while (aux != 0) {
		
		cout << "Digite um valor: R$";
		cin >> valor;
		aux = valor;
		
		if (valor>0 && valor<10) {
			unidade(valor);
		}
		
		reais = valor;
		centavos = 100 * (valor - reais);
		resto = reais;
	
		for (int i=0; i<6; i++) {
		
			decimal[i] = resto/CD[i];
			resto -= decimal[i] * CD[i];
		}
	
		milhar(decimal[0], decimal[1], decimal[2], decimal[3], decimal[4], decimal[5]);
		
		if (valor>=1 && valor<2) {
			cout << " real";
		} else {
			cout << " reais";
		}
		
		if (! (centavos==0)) {
			
			cout << " e";
			cent = centavos;
			for (int i=0; i<2; i++) {
				centimal[i] = cent/CDc[i];
				cent -= (centimal[i] * CDc[i]);
			}
			
			if (centimal[1] < 5) {
				dezena(centimal[0], centimal[1]);
			}
			cout << " centavos";
		}
		
		cout << endl << endl;
		system("pause");
		system("cls");
	}
	
	return 0;
		
}

void unidade(int valor) {
	
	fstream arquivo;
	arquivo.open("Numerais.txt", fstream::in);
	string linhaNome;
	
	if (! valor==0) {
		
		for (int i=0; i<valor+1; i++) {
			getline(arquivo, linhaNome);
		}
		cout << " " << linhaNome;
	}
	arquivo.close();
}


void dezena(int valor, int valor2) {
	
	fstream arquivo;
	arquivo.open("Numerais.txt", fstream::in);
	
	string linhaNome;
	
	if (! valor==0) {
		
		if (valor==1 && valor2==0) {
			for (int i=0; i<valor+10; i++) {
				getline(arquivo, linhaNome);
			}
			cout << " " << linhaNome;
		} else {
			
			if (valor == 1 && valor2 > 0) {
				
				for (int i=0; i<11 + valor2; i++) {
					
					getline(arquivo, linhaNome);
				}
				cout << " " << linhaNome;
			} else {
				
				for (int i=0; i<valor + 19; i++) {
					
					getline(arquivo, linhaNome);
				}
				cout << " " << linhaNome;
				if (valor>1 & valor2 > 0) {
					cout << " e";
				}
				unidade(valor2);
				
			}
			
		}
	} else {
		
		if (! valor==0) {
			unidade(valor2);
		}
	}
	arquivo.close();
}



void centena(int valor, int valor2, int valor3) {
	
	fstream arquivo;
	arquivo.open("Numerais.txt", fstream::in);
	
	string linhaNome;
	
	if (! valor == 0) {
		if (valor==1 && valor2==0 && valor3==0) {
			
			for (int i=0; i<valor + 28; i++) {
				getline(arquivo, linhaNome);
			}
			cout << linhaNome;
		} else {
			
			for (int i=0; i<valor + 29; i++) {
				
				getline(arquivo, linhaNome);
			}
			cout << " " << linhaNome;
		cout << " e";
		}
	}
	
	arquivo.close();
	dezena(valor2, valor3);
}


void milhar(int valor, int valor2, int valor3, int valor4, int valor5, int valor6) {
	
	if (! (valor==0 && valor2==0 && valor3==0)) {
		centena(valor, valor2, valor3);
		cout << " mil e";
	}
	
	centena(valor4, valor5, valor6);
}





