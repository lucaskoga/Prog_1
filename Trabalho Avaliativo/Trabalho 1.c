/*
    Trabalho Avaliativo Letreiro digital 3D.
    Alunos: Weslem Cristiano, Lucas Renato Hiroshi Koga.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

#define MAXIMO_CARACTERES 256

#define TOTAL_LINHAS 8
#define TOTAL_COLUNAS 18


char A[8][18] = { "        db       \0",
                  "       d88b      \0",
                  "      d8'`8b     \0",
                  "     d8'  `8b    \0",
                  "    d8YaaaaY8b   \0",
                  "   d8\"\"\"\"\"\"\"\"8b  \0",
                  "  d8'        `8b \0",
                  " d8'          `8b\0" };

char B[8][18] = { "    88888888ba   \0",
                  "    88      \"8b  \0",
                  "    88      ,8P  \0",
                  "    88aaaaaa8P'  \0",
                  "    88\"\"\"\"\"\"8b,  \0",
                  "    88      `8b  \0",
                  "    88      a8P  \0",
                  "    88888888P\"   \0" };

char C[8][18] = { "    ,ad8888ba,   \0",
                  "   d8\"'    `\"8b  \0",
                  "  d8'            \0",
                  "  88             \0",
                  "  88             \0",
                  "  Y8,            \0",
                  "   Y8a.    .a8P  \0",
                  "    `\"Y8888Y\"'   \0"  };

char D[8][18] = { "  88888888ba,    \0",
                  "  88      `\"8b   \0",
                  "  88        `8b  \0",
                  "  88         88  \0",
                  "  88         88  \0",
                  "  88         8P  \0",
                  "  88      .a8P   \0",
                  "  88888888Y\"'    \0" };

char E[8][18] = { "   88888888888   \0",
                  "   88            \0",
                  "   88            \0",
                  "   88aaaaa       \0",
                  "   88 \"\"\"\"\"      \0",
                  "   88            \0",
                  "   88            \0",
                  "   88888888888   \0" };

char F[8][18] = { "   88888888888   \0",
                  "   88            \0",
                  "   88            \0",
                  "   88aaaaa       \0",
                  "   88\"\"\"\"\"       \0",
                  "   88            \0",
                  "   88            \0",
                  "   88            \0" };

char G[8][18] = { "    ,ad8888ba,   \0",
                  "   d8\"'    `\"8b  \0",
                  "  d8'            \0",
                  "  88             \0",
                  "  88      88888  \0",
                  "  Y8,        88  \0",
                  "   Y8a.    .a88  \0",
                  "    `\"Y88888P\"   \0" };

char H[8][18] = { "   88        88  \0",
                  "   88        88  \0",
                  "   88        88  \0",
                  "   88aaaaaaaa88  \0",
                  "   88\"\"\"\"\"\"\"\"88  \0",
                  "   88        88  \0",
                  "   88        88  \0",
                  "   88        88  \0" };

char I[8][18] = { "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0" };

char J[8][18] = { "           88    \0",
                  "           88    \0",
                  "           88    \0",
                  "           88    \0",
                  "           88    \0",
                  "           88    \0",
                  "   88,   ,d88    \0",
                  "    \"Y8888P\"     \0" };

char K[8][18] = { "   88      a8P   \0",
                  "   88    ,88'    \0",
                  "   88  ,88\"      \0",
                  "   88,d88'       \0",
                  "   8888\"88,      \0",
                  "   88P   Y8b     \0",
                  "   88     \"88,   \0",
                  "   88       Y8b  \0" };

char L[8][18] = { "   88            \0",
                  "   88            \0",
                  "   88            \0",
                  "   88            \0",
                  "   88            \0",
                  "   88            \0",
                  "   88            \0",
                  "   88888888888   \0" };

char M[8][18] = { "88b           d88\0",
                  "888b         d888\0",
                  "88`8b       d8'88\0",
                  "88 `8b     d8' 88\0",
                  "88  `8b   d8'  88\0",
                  "88   `8b d8'   88\0",
                  "88    `888'    88\0",
                  "88     `8'     88\0" };

char N[8][18] = { "   888b      88  \0",
                  "   8888b     88  \0",
                  "   88 `8b    88  \0",
                  "   88  `8b   88  \0",
                  "   88   `8b  88  \0",
                  "   88    `8b 88  \0",
                  "   88     `8888  \0",
                  "   88      `888  \0" };

char O[8][18] = { "    ,ad8888ba,   \0",
                  "   d8\"'    `\"8b  \0",
                  "  d8'        `8b \0",
                  "  88          88 \0",
                  "  88          88 \0",
                  "  Y8,        ,8P \0",
                  "   Y8a.    .a8P  \0",
                  "    `\"Y8888Y\"'   \0" };

char P[8][18] = { "   88888888ba    \0",
                  "   88      \"8b   \0",
                  "   88      ,8P   \0",
                  "   88aaaaaa8P'   \0",
                  "   88\"\"\"\"\"\"'     \0",
                  "   88            \0",
                  "   88            \0",
                  "   88            \0" };

char Q[8][18] = { "    ,ad8888ba,   \0",
                  "   d8\"'    `\"8b  \0",
                  "  d8'        `8b \0",
                  "  88          88 \0",
                  "  88          88 \0",
                  "  Y8,    \"88,,8P \0",
                  "   Y8a.    Y88P  \0",
                  "    `\"Y8888Y\"Y8a \0" };

char R[8][18] = { "    88888888ba   \0",
                  "    88      \"8b  \0",
                  "    88      ,8P  \0",
                  "    88aaaaaa8P'  \0",
                  "    88\"\"\"\"88'    \0",
                  "    88    `8b    \0",
                  "    88     `8b   \0",
                  "    88      `8b  \0" };

char S[8][18] = { "    ad88888ba    \0",
                  "   d8\"     \"8b   \0",
                  "   Y8,           \0",
                  "   `Y8aaaaa,     \0",
                  "     `\"\"\"\"\"8b,   \0",
                  "           `8b   \0",
                  "   Y8a     a8P   \0",
                  "    \"Y88888P\"    \0" };

char T[8][18] = { "   888888888888  \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0" };

char U[8][18] = { "   88        88  \0",
                  "   88        88  \0",
                  "   88        88  \0",
                  "   88        88  \0",
                  "   88        88  \0",
                  "   88        88  \0",
                  "   Y8a.    .a8P  \0",
                  "    `\"Y8888Y\"'   \0" };

char V[8][18] = { " 8b           d8 \0",
                  " `8b         d8' \0",
                  "  `8b       d8'  \0",
                  "   `8b     d8'   \0",
                  "    `8b   d8'    \0",
                  "     `8b d8'     \0",
                  "      `888'      \0",
                  "       `8'       \0" };

char W[8][18] = { "88b    `8'    d88\0",
                  "88     888     88\0",
                  "88    `888'    88\0",
                  "88   `8b d8'   88\0",
                  "88  `8b   d8'  88\0",
                  "88 `8b     d8' 88\0",
                  "88`8b       d8'88\0",
                  "88b           d88\0" };

char X[8][18] = { "   8b        d8  \0",
                  "    Y8,    ,8P   \0",
                  "     `8b  d8'    \0",
                  "       Y88P      \0",
                  "       d88b      \0",
                  "     ,8P  Y8,    \0",
                  "    d8'    `8b   \0",
                  "   8P        Y8  \0" };

char Y[8][18] = { "   8b        d8  \0",
                  "    Y8,    ,8P   \0",
                  "     Y8,  ,8P    \0",
                  "      \"8aa8\"     \0",
                  "       `88'      \0",
                  "        88       \0",
                  "        88       \0",
                  "        88       \0" };

char Z[8][18] = { "   888888888888  \0",
                  "            ,88  \0",
                  "          ,88\\\"  \0",
                  "        ,88\\\"    \0",
                  "      ,88\\\"      \0",
                  "    ,88\\\"        \0",
                  "   88\\\"          \0",
                  "   888888888888  \0" };

char ESPACO[8][18] = { "                 \0",
                       "                 \0",
                       "                 \0",
                       "                 \0",
                       "                 \0",
                       "                 \0",
                       "                 \0",
                       "                 \0" };

char INTERROGACAO[8][18] = { "    ad88888ba    \0",
                             "   d8\"     \"8b   \0",
                             "   \"\"      a8P   \0",
                             "        ,a8P\"    \0",
                             "       d8\"       \0",
                             "       \"\"        \0",
                             "       aa        \0",
                             "       88        \0" };

char PONTO[8][18] = { "                 \0",
                      "                 \0",
                      "                 \0",
                      "                 \0",
                      "                 \0",
                      "                 \0",
                      "       888       \0",
                      "       888       \0" };

char EXCLAMACAO[8][18] = { "        88       \0",
                           "        88       \0",
                           "        88       \0",
                           "        88       \0",
                           "        88       \0",
                           "        ""       \0",
                           "        aa       \0",
                           "        88       \0" };


void definir_letreiro(char (**letreiro)[18], char frase[], int comprimento) {


    for (int i = 0; i < comprimento; i++) {
        char letra_atual = frase[i];
        if (letra_atual == 'a' || letra_atual == 'A') letreiro[i] = A;
        else if (letra_atual == 'b' || letra_atual == 'B') letreiro[i] = B;
        else if (letra_atual == 'c' || letra_atual == 'C') letreiro[i] = C;
        else if (letra_atual == 'd' || letra_atual == 'D') letreiro[i] = D;
        else if (letra_atual == 'e' || letra_atual == 'E') letreiro[i] = E;
        else if (letra_atual == 'f' || letra_atual == 'F') letreiro[i] = F;
        else if (letra_atual == 'g' || letra_atual == 'G') letreiro[i] = G;
        else if (letra_atual == 'h' || letra_atual == 'H') letreiro[i] = H;
        else if (letra_atual == 'i' || letra_atual == 'I') letreiro[i] = I;
        else if (letra_atual == 'j' || letra_atual == 'J') letreiro[i] = J;
        else if (letra_atual == 'k' || letra_atual == 'K') letreiro[i] = K;
        else if (letra_atual == 'l' || letra_atual == 'L') letreiro[i] = L;
        else if (letra_atual == 'm' || letra_atual == 'M') letreiro[i] = M;
        else if (letra_atual == 'n' || letra_atual == 'N') letreiro[i] = N;
        else if (letra_atual == 'o' || letra_atual == 'O') letreiro[i] = O;
        else if (letra_atual == 'p' || letra_atual == 'P') letreiro[i] = P;
        else if (letra_atual == 'q' || letra_atual == 'Q') letreiro[i] = Q;
        else if (letra_atual == 'r' || letra_atual == 'R') letreiro[i] = R;
        else if (letra_atual == 's' || letra_atual == 'S') letreiro[i] = S;
        else if (letra_atual == 't' || letra_atual == 'T') letreiro[i] = T;
        else if (letra_atual == 'u' || letra_atual == 'U') letreiro[i] = U;
        else if (letra_atual == 'v' || letra_atual == 'V') letreiro[i] = V;
        else if (letra_atual == 'w' || letra_atual == 'W') letreiro[i] = W;
        else if (letra_atual == 'x' || letra_atual == 'X') letreiro[i] = X;
        else if (letra_atual == 'y' || letra_atual == 'Y') letreiro[i] = Y;
        else if (letra_atual == 'z' || letra_atual == 'Z') letreiro[i] = Z;
        else if (letra_atual == '?') letreiro[i] = INTERROGACAO;
        else if (letra_atual == '.') letreiro[i] = PONTO;
        else if (letra_atual == '!') letreiro[i] = EXCLAMACAO;
        else letreiro[i] = ESPACO;
    }
}


void desenhar_letreiro(char (**letreiro)[TOTAL_COLUNAS], int indiceInicio, int comprimento, char frase[]) {
    printf("-> Frase exibida: %s\n\n\n", frase);
    int i, j;
    printf("    ========================================================================================================================================\n");
    for (i = 0; i < TOTAL_LINHAS; i++) {
        printf("   |");
        for (j = 0; j < 7; j++) {
            printf(" %s ", letreiro[(indiceInicio + j) % comprimento][i]);
        }
        printf("   |\n");
    }
    printf("    ========================================================================================================================================\n");
}


int main(void) {

    system("clear||cls");

    printf("-> Aviso:\n\n");
    printf("    * Certifique-se de estar executando o programa em tela cheia!\n");
    printf("\n Digite ENTER para continuar: ");
    getchar();

    system("clear||cls");

    char frase[MAXIMO_CARACTERES];
    printf("-> Entrada da frase\n");
    printf("\n    - Digite a frase a ser exibida (nao sao aceitos numeros nem acentos): ");
    scanf("%[^\n]", frase);
    strcat(frase, "   ");

    int comprimento = strlen(frase);

    char (**letreiro)[TOTAL_COLUNAS] = malloc(comprimento * sizeof(char **));
    definir_letreiro(letreiro, frase, comprimento);

    int contador = 0;

    while (1) {
        usleep(200000);
        system("clear||cls");
        desenhar_letreiro(letreiro, contador, comprimento, frase);
        contador++;
    }

    free(letreiro);

    return 0;
}
