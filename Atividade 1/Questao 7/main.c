#include <stdio.h>
#include <stdlib.h>

int main()
{
   float graus;
   float grauskelvin, grausfahre;

   printf("Qual e a sua temperatura em Graus: ");
   scanf("%f",&graus);
    //Conversao de graus para kelvin
   grauskelvin = graus + 273;
    //Conversao de graus para farenheit
   grausfahre = (graus * 1.8) + 32;

   printf("A conversao correspondende de %.2f Graus para kelvin sao: %.2f de kelvin", graus,grauskelvin);
   printf("\nA conversao correspondende de %.2f Graus para Fahrenheit sao: %.2f de Fahrenheit", graus,grausfahre);

    return 0;
}
