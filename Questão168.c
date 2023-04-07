/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

//origem: aponta para a string onde será procurado o primeiro espaço em branco;
//destino: aponta para a string onde serão copiados os caracteres antes do espaço em branco;
//tamanho_max: indica o tamanho máximo da string origem.
int copiarCaracteres_ate_espaco(char *origem, char *destino, int tamanho_max) {
    int x;

// É feito um loop que percorre a string origem até encontrar um espaço em branco ou o fim da string, copiando os caracteres para a string destino.
    for(x = 0; x < tamanho_max && origem[x] != ' ' && origem[x] != '\0'; x++) {
        destino[x] = origem[x];
    }
    destino[x] = '\0';

    return x;
}

int main() {
    char string1[100], string2[100];
    int tamanho;

    printf("Digite a primeira string: ");
    //Função fgets lê a string, o limite máximo de caracteres a serem lidos e o ponteiro para FILE, que está associado ao arquivo de onde a string será lida.
    fgets(string1, 100, stdin);
    //Função Strlen retorna um inteiro que é o comprimento do string (o número de caracteres do string, não contando o caractere NULL).
    tamanho = strlen(string1) - 1;

    // A função copiarCaracteres_ate_espaco é chamada com os parâmetros string1, string2 e tamanho.
    copiarCaracteres_ate_espaco(string1, string2, tamanho);

    printf("String copiada: %s\n", string2);

    return 0;
}
