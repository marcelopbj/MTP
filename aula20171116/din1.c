#include <stdio.h>
#include <math.h>
float media (float *numeros, int i)
{
	float m=0;
	int j;
	for (j=0; j<i; j++)
	  m = m+numeros[j];
	return m/i;
}
float desvio (float *numeros, float media, int i)
{
	float dp=0;
	int j;
	for (j=0; j<i; j++)
	  dp=dp+pow((numeros[j]-media),2);
	i--;
	return sqrt(dp/i);
}

int main() {
  float *numeros;
  int i, j;
  float m;
  printf("Informe a quantidade de numeros que deseja: ");
  scanf("%d", &i);
  numeros=(float*)malloc(i*sizeof(float));
  for (j=0; j<i; j++)
  {
	  printf("Elemento[%d] = ", j+1);
	  scanf("%f", &numeros[j]);
  }
  m=media(numeros,i);
  printf("%f, %f\n", m, desvio(numeros,m,i));
  free(numeros);
  getchar();
  return 0;
}
