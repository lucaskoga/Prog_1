/*Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista.
Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual,
 e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . )*/

 #include <stdio.h>

 int main (){

      float temperatura[12], media;
      media = 0;

      for(int i = 0; i < 12; i++){

           switch (i)
           {
           case 0:
               printf("Digite a temperatura media de Janeiro: ");
                break;
          case 1:
               printf("Digite a temperatura media de Fevereiro: ");
                break;
          case 2:
               printf("Digite a temperatura media de Marco: ");
                break;
          case 3:
               printf("Digite a temperatura media de Abril: ");
                break;
          case 4:
               printf("Digite a temperatura media de Maio: ");
                break;
          case 5:
               printf("Digite a temperatura media de Junho: ");
                break;
          case 6:
               printf("Digite a temperatura media de Julho: ");
                break;
          case 7:
               printf("Digite a temperatura media de Agosto: ");
                break;
          case 8:
               printf("Digite a temperatura media de Setembro: ");
                break;
          case 9:
               printf("Digite a temperatura media de Outubro: ");
                break;
          case 10:
               printf("Digite a temperatura media de Novembro: ");
                break;
          case 11:
               printf("Digite a temperatura media de Dezembro: ");
                break;

           default:
                break;
           }

           scanf("%f",&temperatura[i]);

          media = media + temperatura[i];
      }

      media = media/12;

      printf("A media de temperaturas no ano foi de: %f\n", media);

      printf("Os meses que apresentaram temperatura acima da media foram:\n ");

      for(int i = 0; i < 12; i++){

           if(temperatura[i]>media){
                switch (i){
           case 0:
               printf("Janeiro:%f\n",temperatura[i]);
                break;
          case 1:
               printf("Fevereiro:%f\n",temperatura[i]);
                break;
          case 2:
               printf("Marco:%f\n",temperatura[i]);
                break;
          case 3:
               printf("Abril:%f\n",temperatura[i]);
                break;
          case 4:
               printf("Maio:%f\n",temperatura[i]);
                break;
          case 5:
               printf("Junho:%f\n",temperatura[i]);
                break;
          case 6:
               printf("Julho:%f\n",temperatura[i]);
                break;
          case 7:
               printf("Agosto:%f\n",temperatura[i]);
                break;
          case 8:
               printf("Setembro:%f\n",temperatura[i]);
                break;
          case 9:
               printf("Outubro:%f\n",temperatura[i]);
                break;
          case 10:
               printf("Novembro:%f\n",temperatura[i]);
                break;
          case 11:
               printf("Dezembro%f\n",temperatura[i]);
                break;

           default:
                break;
                    }

            }
        }
 }
