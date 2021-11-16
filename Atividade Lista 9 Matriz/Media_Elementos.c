#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

int main()
{
    //Matriz e os contadores e variaveis inicializadas
    int matriz[LIN][COL];
    int vetorPrincipal[10] = {0};
    int somaPrincipal = 0, count = 0;
    float mediaPrincipal = 0;

    //inserir na matriz
    for (int x = 0; x < LIN; x++) {
		for (int y = 0; y < COL; y++) {
			printf("Entre com os elementos [%d %d]: ", x, y);
			scanf("%d", &matriz[x][y]);
		}
	}

    //Percorre a matriz e localiza a diagonal principal e faz sua soma
	for(int x = 0; x < LIN; x++){
        for(int y = 0; y < COL; y++){
            if (x == y){
                vetorPrincipal[y] = matriz[x][y];
                somaPrincipal = somaPrincipal + matriz[x][y];
                count++;
            }
        }
	}
    printf("\n");
    // imprime a matriz
	for (int i = 0; i < LIN; ++i) {
		for (int j = 0; j < COL; ++j) {
			printf("|%d|\t", matriz[i][j]);
		}
		printf("\n");
	}
	 printf("\n");
    //Imprime o vetor
	for(int x = 0; x < count; x++){
        printf("Vetor com os elemento da Diagonal Principal %d: %d\n", x, vetorPrincipal[x]);
	}
	 printf("\n");
	//Faz a media da diagonal principal
	mediaPrincipal = somaPrincipal / count;
    printf("A media da Diagonal Principal eh: %f\n",mediaPrincipal);

    return 0;
}
