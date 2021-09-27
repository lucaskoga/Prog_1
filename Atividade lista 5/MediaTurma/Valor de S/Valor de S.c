/*
2. Faca um programa que calcule e exiba o valor de S, em que S  ́e dado por:
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float num = -1, resultado;
    for(x = 1; x <= 50; x++){
        num = num + 2;

        num = num / x;


        resultado = resultado + num;
    }

    printf("%f\n",resultado);
    return 0;
}
