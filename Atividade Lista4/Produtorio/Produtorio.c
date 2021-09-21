#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaracão das variaveis
    int num, entrada, produto;
    //entrada de quantos numeros quer ter
    printf("Qual a total de numeros que vc quer entrar: ");
    scanf("%d",&entrada);

    //faz a verificacao se e o numero e par e faz a soma dos produto
    while(entrada > 0){
        printf("Entrada de numeros inteiros: ");
        scanf("%d",&num);
        if(num%2 == 0){
            produto = produto + num;
        }
        entrada--;
        printf("%d",produto);
    }
    return 0;
}
