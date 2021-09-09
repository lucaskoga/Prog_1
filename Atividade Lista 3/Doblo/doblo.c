#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    //Entrada 
    printf("Qual o valores de entradas de num1: ");
    scanf("%d",&num1);
    printf("Qual o valores de entradas de num2: ");
    scanf("%d",&num2);
    
    //faz a verificacao se o num1 e o doblo do num2
    if(num1 == num2+num2){
        print("O numero que e igual ao dobro do segundo eh: %d", num1);
    }
    else
        printf("O primeiro numero nao corresponde com o segundo ");
    
    return 0;
}
