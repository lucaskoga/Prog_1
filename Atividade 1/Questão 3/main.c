#include <stdio.h>
#include <stdlib.h>

int main()
{
    float imc, peso, altura;

    printf("Nos diga qual e o seu peso: ");
    scanf("%f",&peso);

    printf("Nos diga agora qual a sua altura: ");
    scanf("%f",&altura);

    imc = peso / (altura * 2);

    printf("Seu IMC atual e de: %f",imc);
    return 0;
}
