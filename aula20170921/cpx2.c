#include <iostream>
#include <stdio.h>
#include <complex.h>

int main()
{
double a, x,z, result;
printf("Informe um complexo:");
scanf("%lf%lf", &a,&x);
z=a + x*I;
result=conj(z)*z;
printf("A soma dos complexos e: %lf", result);
system("pause");
return 0;
}