#include <stdio.h>
#include <ctype.h>

int main()
{
long int vet[4] = {0};
char *pont;
for (int j=0; j<4;j++)
{
	printf("Informe o vet[%d]: ", j+1);
	scanf("%ld", &vet[j] );
}
pont=(char*)vet;
for(int i=0; i<sizeof(vet);i++)
{
	printf("%c", *(pont+i));
}
getchar();
return 0;
}