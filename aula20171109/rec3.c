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
int mdc(int u, int v){
	if (u==v||v==0)
		return u;
	else if (u==0)
		return v;
	else if (u%2==0 && v%2!=0)
		return mdc(u/2,v);
	else if(u%2!=0 && v%2==0)
		return mdc(u,v/2);
	else if (u%2==0 && v%2==0)
		return 2*mdc(u/2,v/2);
	else if (u>v)
		return mdc((u-v)/2,v);
	else
		return((v-u)/2,u);
}

int main() {
  int num1, num2, den1, den2, num, den, u, v;
  printf("Informe o numerador e o denonimador do 1 numero: ");
  scanf("%d/%d",&num1, &den1);
  printf("Informe o numerador e o denonimador do 2 numero: ");
  scanf("%d/%d",&num2, &den2);
  if (calcula(num1, num2, den1, den2, &num, &den) == 1)
	  printf("erro!\n");
  else {
	  u=num;
	  v=den;
	  mdc(u,v);
	  printf("%d/%d\n", num/mdc(u,v),den/mdc(u,v));
  }
  getchar();
  return 0;
}
