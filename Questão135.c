/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
// Declaração das 3 matrizes     
    int a[3][3], b[3][3], c[3][3];

// O programa entra em dois loops aninhados para ler os elementos das matrizes a e b.
    printf("Digite os elementos da matriz A:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            scanf("%d", &a[x][y]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            scanf("%d", &b[x][y]);
        }
    }

    // c[x][y] = É a soma dos produtos da linha x de A com a coluna y de B
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            c[x][y] = 0;
            for (int z = 0; z < 3; z++) {
                c[x][y] += a[x][z] * b[z][y];
            }
        }
    }

    printf("A matriz C = A * B eh:\n");
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%d ", c[x][y]);
        }
        printf("\n");
    }

    return 0;
}
