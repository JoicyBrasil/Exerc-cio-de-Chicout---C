/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[10];
    int x, valores_pares = 0;

    // Valores do vetor
    for (x = 0; x < 10; x++) {
        printf("Digite o valor para a posicao %d: ", x);
        scanf("%d", &vetor[x]);
    }

    // Quantidade dos valores pares
    for (x = 0; x < 10; x++) {
        if (vetor[x] % 2 == 0) {
            valores_pares++;
        }
    }

    //Resultado
    printf("O vetor possui %d valores pares.\n", valores_pares);

    return 0;
}



