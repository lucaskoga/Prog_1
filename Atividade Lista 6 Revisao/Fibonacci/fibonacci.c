/*
4. Faca um programa que mostre os 30 primeiros termos da sequencia de Fibonacci. Na
Matematica, a sequencia de Fibonacci  ́e uma sequencia de numeros inteiros, comecando
normalmente por 0 ou 1, na qual, cada termo subsequente ou numero de Fibonacci corresponde
a soma dos dois 2 termos anteriores.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara as variavel 
    int n, num1, num2, resul, i;
    
    printf("Qual o valor de N: ");
    scanf("%d",&n);
    //inicia o valores de num1 e num2
    num1 = 1;
    num2 = 0;
    // inicia looop
    for( i = 0; i <= n; i++){
        // faz a soma dos numero 
        resul = num1 + num2;
        num1 = num2;
        num2 = resul;

        printf("%d\n", resul);
    }
    return 0;
}
