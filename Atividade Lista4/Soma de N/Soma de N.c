/*
5. Faca um programa que receba como entrada um número inteiro n e exiba o resultado da seguinte
soma: S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    float num, count, n, ar, S;
    count = 0;
    //Entrada do valor de N
    printf("Qual o valor de N: ");
    scanf("%f",&num);
    //Responsavel por controla o while
    n = num;
    while(count < n){

        //Faz a divisao de 1 pelo valor de N
        ar = (1 / num);
        //Armazena o valor da divisao de N em S
        S = S + ar;
        printf("%.4f\n",S);
        //Decrementa o valor de N para fazer as divisoes anteiores para somar
        num = num -1;
        count++;

    }
    //Incrementa o 1 
    S = S + 1;
    printf("%.4f\n",S);

    return 0;
}
