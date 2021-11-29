/*
2. Faca um Programa que peca um nome e o imprima das seguintes formas: Na vertical, na
vertical em escada e na vertical em escada invertida. EX:
F F FULANO
U FU FULAN
L FUL FULA
A FULA FUL
N FULAN FU
O FULANO F
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


int main()
{
    //Criado o vetor de char com o elemento inicalizado com vazio
    char str1[MAX]= {""};
    int tamanho;
    //entrada dos valores
    printf("Qual e a entrada? ");
    fgets(str1,MAX,stdin);
    
    // chamo a funcão para ver  o tamanho da string e depois decremento 1 por causa do \0
    tamanho = strlen(str1);
    tamanho = tamanho -1;

    // imprimo o vetor de forma vertical 
    for(int i = 0; str1[i] != '\0'; i++){
        printf("%c \n",str1[i]);
    }

    //imprimo o vetor pulando as letras
    for(int y = 0; str1[y] != '\0'; y++){
        for(int i = 0; str1[i] != '\0'; i++){
            printf("%c ",str1[y + i]);
        }
    }
    //imprimo o vetor pulando as letras
    for(int y = tamanho; str1[y] != '\0'; y--){
        for(int i = tamanho; str1[i] != '\0'; i--){
            printf("%c ",str1[y + i]);
        }
    }

    return 0;
}
