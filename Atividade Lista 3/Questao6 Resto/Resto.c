#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, resultado, soma, soma1;
    //Tenho a entrada dos valores de X e Y
    printf("Qual o primeiro numero da entrada: ");
    scanf("%d",&x);
    printf("Qual o primeiro segundo da entrada: ");
    scanf("%d",&y);
    //Faz a divisao entre o X e Y
    resultado = x / y;

    //Parte da decisao correspondente a cada resto faz a sua instrusao
    switch (resultado){
        case 1:
            soma = x + y;
            soma = soma + resultado;
            printf("%d",soma);
        break;

        case 2:{
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
            }
        break;

        case 3:{
            soma = x * x;
            soma1 = y * x;

            printf("A multiplicacao de X e X eh: %d\n",soma);
            printf("A multiplicacao de X e Y eh: %d\n",soma1);
        break;
        }
        case 4:{
            soma = x + y;

            soma = soma / y;

            printf("%d", soma);
        }
    }

    return 0;
}
