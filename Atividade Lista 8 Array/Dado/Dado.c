/*
6. Faca um programa que simule um lancamento de dados. Lance o dado 100 vezes e armazene
os resultados em um vetor . Depois, mostre quantas vezes cada valor foi conseguido. Dica:
use um vetor de contadores(1-6) e uma funcao para gerar numeros aleatorios, simulando os
lancamentos dos dados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vet[100];
    int i;
    int count1, count2, count3, count4, count5, count6;

    count1 = 0;
    count2 = 0;
    count3 = 0;
    count4 = 0;
    count5 = 0;
    count6 = 0;

    for(i=1 ; i <= 100 ; i++){
        vet[i] = 1+rand() % 6;
    }

    for(int i = 0; i < 100; i++){

        switch(vet[i]){
            case 1:
                count1++;
            break;
            case 2:
                count2++;
            break;
            case 3:
                count3++;
            break;
            case 4:
                count4++;
            break;
            case 5:
                count5++;
            break;
            case 6:
                count6++;
            break;
        }
    }

    printf("%d\n",count1);
    printf("%d\n",count2);
    printf("%d\n",count3);
    printf("%d\n",count4);
    printf("%d\n",count5);
    printf("%d\n",count6);
    return 0;
}
