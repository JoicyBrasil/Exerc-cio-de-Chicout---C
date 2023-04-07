/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

float raiz_quadrada (int numero){
    float resultado;
    resultado = pow (numero, 0.5);
    return resultado;
}


int main()
{
    float resultado, numero;
    printf("\nDigite o numero para saber sua raiz quadrada: ");
    scanf("%f", &numero);
    resultado = raiz_quadrada(numero);
    printf("Sua raiz quadrada e: %.2f",resultado);
    getchar();
    getchar();

    return 0;
}