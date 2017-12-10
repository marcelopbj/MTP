#include <stdio.h>
#include <stdint.h>

int main(){

float x, soma=0;
int i;
printf("Informe o numero: ");
scanf("%f", &x);
x=1/x;
for(i=0;i<=729;i++)
{
	soma=soma+x;
}
printf("\n%.15f\n", soma);
return 0;
}
