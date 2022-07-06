#include <iostream>
using namespace std;

int main(void) {
	
	float sombra, sombraP, altura, alturaP;
	
	cout << "Sua sombra (METROS): ";
	cin >> sombra;
	cout << "Sombra do Predio no chao (METROS): ";
	cin >> sombraP;
	cout << "Sua altura (METROS): ";
	cin >> altura;
	
	cout << "\nA altura do predio eh " << (sombraP/sombra)*altura << " metros.";
}
