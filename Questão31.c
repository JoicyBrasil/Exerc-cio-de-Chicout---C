/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main() {
    int num1, num2, x, y, flag;
    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &num2);
    // inicializa a flag para 0
    flag = 0; 
    while (num1 > 0) {
        if (num1 % 10 == num2 % 10) { // verifica se o último dígito é igual
            x = num1 / 10; // avança uma casa no primeiro número
            y = num2 / 10; // avança uma casa no segundo número
            while (x > 0 && y > 0) {
                if (x % 10 != y % 10) break; // verifica se os dígitos são diferentes
                x /= 10; // avança uma casa no primeiro número
                y /= 10; // avança uma casa no segundo número
            }
            if (x == 0) { // se chegou ao final do segundo número, encontrou a sequência
                flag = 1;
                break;
            }
        }
        num1 /= 10; // avança uma casa no primeiro número
    }
    if (flag) printf("%d contém a sequência de dígitos de %d em qualquer posição.\n", num1, num2);
    else printf("%d não contém a sequência de dígitos de %d em qualquer posição.\n", num1, num2);
    return 0;
}
