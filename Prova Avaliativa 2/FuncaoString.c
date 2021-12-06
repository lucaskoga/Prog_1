/*
4. [2,0] Faca um programa que leia uma string de no maximo 100 caracteres. Em seguida, o
programa deve implementar tres funcoes para:
a) Calcular e mostrar o total de palavras da string.
b) Mostrar cada palavra da string linha por linha.
c) Imprimir a  ́ultima palavra da string.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void calcularString(char str[],int tam){
    int totalDePalavras = 0;
    totalDePalavras = strlen(str);
    printf("total de palavras da string eh: %d\n",totalDePalavras);
}
void monstrarLinha(char str[],int tam){
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c\n",str[i]);
    }

}

int main()
{
    char str[MAX];
    while(1){
            
        printf("Qual e a palavra que deseja colocar: ");
        fgets(str,MAX,stdin);

        calcularString(str,MAX);
        monstrarLinha(str,MAX);

    }
    return 0;
}
