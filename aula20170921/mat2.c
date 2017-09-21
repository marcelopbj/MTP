#include <math.h>
#include <stdio.h>

int main()
{
int b,c;
double rad, a;
printf("Informe um lado do triandulo: ");
scanf("%d %d", &b,&c);
printf("\nInforme o angulo desses lados em radianos: ");
scanf("%lf",&rad);
a=sqrt((b*b)+(c*c) - 2*b*c*cos(rad));
printf("\n %lf\n",a);
return 0;
}