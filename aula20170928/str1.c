#include <stdio.h>
#include<ctype.h>

int main()
{
int tamanho, dia=0, adeus=0, letras=0, i;
char frase[256], maius[256],bom[]="BOM DIA", tchau[]="TCHAU";
printf("Informe a frase:");
fgets(frase,256,stdin);
for(i=0; frase[i]!='\0'; i++)
{
	if(isalpha(frase[i])!= 0)
	{
		letras++;
	}
}
printf("\n%d; ", letras);
for(i=0; frase[i]!='\0'; i++)
{
	maius[i]=toupper(frase[i]);
}
for(i=0; i<7; i++)
{
	if(bom[i]==maius[i])
		dia++;
}

for(i=0; i<5; i++)
{
	if(maius[i]==tchau[i])
		adeus++;
}
if(dia==7)
	printf("Bom dia pra voce tambem!");

else if(adeus==5)
	printf("Saindo? Que pena…");
else
	printf("Voce quis dizer %s?", frase);

return 0;
}
