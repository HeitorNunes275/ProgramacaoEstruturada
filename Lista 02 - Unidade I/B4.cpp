#include <iostream>
#include <string.h> 

using namespace std;

typedef struct dataNasci {
	int dia;
	int mes;
	int ano;
} data;

struct funcionario {
	string nome;
	int idade;
	char sexo;
	long long cpf;
	data nasc;
	int codigo;
	char cargo[30];
	float salario;
};

int main() {
	struct funcionario *p;
	int n, n1;
	char aux;
	
	cout << "Quantidade de funcionarios a serem cadastrados: ";
	cin >> n;
	
	p = new struct funcionario [n];
	
	for (int i=0; i<n; i++) {
		cout << endl << "Nome: ";
		cin.ignore();
    	getline(cin, p[i].nome);
    	cout << "Idade: ";
		cin >> p[i].idade;
    	cout << "Sexo: ";
    	cin >> p[i].sexo;
    	cout << "CPF: ";
    	cin >> p[i].cpf;
    	cout << "Data de nascimento: " << endl << "Dia: ";
    	cin >> p[i].nasc.dia;
    	cout << "Mes: ";
    	cin >> p[i].nasc.mes;
    	cout << "Ano: ";
    	cin >> p[i].nasc.ano;
    	cout << "Codigo setor: ";
    	cin >> p[i].codigo;
    	if (p[i].codigo > 99 || p[i].codigo < 0) {
    		cout << "Setor invalido!";
    		exit(1);
		}
    	cout << "Cargo: ";
    	cin >> p[i].cargo;
    	cout << "Salario: ";
    	cin >> p[i].salario;
	}
	
	cout << endl << endl;
	for (int i=0; i<n; i++) {
		cout << "Nome: " << p[i].nome << endl;
		cout << "Idade: " << p[i].idade << endl;
		cout << "Sexo: " << p[i].sexo << endl;
		cout << "CPF: " << p[i].cpf << endl;
		cout << "Data de Nascimento: " << p[i].nasc.dia << "/" << p[i].nasc.mes << "/" << p[i].nasc.ano << endl;
		cout << "Codigo: " << p[i].codigo << endl;
		cout << "Cargo: " << p[i].cargo << endl;
		cout << "Salario: " << p[i].salario << endl << endl;
	}
	
	
	
	
}
