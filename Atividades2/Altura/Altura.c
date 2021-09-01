#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    int idade;
    int brinquedosLiberados = 0;

    printf("Altura necessaria para entrar no brinquedo: ");
    scanf("%f", &altura);
    printf("Idade necessaria para entrar no brinquedo: ");
    scanf("%d",&idade);

    if(altura >= 1.5 && idade >= 12){
        printf("Barca Viking\n");
        brinquedosLiberados++;
    }
    if(altura > 1.4 && idade >= 14){
        printf("Elevator of Death\n");
        brinquedosLiberados++;
    }
    if(altura >= 1.7 && idade >= 16){
        printf("Final Killer\n");
        brinquedosLiberados++;
    }
    printf("Quantidade de brinquedo possivel para a crianca brincar: %d",brinquedosLiberados);
    return 0;
}
