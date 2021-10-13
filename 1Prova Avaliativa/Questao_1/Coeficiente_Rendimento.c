/*
1. [2,0] O Coeficiente de Rendimento (CR) do aluno corresponde a media de todas as suas
notas nas disciplinas cursadas por ele. Implemente um programa que calcule e mostre o
CR atual dos alunos do curso de Ciˆencia da Computacao da UENP. Para cada aluno, o
programa deve ler o numero de matrıcula do aluno (1 ≤ n ́umero de matricula ≤ 1000), as
disciplinas cursadas (considere que aluno tenha cursado 10 disciplinas) e as notas obtidas.
Por fim, o programa deve exibir:
a. A matrıcula do aluno, juntamente com as notas obtidas nas disciplinas e o CR devidamente
calculado;
b. A media aritmetica das notas obtidas, excluindo se a menor e a maior nota;
c. O melhor CR dos alunos do curso.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaro as variaveis iniciais
    int numeroMatricula;
    //Declaro a variavel float
    float notaFinal, coeficienteRendimento, maior, menor,coeficienteMaior,testm;
    //Declaro a variavel Char
    char disciplinas [100];
    //Declaro as variaveis utilizada nos for
    int x, maximoMatricola, i, u;
    //Declara as variaveis para uma melhor visao dos printf das diciolinas e da nota
    int n,m;

    // inicia as variaveis de contagem
    n= 0;
    m =0;
    coeficienteRendimento = 0;
    menor = 1000000;
    maior = notaFinal;

    //informa a quantidade de CR para ser inserido
    printf("informe o numero maximo de matricula:");
    scanf("%d",&maximoMatricola);
        // for para ler a o numero de matricula
        for(x = 0; x < maximoMatricola; x++){
            // informa os entrada nos  numero de matricula
            printf("\nInforme o Numero de Matricula: ");
            scanf("%d",&numeroMatricula);

            for(i = 0; i < 10; i++){
                /*printf("\n %d = Qual o nome da Disciplinas: ",n = n +1);
                scanf("%s",&disciplinas);*/

                printf("\n %d = Informa a nota desta Materia: ",m = m +1);
                scanf("%f",&notaFinal);
                //calcula o coeficiente de rendimento 
                coeficienteRendimento = coeficienteRendimento + notaFinal;
                coeficienteRendimento = coeficienteRendimento / 10;
                //Faz a verificacao do menor numero
                if(notaFinal < menor){
                    menor = notaFinal ;
                }
                if(notaFinal > maior){
                    maior = notaFinal ;
                }
            }
            //verifica qual e o Coeficiente maior
            if(coeficienteRendimento > coeficienteMaior){
                    coeficienteMaior = coeficienteRendimento ;
                }
            printf("\nA Matricula do Aluno eh: %d, As notas obtidas sao: %f: , e o CR calculado eh: %f",numeroMatricula, notaFinal,coeficienteRendimento);
            printf("\nO menor numero eh: %f: ", menor);
            printf("\nO maior numero eh: %f: ", maior);
            printf("\nO maior CR eh: %f",coeficienteMaior);
        }

    return 0;
}
