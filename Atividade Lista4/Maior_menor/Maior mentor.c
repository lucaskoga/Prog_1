/*
4. Faca um algoritmo que leia 10 valores e depois mostre o maior e o menor destes valores.
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
    //Declara asvariaveis
    int menor,maior, num, tamanho;
    tamanho = 0;
    printf("qual os numeros: ");
    scanf("%d", &num);
    menor = num;
    maior = num;
    //verifica qual o maior e menor
    while(tamanho < 9){
        scanf("%d",&num);
        if(num < menor){
            menor = num;
        }
        if(num > maior){
          maior = num;
        }
        tamanho++;
    }
     printf("O menor numero eh: %d: \n", menor);
     printf("O maior numero eh: %d: \n", maior);
    return 0;
    
}
