/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int x, y;
  int p_x, p_y;

  // Definindo valores para as variC!veis
  x = 0;
  y = 0;

  printf ("Digite o primeiro valor: ");
  scanf ("%d", &x);

  printf ("Digite o segundo valor: ");
  scanf ("%d", &y);

  // Obtendo os endereC'os das variC!veis
  p_x = x;
  p_y = y;

  // Fazendo a comparaC'C#o dos endereC'os das variC!veis e mostrando o maior endereC'o
  if (p_x > p_y)
    {
      printf ("O maior endereC'o C): %d\n", p_x);
    }
  else
    {
      printf ("O maior endereC'o C): %d\n", p_y);
    }

  return 0;
}
