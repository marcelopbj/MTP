#include <stdio.h>
#include <stdint.h>

int main()
int64_t x, fat=1;
printf("Informe o numero: ");
scanf("%i", &x);

while(x>=1)
{
	fat=fat*x;
	x--;
}
printf("\nFatorial: %i \n", fat);
return 0;
}