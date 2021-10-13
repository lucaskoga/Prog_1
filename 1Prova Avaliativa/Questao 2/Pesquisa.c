/*
2. [2,0] Uma pesquisa foi realizada com habitantes da regiao do Norte Pioneiro do Estado
do Parana. Na pesquisa, foram coletados dados como sexo (1 – feminino, 0 – masculino)
e salario. Sua tarefa ́e implementar um programa que receba os dados dos profissionais
(maximo 100), calcule e mostre:
(a) A m ́edia salarial da populacao;
(b) O maior salario encontrado;
(c) A media salarial das mulheres;
(d) O percentual de mulheres na populacao.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaro as variaveis
    int i, n, count, x;
    float salario, salarioTotal, maior, menor, mulher, porcentualMulher;
    //inicio o valores
    maior = salario;
    count = 0;
    x = 100;

    //inicio o for
    for( i = 0; i < x; i++){
        //Pegos as entrada pelo teclado
        printf("Qual o codigo da pesquisa: ");
        scanf("%d",&n);
        printf("Qual o salario do profissionais: ");
        scanf("%f",&salario);

        // somo o salario total da populacao
        salarioTotal = salarioTotal + salario;

        // procuro o maior salario da populacao
        if(salario > maior){
          maior = salario;
        }
        //se o codigo for 1 corresponde a sexo feminino
        if(n == 1){
            mulher = mulher + salario;
            count++;
        }
        porcentualMulher = 100 * count;
        porcentualMulher = porcentualMulher / x;
    }
    //Faz a media salarial total e da mulher
    salarioTotal = salarioTotal / x;
    mulher = mulher / count;

    printf("\nA media salarial da populacao: %.2f",salarioTotal);
    printf("\nO maior numero eh: %.2f: ", maior);
    printf("\nA media salarial das mulheres eh: %.2f",mulher);
    printf("\nO percentual de mulheres na populacao eh: %.2f",porcentualMulher);

    return 0;
}
