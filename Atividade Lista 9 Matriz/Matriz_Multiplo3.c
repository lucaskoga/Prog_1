/* Faça um programa que leia uma matriz de inteiros de ordem 5 x 3. Em seguida, o programa deve
verificar quais os elementos da matriz que são múltiplos de 3 e armazenar esses elementos em
um vetor. Por fim, o programa deve exibir o vetor resultante com os elementos múltiplos de 3
presentes na matriz. */

#include <stdio.h>

int main() {

	int matriz[5][3];
	int vetor[15];
	int i, j;
	int count = 0; //contabilizar a ocorrencia multiplos de 3

	for (i = 0; i < 5; ++i) {
		for (j = 0; j < 3; ++j) {
			printf("Entre com os elementos [%d %d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] % 3 == 0) {
				vetor[count] = matriz[i][j];
				count++;
			}
		}
	}

	printf("Matriz original\n");
	for (i = 0; i < 5; ++i) {
		for (j = 0; j < 3; ++j) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}

	//mostrar o vetor resultante
	printf("Vetor resultante\n");
	for (i = 0; i < count; ++i) {
		printf("%d ", vetor[i]);
	}

	return 0;
}
