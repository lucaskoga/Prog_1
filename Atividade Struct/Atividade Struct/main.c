#include <stdio.h>
#include <stdlib.h>

struct TotalDeVideos{
  int quantidadeDeVideos;
  int videosAssistido;
};

void somaVideos(struct TotalDeVideos videos){
    int auxResultado;
    auxResultado = auxResultado + videos.videosAssistido;
    printf("O total de videos assistido eh: %d",auxResultado);
};
void somaQuantidade(struct TotalDeVideos videos){
    int auxResultado;
    auxResultado = auxResultado + videos.quantidadeDeVideos;
    printf("\nA quantidade de vezes assistido eh: %d", auxResultado);
};

int main() {
    struct TotalDeVideos totalDeVideos;
    int menu;

    while(1){
        printf(" Informe qual item deseja selecionar:\n 1 - Adicionar mas videos a ser assistido \n 2 - Adicionar quantidade de vezes assistidos: \n 3 - Para sair. \n");
        scanf("\n%d", &menu);
        if(menu == 3){
            break;
        }
        if(menu == 1 ){
            printf("Informe a quantidade de video assistindos: ");
            scanf("%d", &totalDeVideos.videosAssistido);
            somaVideos(totalDeVideos);
        }
        if( menu == 2){
            printf("Informe a quantidade de vezes que o video foi assistindos: ");
            scanf("%d", &totalDeVideos.quantidadeDeVideos);
            somaQuantidade(totalDeVideos);
        }
        menu++;
    }

    return 0;
}
