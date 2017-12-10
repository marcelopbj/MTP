#include <stdio.h>
#include <time.h>

int main()
{
float media;
int x, i, vet[10000], soma=0;
srand(time(0));
printf("Informe o numero: ");
scanf("%i", &x);
x++;
for(i=0; i<=10000; i++) 
{
	vet[i]=rand()%x;
	soma=soma+vet[i];
}
media = soma/10000;
printf("%f", media);
return 0;
}
