/*
1. [2,0] Faca um programa que leia dois vetores de inteiros x e y, cada um com 10 elementos.
Para cada um dos casos abaixo crie uma funcao e mostre os vetores resultantes:
a) Soma entre x e y: soma de cada elemento de x com o elemento da mesma posicao em y.
b) Produto entre x e y: multiplicacao de cada elemento de x com o elemento da mesma
posicao de y.
c) Diferenca entre x e y: todos os elementos de x que nao existam em y.
d) Intersecao entre x e y: apenas os elementos que aparecem nos dois vetores.
e) Uniao de x e y: todos os elementos de x, e todos os elementos de y que nao estao em x.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void somaVetor (int vetX[],int vetY[],int tam){
    int vetorResultante[MAX];
    for(int x = 0; x < MAX; x++){
        vetorResultante[x] = vetX[x] + vetY[x];
    }
    for(int i = 0; i < MAX; i++){
        printf("Resultado armazenado no vetor resultado eh %d: %d\n",i +1,vetorResultante[i]);
    }
}

void multiVetor(int vetX[],int vetY[],int tam){
     int vetorResultante[MAX];
    for(int x = 0; x < MAX; x++){
        vetorResultante[x] = vetX[x] * vetY[x];
    }
    for(int i = 0; i < MAX; i++){
        printf("Resultado armazenado no vetor resultado eh %d: %d\n",i +1,vetorResultante[i]);
    }
}

void diferenca(int vetX[],int vetY[],int tam){
    int vetorResultante[MAX];
    int count = 0;
    for(int x = 0; x < MAX; x++){
        for(int y = 0; y < MAX; y++){
            if(vetX[x] == vetY[y]){
                count++;
            }
            else {
                printf("O vetor X nao possui nem um elemento igual no vetor Y\n");
            }
        }
    }
    printf("Total de vezes que o vetor x foi igual que o vetor y: %d",count);
}
void uniaoVetor(int vetX[],int vetY[],int tam){
    int vetorResultante[MAX];
    int count = 0;
    for(int x = 0; x < MAX; x++){
        for(int y = 0; y < MAX; y++){
            if(vetX[x] == vetY[y]){
               if(vetX[x] == vetX[y]){
                count++;
               }
            }
            else {
                printf("O vetor X nao possui nem um elemento igual no vetor Y\n");
            }
        }
    }
    printf("Total de vezes que o vetor x foi igual que o vetor y: %d\n",count);

}

int main()
{
    int vetX[MAX];
    int vetY[MAX];
    int vetorResultante[MAX];


    for(int x = 0; x < MAX; x++){
        printf("Qual a entrada do vetorX - %d: ",x+1);
        scanf("%d",&vetX[x]);
    }
    for(int i = 0; i < MAX; i++){
        printf("Qual a entrada do VetorY - %d: ",i+1);
        scanf("%d",&vetY[i]);
    }
    printf("\nFuncao soma\n");
    somaVetor(vetX,vetY,MAX);
    printf("\nFuncao Multilicacao\n");
    multiVetor(vetX,vetY,MAX);
    printf("\nFuncao diferenca\n");
    diferenca(vetX,vetY,MAX);
    printf("\nFuncao de uniao\n");
    uniaoVetor(vetX,vetY,MAX);

    return 0;
}
