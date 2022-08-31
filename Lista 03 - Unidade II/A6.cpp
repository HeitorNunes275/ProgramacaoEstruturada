#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void questao06();

int main() {
	
	questao06();
}

void questao06() {
	
	ifstream x;
	string s, palavra;
	
	x.open("arquivo_06.txt");
	
	if (x.is_open()) {
		
		cout << "Insira a palavra para buscar no arquivo: ";
		cin >> palavra;
		while (!x.eof()) {
			x >> s;
			if (s == palavra) {
				cout << "Palavra localizada.";
				x.close();
				exit(1);
			}
		}
		
		cout << "Palavra nao localizada.";
		x.close();
			
	}
	
	else {
		cout << "Erro ao abrir o arquivo" << endl;
	}
	
}


