#include <iostream>
#include <string.h> 

using namespace std;

struct pessoa {
	string nome;
	float altura, peso;
	long long cpf;
	char sexo; 			/* M ou F*/
};

int main() {
	struct pessoa *p;
	int n;
	long long n1;
	char aux;
	
	cout << "Quantidade de pessoas a serem cadastradas: ";
	cin >> n;
	
	p = new struct pessoa [n];
	
	for (int i=0; i<n; i++) {
		cout << endl << "Nome: ";
		cin.ignore();
    	getline(cin, p[i].nome);
    	cout << "Altura: ";
		cin >> p[i].altura;
    	cout << "Peso: ";
		cin >> p[i].peso;
		cout << "CPF: ";
		cin >> p[i].cpf;
		cout << "Sexo: ";
		cin >> p[i].sexo;
	}
	
	while (aux != 'n') {
		cout << endl << "Digite o CPF para realizar uma busca: ";
		cin >> n1;
		for (int i=0; i<n; i++) {
			if (n1 == p[i].cpf) {
				cout << "Nome: " << p[i].nome << endl << "IMC: " << p[i].peso/(p[i].altura*p[i].altura) << endl << endl; 
			}
		}
		
		cout << "Deseja realizar uma nova busca? (s/n)" << endl;
		cin >> aux;
	}
	
	
	
	
}
