#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Qual o numero que deseja saber: ");
    scanf("%d", &n);

    if(n >0){
        if(n %2 == 0){
            printf("Positivo par\n");
        }
        else{
        printf("\nPositivo impar");
        }
    }

    if(n < 0){
        if(n %2 == 0){
            printf("Negativo par\n");
        }
        else{
         printf("Negativo impar");
        }
    }
    return 0;
}
