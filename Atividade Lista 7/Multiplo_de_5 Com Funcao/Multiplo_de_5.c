/*
5. Faca um programa que leia dois numeros inteiros x e y, representando os valores inicio e
fim de um intervalo. Em seguida, o programa deve mostrar todos os numeros multiplos de
5 entre x (inclusive) e y (inclusive), separados pelo caractere '|'. Note que depois do  ́ultimo
multiplo, nao existe o caractere '|'.
*/
#include <stdio.h>
#include <stdlib.h>
//Declarado a funcao
void multiplo5 (int m, int n){
	int i;
	for (i=m; i<=n; i++){

    	if (i % 5 == 0) { //verifica quais sao multiplos de 5

    		// depois do último múltiplo, não existe o caractere |
        	if (i!=m && i!= m+1 && i!=m+2 && i!=m+3 && i!=m+4) {
            	printf ("|");
        	}
            printf ("%d", i);
        }
    }
}

int main()
{
    //Declarado as variavel
    int x, y;
    //fornece as entradas
    printf("fornca o valor dos intervalo inicio de X e o intervalo final de Y");
    printf("\nValor de X eh: ");
    scanf("%d",&x);
    printf("Valor de Y eh: ");
    scanf("%d",&y);
    //funcao
    multiplo5(x, y);


    return 0;
}
