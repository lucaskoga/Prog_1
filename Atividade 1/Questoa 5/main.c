#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distanciaTotal, tempo_hora, velocidadeHora;

    printf("Qual e a distancia percorrida: ");
    scanf("%f",&distanciaTotal);

    printf("Qual e o tempo: ");
    scanf("%f",&tempo_hora);

    velocidadeHora = distanciaTotal / tempo_hora;

    printf("A velocidade Media do carra e: %f",velocidadeHora);

    return 0;
}
