/*
4. Faca um programa que receba 2 n ́umeros inteiros quaisquer representado por x e y e mostre,
em ordem crescente, todos os n ́umeros entre x e y cujo resto da divis ̃ao deles por 5 for igual
a 2 ou igual a 3.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara as variavel
    int num, y, x;
    //faz a entrada dos numeros de x e y
    printf("Qual o primeiro numero que deseja entrar: \n");
    scanf("%d", &num);
    printf("Qual o segundo numero que deseja entrar: \n");
    scanf("%d", &y);
    // inicializa o for
    for(x = num; x <= y; x++){
        //se o resto da divisao de 5 for iqual a 2 entra nessa if e imprime o valor
        if(x%5 == 2){
            printf("Divisao dos numero que o resto da 2:\n");
            printf("%d\n",x);
        }
        //se o resto da divisao de 5 for igual a 3 entra nesse if que também impreme o valor
        else if(x%5 == 3){
            printf("Divisao dos numero que o resto da 3:\n");
            printf("%d\n",x);
        }
    }

    return 0;
}
