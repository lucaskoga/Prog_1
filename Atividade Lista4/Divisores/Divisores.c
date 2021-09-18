/*
2. Faça um programa que receba como entrada um número inteiro entre 0 e 9999 e mostre todos os
seus divisores.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valor,i;
   printf("Insira um valor para verificar os seus divisores: \n");
   scanf("%d", &valor);
    i = 1;
    // Percorre para verificar a devisao 
   while(i <= valor+1){
        if (valor%i==0){
           printf("E devisor %d \n", i);
       }
        i++;
   }
   return 0;
}
