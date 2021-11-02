/*
3. Faca um Programa que leia 20 numeros inteiros e armazene-os num vetor. Armazene os
numeros pares no vetor PAR e os numeros IMPARES no vetor impar. Imprima os tres vetores.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
//Declaro 3 tipo de imprimir para dividir qual e impar e qual e par
void imprimirVet(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("Possui Armazenados os seguinte valores: %d",vet[i]);
        printf("\n");
    }
}
void imprimirVetPar(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("Possui Armazenados os seguinte valores Par: %d",vet[i]);
        printf("\n");
    }
}
void imprimirVetImpar(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("Possui Armazenados os seguinte valores impar: %d",vet[i]);
        printf("\n");
    }
}


int main()
{
   int vet[MAX];
   int vetPar[MAX]={0};
   int vetImpar[MAX]={0};
   int countPar, countImpar;

    //Responsalve pela entrda
   for(int i = 0; i < MAX; i++){
    printf("Quais sao as entradas?: ");
    scanf("%d",&vet[i]);
   }
    countPar = 0;
    countImpar = 0;
    //Responsavel pela verificacao
    for(int i = 0; i < MAX; i++){
        if(vet[i]%2 == 0 ){//se for par entra aqui e copia o valor do vet[i] para o vetPar[i]
            vetPar[countPar] = vet[i];
            countPar++;
            }
        if(vet[i]%2 == 1 ){//Se for impar entrar aqui e copia valor do vet[i] para o vetImpar[i]
            vetImpar[countImpar] = vet[i];
            countImpar++;
        }
    }

   imprimirVet(vet,MAX);
   imprimirVetPar(vetPar,MAX);
   imprimirVetImpar(vetImpar,MAX);

    return 0;
}
