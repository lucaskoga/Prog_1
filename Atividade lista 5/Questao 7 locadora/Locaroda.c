/*
7. Uma locadora de veıculos lancou uma promocao para este mes: pagando R$ 90 por diaria,
o cliente pode alugar um carro de passeio. Para cada diaria, o cliente recebe uma cota de
quilometragem de 100 km. Cada quilometro a mais custar ́a uma taxa extra de R$ 12.
Faca um programa para calcular o valor total a ser pago por “n” clientes da locadora,
sendo “n” fornecido pelo usuario. O programa recebe como entrada a quantidade de dias
e a quilometragem total rodada por cada cliente e, ao final, calcula e exibe o valor total a
ser pago.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declara as variaveis
    int n;
    float dia, quilometroAmais,resultado, resultadoDeDia;
    printf("Qual a quantidade de clientes N: ");
    scanf("%d",&n);

    for(int x = 0; x < n; x++){
        //Declaro as entrada 
        printf("Quantidades de dia que o carro foi alugado: ");
        scanf("%f", &dia);
        printf("Qual a quilometragem que a pessoa percorreu no dia: ");
        scanf("%f", &quilometroAmais);

        //faz recebe os dias e o quilometros rodados e faz os calculos
        resultadoDeDia = 90 * dia;
        quilometroAmais = quilometroAmais - (100 * dia);
        quilometroAmais = quilometroAmais * 12.00;
        resultado = resultadoDeDia + quilometroAmais;
        
        printf("O cliente gastou um total de: %.2f\n",resultado);

    }
    return 0;
}
