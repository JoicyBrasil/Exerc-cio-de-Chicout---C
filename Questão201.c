/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void inserir_string(char* destino, char* origem, int posicao) {
    int tamanho_destino = strlen(destino);
    int tamanho_origem = strlen(origem);
    
    // Verifica se a posição é válida
    if (posicao < 0 || posicao > tamanho_destino) {
        printf("Posicao invalida\n");
        return;
    }
    
    // Desloca os caracteres do destino para a direita a partir da posição indicada
    for (int x = tamanho_destino; x >= posicao; x--) {
        destino[x + tamanho_origem] = destino[x];
    }
    
    // Copia os caracteres da origem para o destino a partir da posição indicada
    for (int x = 0; x < tamanho_origem; x++) {
        destino[posicao + x] = origem[x];
    }
}

int main() {
    char string1[50], string2[50];
    int posicao;
    
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    
    printf("Digite a segunda string: ");
    scanf("%s", string2);
    
    printf("Digite a posicao de insercao: ");
    scanf("%d", &posicao);
    
    inserir_string(string1, string2, posicao);
    
    printf("Resultado: %s\n", string1);
    
    return 0;
}
