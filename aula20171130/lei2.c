#include <stdio.h>
#include <stdlib.h>
#include<iostream>

typedef
struct stponto {
	int x, y;
}
Ponto;

int main(){
	FILE *arquivo;
	int quant; Ponto *p;
	char nomearquivo[50];
	float coordx=0, coordy=0;
	printf("Informe a quantidade de pontos cadastrados no arquivo: \n");
	scanf("%d", &quant);
	p = (Ponto *) malloc(quant*sizeof(Ponto));
	printf("\nInforme o nome do arquivo: ");
	scanf("%s", nomearquivo);
	arquivo = fopen (nomearquivo, "rb");
	fread(p, quant*sizeof(int), quant, arquivo);
	fclose(arquivo);
	for (int i=0; i<quant; i++)
	{
		coordx=coordx+p[i].x;
		coordy=coordy+p[i].y;
	}
	coordx=coordx/quant;
	coordy=coordy/quant;
	printf("%f, %f", coordx, coordy);
	free(p);
	getchar();
	system("pause");
	return 0;
}
	