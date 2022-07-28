#include <iostream>
#include <stdlib.h>

using namespace std;

void menuVetores() {
	int opcao;
	cout << "Digite o numero da questao que deseja visualizar: ";      /* 1, 2, 3 ou 4*/
	cin >> opcao;
	system("cls");
	switch (opcao) {
		
		case 1: {
			int v[10];
			int c = 1;
	
			for (int i=0; i<10; i++) {
				v[i] = c;
				c += 2;
			}
	
			for (int i=0; i<10; i++) {
				cout << v[i] << " ";
			}
			break;
		}
		
		case 2: {
			int v[16];
			int aux;
	
			for (int i=0; i<16; i++) {
				cin >> v[i];
			}
	
			cout << endl << "Vetor original:" << endl;
			for (int i=0; i<16; i++) {
				cout << v[i] << " ";
			}
	
			for (int i=0; i<8; i++) {
				aux = v[i];
				v[i] = v[i+8];
				v[i+8] = aux;
			}
	
			cout << endl << endl << "Vetor modificado:" << endl;
			for (int i=0; i<16; i++) {
				cout << v[i] << " ";
			}
			break;
		}
		
		case 3: {
			
			int v[40];
			int aux=0;
	
			for (int i=0; i<40; i++) {
				v[i] = rand()%99;		/* Preenchido com valores aleatórios usando a função rand*/
			}
	
			for (int i=0; i<40; i++) {
				cout << v[i] << "|";
			}
	
			for (int i=0; i<40; i++) {
				if (v[i] % 2 == 0) {
					aux += 1;
				}
			}
	
			cout << endl << aux << " numeros pares.";
			break;
		}
		
		case 4: {
			
			int v1[20], v2[20], v3[40];
			int j = 0, z = 0;
	
			for (int i=0; i<20; i++) {
				v1[i] = rand()%99;
			}
	
			cout << "Vetor 1: " << endl;
	
			for (int i=0; i<20; i++) {
				cout << v1[i] << " ";
			}
	
			for (int i=0; i<20; i++) {
				v2[i] = rand()%99;
			}
	
			cout << endl << endl <<"Vetor 2: " << endl;
	
			for (int i=0; i<20; i++) {
				cout << v2[i] << " ";
			}
	
	
			for (int i=0; i<40; i++) {
				if (i % 2 == 0) {
					v3[i] = v1[j];
					j +=1;
				}
				else {
					v3[i] = v2[z];
					z += 1;
				}
			}
	
			cout << endl << endl <<"Vetor 3: " << endl;
	
			for (int i=0; i<40; i++) {
				cout << v3[i] << " ";
			}
			break;
		}
		
		case 5: {
			
			int v[10];
	
			for (int i=0; i<10; i++) {
				cin >> v[i];
			}
	
			cout << endl << "Valores repetidos: ";
	
			for (int i=0; i<10; i++) {
				for (int j=i+1; j<10; j++) {
					if (v[i] == v[j]) {
						cout << v[i] << " ";
					}
				}
			}
			break;
		}
		
		case 6: {
			
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
	
			break;
		}
		
		case 7: {
			
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
			break;
		}
		
		default:
			cout << "Opcao invalida!";
			exit(1);
	}
}

void menuStructs() {
	int opcao;
	cout << "Digite o numero da questao que deseja visualizar: ";      /* 1, 2, 3 ou 4*/
	cin >> opcao;
	system("cls");
	switch (opcao) {
		
		case 1: {
			
			struct pessoa {
			string nome;
			string endereco;
			int telefone;
			};
			
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
			break;
		}
		
		case 2: {
			
			struct pessoa {
			string nome;
			float altura, peso;
			long long cpf;
			char sexo; 			/* M ou F*/
			};
			
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
			break;
		}
		
		case 3: {
			
			struct produto {
			string nome;
			int codigo;
			float preco;
			};
			
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
			break;
		}
		
		case 4: {
			
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
			break;
		}
		
		default:
			cout << "Opcao invalida!";
			exit(1);
	}
}


int main(void) {
	int menu;
	cout << "----- Digite qual menu deseja utilizar -----" << endl << "1 - Vetores" << endl << "2 - Structs\n\n";
	cin >> menu;
	switch (menu) {
		case 1:
			menuVetores();
			break;
		case 2:
			menuStructs();
			break;
		default:
			cout << "Opcao invalida!";
			exit(1);
	}
}
