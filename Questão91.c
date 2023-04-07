/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


int main()
{  
    int n = 10; // Tamanho do vetor
    int v[n];
    int soma = 0;
    float media, desvio;
  
  // lendo os valores do vetor
  printf("Digite os %d valores do vetor: ", n);
  for (int x = 0; x < n; x++) {
    scanf("%d", &v[x]);
    soma += v[x];
  }
  
  // Calculando a média
  media = (float)soma / n;
  
  // Somatório
  float somatorio = 0;
  for (int x = 0; x < n; x++) {
    somatorio += pow((v[x] - media), 2);
  }
  
  // Desvio padrão
  desvio = sqrt(somatorio / n);
  
 
  printf("O desvio padrao do vetor é: %.2f", desvio);
  
  return 0;
}


  







    
