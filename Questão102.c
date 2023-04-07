/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Constantes com número máximo de elementos no vetor de números e o número máximo de dígitos permitidos em cada número.
#define Maximo 10
#define MaxDigitos 4

//Função compare que será usada pela função qsort para ordenar o vetor de números em ordem crescente.
int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

// função is_permutation retorna 1 se dois números são permutações um do outro e 0 caso contrário.
int is_permutation(int a, int b) {
    int count[10] = {0};
    while (a != 0) {
        count[a % 10]++;
        a /= 10;
    }
    while (b != 0) {
        count[b % 10]--;
        b /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numeros[Maximo];
    int grupos[Maximo] = {0};
    int num_grupos = 0;

    //o programa lê os 10 números digitados pelo usuário e armazena em um vetor.
    printf("Digite 10 números de até %d dígitos:\n", MaxDigitos);
    for (int i = 0; i < Maximo; i++) {
        scanf("%d", &numeros[i]);
    }

    qsort(numeros, Maximo, sizeof(int), compare);

   //O programa percorre o vetor de números, e para cada número, verifica se ele é uma permutação de algum dos números seguintes no veto, se ele for, adiciona o número no mesmo grupo que o outro número.
   //O número de grupos criados é armazenado na variável num_grupos, e o número do grupo ao qual cada número pertence é armazenado em um vetor grupos.
    for (int i = 0; i < Maximo; i++) {
        if (grupos[i] == 0) {
            grupos[i] = ++num_grupos;
            printf("Grupo %d: %d", grupos[i], numeros[i]);
        }
        for (int j = i + 1; j < Maximo; j++) {
            if (is_permutation(numeros[i], numeros[j])) {
                if (grupos[j] == 0) {
                    grupos[j] = grupos[i];
                    printf(", %d", numeros[j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
