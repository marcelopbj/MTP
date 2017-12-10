#include <stdio.h>
#include<ctype.h>

int main()
{
int letras=0, V=0, C=0, D=0, E=0, i;
char frase[256], maius[256];
printf("Informe a frase:");
fgets(frase,256,stdin);
for(i=0; frase[i]!='\0'; i++)
{
	maius[i]=toupper(frase[i]);
	if(isalpha(frase[i])!= 0)
		letras++;
	if(isspace(frase[i])!=0)
		E++;
	if(maius[i]=='A'||maius[i]=='E'||maius[i]=='I'||maius[i]=='O'||maius[i]=='U')
		V++;
	if(isdigit(frase[i])!=0)
		D++;
}
C=letras-V;
printf("\nV:%d;C:%d;D:%d;E:%d\n", V,C,D,E);
return 0;
}
