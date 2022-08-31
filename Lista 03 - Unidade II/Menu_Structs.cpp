#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

// Codifica apenas LETRAS (QUESTAO 03)
void Codificar(char s[], int n) {
	char aux;
	
	for (int i=0; i<strlen(s); i++) {
		if (isalpha(s[i])) {
			aux = s[i]+n;
			cout << aux;
		}
	}
}

//Codifica letras e numeros (QUESTAO 05)
void Codificar1(char s[], int n) {
	char aux;
	
	for (int i=0; i<strlen(s); i++) {
		aux = s[i]+n;
		cout << aux;
	}
}

void menu_Strings() {
	int opcao;
	cout << "Menu Strings:" << endl << endl;
	cout << "1 - Ler caracteres de um arquivo\n2 - Comprimento da maior palavra no arquivo\n"
	"3 - Codificacao de texto\n4 - CPF, Nome e Endereco Composto\n5 - Login Sistema\n"
	"6 - Localizar palavra dada em arquivo texto\n7 - Ler lista de nomes completos\n\n";
	cin >> opcao;
	system("cls");
	switch (opcao) {
		
		case 1: {
			
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
			break;
		}
		
		case 2: {
			ifstream x;
			string s;
			int maior=0, ini=0;
			int cont=0, temp_ini=0;
			
			x.open("arquivo_02.txt");
			
			if (x.is_open()) {
				while (getline(x, s)) {
				}
				
		    
			    for (int i=0; i<=s.length(); i++){
			    	
			        if(i==s.length() || s[i] == ' '){
			            if(maior<cont){
			                maior=cont;
			                ini=temp_ini;
			            }
			            cont=0;
			            temp_ini=i+1;
			        }
			        else{
			            cont++;
			        }
			    }
			
			    cout << maior;
			    x.close();
			}
			
			else {
				cout << "Erro ao abrir o arquivo" << endl;
			}
			break;
		}
		
		case 3: {
			
			Codificar((char*) "String a ser passada", 6);
			break;
		}
		
		case 4: {
			
			ifstream a1;
			ifstream a2;
			ifstream a3;
			ofstream a4;
			
			string s="";
			
			a1.open("arquivo_04 (CPF).txt");
			a2.open("arquivo_04 (NOME).txt");
			a3.open("arquivo_04 (ENDEREÇO).txt");
			a4.open("arquivo_04 (CPF, NOME, ENDEREÇO).txt");
			
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
			break;
		}
		
		case 5: {
			char senha[20];
	
			cout << "Digite sua senha para criptografar: ";
			cin >> senha;
			
			Codificar1((char*) senha, 4);
			
			break;
		}
		
		case 6: {
			
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
			break;
		}
		
		case 7: {
			
			cout << "Questao nao feita.";
			break;
		}
		
		default:
			cout << "Opcao invalida!";
			exit(1);
	}
}



int main() {
	menu_Strings();
}
