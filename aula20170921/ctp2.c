#include <ctype.h>
#include <stdio.h>

int main()
{
char frase[256], min[256];
int i;
printf("Informe uma frase: ");
fgets(frase,256,stdin);
for(i=0; frase[i]!='\0'; i++)
{
	min[i]=tolower(frase[i]);
}
i++;
min[i]='\0';
printf("\n %s",min);
return 0;
}