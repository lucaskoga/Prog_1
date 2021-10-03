/*
2. Faca um programa que receba n numeros inteiros positivos, calcule e exiba o total de
ocorrencia de numeros  ́ımpares e a media desses numeros. Para encerrar o programa o
usuario deve digitar um numero n < 1.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //inicia as variavel e contadores com 0
    int n, count, count1;
    float media;
    count = 0;
    media = 0;
    count1 = 0;
    
    //inicia um loop
    while(1){
        printf("Qual as valores N entradas: ");
        scanf("%d",&n);
        // verificacao de parada
        if(n < 0){
            break;
        }
        // faz a soma das entrada
        media = media + n;
        // faz a verificacao se e impar ou paz
        if(n%2 != 0){
            count++;
        }
        // contas quantos numero foi adicionado no loop
        count1++;
    }
    // pega a media que e a soma dos numero que foi adivionado no loop e divide pelo total de numeroa adivionados
    media = media / count1;
    //printa todo os valores de quantos numero impar e a media final dos valores
    printf("\nO total de ocorrencia de numeros impares eh: %d",count);
    printf("\nA a media desses numeros: eh: %.2f",media);
    return 0;
}
