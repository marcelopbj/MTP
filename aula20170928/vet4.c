#include <stdio.h>
#include <time.h>

int main()
{
int vet[1000], x, maior, menor;
srand(time(0));
printf("Informe o tamnho do vetor entre 1 e 1000 %d:");
scanf("%d", &x);
for (int i=0; i<x; i++)
{
	vet[i]=rand()%10;
}
maior=vet[0];
menor=vet[0];
for(int i=0; i<x; i++)
{
	if(vet[i]>maior)
		maior=vet[i];
	if(vet[i]<menor)
		menor=vet[i];
}
printf("\nO maior numero  e: %d", maior);
printf("\nO menor numero e: %d\n", menor);
return 0;
}