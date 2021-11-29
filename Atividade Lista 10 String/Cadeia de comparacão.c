/*
4. Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na cadeia B.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

//OBS: na saida final ele sempre conta uma letra a mais pois eles está contando o \0 no final 
int main()
{
    char str1[MAX];
    char str2[MAX];
    int count;
    count = 0;

     //Entrada de frase
    printf("informe a primeira frase: ");
    fgets(str1,MAX,stdin);

    printf("informe a segunda frase: ");
    fgets(str2,MAX,stdin);

    //percorre o primeir vetor de char e pega a primeira variavel
    for(int i = 0; str1[i] != '\0'; i++){
        //percorre o segundo vetor de char e pega as vareavis dela
        for(int y = 0; str2[y] != '\0'; y++){
            //faz a comparacão do vetor e ve se oque tem no vetor str1 e igual ao str2
            if(str1[i]==str2[y]){
                count++;
            }
        }
    }
    printf("Quantas vezes as vareaveis do vetor str1 apareceu no vetor str2: %d",count);

    return 0;
}
