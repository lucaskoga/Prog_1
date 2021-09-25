#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total,aprovado = 0, exame = 0, reprovado = 0;
    int not1,not2,not3,not4;
    float mediafinal, mediaTurma, porcentualExame, porcentualReprova;
    printf("Total de Alunos da turma: ");
    scanf("%d",&total);


    for(int i = 0; i < total; i++){
        printf("Qual as nota dos alunos: ");
        scanf("%d%d%d%d",&not1, &not2, &not3, &not4);

        mediafinal = not1 + not2 + not3 + not4;
        mediafinal = mediafinal / 4;

        if(mediafinal >= 70){
            aprovado++;
        }else if(mediafinal > 40){
            exame++;
        }
        else {
            reprovado++;
        }

        mediaTurma = mediaTurma + mediafinal;

    }
    mediaTurma = mediaTurma / total;
    porcentualExame = (exame * 100) / total;
    porcentualReprova = (reprovado * 100) / total;

    printf("*===*===*\n");
    printf("Total de Alunos aprovados: %d\n",aprovado);
    printf("Media Final da Turma: %.2f\n",mediaTurma);
    printf("O Porcentual da alunos que ficou de exame eh: %.2f\n",porcentualExame);
    printf("O Porcentual de alunos que reprovou foi de: %.2f\n",porcentualReprova);

    return 0;
}
