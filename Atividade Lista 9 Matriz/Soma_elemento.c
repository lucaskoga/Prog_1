/*
5. Faca um programa que leia uma matriz de ordem 3 x 5. Em seguida, o programa deve
calcular a soma dos elementos de cada coluna da matriz, armazenando os resultados em
um vetor. Por fim, o programa deve imprimir o vetor resultante.
*/
#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 5

int main()
{
    //Criacao da MAtriz e do vetor inicalizando as posicão com 0
    int matriz[LIN][COL]= {0};
    int vetorColuna[10]={0};
    int somaColuna;

    //Inializa os loop para inserir na matriz
	for (int x = 0; x < LIN; x++) {
		for (int y = 0; y < COL; y++) {
			printf("Entre com os elementos [%d %d]: ", x, y);
			scanf("%d", &matriz[x][y]);
		}
	}
    //Soma cada coluna e adiciona no vetor
	for(int y = 0; y < COL; y++){
            somaColuna = 0;
        for(int x = 0; x < LIN; x++){
            somaColuna = somaColuna + matriz[x][y];
        }
    vetorColuna[y] = somaColuna;
	}

    //Imprime minha matriz
	for (int i = 0; i < LIN; ++i) {
		for (int j = 0; j < COL; ++j) {
			printf("|%d|\t", matriz[i][j]);
		}
		printf("\n");
	}
	//Imprime o vetor
	for(int x = 0; x < COL; x++){
        printf("\nVetor posicao %d: %d",x, vetorColuna[x]);
	}
    return 0;
}
