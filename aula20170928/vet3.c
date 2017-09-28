#include <stdio.h>

int main()
{
int vet[10], soma=0, produto=1;
for (int i=0;i<10;i++)
{
	printf("Informe o vetor %d:",i+1);
	scanf("%d", &vet[i]);
	soma=soma+vet[i];
	produto=produto*vet[i];
}
printf("\nA soma e: %d", soma);
printf("\nO produto e: %d\n", produto);
return 0;
}