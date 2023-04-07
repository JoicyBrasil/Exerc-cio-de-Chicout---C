/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



    int qtd_Digitos(int x, int y) {
    // Caso o número seja menor que 10, verificar se é igual ao dígito y
    if (x < 10) {
        return (x == y) ? 1 : 0;
    }
    // Recursividade: Se o último dígito for igual a y somar 1, e continuar com o resto do número
    else {
        return ((x % 10 == y) ? 1 : 0) + contarDigitos(x / 10, y);
    }
}

    

    
