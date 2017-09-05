#include <stdio.h>

int main()
{
int b, p, result=1;
printf("Informe a base e a potencia: ");
scanf("%i", &b);
scanf("%i", &p);
while(p>=1)
{
	result=result*b;
	p--;
}
printf("\nResultado: %i \n", result);
return 0;
}