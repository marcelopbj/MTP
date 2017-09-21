#include <stdio.h>
#include <complex.h>

int main()
{
double a1, a2, i2, i1, z1, z2,z;
printf("Informe um complexo:");
scanf("%lf%lf", &a1,&i1);
printf("Informe outro complexo:");
scanf("%lf%lf", &a2,&i2);
z1=a1 + i1*I;
z2=a2 + i2*I;
z=z1+z2;
printf("A soma dos complexos e: %lf + %lf*I\n", creal(z),cimag(z));
return 0;
}