#include <stdio.h>

int main()
{
int x, fat=1;
scanf("%i", &x);

while(x>=1)
{
	fat=fat*x;
	x--;
}
printf("\n%i \n", fat);
return 0;
}
