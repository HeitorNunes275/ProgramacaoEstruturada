#include <iostream>
#include <cstring>

using namespace std;

void Codificar(char s[], int n) {
	char aux;
	
	for (int i=0; i<strlen(s); i++) {
		if (isalpha(s[i])) {
			aux = s[i]+n;
			cout << aux;
		}
	}
}

int main() {
	Codificar((char*) "abcdefGHiJ", 4);
}
