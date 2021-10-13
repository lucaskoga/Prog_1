/*
3. [2,0] Voce ficou incumbido de realizar uma pesquisa para identificar o perfil dos alunos que
ingressaram no curso de Ciencia da Computacao da UENP no ano de 2021. Para isso,
faca um programa que recebe como entrada o total de alunos que prestaram vestibular e
o numero de alunos (indeterminado) que foram aprovados. Para cada aluno aprovado, o
programa deve ler a idade, o sexo (1 – feminino, 0 – masculino) e o numero de participacoes
no vestibular. A insercao de alunos aprovados deve ser encerrada quando o usuario digitar
-1 para a idade. Em seguida, o programa deve calcular e exibir:
a. Percentual de alunos aprovados no vestibular;
b. Media de idade dos alunos aprovados no vestibular;
c. Percentual de mulheres aprovadas no vestibular;
d. Percentual de alunos com 2 ou mais participacoes em vestibular no ano.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaro toda as vareaveis Utilizada
    int alunosIngressantes, alunosAprovados, idade, sexo, numeroParticipacao,porcentualAprovado, count, mediaAluno, countMu, porcentualMulherApro, AlunosComMaisDe2, porcentualDeAlunosComMaisVesti;
    //Inicio todas as variaveis necessario com 0
    count = 0;
    mediaAluno = 0;
    countMu = 0;
    //entrada pelo teclado
    printf("Qual o Total de alunos que Ingressaram no curso: ");
    scanf("%d",&alunosIngressantes);
    printf("E o numero total de aprovados: ");
    scanf("%d",&alunosAprovados);
    printf("Quantidade de alunos que participou em mais de 1 vestibulas no ano: ");
    scanf("%d",&AlunosComMaisDe2);
        //rodo meu loop
        while(1){
            printf("\nQual a idade: ");
            scanf("%d",&idade);
            //Para não entrar em loop infinito declaro para que quando digitar algo menor que 0 para o loopp
            if(idade < 0){
                break;
            }
            printf("\nQual o sexo da Pessoa 1 - Feminino eh 0 - Masculino: ");
            scanf("%d",&sexo);
            printf("\nQual o numero de participacao: ");
            scanf("%d",&numeroParticipacao);

            mediaAluno = mediaAluno + idade;

            if(sexo == 1){
                countMu++;
            }
            count++;
        }
        //Faco todo os calculos fora do lopp
        porcentualAprovado = 100 * alunosAprovados;
        porcentualAprovado = porcentualAprovado / alunosIngressantes;
        mediaAluno = mediaAluno / count;
        porcentualMulherApro = 100 * count;
        porcentualMulherApro = porcentualMulherApro / alunosAprovados;
        porcentualDeAlunosComMaisVesti = 100 * AlunosComMaisDe2;
        porcentualDeAlunosComMaisVesti = porcentualDeAlunosComMaisVesti / alunosIngressantes;

    //imprimos todos os resultado que pede
    printf("\nA)-Percentual de alunos aprovados no vestibular eh: %d",porcentualAprovado);
    printf("\nB)-Media de idade dos alunos aprovados no vestibular eh: %d",mediaAluno);
    printf("\nC)-Percentual de mulheres aprovadas no vestibular eh: %d",porcentualMulherApro);
    printf("\nD)-Percentual de alunos com 2 ou mais participacoes em vestibular no ano: %d",porcentualDeAlunosComMaisVesti);
    return 0;
}
