/*
1. Faca um programa que leia 2 strings e informe o conteudo delas seguido do seu comprimento.
Informe tambem se as duas strings possuem o mesmo comprimento e sao iguais ou diferentes no conteudo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int main()
{
    //Criado as 2 string
    char str1[MAX];
    char str2[MAX];
    int tamanhoString1 = 0, tamanhoString2 = 0;

    //Entrada de frase
    printf("informe a primeira frase: ");
    fgets(str1,MAX,stdin);

    printf("informe a segunda frase: ");
    fgets(str2,MAX,stdin);

    //percorre e conta quantas letras possui
    tamanhoString1 = strlen (str1);
    tamanhoString2 = strlen (str2);

    //pula linha 
    printf("\n");
    //compara se o tamanho as 2 String são iguais e também compara se as 2 String tem o mesmo conteudo
    if(strcmp(str1, str2)== 0){
        printf("Ambas as entrada dada pelo usuario sao de tamanho iguais!!! \n");
    }else{
        printf("As String dada pelo usuario sao diferentes\n");
    }
    
    //pula linha 
    printf("\n");
    printf("O tamanha da String eh: %d, e o seu conteudo eh: %s ",tamanhoString1, str1);
    printf("O tamanha da String eh: %d, e o seu conteudo eh: %s ",tamanhoString2, str2);
    return 0;
}
