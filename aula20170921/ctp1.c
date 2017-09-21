#include <ctype.h>
#include <stdio.h>

int main()
{
char frase[256], maius[256];
int i;
printf("Informe uma frase: ");
fgets(frase,256,stdin);
for(i=0; frase[i]!='\0'; i++)
{
	maius[i]=toupper(frase[i]);
}
i++;
maius[i]='\0';
printf("\n %s",maius);
return 0;
}