/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//O programa aloca um novo vetor de 1024 bytes a cada iteração do laço while, imprime o conteúdo da primeira posição do vetor 
//(que será um valor aleatório, já que o vetor não foi inicializado), e não desaloca a memória alocada. 
//Dessa forma, o programa irá consumir cada vez mais memória RAM à medida que for executado.
int main() {
    while (1) {
        //Malloc aloca um bloco de memória de, pelo menos, size bytes. 
        int *vetor = (int *) malloc(1024);
        printf("%d\n", vetor[0]);
    }
    return 0;
}
