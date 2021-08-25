#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distanciaPercorrido;
    float combustivelGasto;
    float resultadoTotal;

    printf("Qual a distancia percorrida: ");
    scanf("%f", &distanciaPercorrido);

    printf("Qual o total de combustivel gasto: ");
    scanf("%f",&combustivelGasto);

    resultadoTotal = distanciaPercorrido / combustivelGasto;

    printf("O consumo medio do carro eh: %f",resultadoTotal);


    return 0;
}
