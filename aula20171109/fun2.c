#include <stdio.h>
void calcula(int num1, int num2, int *quoci, int *rest) {
	*quoci=num1/num2;
	*rest=num1%num2;	
}
int main() {
  int num1, num2, quoci, rest;
  printf("Informe dois numeros inteiros: ");
  scanf("%d%d",&num1, &num2);
  calcula(num1,num2,&quoci,&rest);
  printf("%d, %d\n", quoci, rest);
  getchar();
  return 0;
}