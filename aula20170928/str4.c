#include <stdio.h>
#include<ctype.h>

int main()
{
int i, j;
char frase[256], maius[256], frase2[256];
printf("Informe a frase:");
fgets(frase,256,stdin);

for(j=0; frase[j]!='\0'; j++)
{
	maius[j]=toupper(frase[j]);
}

for(i=0; maius[i]!='\0';i++)
{
	if (maius[i]=='A')
		frase2[i]='4';
	else{

	if (maius[i]=='E')
		frase2[i]='3';
	else{
	if (maius[i]=='I')
		frase2[i]='1';
	else{
	if (maius[i]=='O')
		frase2[i]='0';
	else{
	if (maius[i]=='G')
		frase2[i]='6';
	else{
	if (maius[i]=='S')
		frase2[i]='5';
	else{
		frase2[i]=frase[i];
	}
	}
	}
	}
	}
	}
}
frase2[i]='\0';
printf("\n%s\n", frase2);
return 0;
}
