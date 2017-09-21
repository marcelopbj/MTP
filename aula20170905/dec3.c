#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int d1, d2, d3, soma;
srand(time(0));
d1 = rand() % 7;
d2 = rand() % 7;
d3 = rand() % 7;
soma = d1 + d2 + d3;
printf("Dado 1: %i", d1);
printf("\nDado 2: %i", d2);
printf("\nDado 3: %i", d3);
printf("\nSoma: %i", soma);
if (soma == 7 || soma == 11)
	printf("\nGanhou!!\n");
else
	printf("\nPerdeu\n");
return 0;
}