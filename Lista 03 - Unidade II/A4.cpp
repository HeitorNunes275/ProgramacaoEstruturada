#include <iostream>
#include <fstream>

using namespace std;

void questao04();

int main() {
	
	questao04();
}

void questao04() {
	
	ifstream a1;
	ifstream a2;
	ifstream a3;
	ofstream a4;
	
	string s="";
	
	a1.open("arquivo_04 (CPF).txt");
	a2.open("arquivo_04 (NOME).txt");
	a3.open("arquivo_04 (ENDEREÇO).txt");
	a4.open("arquivo_04 (CPF, NOME, ENDEREÇO).txt"); // Execute o arquivo ao menos uma vez rs.
	
	if (a1.is_open() && a2.is_open() && a3.is_open() && a4.is_open()) {
		
		while (getline(a1, s)) {
			a4 << s << " ";
			s = "";
			getline(a2, s);
			a4 << s << " ";
			getline(a3, s);
			a4 << s << endl;
		}
		a1.close();
		a2.close();
		a3.close();
		a4.close();
	}
	
	else {
		cout << "Erro ao abrir o arquivo" << endl;
	}
	
}


