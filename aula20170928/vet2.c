#include <stdio.h>

int main()
{
int vet[10], veti[10], j=0;
for(int i=0; i<10;i++)
{
	printf("Informe o numero %d: ", i+1);
	scanf("%d", &vet[i]);
}
for(int i=9; i>=0; i--) 
{
	veti[j]=vet[i];
	j++;
}
printf("O vetor inverso e: [");
for (int i=0; i<10; i++)
{
	printf("%d, ", veti[i]);
}
printf("]\n");
return 0;
}