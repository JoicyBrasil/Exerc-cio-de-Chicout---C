/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

//constante gravidade referente a aceleração da gravidade
#define gravidade 9.81 

int
main ()
{
  float altura, velocidade, angulo;
  float tempo, distancia;
  float radianos;

  printf ("\nInforme a altura do lancamento em metros: ");
  scanf ("%f", &altura);
  printf ("\nInforme a velocidade inicial em m/s: ");
  scanf ("%f", &velocidade);
  printf ("\nInforme o angulo de lancamento em graus: ");
  scanf ("%f", &angulo);

  //converter graus para radianos
  radianos = angulo * M_PI / 180.0;	

  //usando a formula cinematica para calcular o tempo e a distancia 
  tempo = (2.0 * velocidade * sin (radianos)) / gravidade;	
  // sin recebe um angulo em radianos e retorna o valor do seno do angulo que foi informado como parametro e cos retorna o valor do cosseno.
  distancia = velocidade * cos (radianos) * tempo;	 

  printf ("\nO tempo da queda: %.2f segundos\n", tempo);
  printf ("\nO projetil atingira o chao quando estiver em %.2f metros\n",
	  distancia);

  return 0;
}
