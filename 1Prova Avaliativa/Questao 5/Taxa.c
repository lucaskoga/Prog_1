/*
5. [2,0] Um shopping da cidade cobra uma taxa mınima de R$8,00 de estacionamento, valido
por at ́e 2 horas. Caso o usuario exceda o hor ́ario permitido,  ́e cobrado um adicional de
R$4,00 por hora ou fracao excedida. Sua tarefa  ́e implementar um programa que receba
do usuario um numero representando a quantidade de ve ́ıculos estacionados. Em seguida,
para cada ve ́ıculo, deve ser lido a sua placa e o n ́umero de horas que o ve ́ıculo ficou no
estacionamento. Ao final, o programa deve exibir:
a. A placa de cada ve ́ıculo, juntamente com o numero de horas estacionado e a tarifa
paga devidamente calculada;
b. O total arrecadado com o estacionamento.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int veilucosEstacionados, i, placa, horasEstacionados,totalDeHora,count, totalApagar, valorAdicional, valorArecadado;
    printf("Informe a quantidade de Veiculos estacionados: ");
    scanf("%d",&veilucosEstacionados);

    count = 0;
    totalDeHora = 0;

        for(i = 0; i < veilucosEstacionados; i++){
            printf("Qual a placa do carro: ");
            scanf("%d",&placa);
            printf("Quantidades De horas que utilizou o estacionamento: ");
            scanf("%d",&horasEstacionados);

            totalDeHora = horasEstacionados * 60;
            totalDeHora = totalDeHora - 120;

            while(1){
                if(totalDeHora <= 0){
                    break;
                }
                totalDeHora = totalDeHora - 60;
                count++;
            }
            
        }

    valorAdicional = 4 * count;
    totalApagar = 8 +valorAdicional;
    valorArecadado = totalApagar * veilucosEstacionados;

    printf("\nA)-A placa eh: %d, Total de Horas que o carrao ficou no estacionamento eh: %d horas, o tarifa a pagar eh: %d R$",placa, horasEstacionados, totalApagar);
    printf("\nB)-O total arrecadado com o estacionamento eh: %d",valorArecadado);

    return 0;
}
