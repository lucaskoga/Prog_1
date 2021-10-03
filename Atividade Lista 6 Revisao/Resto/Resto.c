/*
1. Faca um programa que receba dois valores inteiros x e y e calcule o resto da divisao de x
por y. Se resultado for igual a:
1 – exiba a soma de x e y mais o resto da divis̃ao;
2 – verifique se x e y sao pares ou  ́ımpares;
3 – multiplique a soma de x e y por x;
4 – divida a soma de x e y por x , se este for diferente de zero.
    – Para qualquer outro resultado, exiba o quadrado de x e de y.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, resultado, soma, mult;
    printf("Qual o valor de X:");
    scanf("%d",&x);
    printf("Qual o valor de Y:");
    scanf("%d",&y);

    resultado = x / y;

    switch(resultado){

        case 1:
            soma = x + y + resultado;
            printf("%d",soma);
        break;
        case 2:
            if(x %2 == 0){
                printf("X eh Par\n");
            }
            else
                printf("X eh Impar\n");

            if (y %2 == 0){
                printf("Y eh Par\n");
            }
            else
                printf("Y eh Impar\n");
        break;
        case 3:
            soma = x + y;
            mult = soma * x;
            printf("A multilplicacao da soma de X e Y por X eh: %d",mult);
        break;
        case 4:
            soma = x + y;
            mult = soma / x;

            printf("%d\n",mult);
            if(mult != 0){
                x = x * x;
                y = y * y;
                printf("\nO quadrado de x eh: %d, o quadrado de Y eh: %d",x, y);
                }

    }

    return 0;
}
