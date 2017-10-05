#include <stdio.h>
#include <ctype.h>

int main()
{
unsigned int i = 0xFACA8421;
unsigned char *c;
c=((unsigned char*)&i);
printf("Conteudo: %i\n", *c);
printf("Conteudo: %i\n", *(c+1));
printf("Conteudo: %i\n", *(c+2));
printf("Conteudo: %i\n", *(c+3));
printf("Endereco: %p\n", *c);
printf("Endereco: %p\n", *(c+1));
printf("Endereco: %p\n", *(c+2));
printf("Endereco: %p\n", *(c+3));
printf("Hexadecimal: %x\n", *(c));
printf("Hexadecimal: %x\n", *(c+1));
printf("Hexadecimal: %x\n", *(c+2));
printf("Hexadecimal: %x\n", *(c+3));
return 0;
}