#include <iostream>
using namespace std;

int main(void) {
	
	float p,m,g;
	float custoP, custoM, custoG;
	int vendaP, vendaM, vendaG;
	
	cout << "Valor de venda da CAMISA P: ";
	cin >> p;
	cout << "Custo: ";
	cin >> custoP;
	cout << "Valor de venda da CAMISA M: ";
	cin >> m;
	cout << "Custo: ";
	cin >> custoM;
	cout << "Valor de venda da CAMISA G: ";
	cin >> g;
	cout << "Custo: ";
	cin >> custoG;
	
	cout << "\nQuantidade de Camisas Pequenas vendidas no mes: ";
	cin >> vendaP;
	cout << "Quantidade de Camisas Medias vendidas no mes: ";
	cin >> vendaM;
	cout << "Quantidade de Camisas Grandes vendidas no mes: ";
	cin >> vendaG;
	
	cout << "\nValor final do custo: R$ " << (vendaP*custoP)+(vendaM*custoM)+(vendaG*custoG);
	cout << "\nLucro do mes: R$ " << ((p-custoP)*vendaP)+((m-custoM)*vendaM)+((g-custoG)*vendaG);
	

}
