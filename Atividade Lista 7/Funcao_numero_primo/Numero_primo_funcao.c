/*
3. Crie um programa para verificar se um numero  ́e primo ou nao. O programa deve ser
encerrado quando for digitado qualquer numero menor que 0.
*/
#include <stdio.h>
#include <stdlib.h>
//Declara o funcao do numero primi
void numero_Primo(int n){
    int num;
    int count;
    // inicia as variaveis
    num = n;
    count = 0;
    // entra no while e conta quantas vezes o valor de n e igual a 0
    while(n>1){
        if(num%n == 0)

            count ++;
        n--;
    }
    // verifica a quantidade de vez que o count foi maior que 1 e da i resultado
    if(count > 1){
        printf("%d nao eh primo.\n", num);
    } else printf("%d eh primo.\n", num);


}

int main (){
    int num;

    printf("Digite o numero que deseja saber se eh primo: ");
    scanf("%d",&num);


    numero_Primo(num);

    return 0;

}
