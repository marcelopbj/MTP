#include <stdio.h>
int calcula(int num1, int num2, int den1, int den2, int *num, int *den) {
	if(den1*den2==0)
		return 1;
	else{
		*num=(den2*num1) + (den1*num2);
		*den=den1*den2;
		return 0;
	}
		
  
}
int main() {
  int num1, num2, den1, den2, num, den;
  printf("Informe o numerador e o denonimador do 1 numero: ");
  scanf("%d/%d",&num1, &den1);
  printf("Informe o numerador e o denonimador do 2 numero: ");
  scanf("%d/%d",&num2, &den2);
  if (calcula(num1, num2, den1, den2, &num, &den) == 1)
	  printf("erro!\n");
  else 
	  printf("%d/%d\n", num,den);
  
  getchar();
  return 0;
}
