/*
3. Conta espacos e vogais. Dado uma string com uma frase informada pelo usuario (incluindo
espacos em branco), conte:
a) quantos espacos em branco existem na frase.
b) quantas vogais existem na frase.
OBSERVACAO: (SEM STRING.H)
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    char str[MAX];
    int i = 0, count = 0, countSpace = 0 , countVogais = 0;

    printf("Entre com a frase: ");
    fgets(str,MAX,stdin);



    while(str[i] != '\0'){
        if(str[i] == ' '){
            countSpace++;
        }
        if(str[i] != '\n'){
            count++;
        }
       if((str[i]=='a')||(str[i]=='i')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u')){
			countVogais++;
		}

        i++;
    }
    printf("\nA string tem %d caractres,e possui um total de %d: espaco na frase, e tambem um total de: %d vogais ",count, countSpace, countVogais);
    return 0;
}
