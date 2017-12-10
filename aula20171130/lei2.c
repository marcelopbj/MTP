#include <stdio.h>
#include <stdlib.h>

typedef
struct stponto {
	int x, y;
}
Ponto;

int main(){
	FILE *arquivo;
	int quant; Ponto *p;
	int i;
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
	for (i=0; i<quant; i++)
	{
		coordx=coordx+p[i].x;
		coordy=coordy+p[i].y;
	}
	coordx=coordx/quant;
	coordy=coordy/quant;
	printf("%f, %f", coordx, coordy);
	free(p);
	getchar();
	return 0;
}
	
