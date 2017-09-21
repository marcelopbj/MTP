#include <stdio.h>

int main()
{
float a, b, c, d, e, total;
printf("Informe a Nota 1: ");
scanf("%f", &a);
printf("\nNota 2: ");
scanf("%f", &b);
printf("\nNota 3: ");
scanf("%f", &c);
printf("\nNota 3: ");
scanf("%f", &d);
printf("\nNota 5: ");
scanf("%f", &e);
total=(a*2 + b*2 + c*2 + d*3 + e*5)/14;
printf("A nota final e: %f \n", total);
return 0;
}