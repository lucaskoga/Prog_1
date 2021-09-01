#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tabela 1: Precos dos produtos\n");
    printf("Codigo    Preco unitario\n");
    printf("  1   - >    R$ 5.30\n");
    printf("  2   - >    R$ 6.00\n");
    printf("  3   - >    R$ 2.30\n");
    printf("  4   - >    R$ 2.50\n\n");

    int codigoProduto, quantidade;
    double preco, quantidade_comprada, soma;
    printf("Qual o codigo do produto: \n");
    scanf("%d",&codigoProduto);

    printf("Quantidade do produto: \n");
    scanf("%d", &quantidade);

    printf("preco: \n");
    scanf("%lf", &preco);

    quantidade_comprada = quantidade * preco;

    if(quantidade_comprada >= 15.0){
        soma = quantidade_comprada * 0.15;
        printf("Desconto concedido ao cliente: %.2lf\n", soma);
        quantidade_comprada = quantidade_comprada - soma;
        printf("O cliente esta comprando um total de: %d produto, pagando o valor com o desconto de: %.2lf R$ no produto com o codigo: %d\n",quantidade, quantidade_comprada, codigoProduto);

    }
    else if( quantidade_comprada >= 40.0){
        soma = quantidade_comprada * 0.15;
        printf("Desconto concedido ao cliente: %lf\n", soma);
        quantidade_comprada = quantidade_comprada - soma;
        printf("O cliente esta comprando um total de: %d produto, pagando o valor com o desconto de: %.2lf R$ no produto com o codigo: %d\n",quantidade, quantidade_comprada, codigoProduto);
    }

    return 0;
}
