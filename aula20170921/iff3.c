#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

int main()
{
int64_t x, fat=1;
printf("Informe o numero: ");
scanf("%i", &x);

while(x>=1)
{
	fat=fat*x;
	x--;
}
printf("\n%"PRId64 "\n ", fat);
return 0;
}
