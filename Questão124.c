/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matriz1[4][4], matriz2[4][4], matriz_maior[4][4];
  
  // Lendo as matrizes 1 e 2
  printf("Digite os numeros da matriz 1:\n");
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      scanf("%d", &matriz1[x][y]);
    }
  }
  
    printf("\nDigite os numeros da matriz 2:\n");
    for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
        scanf("%d", &matriz2[x][y]);
    }
  }
  
  // Criando a matriz com os numeros maiores
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      if (matriz1[x][y] > matriz2[x][y]) {
        matriz_maior[x][y] = matriz1[x][y];
      } else {
        matriz_maior[x][y] = matriz2[x][y];
      }
    }
  }
  
  // Mostrando a matriz com os numeros maiores
  printf("\nA matriz com os numeros maiores é:\n");
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      printf("%d ", matriz_maior[x][y]);
    }
   
  }
  

    return 0;
}
