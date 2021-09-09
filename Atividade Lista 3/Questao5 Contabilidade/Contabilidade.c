#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, resultado;
    int opcao;
    
    //Entrada do salario dos clientes
    printf("Qual o salario do cliente: ");
    scanf("%f",&salario);
    
    //As opicao para saber qual e os clientes
    printf("Opicao de cliente: \n");
    printf("1 - Veriador: \n");
    printf("2 - Auxiliar de Escritorio:\n");
    printf("3 - Auxiliar de Enfermagem:\n");
    printf("4 - Bibliotecario:\n");
    
    //Opicao para escolher qual a instrucao a seguir
    printf("A opicao a ser escolhida eh: ");
    scanf("%d",&opcao);
    switch(opcao){
    case 1:
        resultado = salario * 0.10;
        printf("Valor do Reajuste eh: %.2f\n",resultado);
        resultado = resultado + salario;
        printf("Salario Atualizado do Cliente eh: %.2f\n",resultado);
    break;

    case 2:
        resultado = salario * 0.07;
        printf("Valor do Reajuste eh: %.2f\n",resultado);
        resultado = resultado + salario;
        printf("Salario Atualizado do Cliente eh: %.2f\n",resultado);
    break;

    case 3:
        resultado = salario * 0.12;
        printf("Valor do Reajuste eh: %.2f\n",resultado);
        resultado = resultado + salario;
        printf("Salario Atualizado do Cliente eh: %.2f\n",resultado);
    break;

    case 4:
            resultado = salario * 0.11;
        printf("Valor do Reajuste eh: %.2f\n",resultado);
        resultado = resultado + salario;
        printf("Salario Atualizado do Cliente eh: %.2f\n",resultado);
    break;

    }

    return 0;
}
