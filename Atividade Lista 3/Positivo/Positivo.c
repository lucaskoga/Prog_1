#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, media, media_Total;
    //Entrada com os numeri
    printf("Qual e o numero que deseja: ");
    scanf("%f",&num1);
    printf("Qual e o numero que deseja: ");
    scanf("%f",&num2);
    printf("Qual e o numero que deseja: ");
    scanf("%f",&num3);
    //faz o calculo da media
    media = num1 + num2 + num3;
    media = media /3;

    // responsavel por ver se o resultado da media e igual ou maior que o numero de entrada
    if(media <= num1){
        printf("%f\n", num1);
    }
    if( media <= num2){
            printf("%f\n", num2);
    }
    if(media <= num3){
        printf("%f\n",num3);
    }

    return 0;
}
