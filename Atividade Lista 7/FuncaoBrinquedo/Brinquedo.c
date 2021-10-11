#include <stdio.h>
#include <stdlib.h>
//instancia a funcao 
void verificar_Altura(int idade, float altura){
    int brinquedosLiberados = 0;

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
}
int main()
{
    float altura;
    int idade;
    int c;

    printf("Idade necessaria para entrar no brinquedo: ");
    scanf("%d",&idade);
    printf("Altura necessaria para entrar no brinquedo: ");
    scanf("%f", &altura);

     //declara a funcao
     verificar_Altura(idade, altura);

    return 0;
}
