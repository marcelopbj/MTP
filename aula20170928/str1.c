#include <stdio.h>
#include<ctype.h>

int main()
{
int tamanho, dia=0, adeus=0, letras=0;
char frase[256], maius[256],bom[]="BOM DIA", tchau[]="TCHAU";
printf("Informe a frase:");
fgets(frase,256,stdin);
for(int i=0; frase[i]!='\0'; i++)
{
	if(isalpha(frase[i])!= 0)
	{
		letras++;
	}
}
printf("\nO tamanho da sua frase e: %d", letras);
for(int i=0; frase[i]!='\0'; i++)
{
	maius[i]=toupper(frase[i]);
}
for(int i=0; i<7; i++)
{
	if(bom[i]==maius[i])
		dia++;
}

for(int i=0; i<5; i++)
{
	if(maius[i]==tchau[i])
		adeus++;
}
if(dia==7)
	printf("\nBom dia pra voce tambem!\n");

else if(adeus==5)
	printf("\nSaindo? Que pena…\n");
else
	printf("\nVoce quis dizer %s ?\n", frase);

return 0;
}