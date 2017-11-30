#include <stdio.h>
#include <stdlib.h>

typedef
struct stponto {
	int x, y;
}
Ponto;

void adiciona(int n, Ponto *ponto) {
	int i;
	for (i=0; i < n; i++){
		printf("Ponto: %d\n", i+1);
		scanf("%d", &((ponto+i)->x));
		scanf("%d", &((ponto+i)->y));
	}
}

int main(){
	FILE *arquivo;
	int quant; Ponto *p;
	char nomearquivo[50];
	printf("Informe a quantidade de pontos que deseja: \n");
	scanf("%d", &quant);
	p = (Ponto *) malloc(quant*sizeof(Ponto));
	adiciona(quant, p);
	printf("\nInforme o nome do arquivo: ");
	scanf("%s", nomearquivo);
	arquivo = fopen (nomearquivo, "wb");
	fwrite(p, 2*sizeof(int), quant, arquivo);
	fclose(arquivo);
	
	free(p);
	return 0;
}
	