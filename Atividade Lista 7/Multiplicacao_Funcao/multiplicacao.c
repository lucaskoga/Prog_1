/*
3. Faca um programa que receba como entrada dois nu ́meros inteiros e realize a multiplicação deles
sem utilizar o operador de *.
*/
#include <stdio.h>
#include <stdlib.h>
//Declaracao da funcao demultiplicacao de dois numeros
void multiplicador(int num1, int num2){

    int count, mult;

    count = 0;

    //Inicia a variavel que guarda  a multiplicacao em 0
    mult = 0;
    //Faz a repeticao até alcancar o valor de count igual a num2
    while(count < num2){
         mult = mult + num1;
         count++;
    }
    printf("A multiplicacao entre %d e %d e igual a %d: ",num1 ,num2, mult);
}
int main()
{
    //Declaracao de variavel
    int num1,num2;
    //Entrada pelo teclado
    printf("Qual o primeiro numero da multiplicacao: ");
    scanf("%d",&num1);
    printf("Qual o segundo numero da multiplicacao: ");
    scanf("%d",&num2);

    multiplicador(num1,num2);

    return 0;
}
