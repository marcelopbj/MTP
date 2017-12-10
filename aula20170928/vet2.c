#include <stdio.h>

int main()
{
int vet[10], veti[10], i,j=0;
for(i=0; i<10;i++)
{
	printf("Informe o numero %d: ", i+1);
	scanf("%d", &vet[i]);
}
for(i=9; i>=0; i--) 
{
	veti[j]=vet[i];
	j++;
}
for (i=0; i<10; i++)
{
	printf("%d ", veti[i]);
}
return 0;
}
