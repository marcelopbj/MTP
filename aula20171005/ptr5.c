#include <stdio.h>
#include <ctype.h>
#include <time.h>

int main()
{
srand(time(NULL));
int vet[1000], num, cont=0;
int bytes = sizeof(vet);
unsigned char *pontvet;
for (int i=0; i<1000;i++)
{
	vet[i]=rand()%1001;
}
pontvet= (unsigned char *) vet;
printf("Informe um numero de 0 a 255");
scanf("%d", &num);
for (int i=0; i<bytes; i++)
{
	if(vet[i]==num)
	{
		cont++;
		printf("Endereco: %p, dado: %d\n", pontvet+i, vet[i]);
	}
}
printf("%d contem o numero do usuario\n O seu numero e %d\n O endereco incial do vetor e:%p \n O endereco final do vetor e:%p", cont,num,vet[0],vet[1000]);
getchar();
return 0;
}