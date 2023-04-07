/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

    int dias_no_mes(int mes, int ano) {
    int dias = 0;

    // Verificar se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        // Ano bissexto
        switch (mes) {
            case 2:
                dias = 29;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias = 30;
                break;
            default:
                dias = 31;
                break;
        }
    } else {
        // Ano não bissexto
        switch (mes) {
            case 2:
                dias = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias = 30;
                break;
            default:
                dias = 31;
                break;
        }
    }

    return dias;
}

int main() {
    int mes = 2; // fevereiro
    int ano = 2024; // ano bissexto

    int numero_de_dias = dias_no_mes(mes, ano);
    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, numero_de_dias);

    return 0;
}


