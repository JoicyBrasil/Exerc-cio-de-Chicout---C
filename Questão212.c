/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MaximoPessoa 40
#define MaximoNome 50

struct Pessoa {
    char nome[MaximoNome];
    int dia_aniversario;
    int mes_aniversario;
};

void calcular_idade(int dia_atual, int mes_atual, int ano_atual,
                    int dia_nascimento, int mes_nascimento, int ano_nascimento,
                    int *idade) {
    *idade = ano_atual - ano_nascimento;
    if (mes_atual < mes_nascimento ||
        (mes_atual == mes_nascimento && dia_atual < dia_nascimento)) {
        (*idade)--;
    }
}

int main() {
    struct Pessoa pessoas[MaximoPessoa];

    // Leitura dos dados das pessoas
    printf("Digite os dados das %d pessoas:\n", MaximoPessoa);
    for (int i = 0; i < MaximoPessoa; i++) {
        printf("\nPessoa %d:\n", i+1);
        printf("Nome: ");
        fgets(pessoas[i].nome, MaximoNome, stdin);
        printf("Dia de aniversario (1-31): ");
        scanf("%d", &pessoas[i].dia_aniversario);
        printf("Mes de aniversario (1-12): ");
        scanf("%d", &pessoas[i].mes_aniversario);
        // Limpa o buffer de entrada
        while (getchar() != '\n');
    }

    // Leitura da data atual
    int dia_atual, mes_atual, ano_atual;
    printf("\nDigite a data atual:\n");
    printf("Dia (1-31): ");
    scanf("%d", &dia_atual);
    printf("Mes (1-12): ");
    scanf("%d", &mes_atual);
    printf("Ano: ");
    scanf("%d", &ano_atual);

    // Cálculo das idades e impressão dos resultados
    printf("\nAniversariantes por mes:\n");
    for (int mes = 1; mes <= 12; mes++) {
        printf("\nMes %d:\n", mes);
        for (int i = 0; i < MaximoPessoa; i++) {
            if (pessoas[i].mes_aniversario == mes) {
                int idade;
                calcular_idade(dia_atual, mes_atual, ano_atual,
                               pessoas[i].dia_aniversario, pessoas[i].mes_aniversario,
                               ano_atual, &idade);
                printf("%s - %d anos\n", pessoas[i].nome, idade);
            }
        }
    }

    return 0;
}
