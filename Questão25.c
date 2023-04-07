/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int b, n1, n2, resto;
  printf ("Digite 2 numeros inteiros: ");
  scanf ("%d %d", &n1, &n2);
  for (b = 1; b > 0; b++)
    {
      resto = (n1 * b) % n2;
      if (resto == 0)
	break;
    }
  printf ("O MMC entre %d e %d e:%d \n", n1, n2, n1 * b);

  return 0;
}