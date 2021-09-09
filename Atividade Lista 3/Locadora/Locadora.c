#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diaria, quilometro, total_a_pagar;
    
    //Entrada da quantidade de dia do carro alugado
    printf("Total de dias que o carro foi alugado: ");
    scanf("%f",&diaria);
    
    // Entrada de quilometros rodados
    printf("Total de quilometros carro percorreu: ");
    scanf("%f",&quilometro);
    
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

    return 0;
}
