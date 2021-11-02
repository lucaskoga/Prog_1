/*
4. Utilizando um vetor faca um programa que faca 5 perguntas para uma pessoa sobre um
crime. As perguntas s̃ao:
a) ”Telefonou para a vıtima?”
b) ”Esteve no local do crime?”
c) ”Mora perto da vıtima?”
d) ”Devia para a vıtima?”
e) ”Ja trabalhou com a vıtima?”
O programa deve no final emitir uma classificacao sobre a participac̃ao da pessoa no crime.
Se a pessoa responder positivamente a 2 questoes ela deve ser classificada como ”Suspeita”,
entre 3 e 4 como ”Cumplice”e 5 como ”Assassino”. Caso contrario, ele sera classificado como ”Inocente”.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int countR;
    char resposta;
    vet[0]= "Telefonou para a vitima: ";
    vet[1] = "Esteve no local do crime: ";
    vet[2] = "Mora perto da Vitima: ";
    vet[3] = "Devia para  a vitima: ";
    vet[4] = "Ja trabalhou com a vitima: ";

    countR = 0;

    for(int i = 0; i < 5; i++){
        printf("%s\n",vet[i]);
        printf("Responda S para verdadeiro e N para falso: ");
        scanf("%s",&resposta);

        if(resposta == 'S'){
             countR = countR +1;
        }else {
                countR = countR;
        }

    }

    switch(countR){
        case 0:
            printf("Classificado Como Inocente!!!");
            break;
        case 1:
            printf("Classificado Como Inocente!!!");
            break;
        case 2 :
            printf("\nClassificado Como Suspeito!!!");
            break;
        case 3:
            printf("\nClassificado como Cumplice!!!");
            break;
        case 4:
            printf("\nClassificado como Cumplice!!!");
            break;
        case 5:
            printf("\nClassificado como Assassino!!!");
            break;
    }

    return 0;
}
