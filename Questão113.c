/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

//Constantes que incluem o número máximo de datas permitidas e o tamanho máximo de uma data.
#define MaximoDatas 64
#define TamanhoMaximo_data 11

//Função usada para ordenar as datas em ordem cronológica.  
int compare_datas(const void* a, const void* b) {
    char* data1 = *(char**)a;
    char* data2 = *(char**)b;

    int ano1, mes1, dia1;
    int ano2, mes2, dia2;

//Também há a declaração de um vetor datas para armazenar as datas digitadas pelo usuário.
    scanf(data1, "%d/%d/%d", &dia1, &mes1, &ano1);
    scanf(data2, "%d/%d/%d", &dia2, &mes2, &ano2);

    if (ano1 != ano2) {
        return ano1 - ano2;
    }
    if (mes1 != mes2) {
        return mes1 - mes2;
    }
    return dia1 - dia2;
}

int main() {
    char datas[MaximoDatas][TamanhoMaximo_data];
    char* ptr_datas[MaximoDatas];
    int num_datas = 0;
// o programa entra em um loop que lê as datas digitadas pelo usuário e armazena no vetor datas.
    while (num_datas < MaximoDatas) {
        printf("Digite uma data no formato DD/MM/AAAA ou 0/0/0 para terminar:\n");
        scanf("%s", datas[num_datas]);
        if (strcmp(datas[num_datas], "0/0/0") == 0) {
            break;
        }
        ptr_datas[num_datas] = datas[num_datas];
        num_datas++;
    }

//A função qsort é usada para ordenar as datas em ordem cronológica. qsort usa a função compare_datas para comparar as datas.
    qsort(ptr_datas, num_datas, sizeof(char*), compare_datas);

    printf("Datas em ordem cronológica:\n");
    for (int i = 0; i < num_datas; i++) {
        printf("%s\n", ptr_datas[i]);
    }

    return 0;
}
