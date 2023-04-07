/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

#define Tamanho 20

int main() {
    int vetor1[Tamanho], vetor2[Tamanho], resultado[Tamanho];
    char operacao[Tamanho];
    int x;

    // lendo os vetores e as operações do usuário
    printf("Digite %d numeros para o primeiro vetor:\n", Tamanho);
    for (x = 0; x < Tamanho; x++) {
        scanf("%d", &vetor1[x]);
    }

    printf("Digite %d numeros para o segundo vetor:\n", Tamanho);
    for (x = 0; x < Tamanho; x++) {
        scanf("%d", &vetor2[x]);
    }

    printf("Digite %d operacoes (+, -, *, /) para o terceiro vetor:\n", Tamanho);
    for (x = 0; x < Tamanho; x++) {
        scanf(" %c", &operacao[x]); // note o espaço antes do %c para evitar buffer overflow
    }

    // realizando as operações e armazenando no vetor resultado
    for (x = 0; x < Tamanho; x++) {
        switch (operacao[x]) {
            case '+':
                resultado[x] = vetor1[x] + vetor2[x];
                break;
            case '-':
                resultado[x] = vetor1[x] - vetor2[x];
                break;
            case '*':
                resultado[x] = vetor1[x] * vetor2[x];
                break;
            case '/':
                resultado[x] = vetor1[x] / vetor2[x];
                break;
            default:
                printf("Operacao invalida na posicao %d.\n", x);
                resultado[x] = 0;
                break;
        }
    }

    // imprimindo o vetor resultado
    printf("Resultado:\n");
    for (x = 0; x < Tamanho; x++) {
        printf("%d ", resultado[x]);
    }
    printf("\n");

    return 0;
}
