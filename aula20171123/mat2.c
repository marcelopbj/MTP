#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, At;
	int nlin, ncol;
	printf("Entre com a ordem da matriz: ");
	scanf("%d", &nlin); 
	A = criarMatriz(nlin, nlin);
	preencherMatriz(A);
	printf("%f", determinante(A));
	return EXIT_SUCCESS;
}