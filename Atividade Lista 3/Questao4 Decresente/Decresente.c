#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, num3;
    //Recebe as entrada dos 3 numeros
    printf("Qual o primeiro numero ");
    scanf("%d", &num1);
    printf("Qual o segundo numero ");
    scanf("%d", &num2);
    printf("Qual o terceiro numero ");
    scanf("%d", &num3);

    //Faz a conversao para decresente
    if(num1 < num2 && num2 < num3){
        printf("%d%d%d", num3 , num2, num1);
    }
    if(num1 < num3 && num3 < num2){
        printf("%d%d%d",num2, num3, num1);
    }
    if(num3 < num2 && num2 < num1){
        printf("%d%d%d", num1, num2,num3);
    }

    return 0;
}
