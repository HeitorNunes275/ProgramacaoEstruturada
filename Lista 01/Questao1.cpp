#include <iostream>
using namespace std;

int main(void) {
	
	float bolsa;
	
	cout << "Valor da Bolsa: ";
	cin >> bolsa;
	
	cout << "\n----- FORMAS DE PAGAMENTO -----\n";
	cout << "A vista com 10% de desconto: R$ "<< bolsa*0.9 << endl;
	cout << "Parcelado em 2 vezes sem desconto: R$ "<< bolsa/2 << " cada parcela" << endl;
	printf("Parcelado em 3 vezes sem desconto: R$ %.2f cada parcela\n", bolsa/3);
	cout << "Dividido em 10 vezes com juros de 5% sobre o valor total: R$ "<< (bolsa+(bolsa*0.05))/10 << " cada parcela" << endl;
	
}
