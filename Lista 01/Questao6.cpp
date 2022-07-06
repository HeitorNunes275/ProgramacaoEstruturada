#include <iostream>
using namespace std;

void formasCompra() {
	
	float bolsa;
	
	cout << "Valor da Bolsa: ";
	cin >> bolsa;
	
	cout << "\n----- FORMAS DE PAGAMENTO -----\n";
	cout << "A vista com 10% de desconto: R$ "<< bolsa*0.9 << endl;
	cout << "Parcelado em 2 vezes sem desconto: R$ "<< bolsa/2 << " cada parcela" << endl;
	printf("Parcelado em 3 vezes sem desconto: R$ %.2f cada parcela\n", bolsa/3);
	cout << "Dividido em 10 vezes com juros de 5% sobre o valor total: R$ "<< (bolsa+(bolsa*0.05))/10 << " cada parcela" << endl;
}

void restauranteSelfService() {
	
	float peso;
	
	cout << "Peso do prato (KG): ";
	cin >> peso;
	cout << "Valor total a pagar: R$" << peso*23;
}

void lojaCamisas() {
	
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

void calculoAltura() {
	
	float sombra, sombraP, altura, alturaP;
	
	cout << "Sua sombra (METROS): ";
	cin >> sombra;
	cout << "Sombra do Predio no chao (METROS): ";
	cin >> sombraP;
	cout << "Sua altura (METROS): ";
	cin >> altura;
	
	cout << "\nA altura do predio eh " << (sombraP/sombra)*altura << " metros.";
}

void pagamentoCaixa() {
	
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


int main(void) {
	
	int opcao;
	cout << "----- ESCOLHA UMA DAS OPCOES NO MENU -----\n";
	cout << "[1] Formas de Compra\n";
	cout << "[2] Restaurante Self Service\n";
	cout << "[3] Loja de Camisas\n";
	cout << "[4] Calculo da Altura\n";
	cout << "[5] Pagamento no Caixa\n";
	cout << "[6] Sair do Programa\n\n";
	cin >> opcao;
	
	system("cls");
	
	switch(opcao) {
		
		case 1:
			formasCompra();
			break;
		case 2:
			restauranteSelfService();
			break;	
		case 3:
			lojaCamisas();
			break;	
		case 4:
			calculoAltura();
			break;
		case 5:
			pagamentoCaixa();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "Opcao invalida!";
	}
		
}
