#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    float velocidadeDoCarro, velocidadeDaVia, multa;
    int pontos;
    //entrando com o valores
    printf("Qual a velocidade do carro: ");
    scanf("%f", &velocidadeDoCarro);
    printf("Qual a velocidade maxima da via: ");
    scanf("%f", &velocidadeDaVia);

    //Faz a divisao
    float porcentualDaVia = velocidadeDoCarro / velocidadeDaVia;
    //responsavel pela decisao de qual muda a ser aplicada
   if(porcentualDaVia > 1){
         if(porcentualDaVia <= 1.2){
        multa = 130.16;
        pontos = 4;
        }
        else if(porcentualDaVia < 1.5){
            multa = 195.23;
            pontos = 5;
        }
        else{
            multa = 880.41;
            pontos = 7;
        }
        printf("Valor da multa: %.2f\n Pontos na carteira: %d",multa, pontos);

    }
    else{
            printf("Nao teve multa por velocidade");
        }

    return 0;
}
