#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    int opcao;
    
    //Entrada do valores de X e Y
    printf("Qual o valor de X: ");
    scanf("%f",&x);
    printf("Qual o valor de Y: ");
    scanf("%f",&y);
    
    // responsavel pelas opcao do case
    printf("Escolha qual opcao quer escolher,temos as opcao 1, 2, 3 e 4 \n");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            z = x + y;
            z = z / 2;
            printf("%f",z);
        break;

        case 2:
            if(x > y){
                printf("Diferenca e que %f e maior que  %f: ", x, y);
            }
            else if(x < y){
                printf("Diferenca e que %.2f e menor que  %.2f: ", x, y);
            }
            else if( x == y ){
                printf("Ambos o valor %.2f e %.2f sao iguais", x, y);
            }
        break;

        case 3:
            z = x + y;
            printf("Produto de %.2f e %.2f e igual a %.2f", x, y, z);
        break;

        case 4:
            z = x / y;
            printf("Divisao de %.2f e %.2f e %.2f: ", x, y ,z);
        break;

    }

    return 0;
}
