#include <stdio.h>

int main()
{
int vet[10], soma=0, produto=1, i;
for (i=0;i<10;i++)
{
	printf("Informe o vetor %d:",i+1);
	scanf("%d", &vet[i]);
	soma=soma+vet[i];
	produto=produto*vet[i];
}
printf("\n%d; %d", soma,produto);
return 0;
}
