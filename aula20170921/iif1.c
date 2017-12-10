#include <time.h>
#include <stdio.h>

int main()
{
srand(time(0));
double p, naleatorio;
int a=0, i;
printf("Informe a porcentagem: ");
scanf("%lf",&p);
p=p*100;
for(i=0; i<1000; i++)
{
	naleatorio=rand()% 100;
	if(naleatorio<p)
		a++;
}
printf("\n %d \n",a);
return 0;
}
