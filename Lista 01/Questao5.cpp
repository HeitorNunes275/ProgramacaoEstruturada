#include <iostream>
using namespace std;

int main(void) {
	
	int u1, u2, u3, u4 = 0;
	
	cout << "Unidades do PRODUTO 100: ";
	cin >> u1;
	cout << "Unidades do PRODUTO 101: ";
	cin >> u2;
	cout << "Unidades do PRODUTO 200: ";
	cin >> u3;
	cout << "Unidades do PRODUTO 201: ";
	cin >> u4;
	
	cout << "\n----- Lista de Compras -----\n";
	cout << "Produto 100: " << u1 <<" Unidades (Preco Unitario R$2,20)\n";
	cout << "Produto 101: " << u2 <<" Unidades (Preco Unitario R$1,52)\n";
	cout << "Produto 200: " << u3 <<" Unidades (Preco Unitario R$5,00)\n";
	cout << "Produto 201: " << u4 <<" Unidades (Preco Unitario R$0,57)\n\n";
	
	printf("Valor total da compra: R$ %.1f", u1*2.2 + u2*1.52 + u3*5 + u4*0.57);
	
}
