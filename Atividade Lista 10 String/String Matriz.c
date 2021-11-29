/*
Faça um programa que leia uma matriz de 5 strings e imprima cada uma delas.
Após isso, peça para o usuário digitar mais uma string e verifique se ela está na matriz,
caso esteja indique em que linha ela se encontra.
*/

#include<stdio.h>

int main(){

    char strings[5][100];

    char string2[100];

    for(int i = 0; i < 5; i++){
        printf("Digite a String %d:", i+1);
        fgets(strings[i],100,stdin);
    }

    for (int i = 0; i < 5; i++){
        printf("String %d:%s",i+1,strings[i]);
    }

    printf("Digite uma String que deseja procurar na Matriz:");
    fgets(string2,100,stdin);

    printf("Voce deseja procurar:%s",string2);

    for(int i = 0; i < 5 ; i++){
        for(int j = 0; (strings[i][j] != '\0') &&(strings[i][j] == string2[j]) ; j++){
            if((strings[i][j]=='\n')&&(string2[j]=='\n')){
                printf("String encontrada na Linha %d \n\n",i+1);
            }
        }
    }
}
