/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float vetor[5];
    int x, codigoInteiro;

    //Valores do vetor
    for (x = 0; x < 5; x++) {
        printf("Digite o valor para a posicao %d: ", x);
        scanf("%f", &vetor[x]);
    }

    // Código e exibição do vetor
    do {
        printf("\nDigite um codigo (0 para sair, 1 para exibir na ordem direta, 2 para exibir na ordem inversa): ");
        scanf("%d", &codigoInteiro);

        if (codigoInteiro == 1) {
            printf("\nVetor na ordem direta:\n");
            for (x = 0; x < 5; x++) {
                printf("%.2f ", vetor[x]);
            }
            printf("\n");
        } else if (codigoInteiro == 2) {
            printf("\nVetor na ordem inversa:\n");
            for (x = 4; x >= 0; x--) {
                printf("%.2f ", vetor[x]);
            }
            printf("\n");
        } else if (codigoInteiro != 0) {
            printf("\nCodigo invalido! Tente novamente!!\n");
        }
    } while (codigoInteiro != 0);

    return 0;
}


