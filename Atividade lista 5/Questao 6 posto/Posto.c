/*
6. Uma distribuidora de combustıveis pretende dar um aumento em funcao da quantidade de
combustıvel comprado anualmente por seus clientes. Os postos que consomem em media
ate 50.000 litros de combustıvel ao mes, ter ̃ao aumento de 27%. J ́a os postos que consomem
acima desta m ́edia, terao 18% de aumento. Faca um programa que receba o codigo e o
consumo anual de no m ́aximo 30 postos, calcule e mostre qual ser ́a o pre ̧co do litro de
combust ́ıvel para cada um, levando-se em conta que hoje a distribuidora cobra R$2.77 por
litro.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int codigo, consumoAnual;
    float valorLitro;

    for (int i = 0; i <= 2; i++){
        printf("Entre com o codigo do posto %d \n", i+1);
        scanf("%d", &codigo);
        printf("Entre com o consumo anual do posto %d \n", i+1);
        scanf("%d", &consumoAnual);

        if (consumoAnual <= 50000)
            valorLitro = (0.27 * 2.77) + 2.77; //1 cenario

        if (consumoAnual > 50000)
            valorLitro = (0.18 * 2.77) + 2.77; //2 cenario  

        printf("Preco reajustado do posto %d %.2f\n", codigo, valorLitro);
    }
   
    return 0;
}
