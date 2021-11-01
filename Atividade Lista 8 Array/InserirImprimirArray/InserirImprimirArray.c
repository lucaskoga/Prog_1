/*
1. Faca um Programa que leia um vetor de 5 numeros inteiros e mostre-os.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 5
void inserirVetor(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("Qual o valores a insetir no Array: ");
        scanf("%d",&vet[i]);
    }
}
void imprimirVet(int vet[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("Possui Armazenados os seguinte valores: %d",vet[i]);
        printf("\n");
    }
}
int main()
{
    int vet[MAX];
    inserirVetor(vet,MAX);
    
    printf("*===*===*\n");
    
    imprimirVet(vet,MAX);

    return 0;
}
