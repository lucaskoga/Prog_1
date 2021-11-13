/*
1. Implemente uma funcao menorElemento(...) que receba como parametro uma matriz de
ordem 3 X 4 e mostre qual  ́e o menor elemento da matriz. Os elementos da matriz podem
ser lidos via entrada padrao ou ja inicializados no momento da declaracao da matriz.
*/
#include <stdio.h>
#include <stdlib.h>
//Ler a Matriz e faz a verificacao do menor numero
void menorElemento(int matriz[][4], int coluna, int linha){
    int x, y, menor;
    menor = matriz[0][0];
    for(x = 0; x < coluna; x++){
        for(y = 0; y < linha; y++){
            if(matriz[x][y] < menor){
                menor = matriz[x][y];
                printf("O Menor elemento da matriz eh: %d\n",menor);
            }
        }
    }
}

//Faz a impressão da minha matriz
void imprimirMatriz(int matriz[3][4],int coluna, int linha){
    int x,y;
     for(int x = 0; x < coluna; x++){
        for(int y = 0; y < linha; y++){
            printf("|%d|\t",matriz[x][y]);
        }
        printf("\n");
    }
}

int main()
{
    //instanciado a matriz
    int matriz[3][4] = {18, 20, 30, 40,
                        50, 60, 70, 80,
                        9, 10, 11, 12};
    //Chama a funcao de limprimir a matriz
    imprimirMatriz(matriz,3,4);
    //Chama a funcao do menor elemento
    menorElemento(matriz,3,4);

    return 0;
}
