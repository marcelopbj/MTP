#include <math.h>
#include <stdio.h>

int main()
{
double n,b,a;
printf("Informe um numero e a base para o logaritimo: ");
scanf("%lf%lf",&n,&b);
a=log(n)/log(b);
printf("\n %lf\n",a);
return 0;
}
