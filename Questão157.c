/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

//A função calc_esfera ecebe como parâmetros o raio da esfera R.
void calc_esfera(float R, float *area, float *volume) {
    const float pi = 3.14159265359;

//Serão usados para retornar a área da superfície e o volume da esfera.
    *area = 4 * pi * pow(R, 2);
    *volume = 4/3.0 * pi * pow(R, 3);
}

int main() {
    float R, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    printf("Area da superficie: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
