#include <stdio.h>
#include <time.h>

int main()
{
int vet[1000], x, maior, menor, i;
srand(time(0));
printf("Informe o tamnho do vetor entre 1 e 1000:");
scanf("%d", &x);
for (i=0; i<x; i++)
{
	vet[i]=rand()%10;
}
maior=vet[0];
menor=vet[0];
for(i=0; i<x; i++)
{
	if(vet[i]>maior)
		maior=vet[i];
	if(vet[i]<menor)
		menor=vet[i];
}
printf("\nmin = %d; max = %d", menor, maior);
return 0;
}
