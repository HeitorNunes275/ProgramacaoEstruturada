#include <iostream>
#include <string.h> 

using namespace std;

struct produto {
	string nome;
	int codigo;
	float preco;
};

int main() {
	struct produto *p;
	int n, n1;
	char aux;
	
	cout << "Quantidade de produtos a serem cadastrados: ";
	cin >> n;
	
	p = new struct produto [n];
	
	for (int i=0; i<n; i++) {
		cout << endl << "Nome: ";
		cin.ignore();
    	getline(cin, p[i].nome);
    	cout << "Codigo: ";
		cin >> p[i].codigo;
    	cout << "Preco: ";
    	cin >> p[i].preco;
	}
	
	while (aux != 'n') {
		cout << endl << "Digite o codigo de um produto para realizar uma busca: ";
		cin >> n1;
		for (int i=0; i<n; i++) {
			if (n1 == p[i].codigo) {
				cout << "Nome: " << p[i].nome << endl << "Preco: " << p[i].preco << endl << endl; 
			}
		}
		
		cout << "Deseja realizar uma nova busca? (s/n)" << endl;
		cin >> aux;
	}
	
	
	
}
