/*
5. Faca um programa que leia dois numeros inteiros x e y, representando os valores inicio e
fim de um intervalo. Em seguida, o programa deve mostrar todos os numeros multiplos de
5 entre x (inclusive) e y (inclusive), separados pelo caractere '|'. Note que depois do  ́ultimo
multiplo, nao existe o caractere '|'.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarado as variavel 
    int x, y;
    //fornece as entradas
    printf("fornca o valor dos intervalo inicio de X e o intervalo final de Y");
    printf("\nValor de X eh: ");
    scanf("%d",&x);
    printf("Valor de Y eh: ");
    scanf("%d",&y);
    // inicia o loop para encontras os multipos de 5
    for(int i = x; i <= y; i++){
        // verifica se o numero e multiplo de 5 e se for imprime 
        if(i%5 ==0){
            printf("|%d",i);
        }
    }
    return 0;
}
