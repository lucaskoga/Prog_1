/* Faça um programa que leia uma matriz quadrada com valores inteiros com o tamanho (MAX) dado pelo 
usuário, sendo 2 <= MAX <= 100. O programa deve ler uma constante k multiplicar os elementos da 
diagonal secundária da matriz com essa constante. Ao final, o programa deve exibir matriz resultante. 
Para isso, crie as seguintes funções:
a. Função para preencher a matriz quadrada.
b. Função para multiplicar a constante k com os elementos da diagonal secundária da matriz.
c. Função para mostrar a matriz resultante.*/

#include <stdio.h>

#define MAX 100

//item a
void preencheMatriz(int mat[][MAX], int tam) {
	int i, j;
	for (i = 0; i < tam; ++i) {
		for (j = 0; j < tam; ++j) {
			printf("Entre com os elementos [%d %d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

}

//item b
void multiplica(int mat[][MAX], int tam, int fator) {
	int i, j;
	for (i = 0; i < tam; ++i) {
		for (j = 0; j < tam; ++j) {
			//multiplica k com elementos da diagonal secundari
			if (i == tam-1 - j) {
				mat[i][j] *= fator;
			}
		}
	}
}

//item c
void exibeMatriz(int mat[][MAX], int tam) {
	
	int i, j;
	for (i = 0; i < tam; ++i) {
		for (j = 0; j < tam; ++j) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

int main() {
	
	int matriz[MAX][MAX];
	int tam; //definido pelo usuario
	int k; //constante

	printf("Entre com o tamanho da matriz quadrada: ");
	scanf("%d", &tam);
	
	//item a
	preencheMatriz(matriz, tam);

	printf("Matriz original\n");
	exibeMatriz(matriz, tam);

	printf("Entre com constante k: ");
	scanf("%d", &k);

	multiplica(matriz, tam, k);

	printf("Matriz resultante\n");
	exibeMatriz(matriz, tam);
	return 0;
}
