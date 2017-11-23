#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, At;
	int nlin, ncol;
	float det;
	printf("Entre com a ordem da matriz: ");
	scanf("%d", &nlin); 
	A = criarMatriz(nlin, nlin);
	preencherMatriz(A);
	det=determinante(A);
	if (det != 0){
		At = inversa(A);
		imprimirMatriz(At);
		destruirMatriz(A);
		destruirMatriz(At);
	}
	else {
		printf("nao inversivel");
	}
	return EXIT_SUCCESS;
}