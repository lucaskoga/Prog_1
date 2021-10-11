/*
5. Faca um programa para calcular a  ́area de “n” terrenos retangulares, em que “n”  ́e informado
pelo usuario. O programa recebe como entrada o comprimento e a largura de cada terreno
e, ao final, exibe a sua  ́area correspondente.
*/
#include <stdio.h>
#include <stdlib.h>
//Declara a funcao
void valorDeN(int n){

    float comprimento, largura;
    for(int x = 0; x < n; x++){
        //Entrada dos comprimento e largura
        printf("Qual o comprimento: ");
        scanf("%f",&comprimento);
        printf("Qual a largura: ");
        scanf("%f",&largura);
        //faz o calculo do comprimento * a largura
        comprimento = comprimento * largura;

        printf("O resultado da area eh: %.2f\n",comprimento);
    }
}
int main()
{
    //Declara as variaveis
    int n;
    printf("Forcessa o total de valor de N: ");
    scanf("%d", &n);
    
    //Chama a funcao
    valorDeN(n);

    return 0;
}
