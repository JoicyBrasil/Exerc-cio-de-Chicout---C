/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int placar_apostado, placar_jogo;
    int pontos = 0;

//O programa começa lendo o placar apostado e o placar do jogo fornecidos pelo usuário, usando as funções scanf.
    printf("Digite o placar apostado: ");
    scanf("%d", &placar_apostado);

    printf("Digite o placar do jogo: ");
    scanf("%d", &placar_jogo);

//É calculado o número de pontos que o apostador fez, com base nas seguintes regras:
//Se o placar apostado for igual ao placar do jogo, o apostador ganha 100 pontos.
//Se o placar apostado for um gol de diferença (para mais ou para menos) em relação ao placar do jogo, o apostador ganha 50 pontos.
    if (placar_apostado == placar_jogo) {
        pontos = 10;
    } else if (placar_apostado - placar_jogo == 1 || placar_jogo - placar_apostado == 1) {
        pontos = 5;
    }

    printf("Voce fez %d pontos\n", pontos);

    return 0;
}
