#include <stdio.h>

int main(){

    int numero1, numero2,numero3;

    printf("Sua entrada he: ");
    scanf("%d%d%d", &numero1, &numero2, &numero3);
    
    // Variavel menor assume o numero1 como mentor
    int menor = numero1;
    //faz a comparacao do numero2 com o menor, e se for o menor ele assume como o menor numero
    if (numero2 < menor){
        menor = numero2;
    }
    //faz a comparacao do numero3 com o menor, e se for o menor ele assume como o menor
    if (numero3 < menor){
        menor = numero3;
    }
    //Monstra o resultado
    printf("O numero mentor eh: %d",menor);

}
