#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

//Definições: Questão 05
#define BIG 9999
#define TAM 5
//Prototipação de funções
int menu();
//Questão 1: Funções utilizadas
void Questao1();
//Questão 2: Funções utilizadas
void ordenacao (int v[], int n);
void Questao2();
//Questão 3: Funções utilizadas
int Busca(int vetor[], int inicio, int fim, int item);
void Questao3();
//Questão 4: Funções utilizadas
void Questao4();
//Questão 5: Funções utilizadas
int **AlocaMDist(int n);
int **CarregarMatriz(int **M, int n);
void MostrarResultado(int n, int ini, float dist[TAM], float
pred[TAM], int fim);
void ImprimeMatriz(int **M, int n);
void Dijkstra(int **G, int n, int inicial, int fim);
void Questao5();
//Ínicio do Programa
int main(int argc, char** argv)
{
menu();
return 0;
}//Fim do programa
//Ínicio da Função
int menu()
{
setlocale(LC_ALL, "portuguese");
int opc = 0;
system ("cls");
cout << "\n-----------------------------------------------------";
cout << "\n| MENU: PROGRAMAS DO ITEM B - ALGORITMOS ESPECIAIS";
cout <<
"\n-----------------------------------------------------";
cout << "\n| [1] Algoritmo de busca por força bruta";
cout << "\n| [2] Algoritmo de ordenação por força bruta";
cout << "\n| [3] Algoritmo de divisão e conquista para busca";
cout << "\n| [4] Algoritmo guloso para o problema do troco";
cout << "\n| [5] Algoritmo de Dijkstra";
cout << "\n| [6] Sair do Programa";
cout <<
"\n-----------------------------------------------------";
cout << "\nDigite sua escolha: ";
cin >> opc;
system ("cls");
switch(opc)
{
case 1:
	Questao1();
break;
case 2:
	Questao2();
break;
case 3:
	Questao3();
break;
case 4:
	Questao4();
break;
case 5:
	Questao5();
break;
case 6:
cout << "Fim do programa." << endl;
return 0;
break;
default:
cout << "Opção Inválida" << endl;
break;
}
cout<<endl;
system("pause");
return menu();
}//Fim da Função
//Ínicio da Função
void Questao1()
{
setlocale(LC_ALL, "portuguese");
int vetor[10];
int i, n, t = 0;
srand(time(NULL));
for (int i = 0; i < 10; i++)
{
	vetor[i] = rand() % 501;
}
cout << "O vetor gerado foi: \n";
for (i = 0; i < 10; i++)
{
cout << vetor[i] << "\t";
}
cout << "\n\nQual valor dejesa buscar? ";
cin >> n;
cout << endl;
for (i = 0; i < 10; i++)
{
if (vetor[i] == n)
{
cout << "O Valor " << n << " foi encontrado na posição " << i + 1 << " do vetor." << endl;
t = 1;
}
}
if(t == 0)
cout << "Valor não encontrado no vetor" << endl;
}//Fim da Função
//Ínicio da Função
void Questao2()
{
int i, n = 10;
int vetor[n];
srand(time(NULL));
for (i = 0; i < 10; i++)
{
vetor[i] = rand() % 501;
}
cout << "Vetor Desordenado: \n";
for (i = 0; i < 10; i++)
{
cout << vetor[i] << "\t";
}
cout << endl;
ordenacao(vetor, n);
cout << "\nVetor Ordenado: \n";
for (i = 0; i < 10; i++)
{
cout << vetor[i] << "\t";
}
cout << endl;
}//Fim da Função
//Ínicio da Função - Questão 02
void ordenacao (int v[], int n)
{
int aux, i;
bool troca = true;
while (troca) //Enquanto troca for true faça:
{
troca = false;
for (i = 0; i < n - 1; i++)
if (v[i] > v[i + 1])
{
troca = true;
aux = v[i];
v[i] = v[i + 1];
v[i + 1] = aux;
}
}
}//Fim da Função
//Ínicio da Função
void Questao3()
{
	setlocale(LC_ALL, "portuguese");
int vetor[10] = {5, 23, 27, 30, 39, 45, 56, 71, 80, 92};
int item;
cout << "\nVetor completo: \t";
for (int i = 0; i < 10; i++)
cout << vetor[i] << "\t";
cout << "\n\nDigite um valor para Buscar no vetor: ";
cin >> item;
cout << "\nBusca Binária " << item << ":\t Posição: " <<
Busca(vetor, 0, 9, item) + 1 << "\n";
}//Fim da Função
//Ínicio da Função - Questão 03
int Busca(int vetor[], int inicio, int fim, int item)
{
int i = (inicio + fim) / 2;
if (inicio > fim)
return -1;
if (vetor[i] == item)
return i;
if (vetor[i] < item)
return Busca(vetor, i + 1, fim, item);
else // vetor[i] > item
return Busca(vetor, inicio, i - 1, item);
}//Fim da Função
//Ínicio da Função
void Questao4()
{
int moedas[6] = {100, 50, 25, 10, 5, 1}; // VETOR COM AS MOEDAS EXISTENTES
int total = 0; //
int tam_vetor = sizeof(moedas) / sizeof(int); // QTD DE
//MOEDAS DISPONIVEIS
int troco;
cout << "Qual o valor do seu troco?: ";
cin >> troco; // RECEBE O NOVO VALOR DE TROCO
for (int i = 0; i < tam_vetor; i++)
{
// LACO QUE VAI DE 0 ATE
int num_moedas = troco / moedas[i]; // num_moedas =
33/10;
troco -= num_moedas * moedas[i]; // 3.3*10=33
33-30;
total += num_moedas; //
if (num_moedas > 0)
{
// IMPRIME APENAS AS MOEDAS QUE PRECISA
cout << num_moedas
<< " nota(s) de "
<< moedas[i] << endl;
} // FIM DO IF
} // FIM DO FOR
cout << endl
<< "Sendo um Total de "
<< total
<< " nota(s)" << endl;
} // FIM Da Função
//Ínicio da Função
void Questao5()
{
//Declaração de Variáveis
int inicio, fim;
int **MDist;
MDist = AlocaMDist(TAM);
MDist = CarregarMatriz(MDist, TAM);
ImprimeMatriz(MDist, TAM);
cout << "\nInforme o Vertice Inicial: ";
cin >> inicio;
cout << "Informe o Vertice Final: ";
cin >> fim;
Dijkstra(MDist, TAM, inicio, fim);
cout << endl;
free(MDist);
}//Fim da Função
//Ínicio da Função - Questão 05
int **AlocaMDist(int n)
{
int i, **Md;
Md = (int**)malloc(n * sizeof(int*));
for(i = 0; i < n; i++)
Md[i] = (int*)malloc(n * sizeof(int));
return Md;
}//Fim da Função
//Ínicio da Função - Questão 05
int **CarregarMatriz(int **M, int n)
{
int i, j;
for(i = 0 ; i < n; i++)
for( j = 0; j < n; j++)
if(i == j)
M[i][j] = 0;
else
M[i][j] = BIG;
// Carregando o Grafo do exemplo dado em aula
M[0][1] = 10;
M[0][4] = 5;
M[1][2] = 1;
M[1][4] = 2;
M[4][2] = 9;
M[2][3] = 6;
M[3][2] = 4;
M[3][0] = 7;
M[4][1] = 3;
M[4][3] = 2;
return M;
}//Fim da Função
//Ínicio da Função - Questão 05
void MostrarResultado(int n, int ini, float dist[TAM], float
pred[TAM], int fim)
{
int i, j, rota[TAM];
for(i = 0; i < n; i++)
{
int ind = 0;
if((i != ini) && (i == fim)) //cometar para mostrar todas as rotas
{
cout << "\nMenor distancia do vertice " << ini <<
" ao vertice " << i << " = " << dist[i] << endl;
cout << "Melhor Rota: ";
rota[ind] = i;
j = i;
do
{
j = pred[j];
ind++;
rota[ind] = j;
}
while(j != ini);
//para exibir cada rota
while(ind >= 0)
{
if(ind != 0)
cout << rota[ind] << "->";
else
cout << rota[ind];
ind--;
}
}
}
}//Fim da Função
//Ínicio da Função - Questão 05
void ImprimeMatriz(int **M, int n)
{
int i, j;
for(i = 0 ; i < n; i++)
{
cout << "|";
for( j = 0; j < n; j++)
{
if(j > 0)
cout << "\t" << M[i][j];
else
cout << M[i][j];
}
cout << "|" << endl;
}
}//Fim da Função
//Ínicio da Função - Questão 05
void Dijkstra(int **G, int n, int inicial, int fim)
{
float custo[n][n], distancia[n], pred[n];
int visitado[n], cont, distanciamin, proxno, i, j;
//int caminho[n];
for(i = 0; i < n; i++)
for(j = 0; j < n; j++)
custo[i][j] = G[i][j];
for(i = 0; i < n; i++)
{
distancia[i] = custo[inicial][i];
pred[i] = inicial;
visitado[i] = 0;
}
distancia[inicial] = 0;
visitado[inicial] = 1;
cont = 1;
while(cont < n - 1)
{
distanciamin = BIG;
for(i = 0; i < n; i++)
if(distancia[i] < distanciamin && !visitado[i])
{
distanciamin = distancia[i];
proxno = i;
}
//verifica se existe melhor caminho atraves do proximo node
visitado[proxno] = 1;
for(i = 0; i < n; i++)
{
if(!visitado[i])
if(distanciamin + custo[proxno][i] <
distancia[i])
{
distancia[i] = distanciamin +
custo[proxno][i];
pred[i] = proxno;
}
}
cont++;
}
//imprime o caminho e a distancia de cada node ou de um no
//inicio ao fim
MostrarResultado(n, inicial, distancia, pred, fim);
}//Fim da Função
