/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int notas[10][3], i, j, pior_nota, pior_prova, p1 = 0, p2 = 0, p3 = 0;
    for (i = 0; i < 10; i++) {
        printf("Digite as notas do aluno %d (separadas por espaço): ", i+1);
        scanf("%d %d %d", &notas[i][0], &notas[i][1], &notas[i][2]);
    }
    for (j = 0; j < 3; j++) {
        pior_nota = 11; // inicializa a pior nota com um valor alto
        for (i = 0; i < 10; i++) {
            if (notas[i][j] < pior_nota) { // verifica se a nota é a pior até agora
                pior_nota = notas[i][j];
                pior_prova = j+1;
            }
        }
        // conta o número de alunos cuja pior nota foi na prova atual
        if (pior_prova == 1) p1++;
        else if (pior_prova == 2) p2++;
        else if (pior_prova == 3) p3++;
    }
    printf("%d aluno(s) teve a pior nota na prova 1.\n", p1);
    printf("%d aluno(s) teve a pior nota na prova 2.\n", p2);
    printf("%d aluno(s) teve a pior nota na prova 3.\n", p3);
    return 0;
}
