#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, x1, x2, delta;

    printf("Qual o valor da sua entrada");
    scanf("%f%f%f", &a, &b, &c);

    if(a == 0){
        printf("Não eh equasao de segundo grau\n");
    }
    else{
        delta = pow(b,2) - (4 *a *c);
        if(delta < 0 ){
            printf("Nao possui raiz\n");
        }
        else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2f\n x2 = %.2f\n",x1, x2);
        }
    }
    return 0;
}
