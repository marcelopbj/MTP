#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta (int a, int b, int c) {
	float delt;
	delt=(b*b) - (4*a*c);
	return delt;
}

void maior(float delt, int a, int b) {
	int x1, x2;
	x1 = (-b + (sqrt(delt)))/2*a;
	x2 = (-b - (sqrt(delt)))/2*a;
	printf("As raizes sao %d, %d\n", x1, x2);
	getchar();
}
void zero(int a, int b){
	int x;
	x=(-b)/(2*a);
	printf("%d, %d\n", x, x);
	getchar();
}

int main() {
	int a,b,c;
	float delt;
    printf("Informes os coeficientes a,b e c da funcao: ");
    scanf("%d%d%d", &a, &b, &c);
	delt=delta(a,b,c);
	if (delt>0)
		maior(delt, a, b);
	else if (delt==0)
		zero(a,b);
	else if (delt<0)
		printf("NAN, NAN \n");
	getchar();
    return 0;
}
