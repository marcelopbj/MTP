#include <math.h>
#include <stdio.h>

int main()
{
double x1,x2,y1,y2, d;
printf("Informe as cordenadas x1 e y1: ");
scanf("%lf%lf",&x1,&y1);
printf("Informe as cordenadas x2 e y2: ");
scanf("%lf%lf",&x2,&y2);
d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("\n %lf\n",d);
return 0;
}