#include <stdio.h>
int main () 
{
   int n, soma=0;
   printf("Informe o numero: ");
   scanf("%i", &n);

   for (int i = 1; i<=n/2; i++)
   {
     if (n%i == 0)
	 {
		 soma=soma+i;
	 }
   }
   if (soma == n)
	   printf ("\nO numero e perfeito\n");
   else
	   printf ("\nO numero nao e perfeito\n");
   return 0;
}
