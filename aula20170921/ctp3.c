#include <ctype.h>
#include <stdio.h>

int main()
{
char frase[256];
int letras=0;
printf("Informe uma frase: ");
fgets(frase,256,stdin);
for(int i=0; frase[i]!='\0'; i++)
{
	if(isalpha(frase[i])!= 0)
	{
		letras++;
	}
}
printf("\n %d\n",letras);
return 0;
}