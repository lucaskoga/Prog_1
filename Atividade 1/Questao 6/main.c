#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415
int main()
{

    float raio, h , volume;
    float resultado_Raio, resultado_Pi_raio;


    printf("Nos diga qual e o raio: ");
    scanf("%f",&raio);

    printf("Nos diga qual e o valor de h: ");
    scanf("%f",&h);

    resultado_Raio = raio * 2;

    resultado_Pi_raio = (resultado_Raio * pi);

    volume = resultado_Pi_raio * h / 3;

    printf("O volume eh: %f",volume);


    return 0;
}
