/*
4. [2,0] Suponha que uma pesquisa vem sendo conduzida na UENP com o objetivo de coletar
estatısticas sobre o peso ideal dos alunos da Universidade. Sua tarefa  ́e implementar um
programa que receba como entrada uma quantidade indeterminada de alunos e, para cada
aluno, leia a idade, a altura e o peso. Em seguida, o programa deve calcular e exibir:
a. Media de altura dos alunos;
b. Calculo de  ́Indice de Massa Corp ́orea (IMC) dos alunos. Utlize a f ́ormula: IMC =
peso/altura2;
c. Percentual de alunos com sobrepeso;
d. Percentual de alunos menores de 21 anos caracterizados como obesos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    //Declaro as variaveis
    int quantidadeAluno, idade, i, count, countPeso, countOb;
    float altura, peso, mediaAltura,calculoIMC,percentualSobrePeso, percentualObeso;
    //Entro com a quantidade da alunos
    printf("Qual a Quantidade de alunos: ");
    scanf("%d",&quantidadeAluno);
    
    //Inicio o contadores com 0
    count = 0;
    countPeso = 0;
    countOb = 0;
    
    //Inicio o meu  loop e as variaveis de entrada
    for(i = 0; i < quantidadeAluno; i ++){
        printf("Qual a Idade do aluno: ");
        scanf("%d",&idade);
        printf("Qual a Altura do Aluno: ");
        scanf("%f",&altura);
        printf("Qual o Peso do Aluno: ");
        scanf("%f",&peso);
        
        //calcula a amedia de altura e e o IMC e imprime
        mediaAltura = mediaAltura + altura;
        calculoIMC = peso / (altura + altura);
        printf("\nB)- Calculo de  Indice de Massa Corporea (IMC) dos alunos. Utlize a formula: IMC = %f: \n ",calculoIMC);

        count++;
    }
        
        //Faz a verificacao se o alunos e sobre peso ou obesa
        if(25 <= calculoIMC && calculoIMC <= 29.9){
            countPeso++;
        }
        if(idade >= 21 && calculoIMC >= 30){
            countOb++;
        }
        //Faz os calculos de poercentual
        mediaAltura = mediaAltura / count;
        percentualSobrePeso = 100 * countPeso;
        percentualSobrePeso = percentualSobrePeso / quantidadeAluno;
        percentualObeso = 100 * countOb;
        percentualObeso = percentualObeso /quantidadeAluno;

    printf("\nA)- Media de Altura dos Alunos eh: %f",mediaAltura);
    printf("\nC)- Percentual de alunos com sobrepeso eh: %f",percentualSobrePeso);
    printf("\nD)- Percentual de alunos menores de 21 anos caracterizados como obesos eh: %f",percentualObeso);

    return 0;
}
