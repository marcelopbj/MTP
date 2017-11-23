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
	imprimirMatriz(A);
	At = adjunta(A);
	imprimirMatriz(At);
	destruirMatriz(A);
	destruirMatriz(At);
	return EXIT_SUCCESS;
}