/*
6. Faca um programa que simule um lancamento de dados. Lance o dado 100 vezes e armazene
os resultados em um vetor . Depois, mostre quantas vezes cada valor foi conseguido. Dica:
use um vetor de contadores(1-6) e uma funcao para gerar numeros aleatorios, simulando os
lancamentos dos dados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main()
{
    int vet[MAX]={0};
    int count1, count2, count3, count4, count5, count6;

   
    count1 = 0;
    count2 = 0;
    count3 = 0;
    count4 = 0;
    count5 = 0;
    count6 = 0;

    for(int i=0 ; i <= MAX ; i++){

        vet[i] = rand()%6+1;
    }

    for(int i = 0; i < MAX; i++){
        printf("%d\n",vet[i]);
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

    printf("O Dado foi lancado e saiu o numero 1: %d\n",count1);
    printf("O Dado foi lancado e saiu o numero 2: %d\n",count2);
    printf("O Dado foi lancado e saiu o numero 3: %d\n",count3);
    printf("O Dado foi lancado e saiu o numero 4: %d\n",count4);
    printf("O Dado foi lancado e saiu o numero 5: %d\n",count5);
    printf("O Dado foi lancado e saiu o numero 6: %d\n",count6);
    return 0;
}
