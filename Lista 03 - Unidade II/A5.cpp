#include <iostream>
#include <cstring>

using namespace std;

void Codificar(char s[], int n) {
	char aux;
	
	for (int i=0; i<strlen(s); i++) {
		aux = s[i]+n;
		cout << aux;
	}
}

int main() {
	char senha[20];
	
	cout << "Digite sua senha para criptografar: ";
	cin >> senha;
	
	Codificar((char*) senha, 4);
}
