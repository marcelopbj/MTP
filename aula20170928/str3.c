#include <stdio.h>
#include<ctype.h>

int main()
{
int i;
char frase[256], crip[256];
printf("Informe a frase:");
fgets(frase,256,stdin);
for( i=0; frase[i]!='\0';i++)
{
	if (frase[i]>='A'&& frase[i]<='M')
		crip[i]=frase[i]+13;
	else{

	if (frase[i]>='N'&& frase[i]<='Z')
		crip[i]=frase[i]-13;
	else{
	if (frase[i]>='a'&& frase[i]<='m')
		crip[i]=frase[i]+13;
	else{
	if (frase[i]>='n'&& frase[i]<='z')
		crip[i]=frase[i]-13;
	else
		crip[i]=frase[i];
	}
	}
	}

}
crip[i]='\0';
printf("\n%s\n", crip);
return 0;
}