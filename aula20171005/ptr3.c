#include <stdio.h>
#include <ctype.h>

int main()
{
int vet[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
unsigned char *pont;
int bytes = sizeof(vet);
int i, cont=0;
printf("Endereco do vetor: %p\n", vet);
pont=(unsigned char*)vet;
for(i=0; i<bytes; i++)
{
	if (*(pont+i) != 0)
		cont++;
	printf("Endereco: %p Dado: %d, %x\n", pont+1, pont[i], *(pont+1));
}
printf("Sao %d bytes, e %d estao com bit igual a 1\n", bytes, cont);
return 0;
}