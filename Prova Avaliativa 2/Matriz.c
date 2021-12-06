/*
3. [2,0] Considerando uma matriz quadrada (numero de linhas igual ao n ́umero de colunas),
faca um programa que leia uma matriz de inteiros de ordem n, sendo n fornecido pelo
usuario. Apos preencher a matriz, implemente tres funcoes para calcular e mostrar:
a) A soma dos elementos acima da diagonal principal.
b) A soma dos elementos abaixo da diagonal principal.
c) A soma dos elementos da diagonal principal.
*/
#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4
void somaCimaDiagonal(int matriz[][LIN]){
    int somaelemento;
    for(int i = 0; i < COL; i++){
        for(int y = 0; y < LIN; y++){
            if(y > i){
                printf("|%d|\t\n",matriz[i][y]);
                somaelemento += matriz[i][y];
            }
        }
    }
    printf("A soma dos elemento acima da diagonal principal eh: %d\n",somaelemento);
}
void somaAbaixoDiagonal(int matriz[][LIN]){
    int somaAbaixo = 0;
    for(int i = 0; i < COL; i++){
        for(int y = 0; y < LIN; y++){
            if(i > y){
                printf("|%d|\t\n",matriz[i][y]);
                somaAbaixo += matriz[i][y];
            }
        }
    }
    printf("A soma dos elemento abaixo da diagonal principal eh: %d\n",somaAbaixo);
}
void somaDiagonalPrincipal(int matriz[][LIN]){
    int somaPrincipa = 0;
    for( int i = 0; i < COL; i++ ){
        for( int y = 0; y < LIN; y++ ){
            if( i==y ){
                printf("|%d|\t\n",matriz[i][y]);
                somaPrincipa += matriz[i][y];
            }
        }
    }
    printf("A soma dos elemento da diagonal principal eh: %d\n ",somaPrincipa);
}
int main()
{
    int matriz[COL][LIN];
    for(int x = 0; x < COL; x++){
        for(int y = 0; y < LIN; y++){
            printf("Forneca o numero das matriz %d: ", y+1);
            scanf("%d", &matriz[x][y]);
        }
    }
    for(int x = 0; x < COL; x++){
        for(int y = 0; y < LIN; y++){
            printf("|%d|\t",matriz[x][y]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Soma acima da diagonal princiapal: \n");
    somaCimaDiagonal(matriz);
    printf("Soma abaixo da diagonal princiapal: \n");
    somaAbaixoDiagonal(matriz);
    printf("Soma da diagonal princiapal: \n");
    somaDiagonalPrincipal(matriz);

    return 0;
}
