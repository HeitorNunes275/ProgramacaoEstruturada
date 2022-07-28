#include <iostream>
#include <string.h> 

using namespace std;

struct pessoa {
	string nome;
	string endereco;
	int telefone;
};

int main() {
	struct pessoa *p;
	int n, aux;
	string AUX;
	
	cout << "Quantidade de pessoas a serem cadastradas: ";
	cin >> n;
	
	p = new struct pessoa [n];
	
	for (int i=0; i<n; i++) {
		cout << endl << "Nome: ";
		cin.ignore();
    	getline(cin, p[i].nome);
    	cout << "Endereco: ";
		cin.ignore();
    	getline(cin, p[i].endereco);
    	cout << "Telefone: ";
		cin >> p[i].telefone;
	}
	
	cout << endl << "Pessoas cadastradas: " << endl;
	
	for (int i=0; i<n; i++) {
		cout << p[i].nome << endl;
		cout << p[i].endereco << endl;
		cout << p[i].telefone << endl << endl;
	}
	
	
}
