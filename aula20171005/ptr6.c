#include <stdio.h>
#include <ctype.h>

int main()
{
unsigned int *stri;
char str[16]={0};
int i;
printf("Informe uma frase: ");
fgets(str,16,stdin);
stri = (unsigned int *) str;
for (i=0; i<sizeof(stri); i++)
{
	printf("%i ", *(stri+i));
}
printf("\n\n");
for (i=0; i<sizeof(stri); i++)
{
	printf("%x ", *(stri+i));
}

getchar();
return 0;
}
