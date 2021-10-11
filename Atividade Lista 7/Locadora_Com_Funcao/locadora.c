/*
5. Uma locadora de veıculos lancou uma promocao para este mes: pagando R$ 90 por diaria,
o cliente pode alugar um carro de passeio. Para cada diaria, o cliente recebe uma cota de
quilometragem de 100 km. Cada quilometro a mais custar ́a uma taxa extra de R$ 12.
Faca um programa para calcular o valor total a ser pago por “n” clientes da locadora,
sendo “n” fornecido pelo usu ́ario. O programa recebe como entrada a quantidade de dias
e a quilometragem total rodada por cada cliente e, ao final, calcula e exibe o valor total a
ser pago.
*/
#include <stdio.h>
#include <stdlib.h>
//Declara a Funcao correspondente a locado
void locadoraCarro(int diaria, int quilometro){

    float total_a_pagar;
    //calculo dos total de dias alugado pelo preco da locadora
    diaria = diaria * 90.00;
    if(quilometro > 100){
        quilometro = quilometro - 100;

        quilometro = quilometro * 12;

        quilometro = quilometro + 100;
    }
    //Pega o calor de quilometro a mais com o valor dos dia alugados e soma
    total_a_pagar = diaria + quilometro;

    printf("Valor a ser pago pelo cliente : %f", total_a_pagar);

}
int main()
{
    float diaria, quilometro;

    //Entrada da quantidade de dia do carro alugado
    printf("Total de dias que o carro foi alugado: ");
    scanf("%f",&diaria);

    // Entrada de quilometros rodados
    printf("Total de quilometros carro percorreu: ");
    scanf("%f",&quilometro);

    locadoraCarro(diaria,quilometro);

    return 0;
}
