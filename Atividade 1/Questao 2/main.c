#include <stdio.h>
#define pi 3.1415

int main() {
    float raio;
    float perimetro, perimetroTotal;

    printf("Nos de o valor de R: ");
    scanf("%f",&raio);

    perimetro = (2 * pi) * raio;


    printf("O valor do perimetro eh: %f", perimetro);

    return 0;
}
