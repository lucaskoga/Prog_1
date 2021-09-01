#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Criacao das variaveis
    int x1, x2, x3;
    scanf("%d%d%d", &x1, &x2, &x3);

    printf("*----*----*\n\n");

    // faz a comparacão se os 3 numeros sao igualis
    if(x1 == x2 && x2 == x3){
        printf("Equilatero\n\n");
    }
    // faz a comparacão se pelo menos o x1 e o x2 sao igual
    else if(x1 == x2 && x2 != x3){
        printf("Isosceles\n\n");
    }
    // se nem um dos 2 acima estiver correto
    else if(x1 != x2 && x2 != x3){
        printf("Escaleno\n\n");
    }
    else{
        printf("Alguma das entrada e invalida");
    }

    return 0;
}
