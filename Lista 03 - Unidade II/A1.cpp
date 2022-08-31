#include <iostream>
#include <fstream>

using namespace std;

void questao01();

int main() {
	
	questao01();
}

void questao01() {
	
	ifstream x;
	string s;
	int aux = 0;
	
	x.open("arquivo_01.txt");
	
	if (x.is_open()) {
		
		while(getline(x, s)) {
		}
		
		for (int i=0; i<s.length(); i++) {
			if (isalpha(s[i])) {
				aux += 1;	
			}
		}
		
	cout << s.length() << " caracteres, " << aux << " letras.";	
	x.close();
	}
	
	
	else {
		cout << "Erro ao abrir o arquivo" << endl;
	}
	
}


