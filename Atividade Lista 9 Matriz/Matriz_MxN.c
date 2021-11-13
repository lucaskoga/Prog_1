/*2. Faca um programa que leia uma matriz de ordem M x N, em que M x N sao dados pelo
usuario, sendo 2 ≤ M ≤ 15 e 3 ≤ N ≤ 20. Em seguida, o programa deve calcular e
mostrar a soma dos numeros pares e a soma dos numeros  ́ımpares presentes na matriz.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaro as variaveis
    int M, N , m, n;
    int somaPar, somaImpar;
    //Inicio as variaveis de soma para não ter lixo
    somaPar = 0;
    somaImpar = 0;
    
    //Tenho as entradas
    printf("Por favor coloque quantas Colunas possui a matriz tem que possuir 2 <= M <= 15: ");
    scanf("%d",&M);
    printf("Por favor coloque quantas Linhas Possui a Matriz tem que possuir 3 <= N <= 20: ");
    scanf("%d",&N);
    //Verificacão se a entrda e oque deseja
    if(2 <= M && M <= 15 && 3 <= N && N <= 20){
        m = M;
        n = N;
    }else
        printf("Entrada Encorreta!!!");
    
    //Inicializacão da matriz
    int matriz[m][n];
    
    //Leitura da matriz
    for(int x = 0; x < M; x++){
        for(int y = 0; y < N; y++){
            scanf("%d", &matriz[x][y]);
        }
    }
    
    //Faz a Verificacao se na matriz possui numeros impares e faz a soma deles
    for(int x = 0; x < M; x++){
        for(int y = 0; y < N; y++){
            if(matriz[x][y]%2 == 0){
                somaPar = somaPar + matriz[x][y];
            }
            else{
                somaImpar = somaImpar + matriz[x][y];
            }
        }
    }
    printf("A soma de Par eh: %d\n",somaPar);
    printf("A soma de Impar eh: %d\n",somaImpar);
    //Faz a impressao da matriz criada
    
    for(int x = 0; x < M; x++){
        for(int y = 0; y < N; y++){
            printf("|%d|\t",matriz[x][y]);
        }
        printf("\n");
    }

    return 0;
}
