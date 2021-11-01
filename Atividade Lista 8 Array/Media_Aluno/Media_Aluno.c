/*
2. Faca um Programa que peca as quatro notas de 10 alunos, calcule e armazene num vetor a
media de cada aluno, imprima o numero de alunos com media maior ou igual a 7.0.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 2
//Criado uma funcao que tem o objetivo de pegas a 4 nota calcular a media e colocar no vetor
void inserirEArmazenar(int vet[],int tam){
    
    int not1, not2, not3, not4, media;
    for(int i = 0; i < MAX; i++){
        printf("Qual a nota 1: ");
        scanf("%d",&not1);
        printf("Qual a nota 2: ");
        scanf("%d",&not2);
        printf("Qual a nota 3: ");
        scanf("%d",&not3);
        printf("Qual a nota 4: ");
        scanf("%d",&not4);

        media = not1 + not2 + not3 + not4;
        media = media / 4;
        vet[i] = media;
    }
}
//Faz a verificacao das nota 
void verificarNotas(int vet[],int tam){
    int count;
    count = 0;
    for(int i = 0; i < MAX; i++){
        if(vet[i] >= 70){
            count++;
        }
    }
    printf("O numero de Alunos com media acima de 7.0 sao um total de: %d\n",count);
}
//E imprime o Array com o valores que possui armazenado na memoria
void imprimirArray(int vet[], int tam){
    printf("As media armazenada nesse array sao as seguintes: ");
    for(int i = 0; i < MAX; i++){
        printf("%d ",vet[i]);
    }
}
int main()
{
    int vet[10];
    
    //Chamo a funcao de insetir e calcular media 
    inserirEArmazenar(vet,MAX);
    //Chamo a funcao de verificar a quantidade de notas acimade 70
    verificarNotas(vet,MAX),
    //Chamo a funcao de imprimir o vetor com o valores armazenados
    imprimirArray(vet,MAX);

    return 0;
}
