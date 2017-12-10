#include <stdio.h>
int main () 
{
   int n, soma=0, i;
   printf("Informe o numero: ");
   scanf("%i", &n);

   for (i = 1; i<=n/2; i++)
   {
     if (n%i == 0)
	 {
		 soma=soma+i;
	 }
   }
   if (soma == n)
	   printf ("\ne perfeito\n");
   else
	   printf ("\nnao e perfeito\n");
   return 0;
}
